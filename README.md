## 前提条件：

- [x] [mise](https://mise.jdx.dev/) ：开发环境统一工具。
- [x] msys2 ：C 语言开发工具套件。
- [x] scoop：win11 第三方包管理器。
- [x] winget ：win11 默认的包管理器。

## msys2 安装 C 语言环境命令：

```bash [msys2 ucrt64]
pacman -Syu --noconfirm
pacman -Syu base-devel --noconfirm # 安装开发工具包
pacman -Syu mingw-w64-ucrt-x86_64-toolchain mingw-w64-ucrt-x86_64-meson mingw-w64-ucrt-x86_64-cmake --noconfirm
```

```bash [msys2 clang64]
pacman -Syu --noconfirm
pacman -Syu base-devel --noconfirm # 安装开发工具包
pacman -Syu mingw-w64-clang-x86_64-toolchain mingw-w64-clang-x86_64-meson mingw-w64-clang-x86_64-cmake --noconfirm
```

```wsl [ubuntu26.04]
sudo apt update

sudo apt install -y \
  build-essential \
  clang \
  gdb \
  meson \
  ninja-build \
  libc6-dbg \
  glibc-source \
  cmake
```

### pacman

```txt
pacman -Sy  # 更新软件包数据库
pacman -Syu  # 更新所有软件包
pacman -Sy <软件包名>  # 更新数据库，然后安装/更新指定软件包
pacman -Ssq <软件包名> # 查找软件包
pacman -Qe  # 查看明确安装的软件包
pacman -Qu  # 查看可更新的软件包
pacman -Rs <软件名>  # 卸载软件包
```

## 多模块 的 demo 示例在 modules 目录下：

```text
demo/                     # demo 示例模块
└── src/                  # 模块的源代码根目录
    ├── main/             # 正式程序
    │   ├── c/            # C 源文件
    │   ├── headers/      # 模块内部使用的私有头文件
    │   ├── public/       # 可供外部使用的公共头文件
    │   └── resources/    # 正式程序使用的资源文件
    └── test/             # 测试程序
        ├── c/            # 测试 C 源文件
        ├── headers/      # 测试内部使用的私有头文件
        ├── public/       # 测试公共头文件
        └── resources/    # 测试数据及资源文件
```

## 常用命令

```bash
mise install
mise run build
mise run test
```

mise 任务及用途：

| 命令                   | 用途                                             | 自动执行的依赖  |
|------------------------|--------------------------------------------------|-----------------|
| `mise run setup`       | 初始化或复用现有的 Meson 构建目录                | 无              |
| `mise run build`       | 增量编译所有模块，不执行静态分析                 | `setup`         |
| `mise run check`       | 编译并按 `.clang-tidy` 对全部 C 源文件做严格检查 | `setup`         |
| `mise run test`        | 普通编译成功后运行所有测试并输出失败日志         | `build → setup` |
| `mise run clean`       | 跨平台删除整个 `buildDir`                        | 无              |
| `mise run fresh`       | 清理并重新配置构建目录，但不编译                 | `clean`         |
| `mise run rebuild`     | 从零配置并全量编译，不执行静态分析               | `fresh → clean` |
| `mise run reconfigure` | 保留构建产物，重新读取 `meson.build`             | 无              |
| `mise run watch`       | 监控 `.c` 文件结构变化并自动重新配置             | `setup`         |

### 推荐工作流

- **日常学习**：运行 `mise run build`，保留增量编译结果，不执行严格的静态分析。
- **检查危险写法**：运行 `mise run check`，使用 `.clang-tidy` 规则检查全部 C 源文件；发现诊断时任务失败。
- **完全重新构建**：运行 `mise run rebuild`，自动清理、配置并编译。无需提前手动执行 `clean`。

### 源文件变化

- 只修改已有 `.c` 文件的内容：直接运行 `mise run build`。
- 新增、删除或重命名 `.c` 文件：运行 `mise run reconfigure` 后再编译。
- 持续调整文件结构：运行 `mise run watch`，由脚本监控变化并自动重新配置。

mise 固定项目使用的 Python 版本；Clang、Meson 和 Ninja 由上面的 MSYS2 CLANG64 工具链提供。运行构建命令前，需要先将
`CLANG_HOME` 配置为 CLANG64 的安装目录，再将 `%CLANG_HOME%\bin` 加入 `PATH`。例如：

```text
CLANG_HOME=C:\msys64\clang64
PATH=%CLANG_HOME%\bin;%PATH%
```
