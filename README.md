CLion 的 设置 → 工具 → 外部工具 新增：
* 名称：加载当前 Meson 模块
* 程序：python
* 参数："$ProjectFileDir$\tools\select_meson_module.py" "$FilePath$"
* 工作目录：$ProjectFileDir$