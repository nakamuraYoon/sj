#include <stdio.h>
#include <stdbool.h>

#define MAX_INPUT_LENGTH 25565

// 대소문자 변환 함수
void transformCase(char *input) {
    while (*input) {
        if (*input >= 'a' && *input <= 'z') {
            *input = *input - 32; // 소문자를 대문자로 변환
        } else if (*input >= 'A' && *input <= 'Z') {
            *input = *input + 32; // 대문자를 소문자로 변환
        }
        input++;
    }
}

// 입력 함수
void getInput(char *input, int maxLength) {
    printf("텍스트를 입력하세요: ");
    fgets(input, maxLength, stdin);
}

// 출력 함수
void printOutput(const char *output) {
    printf("변환된 텍스트:\n%s", output);
}

int main() {
    char input[MAX_INPUT_LENGTH];
    char output[MAX_INPUT_LENGTH];

    getInput(input, MAX_INPUT_LENGTH);
    transformCase(input);
    printOutput(input);

    return 0;
}
