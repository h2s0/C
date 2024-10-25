// 문자열은 문자 배열로 구현된다
// 널 문자(\0) 로 끝난다

char str[] = "Hello";
printf("%s\n", str);

// 사용자로부터 문자열을 입력받아 그 문자열의 길이를 출력하는 프로그램을 작성하세요

#include <stdio.h>
#include <string.h>


int main () {
    char str[100];

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf()
}