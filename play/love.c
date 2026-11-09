#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    // 设置控制台文字为亮红色，背景保持黑色
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 
        FOREGROUND_RED | FOREGROUND_INTENSITY);

    // 用于填充爱心的文字，循环重复使用
    const char* fill_text = "LOVE YOU!I ";
    int text_len = strlen(fill_text);
    int char_idx = 0;

    // 外层循环：控制 y 轴（从上到下绘制）
    // 步长 0.1 配合 x 步长 0.05，适配控制台字符宽高比，避免爱心变形
    for (float y = 1.5f; y > -1.5f; y -= 0.1f)
    {
        // 内层循环：控制 x 轴（从左到右绘制）
        for (float x = -1.5f; x < 1.5f; x += 0.05f)
        {
            // 爱心隐函数方程：(x²+y²-1)³ - x²y³ = 0
            float formula = x * x + y * y - 1.0f;
            // 小于等于0表示点在爱心内部
            if (formula * formula * formula - x * x * y * y * y <= 0.00001f)
            {
                // 输出填充文字的对应字符，索引循环自增
                printf("%c", fill_text[char_idx]);
                char_idx = (char_idx + 1) % text_len;
            }
            else
            {
                // 爱心外部输出空格
                printf(" ");
            }
        }
        printf("\n");
    }

    // 恢复控制台默认文字颜色（白色）
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    printf("\n");
    system("pause"); // 输出“请按任意键继续...”
    return 0;
}
