#ifndef C_STUDY_H
#define C_STUDY_H

/**
 * @brief 获取数组的元素个数
 *
 * 只能用于数组，不能用于已经退化为指针的函数参数或普通指针。
 *
 * @param array 要计算长度的数组
 * @return 数组中的元素个数
 */
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof((array)[0]))

/**
 * @brief 将布尔值转换为 Java 风格的文本
 *
 * @param value 要转换的布尔值
 * @return value 为 true 时返回 "true"，否则返回 "false"
 */
const char *bool_to_string(bool value);

/**
 * @brief 打印分割线
 */
void printf_separator();

/**
 * @brief 打印换行符
 */
void printf_ln();

#endif
