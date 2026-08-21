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

## 项目结构

`libs` 是静态库目录，其中的库会被自动发现并链接到各模块；`modules` 是模块目录。
只有包含 `meson.build` 的目录才会被识别为模块，模块同时必须提供
`src/main/c/main.c` 作为程序入口。`demo` 完整展示了模块的推荐目录结构。

```text
c-study/
├── libs/                         # 静态库目录
│   └── calculator/               # 计算器静态库集合
├── modules/                      # 学习示例及可执行模块目录
│   ├── 00.intro/                 # 其他模块（内部结构与 demo 约定一致）
│   ├── 01.datatype/
│   ├── 01.variables/
│   ├── 02.variables/
│   ├── 03.operator/
│   ├── 04.io/
│   ├── 05.branch/
│   ├── 06.loop/
│   ├── 09.debug/
│   └── demo/                     # 完整的模块结构示例
│       ├── meson.build           # 子模块声明（至少声明 module_name）
│       └── src/                  # 模块源代码根目录
│           ├── main/             # 正式程序
│           │   ├── c/            # C 源文件（main.c 为程序入口）
│           │   │   ├── demo.c
│           │   │   └── main.c
│           │   ├── headers/      # 模块内部使用的私有头文件
│           │   │   └── demo_config.h
│           │   ├── public/       # 可供外部使用的公共头文件
│           │   │   └── demo.h
│           │   └── resources/    # 正式程序使用的资源文件
│           │       └── README.txt
│           └── test/             # 测试程序
│               ├── c/            # 测试 C 源文件（main.c 为测试入口）
│               │   ├── calculator_test.c
│               │   └── main.c
│               ├── headers/      # 测试内部使用的私有头文件
│               │   └── calculator_expected.h
│               ├── public/       # 测试公共头文件
│               │   └── calculator_test.h
│               └── resources/    # 测试数据及资源文件
│                   └── cases.txt
├── tools/                        # 模块发现、资源复制等构建辅助脚本
├── buildDir/                     # Meson 构建产物目录（配置后生成）
├── meson.build                   # Meson 项目及构建规则
├── mise.toml                     # mise 工具版本与任务配置
├── .clang-format                 # C 代码格式化规则
├── .clang-tidy                   # C 静态检查规则
└── README.md                     # 项目说明
```

## 多模块构建约定

项目采用类似 Gradle 多项目构建的父子结构，同时遵循“约定优于配置”：

- 根目录 `meson.build` 类似根 `build.gradle` 与 `settings.gradle`，负责发现模块、加载子模块及提供公共构建规则。
- 子目录 `meson.build` 类似子项目的 `build.gradle`，只声明模块身份和偏离公共约定的专属配置。
- `tools/discover_modules.py` 递归查找 `modules` 下的 `meson.build`；普通章节分组目录不会成为构建模块。
- 根构建通过 `subdir()` 加载每个模块，因此子模块可以继承父项目的编译器、警告和 Sanitizer 配置。

最小子模块 `meson.build` 只需声明模块名：

```meson
module_name = '08.minesweeper'
```

根构建按以下目录约定自动配置模块，无需在子模块中逐个列出源文件：

| 约定路径 | 作用 |
|----------|------|
| `src/main/c/main.c` | 正式程序入口，必须存在 |
| `src/main/c/**/*.c` | 正式程序源码，递归自动收集 |
| `src/main/headers` | 正式程序私有头文件目录 |
| `src/main/public` | 正式程序公共头文件目录 |
| `src/main/resources` | 构建时复制到模块正式资源目录 |
| `src/test/c/main.c` | 测试入口；存在时自动创建测试目标 |
| `src/test/c/**/*.c` | 测试源码，递归自动收集 |
| `src/test/headers` | 测试私有头文件目录 |
| `src/test/public` | 测试公共头文件目录 |
| `src/test/resources` | 构建时复制到模块测试资源目录 |

测试目标会复用 `src/main/c` 中除正式程序 `main.c` 以外的所有源码。模块需要
额外的 Meson 依赖时，只配置差异部分：

```meson
module_name = 'module-with-extra-dependency'

module_dependencies = [
    dependency('foo'),
]
```

### 新增模块

1. 在 `modules` 下创建模块目录，并参考 `modules/demo` 创建标准 `src/main`、`src/test` 目录。
2. 创建 `src/main/c/main.c`；需要测试时再创建 `src/test/c/main.c`。
3. 在模块根目录创建 `meson.build`，声明唯一的 `module_name`。
4. 运行 `mise run reconfigure`，然后运行 `mise run build` 或 `mise run test`。

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
| `mise run watch`       | 监控 `.c` 和模块声明的结构变化并自动重新配置     | `setup`         |

### 推荐工作流

- **日常学习**：运行 `mise run build`，保留增量编译结果，不执行严格的静态分析。
- **检查危险写法**：运行 `mise run check`，使用 `.clang-tidy` 规则检查全部 C 源文件；发现诊断时任务失败。
- **完全重新构建**：运行 `mise run rebuild`，自动清理、配置并编译。无需提前手动执行 `clean`。

### 源文件变化

- 只修改已有 `.c` 文件的内容：直接运行 `mise run build`。
- 新增、删除或重命名 `.c` 文件：运行 `mise run reconfigure` 后再编译。
- 新增或删除模块 `meson.build`：运行 `mise run reconfigure` 后再编译。
- 持续调整文件结构：运行 `mise run watch`，由脚本监控变化并自动重新配置。

mise 固定项目使用的 Python 版本；Clang、Meson 和 Ninja 由上面的 MSYS2 CLANG64 工具链提供。运行构建命令前，需要先将
`CLANG_HOME` 配置为 CLANG64 的安装目录，再将 `%CLANG_HOME%\bin` 加入 `PATH`。例如：

```text
CLANG_HOME=C:\msys64\clang64
PATH=%CLANG_HOME%\bin;%PATH%
```
