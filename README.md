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

| 命令                   | 用途                                 | 自动执行的依赖  |
|------------------------|--------------------------------------|-----------------|
| `mise run setup`       | 配置 Meson 构建目录                  | 无              |
| `mise run build`       | 增量编译所有模块                     | `setup`         |
| `mise run test`        | 编译后运行所有测试                   | `build → setup` |
| `mise run clean`       | 删除整个 `buildDir`                  | 无              |
| `mise run fresh`       | 清理并重新配置构建目录               | `clean`         |
| `mise run rebuild`     | 从零配置并全量编译                   | `fresh → clean` |
| `mise run reconfigure` | 重新配置已有构建目录                 | 无              |
| `mise run watch`       | 监控 `.c` 文件结构变化并自动重新配置 | `setup`         |

常规开发使用 `mise run build` 即可，它会保留 Meson 和 Ninja 的增量编译结果。 需要完全清理后重新构建时，使用
`mise run rebuild`。

修改已有 `.c` 文件的内容不需要重新配置。新增、删除或重命名 `.c` 文件会改变 Meson 的源文件列表，需要执行
`mise run reconfigure`。开发期间也可以保持
`mise run watch` 运行，让脚本在源文件结构变化时自动重新配置；该任务会先通过
`setup` 确保 `buildDir` 已配置。

mise 固定项目使用的 Python 版本；Clang、Meson 和 Ninja 由上面的 MSYS2 CLANG64 工具链提供。运行构建命令前，需要先将
`CLANG_HOME` 配置为 CLANG64 的安装目录，再将 `%CLANG_HOME%\bin` 加入 `PATH`。例如：

```text
CLANG_HOME=C:\msys64\clang64
PATH=%CLANG_HOME%\bin;%PATH%
```
