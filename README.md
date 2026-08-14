前提条件：

- [x] [mise](https://mise.jdx.dev/) ：开发环境统一工具。
- [x] msys2 ：C 语言开发工具套件。
- [x] scoop：win11 第三方包管理器。
- [x] winget ：win11 默认的包管理器。



msys2 安装 C 语言环境命令：

```bash [msys2 ucrt64]
pacman -Syu --noconfirm
pacman -Syu base-devel --noconfirm # 安装开发工具包
pacman -Syu mingw-w64-ucrt-x86_64-toolchain mingw-w64-ucrt-x86_64-meson mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-emacs --noconfirm
```

```bash [msys2 clang64]
pacman -Syu --noconfirm
pacman -Syu base-devel --noconfirm # 安装开发工具包
pacman -Syu mingw-w64-clang-x86_64-toolchain mingw-w64-clang-x86_64-meson mingw-w64-clang-x86_64-cmake mingw-w64-clang-x86_64-emacs --noconfirm
```