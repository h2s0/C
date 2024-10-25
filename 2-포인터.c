// 포인터는 변수의 메모리 주소를 저장한다.
// 1. 메모리 효율을 높인다
// 2. 복잡한 데이터 구조를 만들 수 있다.

int num = 20;
// num 의 주소를 ptr 에 저장
int *ptr = &num;
// 포인터를 통해 값 출력
printf("%d\n", *ptr);

// 두 개의 정수를 입력받아 포인터를 이용해 두 수의 곱을 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int main() {
    int a, b;
    
    int *ptr1 = &a;
    int *ptr2 = &b;

    // 포인터를 통해 첫 번째 정수를 입력받음
    scanf("%d", ptr1);

    scanf("%d", ptr2);

    printf("%d\n", (*ptr1) * (*ptr2));

    return 0;
}