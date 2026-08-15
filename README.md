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
