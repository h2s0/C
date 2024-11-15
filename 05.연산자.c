// 1. 산술 연산자

// +, -, *, /, %

int a = 10;
int b = 3;
int sum = a + b; // 13
int remainder = a % b; // 1, 나머지연산



// 2. 관계 연산자

// ==, !=, <, >, <=, >=

int x = 5;
if (x >= 3) {
    // x가 3보다 크거나 같다면
}



// 3. 논리 연산자

// &&, ||, !

// && : AND ( 모두 참이여야 함 )
// || : OR ( 하나라도 참이면 참 )
// ! : NOT ( 부정 )

int a = 1, b = 0;
if (a && b) {
    // a와 b가 모두 참이어야 실행됨
}



// 4. 비트 연산자

// &, |, ^, ~, <<, >>

// &: 비트 AND
// |: 비트 OR
// ^: 비트 XOR (같은 비트는 0, 다른 비트는 1)
// ~: 비트 NOT (비트 반전)
// <<: 비트 왼쪽 시프트

int a = 5; // 0101 in binary
int b = 3; // 0011 in binary
int result = a & b; // 0001 (1 in decimal)



// 5. 증감 연산자

// ++, --

// ++ : 1을 더함
// -- : 1을 뺌

int count = 10;
count++; // count는 11이 됨

// 전위/후위 연산자 지원
int x = 5;
int y = ++x; // y는 6, x도 6
int z = x--; // z는 6, x는 5




// 6. 할당 연산자

// =, +=, -=, *=, /+, %=





// 7. 비교 연산자

// C 언어에서는 엄격한 비교를 기본으로 하기 때문에 === 와 같은 구체적인 타입 비교는 없다.

// == : 두 값이 같은지 비교 ( js의 === )
// != : 두 값이 다른지 비교
// > : 왼쪽 값이 크면 true (1) 를 반환
// < : 왼쪽 값이 작으면 true (1) 를 반환

// C 에서는 타입 변환이 없기 때문에, 두 값의 타입과 값을 함께 비교한다.
// = 는 할당하는 연산자이고, ==는 비교하는 연산자이다.