// C 언어에서 함수의 호출은 반드시 main 함수 내에서 이루어져야 한다.
//printf 와 같은 출력 함수도 마찬가지 !


// 1. 문자열 처리 함수 <string.h>

// strlen : 문자열의 길이
// strcpy : 문자열 복사
// strcat : 두 문자열 연결
// strcmp : 두 문자열 비교, 같으면 0 다르면 0이 아닌 값 반환

#include <stdio.h>
#include <string.h> // 문자열 함수가 포함된 헤더

int main() {
    char src1[20] = "Heeso";
    char src2[] = "sae";
    char src3[] = "Heesosae";
    char dest[20];

    // 문자열의 길이
    int length = strlen(src1);

    // 문자열 복사
    strcpy(dest, src1);
    printf("%s\n", dest); // "Heeso" 를 출력

    // 두 문자열 연결
    strcat(src1, src2); // src1 에 src2 를 연결
    printf("%s\n", src1); // "Heesosae" 를 출력

    // 두 문자열 비교
    if ( strcmp(src1, src2) == 0 ) {
        printf("src1 과 src2 는 같습니다.\n");
        // 값이 다르므로 출력되지 않음
    }

    if ( strcmp(src1, src3) == 0 ) {
        printf("src1 과 src3 은 같습니다.\n");
        // 값이 같으므로 출력 됨
    } else {
        printf("src1과 src3은 다릅니다.\n");
        // 값이 다르므로 출력되지 않음
    }
    
    return 0;
}