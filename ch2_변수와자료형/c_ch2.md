1.변수(variable)
프로그램이 값들이 저장되는공간. 변수는 사용하기 전에 선언(declare) 되어야 한다.
변수 선언은 프로그램에서 어떤 종류의 변수를 얼마나 사용할것인지 컴파일러에게 미리 알리는 것이다.

자료형 변수이름; //변수 선언의 형식
int i;


2.자료형(data type)
short형은 16비트로 값을 표현한다
각 비트마다 0또는 1이 올수 있으므로 2^16가지의 숫자를 표현할수 있다.
첫 비트는 부호를 나타낸다

unsigned 수식자를 사용할경우 변수가 음수가 아닌 값만을 나타내게 된다.
이 경우 같은 비트로 더 넓은 범위의 양수를 나타낼수 있게 된다.
unsigned short의 경우 0 ~ 65535

현재 자신이 사용하는 정수형의 크기를 알고싶다면 limits.h 헤더파일을 참고하자
여기에는 정수형의 최대값과 최소값을 기호상수로 정의해 놓았다.
(int의 경우 INT_MAX, INT_MIN)


3.변수 초기화(initialization)
변수가 선언되면 아직 정의되지 않은 상태가 된다

자료형 변수이름 = 초기값;
char c = 'a';
int i = 3;


4.변수 이름의 규칙
- 알파벳 문자와 숫자, 밑줄문자_ 로 이루어진다
- 이름의 중간에 공백이 들어가면 안된다
- 첫번째 문자는 반드시 알파벳 또는 밑줄문자. 숫자로 시작할수는 없다
- 대소문자 구별함
- C언어에서 사용중인 키워드(=예약어 reserved words)와 같은 이름은 허용되지 않는다


5.오버플로우(overflow)

6.상수(constant)
- 실행중에 변경되지 않는 값

정수형 상수 : 기본적으로 int형으로 간주된다
프로그래머가 자료형을 지정하고 싶은경우 접미사를 붙인다.

unsigned int - u,U
123u ,123U

long - l,L
123l, 123L

unsigned long - ul,UL
123ul, 123UL


6-1.정수형 상수의 진법 변환
8진법의 경우 앞에 0, 16진법의 경우 0x를 붙이면 된다


7.기호상수(symbolic constant)
상수에 이름을 붙이는 방법이 있다.
이름이 없는 상수는 리터럴(literal) 상수 라고 한다.

7-1. #define

7-2. const
