// 2. 입출력 함수

// printf : 출력 함수, 콘솔에 출력
// scanf : 입력 함수
// gets, fgets : 한 줄의 문자열을 입력받음
// putchar : 단일 문자를 출력
// gets : 한 줄의 문자열을 입력받음 ( 보안 이슈로 일반적으로 사용 x )

#include <stdio.h>

int main () {
    int num = 10;
    float pi = 3.14;

    printf("%d\n", num); // %d : 정수 출력
    printf("%.2f\n", pi); // %.2f : 소수점 아래 두 자리까지 출력

    // printf : 콘솔로부터 입력받기
    char name[30];
    printf("이름을 입력하세요: ");
    scanf("%s", name);
    // name 에 주소값을 사용하지 않은 이유 : 문자 배열이라서
    // 정수형 변수, 실수형 변수의 경우 변수의 이름이 값을 나타내기 때문에 그 주소를 전달하기 위해 &를 사용해야 함
    // 문자 배열은 배열 이름 자체가 주소를 가리킴

    printf("안녕하세요, %s님!\n", name);

    // fgets : 안전하게 문자열 입력받기
    char buffer[30];
    printf("문자열을 입력하세요");
    // 버퍼의 크기를 지정해 sizeof(buffer) 버퍼 오버플로우를 방지
    fgets(buffer, sizeof(buffer), stdin);

    printf("%s\n", buffer);

    // putchar : 한 문자씩 출력
    char ch = 'A';
    putchar(ch); // 문자 'A' 출력
    
    return 0;
}