### Lecture 06

#### Pointer / Address

*&val - address of val
*ptr - value in address val

(a & b) : bitwise And
&a: address operator

a-b: 뺄셈 연산자
-b : negative 연산자, b*(-1) , b의 부호를 바꾸는 연산자
*a: "value 연산자", a가 가리키는 값

int *a : a는 int를 가리키는 주소다
long long *b: 
(long long = 자릿수가 긴 수, 일반적으로 8byte)
void *c: 
(void = char 포인터랑 똑같음)

+)ps해서 여러개있으면 kill [PID]로 죽이기


cc hello.c && a.out : cc 에러없이 성공 했을 때만 오른쪽 실행함
cc hello.c || echo "err" : 에러가 났을 때 err가 발생


64비트: 메모리 길이 주소에서 오버플로 발생해서 에러남

실습 hello.c : a와 b의 주소가 4바이트씩 차이남
call by reference로 할 경우 변경사항)
int add(int *a, int *b) // a와 b를 포인터로 변경하고
add(&a, &b) // 호출할 때 주소를 넘겨야 함

%d %lld %llx
내가 모르겠는거 다 출력해보기

c언어 보안상의 약점: 메모리에 순차적으로 저장되기 때문에 값을 알려주지 않아도
알아낼 수 있다
이상한 점: const라고 선언했음에도 불구하고 const로 선언된 값을 변경할 수 있음

어떤 주소에 1을 더하는 것은 그 주소에 데이터 타입의 크기를 1만큼 더하는 것이다.
=> void 포인터로 변환하면 진짜 1만 증가한다

# array와 pointer의 차이
arr은 int가 아니라 long long이다

# 내일 또 할 것임
int const a: a라는 변수가 constant integer라는 뜻
int const *a: const가 앞의 int를 수식, a는 const int를 가리키는 포인터라는 뜻 
int * const a: int를 가리키는 포인터인데 포인터가 const다
