#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 函数声明
int count_characters(FILE *file);
int count_words(FILE *file);

int main(int argc, char *argv[]) {
    // 检查参数个数
    if (argc != 3) {
        printf("用法: %s [-c | -w] [input_file_name]\n", argv[0]);
        return 1;
    }

    // 打开文件
    FILE *file = fopen(argv[2], "r");
    if (file == NULL) {
        printf("打开文件失败！.\n");
        return 1;
    }

    // 根据参数调用相应的函数
    if (strcmp(argv[1], "-c") == 0) {
        int char_count = count_characters(file);
        printf("字符数：%d\n", char_count);
    } else if (strcmp(argv[1], "-w") == 0) {
        int word_count = count_words(file);
        printf("单词数：%d\n", word_count);
    } else {
        printf("参数无效。使用 -c 进行字符计数，使用 -w 进行字数统计。\n");
        return 1;
    }

    // 关闭文件
    fclose(file);

    return 0;
}

// 统计字符数
int count_characters(FILE *file) {
    int count = 0;
    char c;
    while ((c = fgetc(file)) != EOF) {
        count++;
    }
    return count;
}

// 统计单词数
int count_words(FILE *file) {
    int count = 0;
    int in_word = 0;
    char c;
    while ((c = fgetc(file)) != EOF) {
        if (isspace(c) || c == ',' || c == '.') {
            if (in_word) {
                count++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    // 检查文件结尾是否是一个单词
    if (in_word) {
        count++;
    }
    return count;
}
