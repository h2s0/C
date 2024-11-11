// 두 정수를 입력받아 두 숫자를 서로 바꾸는 코드를 작성하세요. 
// 힌트: 포인터를 사용하세요.

int a = 10;
int b = 20;

a = &b;
b = &a;

// 정답

int a = 10;
int b = 20;
int temp;

int *pA = &a;
int *pB = &b;

temp = *pA;
*pA = *pB;
*pB = temp;

// temp 라는 임시 저장 공간을 만들어 a 의 원래 값을 잃지 않도록 한다.







// 사용자로부터 입력받은 정수 n에 대해, 1부터 n까지의 합을 구하고 출력하세요.

int n, i, answer = 0;

// 직접 문자열을 입력해 줄 때에는 포맷 지정자 %s 를 사용하지 않아도 됨
// 변수를 통해 문자열을 출력할 때 %s 를 사용해준다.
printf("정수를 입력해세요: ");
// scanf 는 사용자가 입력한 값을 변수에 저장해야 하는데, 변수의 메모리 위치를 알아야 값을 넣을 수 있다. 그래서 변수의 주소값을 scanf 에 전달한다.
scanf("%d", &n);

int main () {
    for ( i = 0; i <= n; i++ ) {
        answer += i;
    }
    // printf 함수는 첫 번째 매개변수로 포맷 문자열을 받아 이 포맷 문자열 안에 있는 %로 시작하는 포맷 지정자들을 찾아서, 그 순서대로 뒤에 오는 인자들에 대입한다.
    // 그러므로 첫 번째 포맷 지정자는 바로 뒤 첫번째인 n, 그 뒤는 answer 을 대입한다.
    printf("1부터 %d까지의 합: %d\n", n, answer);
}






// 크기가 4인 정수형 배열을 선언하고, 배열의 각 원소에 사용자로부터 입력받은 값을 저장하세요. 
// 이후 배열의 모든 원소를 출력하세요.

int arr[4];


// 반복문으로 처리할 수 있겠죠? arr의 인덱스를!
scanf("%d", &arr[0]);
scanf("%d", &arr[1]);
scanf("%d", &arr[2]);
scanf("%d", &arr[3]);
scanf("%d", &arr[4]);


printf("%d\n", arr);

// 정답

int arr[4];

for ( int i = 0; i < 4; i++ ) {
    printf("값을 입력해주세요.");
    scanf("%d", &arr[i]);
}

for ( int i = 0; i < 4; i++ ) {
    printf("%d", arr[i]);
}







// 두 개의 실수를 입력받아, 두 실수의 곱을 반환하는 함수 multiply를 작성하세요. 
// 함수의 결과를 main 함수에서 호출하여 출력하세요.

// 안해도 됨 : ultiply 함수에서 인자로 받아오기 때문에 굳이 전역으로 선언할 필요 X
float c, d;

int multiply (int c, int d) {
    
    int result = c * d;
    return result;
}

int main () {
    int answer = multiply();
    printf("%d\n", answer);
    return 0;
}

// 정답

float multiply2 (float c, float d) {
    return c * d;
}

int main() {
    float c,d;

    printf("2개의 실수를 입력하세요");
    scanf("%f %f", &c, &d);

    float answer = multiply2(c,d);
    printf("%f", answer);
    
    
    return 0;
}








// 정수를 입력받고, 입력받은 값이 짝수인지 홀수인지 판별하는 코드를 작성하세요. 
// 힌트: if 문을 사용하세요.

int what;

printf("정수를 입력하세요.");
scanf("%d", &what);

if ( what % 2 == 0 ) {
    printf("짝수\n");
} else {
    printf("홀수\n");
}







// 문자열을 입력받고, 해당 문자열의 길이를 반환하는 함수를 작성하세요. 

#include <stdio.h>
#include <string.h>

char msg[];

printf("메세지를 입력해주세요.");
scanf("%s\n", &msg);

int main() {
    int length = strlen(msg);
    printf("%d", length);

    return 0;
}






// 사용자가 입력한 세 정수 중에서 가장 큰 값을 찾는 코드를 작성하세요. 
// 힌트: 조건문을 사용하세요.


#include <stdio.h>

int num1, num2, num3;

printf("정수 3개를 입력해주세요.");
scanf("%d\n", &num1, &num2, &num3);

int main() {

    
    printf("%d",);
}





// 크기가 3인 정수형 배열을 선언하고, 각 배열의 원소에 포인터를 사용해 값을 대입하세요. 
// 이후 배열의 모든 원소를 출력하세요.







// 입력받은 정수가 음수이면 "음수입니다."를 출력하고, 양수이면 "양수입니다."를 출력하세요. 
// 0일 경우에는 "0입니다."를 출력하세요.







// 사용자로부터 정수를 입력받고, 그 정수만큼의 크기를 가진 배열을 동적 할당하세요. 
// 각 원소에 1부터 시작하는 값을 순서대로 대입한 후, 모든 원소를 출력하세요. 
// 힌트: malloc을 사용하세요.
