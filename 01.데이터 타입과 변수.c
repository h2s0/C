/* #로 시작하는 문장은 전처리기, 컴파일러에게 소스 코드를 번역 전에 명시한 파일을 먼저 참조하라고 지시 , prinf 함수에 대한 정보다 stdio.h 파일에 기록되어 있음 */
#include <stdio.h>

// 프로그램 시작을 나타내므로 반드시 정의해야 함
// main 함수가 없거나 2개 이상 선언 시 오류
void main()
{
    printf("Hello world\n");

    return 0;
}

// void

// 의미 : 정해지지 않았다, 없다
// main 함수 앞 void : 함수의 수행 결과 값이 정해지지 않았다
// main 함수 뒤 void : main 함수로 전달되는 정보다 정해지지 않았다


C 언어는 강타입 언어로, 변수를 선언할 때 타입을 명시해야 한다.

int : 정수형
float : 부동 소수점 수
double : 더블 정밀도 부동 소수점 수
char : 문자
void : 반환 값이 없는 함수에서 사용

int num = 10;
float pi = 3.14;
char letter = 'A';

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf(a+b);

    return 0;
}

// 문자열 포맷을 지정하지 않아 컴파일 오류 발생
// printf 를 사용할 때에는 출력할 내용을 지정해야 한다.

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf( "%d\n", a+b );

    return 0;
}

// "%d\n" : 출력할 변수의 타입을 지정하는 포맷
// %d : 정수 (int) 를 의미
// \n : 줄바꿈

