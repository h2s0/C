// 정수형 변수 x 를 선언하고, 10을 대입하세요

int x = 10;





// 정수형 변수 y를 선언하고, y의 주소를 저장할 포인터 p를 선언하세요.

int y;
int *p = &y;





// 정수형 변수 a를 선언하고 5를 대입한 후, printf를 사용해 출력하세요.

int a = 5;
printf("%d\n", a);





// 사용자로부터 정수를 입력받아 변수 num에 저장하세요. scanf

int num;
scanf("%d", &num);





// 두 정수를 더하는 함수 add를 작성하고, main에서 호출하세요.

// 내가 쓴 답
// 타입스크립트처럼 변수를 선언할 때에는 타입을 꼭 지정해주어야 한다.
add(a,b) {
    // add 함수 내에서만 유효하고 함수가 종료되면 사라지기 때문에
    // 값을 반환하여 결과를 호출한 곳으로 전달해주어야 한다.
    int result = a + b;
}

// main 함수가 프로그램의 시작점이고, 프로그램의 종료 상태를 반환한다.
main() {
    add();
    // 정상 종료 : return 0; 은 프로그램이 정상적으로 종료되었음을 나타낸다.
    // 비정상 종료 : 0이 아닌 다른 값을 반환하여 오류 발생을 알린다.
}

// 정답
int add(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int sum = add(3,4);
    printf("%d\n", sum);
    return 0;
}



// 크기가 5인 정수형 배열 arr를 선언하세요.

int arr[5] = {};





// 크기가 3인 정수형 배열 scores를 1, 2, 3으로 초기화하세요.

int scores[3] = {1,2,3};





//  for문을 사용하여 0부터 4까지 출력하세요.

#include <stdio.h>

void main() {
    // 조건 부분에 int 키워드 사용불가, 변수를 선언할 때에만 사용해야 한다.
    for ( int i = 0; int i <= 4; i++ ) {
        // %d 포맷 지정자를 사용해서 출력해야 한다.
        printf(i);
    }    
}

// 정답
int main() {
    for (int i = 0; i <= 4; i++ ) {
        printf("%d\n", i);
    }
    return 0;
}





// 변수 number가 10보다 크면 "10보다 큽니다."를 출력하고, 그렇지 않으면 "10 이하입니다."를 출력하세요.

int number;

// 조건문에서 새롭게 선언할 수 없다. 변수만 사용해야 함
if ( int number > 10 ) {
    // 문자열을 출력할 때에는 %s 포맷 지정자를 사용해야 한다.
    // 세미콜론을 적어야 한다.
    printf("%d\n", "10보다 큽니다.")
} else {
    printf("%d\n", "10 이하입니다.")
}

// 정답
int number;

if ( number > 10 ) {
    printf("%s/n", "10보다 큽니다.");
} else {
    printf("%s\n", "10 이하입니다.");
}





// 정수형 변수 val을 선언하고 20을 대입한 후, 포인터를 통해 val의 값을 30으로 변경하세요.

int val = 20;

// 정답
int val = 20; // 정수형 변수 val 을 선언하고 20으로 초기화
int *p = &val; // 포인터 p 를 선언하고 val 의 주소를 저장
*p = 30; // p 가 가리키는 val 의 값을 30으로 변경