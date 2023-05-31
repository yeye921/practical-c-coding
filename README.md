# 실전코딩2 실습

### sshid : pcc007

### name : 김예원

---

### Lecture 00 (01/03) <br/>

#### Linux Command

> System Utility를 사용하기 위해서는 "Linux Shell"이라는 것이 필요하다.
>
> > Linux Shell(반드시 터미널에서 실행되어야함)은 시스템 유틸리티 명령어들을 실행하는 것이다.

> **터미널과 쉘의 차이는?**
> 터미널이라는 인터페이스(명령을 입력할 수 있는 환경, 입출력 환경)을 통해 쉘이라는 프로그램을 이용해서 명령을 입력하고 처리되고 결과가 출력되는 것을 볼 수 있다.

<br>

- ls: 디렉토리 내의 파일들 표시

  - ls -al: 숨겨진 파일을 포함하여 모든 파일을 보여줌
    <br>
    <br>

- cd: change directory

  - pwd: 내가 위치하고 있는 현재 디렉토리 위치를 알려줌
  - cd .. : 상위 디렉토리로 이동
  - . : 현재 디렉토리
    <br>
    <br>

- cc: compile하는 명령어

  - cc -o: 실행파일을 내가 원하는 이름으로 저장
  - ./실행파일이름: 파일을 실행하는 명령어
    <br>
    <br>

- echo: 화면에 문자열을 출력하거나 파일을 생성하는 명령어

  - echo Hi: 결과로 똑같이 Hi출력됨
  - echo Hi > output : output이라는 파일을 새로 만들어 문자열 Hi를 저장함
    <br>
    <br>

- chomod: change mode, permission을 바꾸는 명령어

  - 8진수 방법 (d rwx rwx rwx)

    - d: directory, x가 표시되면 들어갈 수는 있지만 읽을 수는 없다
    - 첫번째 rwx: 파일 소유 사용자 권한
    - 두번째 rwx: 파일 소유 그룹 권한
    - 세번째 rwx: 그 외 사용자 권한 <br>
      chmod 561 파일이름: 사용자(읽기+실행), 그룹(읽기+쓰기), 그 외 사용자(실행) <br>
      chmod 777 파일이름: 모든 사용자에게 모든 권한을 다 open해줌 <br>
      chmod 700 파일이름: 사용자만 읽기, 쓰기, 실행 가능
      <br>
      <br>

- 기타

  - cat: 파일의 내용을 출력하는 명령어
    <br>

  - cp: 파일을 복사하는 명령어

    - `cp hello.c hello2.c`: hello라는 파일을 hello2로 복사
      <br>
      <br>

  - mv: 파일을 이동하는 명령어

    - `mv a.out hello`: 파일의 이름을 a.out에서 hello로 바꿔줌
    - `mv h\* pcc`: h로 시작하는 모든 파일을 pcc 디렉토리로 옮김
      <br>
      <br>

  - who: 접속해있는 사람을 알려주는 명령어

    - who | wc : 접속해있는 사람의 수를 알려주는 명령 (pipe, word count이용)
      <br>
      <br>

  - file: 무슨 파일인지 알려주는 명령어
  - groups: 내가 속한 그룹을 알려주는 명령어

  <br>

#### Vi Editor

vi editor에는 3가지 mode가 존재한다.

- normal mode: 가장 먼저 작동하는 모드, insert모드에서 esc키를 눌렀을 때의 모드

  - esc: normal mode로 가는 명령어
  - x: 문자 하나를 삭제하는 명령어
  - u: undo, 이전 실행을 취소하는 명령어
  - 방향키

    - h: 왼쪽 방향으로 이동
    - j: 아래 방향으로 이동
    - k: 위 방향으로 이동
    - l: 오른쪽 방향으로 이동
      <br>
      <br>

- command mode: normal 모드에서 :를 눌렀을 때의 모드

  - :w write하라는 명령어
  - :q 탈출하라는 명령어

  <br>

- insert mode: normal 모드에서 i를 입력했을 때의 모드

  - i: 커서 앞의 문자를 편집하는 명령어
  - a: 커서 뒤의 문자를 편집하는 명령어
    <br>
    <br>

---

### Lecture 01 (01/04)<br/>

#### Linux Command

- wall <br>
  모든 사용자에게 메세지를 출력하는 명령어

  - write 사용자: 특정 사용자에게 메세지를 출력하는 명령어
  - mesg n: 메세지를 차단하는 명령어
    <br>

- man <br>
  manual, 명령어의 정보에 대해 알려주는 명령어
  <br>

- ps <br>
  현재 진행 중인 프로세스들을 확인할 수 있는 명령어

  - kill: 진행 중인 프로세스를 종료할 수 있는 명령어
    <br>
    <br>

- sleep 시간(초단위) <br>
  지정한 시간동안 시스템을 멈추는 명령어
  <br>

- cd ~ <br>
  자신의 홈 디렉토리로 이동하는 명령어
  <br>

- hostname <br>
  내가 정한 컴퓨터 이름을 알려주는 명령어
  <br>

- whoami <br>
  내가 누구인지 알려주는 명령어
  <br>

- cat <br>
  어떤 파일의 내용을 보는 명령어
  <br>

- history <br>
  내가 실행했던 명령어들을 보여주는 명령어
  <br>
  <br>

#### Computer Hardware System

<img src="/uploads/81e8c1c2c95a9b9a1ad953549bdcad9e/자료1.PNG"  width="400" height="300">

- CPU <br>
  memory에서 프로그램 명령어와 데이터를 읽어와 처리하고 명령어의 수행 순서를 제어한다.
  <br>

- Memory <br>
  실행중인 프로그램과 같은 프로그램에 필요한 데이터를 일시적으로 저장한다.
  <br>

- Input Device <br>
  컴퓨터 내부로 자료를 입력하는 장치로서 키보드, 마우스, 조이스틱 등이 있다.
  <br>

- Output Deviece <br>
  프린터, 모니터, 스피커 등의 인간이 인지할 수 있는 여러 가지 형태로 변환하여 컴퓨터에서 외부로 표현하는 장치이다.​
  <br>

- Storage <br>
  HDD나 SSD를 말하며 주기억장치에 비해 속도는 느리지만 많은 자료를 영구적으로 보관할 수 있다는 장점이 있습니다.

  <br>
  <br>

#### Linux Software

<img src="/uploads/0ff9cc84f4f850d35944380d120102f1/2.PNG"  width="400" height="300">

- Linux kernel <br>
  하드웨어를 운영 관리하여 프로세스, 파일, 메모리, 통신, 주변장치 등을 관리하는 서비스를 제공한다.
  <br>

- System Call <br>
  커널이 제공하는 서비스에 대한 프로그래밍 인터페이스 역할을 한다.
  <br>

- System Utilities <br>
  Linux 커널과 응용 프로그램 소프트웨어 간의 다리 역할을 하며 파일 처리, 프로세스 관리 및 텍스트 조작을 담당한다.
  <br>

- Linux Shell <br>
  용자와 운영체제 사이의 인터페이스를 제공하는 특수 프로그램으로 명령어를 입력받아 그 명령어를 해석하여 수행해 주는 명령어 해석기이다.
  <br>
  <br>

#### Linux Kernel

<img src="/uploads/081e366cb9ac292278fdbc7afbfcdd37/3.PNG"  width="400" height="300">

- 위로 갈수록 software에 가깝고 아래로 갈수록 hardware에 가깝다.
  <br>

- os가 하는 가장 중요한 일 3가지

  1. input, output
  2. Memory management
  3. Process management
     <br>
     <br>

- linux kernel이 하는 일 <br>
  cpu, memory, i/o device, storage를 관리한다.
  <br>

- Device 크게 3가지로 나뉨

  1. Character device: 문자 장치
  2. Network device
     socket: 통신을 위한 sw 드라이버, 네트워크 장치를 운영한다.

  3. Block device
     <br>

- File Systems <br>
  storage, disk를 뜻한다. <br>

  <br>
  <br>

#### Terminal

<img src="/uploads/ea3ce3bcedee4a2a2f98caeeca6cfae4/4.PNG"  width="400" height="300">

- 컴퓨터를 구성하는 4가지 요소 <br>
  software, hardware, user, data <br>

- hardware system과 user의 접점이 일어나는 종점을 terminal이라고 한다.
  <br>

---

### Lecture 02 (01/05)<br/>

#### Linux Command

- ssh

  - `ssh pcc007@git.ajou.ac.kr`: sh라는 명령어를 통해 팔달관의 컴퓨터에 접속하는 것, git.ajou.ac.kr이 학생들에게 터미널 하나씩을 준다.
    <br>
    <br>

- tty: 나에게 주어진 터미널을 알려주는 명령어
  <br>

- in permission, 맨 앞글자 = 파일 종류

  - d: directory
  - c: character device
  - b: block device
  - l: link
    <br>
    <br>

- grep: 입력으로 전달된 파일의 내용에서 특정 문자열을 찾고자할 때 사용하는 명령어

  - grep aaa: aaa라는 문자열을 찾아줌
    - n: 다음으로 이동

  <br>

- set number: 파일에 line number를 표시해주는 명령어

  - \\: 찾고자 하는 string을 찾아주는 명령어 <br>
    <br>

- diff 파일1 파일2 <br>
  두 파일이 똑같은지 비교하는 명령어
  <br>

- 두 명령어의 차이 알기

  - cat a.out <br>
    a.out이라는 파일의 내용을 보여주는 명령어
    (a.out은 우리가 읽을 수 있는 파일이 아님)

  - ./a.out <br>
    a.out이라는 파일을 실행하는 명령어
    <br>

- jobs <br>
  background 작업들과 상태들을 나타내주는 명령어
  <br>

- 명령어 + & <br>
  background에서 작업을 실행하는 명령어
  <br>

- Ctrl + Z <br>
  현재 작업은 놔둔 상태로 다른 작업을 실행하고 싶을 때, 현재 작업을 멈추는 명령어
  <br>

- bg %ID <br>
  foregeround작업을 background로 옯기는 명령어
  <br>

- fg %ID <br>
  background작업을 foreground로 옯기는 명령어
  <br>

- kill %ID <br>
  작업을 끝내거나 죽이는 명령어
  <br>

- cat [option]... [+FORMAT] <br>
  option, format 둘다 생략할 수 있고, option에는 여러 개가 올 수 있다

  - cat 둘다생략 <br>
    내가 입력한 것을 그대로 output으로 출력해준다.(stdout) <br>
  - cat 파일: 파일의 내용을 보여주는 명령어 <br>
  - cat 파일1 파일2 .. <br>
    파일들을 합쳐서 stdout으로 내보낼 수 있다.(concatenation)
    <br>
    <br>

- redirection

  - \< (= 0\<) : stdin 대신에 이 파일을 입력하라는 명령어
  - \> (= \>0) : stdout 대신에 이 파일을 내보내라는 명령어
  - ex.
    - `date > date.txt`: stdout이 date.txt라는 파일로 redirection이 일어난다
    - `cat < hello3.c`: stdin대신에 hello3를 받아서 stdout으로 출력한다
    - `cat < hello3.c > hello4.c`: stdin으로 hello3파일을 받아서 hello4파일에 출력한다
      <br>
      <br>

---

### Lecture 03 (01/06)<br/>

#### Shell Command

- 셸(shell) <br>
  리눅스의 셸은 명령어와 프로그램을 실행할 때 사용하는 인터페이스이다. <br> 셸은 커널(kernel)과 사용자간의 다리역할을 하며 사용자로 부터 명령을 받아 그것을 해석하고 프로그램을 실행하는 역할을 한다.

  - bash <br>
    현재 리눅스의 표준 셸이며 Korn Shell과 C Shell의 장점들을 가진 셸이다.
    <br>
    <br>

- sh <br>
  셸을 호출하는 명령어 (기본으로 지정된 쉘을 호출한다 /bin/bash) <br>
  셸 스크립트로 작성한 파일이 있을 경우 ./이나 sh명령으로 실행가능하다.

  - chmod +x .bashrc <br>
    bashrc파일을 실행할 수 있게 허락해 주는 명령어
    <br>
    <br>

- \> 와 \>>의 차이

  - \> (write or overwrite) <br>
    파일이 없을 때는 생성하며, 있다면 내용을 덮어쓴다.
  - \>> (append) <br>
    파일이 없을 때는 생성하며, 있다면 파일에 내용을 누적하여 추가한다.
    <br>
    <br>

#### Here document <br>

다수의 텍스트를 특정 command의 표준 입력으로 넣을 때 사용된다. <br>
입력 예시: `command << string` <br>

```
ex.
cat << myTest
username: yewon
hello world
myTest
```

<br>

#### Here strings <br>

짧은 길이의 스트링을 특정 command의 표준 입력으로 넣을 때 사용된다. <br>
입력 예시: `command <<< text` <br>

- ex) `cat <<< "hello world"`
  <br>
  <br>

#### Pipelining(|) <br>

|를 사용하여 Unix commands를 연결할 수 있다. <br>
어떤 프로그램의 stdout(출력)을 다음 프로그램의 stdin(입력)으로 넘겨주면서 작업이 진행된다.

- `who | wc`: who의 결과를 wc(word count)에 넘겨줌으로써 접속한 사용자의 수를 알 수 있다.
  <br>
  <br>
- grep

  - `grep pcc README.md`: 리드미파일에서 pcc가 들어간 곳을 다 출력해준다.
  - `grep printf hello.c | wc`: hello.c에서 printf가 나온 횟수를 출력해준다.
    <br>
    <br>

- mkfifo : 파이프를 만드는 명령어 <br>

  - mkfifo mypipe (mypipe의 속성은 p(=pipe)이다)
  - ls -l | wc: ls -l의 결과를 wc에 넘겨줘서 파일의 개수를 알 수 있다.
    <br>
    <br>

- T-joint: T자형 파이프, stdin, stdout 두가지로 이용하는 것 <br>
  하나는 그냥 stdout으로 나가고 다른 하나는 다른 명령어의 stdin으로 들어간다 <br> <br>
  <img src="/uploads/bae91b97702204dad7d26d556dc99e23/tee.PNG"  width="400" height="300">

  - tee 명령어 <br>
    명령어의 출력 결과를 파일과 화면에 동시에 출력할 수 있도록 해주는 명령어이다. <br> stdin을 받아서 stdout과 하나 이상의 파일에 그 입력을 출력한다.

    - ex. `ls -l | tee file.txt | aaa`
      <br>
      <br>

#### Git Command

- 인증하는 법

  - `git config --global user.email "yewon921@ajou.ac.kr"`
  - `git config --global user.name "Yewon Kim"`
    <br>
    <br>

- 저장소 복제/다운로드 하는 방법

  - `git clone \<URL\>` <br>
    기존 소스코드 다운로드/복제 <br>
  - `git clone /로컬/저장소/경로`
    로컬 저장소 복제
    <br>
    <br>

- Git에 업로드 하는 방법

  1. `git pull` <br>
     원격에서 업데이트된 내용을 로컬에 업데이트하는 명령어 <br>
  2. `git add` <br>
     로컬에서 원격으로 업로드할 파일, 폴더 선택 <br>

  3. `git commit -m "..."` <br>
     커밋 생성 (실제 변경사항 확정) <br>
  4. `git push` <br>
     커밋을 원격에 업로드
     <br>

#### Markdown Syntax

- \#: 제목
  - \## ~ ######: (#의 개수가 늘어날수록 글자 크기 작아짐) <br>
- 목록

  - 순서있는 목록
    1.2.3.
  - 순서없는 목록
    \*, - , +
    <br>
    <br>

- \`코드 내용`: 콜아웃, 코드내용 박스처리
- \>: 인용문
  - \>>, \>>>: 들여쓰기 가능
    <br><br>
- \<br>: 줄바꿈
- \---: 수평선
  <br>
  <br>

#### 기타

- 한글을 쓰면 unicode파일이 되고 한글이 없으면 ASCII 코드 파일이 된다.
- .으로 시작하는 hidden 파일로 간주하기 때문에 보이지않는다.
  - `file *.*` 명령어를 통해 hidden 파일을 볼 수 있다.
- file 파일이름: 파일이 어떤 파일인지 알려주는 명령어
- rmdir: 디렉토리를 지우는 명령어
  <br>

---

### Lecture 04 (01/10)

#### Redirection

- 0< : stdin
- 1> : stdout
- 2> : stderr
- < = 0< <br>
- << = 0<< : here document <br>
- \> = 1> <br>
- 2> = 2>> <br><br>

- Here document (<<) <br>
  여러 줄을 input으로 집어넣기가 어렵다. (why? 엔터치면 그냥 입력으로 들어가버리기 때문이다.) <br>
  여러 줄의 입력을 한꺼번에 받고 싶을 때 사용하면 좋다. <br>
  - `cat << EOF`: 엔터 대신에 EOF를 입력할때까지 입력 값 받음 <br>
  - `a.out << 99`: a.out에 stdin으로 99를 넣음
    <br>
    <br>
- Here string (<<<) <br>
  우측에 있는 string을 그대로 stdin으로 받는다.<br>

  - `cat <<< string` <br>
  - `a.out <<< 0; a.out <<< 999; a.out <<<-100`: 명령어 3개가 한번에 실행됨, 테스트를 반복할 때 편리하게 사용할 수 있다
    <br>
    <br>

- 명령어 연결 <br>
  `cmd1 | cmd2`: cmd1의 out이 cmd2의 in으로 들어감 <br>
  cmd1과 cmd2는 동시에 병렬로 실행된다
  <br>

#### Globing & Wildcard

- globing: 와일드 카드를 풀어줌 <br>
  `ls의 결과 == echo *` (globing이 일어난 것)
  <br>
- \*: 문자열 와일드 카드

      echo h*     : h로 시작하는 모든 파일 찾기
      echo *.c    : .c로 끝나는 모든 파일 찾기
      echo a*     : a로 시작하는 모든 파일 찾기
      echo [abc]* : 괄호 안의 하나의 문자와 일치하는 파일 찾기
      echo [a-q]* : 괄호 안의 범위에 속하는 하나의 문자와 일치하는 파일 찾기
      cat h*      : h로 시작하는 파일의 내용을 보여줌

  <br>

- ?: 한 문자 와일드 카드 <br>
- `echo ?????`: 다섯 글자인 파일 찾기 <br>
- `echo ??????*`: 다섯 글자 이상인 파일 찾기 <br>
  <br>

- 기타
  `$(...)`: 괄호 안의 코드를 실행한 결과 값 <br>
  `a.out <<< 300 > out.txt`: a.out에 300을 stdin으로 넣은 결과 한 줄을 out.txt에 씀 <br>
  `a.out <<< 300 &> out.txt`: 결과 두 줄 다 씀, 쓰여지는 순서는 랜덤 <br>
  `flush`: 버퍼를 비우라는 명령어
  <br>

- named pipe <br>
  한 쪽에선 읽고 한 쪽에선 쓰고, 두 프로세스 간에 통신하는 방식 (like 파이프,소켓)

  - 실습: 터미널 2개에서 각각 코드 치기
    - `b.out > pipe`: b.out이라는 파일에서 입력 받음
    - `a.out < pipe`: 파이프로 입력받은 것을 a.out으로 넘겨줌
      <br>
      <br>

#### Basic Data Type

- signed <br>
  signed char, short int, long int, long long
- unsigned <br>
  unsigned char, short int, long int, long long
- floating <br>
  float, double, long double
- bool <br>
  0 or 1
  <br>
  <br>

- Negative Integer <br>
  c언어에서는 대부분 2의 보수를 사용해서 나타냄

  - 2의 보수: 1의 보수(~)의 결과에 1을 더함

  - 2진수 -> 10진수 변환 in signed char

    - sign bit가 0일 경우(a7=0, 양수)

      val = a6\*2^6 + a5\*2^5 + ...... + a0\*2^0

    - sign bit가 1일 경우(a7=1, 음수)
      val = -(~a6\*2^6 + ~a5\*2^5 + ...... + ~a0\*2^0+1)
      <br>
      <br>

- signed int vs unsigned int (in shift연산)

  - \>\>n : 나누기 2의 n승
  - \<\<n : 곱하기 2의 n승

  - signed int
    양수(0또는+) >>n 일때: 앞에 n개만큼 0으로 채운다 <br>
    음수 >>n 일때: 앞에 n개만큼 1으로 채운다

    ```
    int in_a, in_b;
    fscanf(stdint, "%d", &in_a);
    in_b = in_a >> 2;
    ```

  - unsigned int <br>
    (전부 양수라고 선언한것이기 때문에) 무조건 앞에 0으로 채운다

    ```
    unsigned int in_a, in_b;
    fscanf(stdint, "%d", &in_a);
    in_b = in_a >> 2;
    ```

    <br>
    <br>

---

### Lecture 05 (01/11)

#### cpp, c preprocessor (컴파일러)

c언어의 전처리기를 뜻하며

- c파일을 실행하면 돌아가는 순서
- cpp > gcc > loader > a.out이 만들어짐 <br>
  cpp count1.c: c파일이 돌아감

- 컴파일 옵션

  - -c : .o file 생성
  - -E : preprocessing
  - -g : for debug
  - -pg : for profile
  - -O : Optimization
  - -Wall : 모든 warning에 대해서 알려줌

  <br>

- 속도 <br>

  - 코드 실행 속도의 차이가 존재함
  - 코드2의 속도가 훨씬 빠름 (if는 속도가 느림)
    1. `if((a>>i)&1) count ++;`
    2. `count += (a>>i) & 1;`

<br>

#### Data Type

- automatic(동적 변수) <br>
  해당 scope를 벗어나면 자동적으로 삭제되는 메모리이다.
  <br>
- static(정적 변수)<br>
  프로그램이 살아있는 한 계속 살아있는 메모리이다. <br>
  정의할 때 데이터 크기를 확실히 정해야 하며 사용 전 반드시 초기화를 해야 한다 <br>
  ex. int i
  <br>
- const <br>
  상수와 같으며 한번 초기화하면 더이상 값을 바꿀 수 없다. <br>
  메모리 공간이 없고 그냥 데이터 값이 들어간다. (메모리 안씀 => 성능 좋음) <br>
  \# define으로 값을 가져다 쓰는 것과 똑같다. <br>

  ```
  int const con = 100;
  con++;    // 에러발생 & con값이 증가하지 않음(상수이기 때문)
  ```

    <br>

- 기타

  - !!: 가장 직전에 했던 명령어 다시 하는 법
  - more: 긴 문서 볼 때 사용 (빠져나올 때 q)
  - less: more를 상당히 줄인 명령어
  - mac: 메뉴얼을 보는 명령어 (man = manual)
  - 쉬프트 연산자 보다 덧뺄셈의 우선순위가 더 높다
    <br>
  - 에러가 발생해도 컴파일 오류가 발생하지 않는 이유
    - c컴파일러가 실행에 실패하더라도 이전 a.out파일을 지우지 않기 때문이다
      <br>
  - vi command
    - dd: 한 라인 잘라내기
    - yy: 한 라인을 복사
    - yw: 한 단어를 복사
    - p: 붙여넣기
      <br>
      <br>

---

### Lecture 06 (01/12)

#### alias

- 자주 사용하는 긴 명령어 조합을 간단하게 등록해 놓을 수 있는 명령
- 사용 형식: `alias 별칭='명령어'`

- alias -p: alias 설정 확인 명령
- \\(백슬래시): alias 해제 명령

  - ex. \\ls: 오리지날 ls가 실행됨 (alias를 쓰고싶지 않을 때 사용)

  <br>

- c언어

  - 보안상의 약점
    메모리에 순차적으로 저장되기 때문에 값을 알려주지 않아도 알아낼 수 있다
  - 이상한 점
    const라고 선언했음에도 불구하고 const로 선언된 값을 변경할 수 있음
    <br>

- 기타

  - `cc hello.c && a.out` : 컴파일에러 없이 성공했을 때만 오른쪽 실행하게 함
  - clear: 터미널의 명령어들이 지워주는 명령어
  - 어떤 주소에 1을 더하는 것은 그 주소에 데이터 타입의 크기를 1만큼 더하는 것이다.

    - ex. void 포인터의 경우, 1을 더하면 1만큼 더해진다
      <br>
      <br>

#### Pointer

- \*

  - (a \* b): multiply operator
  - \*a: value operator, a가 가리키는 값을 나타냄
    <br>

- &

  - (a & b) : bitwise And
  - &a: address operator, a의 주소값을 나타냄
    <br>

- \-

  - (a - b): subtraction operator
  - \- b : negative 연산자, b\*(-1), b의 부호를 바꿔주는 연산자
    <br>
    <br>

- 포인터 예시

  - int const a <br>
    a라는 변수가 constant integer라는 뜻이다
    <br>

  - int const \*a <br>
    const가 앞의 int를 수식, a는 const int를 가리키는 포인터라는 뜻이다
    <br>

  - int \* const a <br>
    a는 int를 가리키는 const 포인터이다.
    <br>
    <br>

- 포인터의 포인터 예시

  - int \* const\* a <br>
    a는 "int를 가리키는 const 포인터"를 가리키는 포인터이다.
    <br>

  - int const \*\*a <br>
    a는 "constant int를 가리키는 포인터"의 포인터이다.(이 포인터들은 변경가능)
    <br>

  - int const \* contst \* a <br>
    a는 "const int를 가리키는 const 포인터"를 가리키는 포인터이다.
    <br>

---

### Lecture 07 (01/13)

- 꼭 알아두어야 하는 차이

  - int const \*a <br>
    const가 앞의 int를 수식, a는 const int를 가리키는 포인터라는 뜻

  - int \* const a <br>
    int를 가리키는 포인터인데, 포인터가 const다. 따라서 포인터가 변하면 안됨
    <br>

- const를 사용하는 이유 <br>
  const를 사용해도 포인터를 이용하면 값을 변경할 수 있다. 그렇다면 왜 const를 사용할까? <br>
  이유: 고치면 안되는 변수라고 warning을 하기 위해서이다
  <br>

#### 함수의 포인터

- 선언: 리턴형식 \*함수이름(파라미터들)

  ```
  void *fp(int *, int *, int *),
  fp = mul;                                                     //mul자체가 주소이기때문에 &필요없음
  fp(&a, &b, &c);                                               // 선언된 함수포인터와 형식이 맞지 않을 경우 warning이 발생한다
  void (*fp)[4](int *, int *, int *) = {add, sub, mul, div};    // array를 쓸 때는 fp뒤에 [4]가 나와야 함
  ```

  <br>

- od
  - od a.out: 8진수로 a.out을 보는 명령
  - od -x a.out: 16진수로 a.out을 보는 명령
  - od -x a.out | grep 270f: 16진수로된 a.out에서 270f를 잡아옴
    <br>

#### C compile process

1. preprocessing 수행한다.(cpp실행, .c파일 만든다)
2. 사용자의 소스코드(.c파일)를 compile해서 assembly file(.o파일)을 만든다.
3. 실행 파일을 만든다. (dynamic link vs static link)
4. loader가 실행할 것들을 메모리에 load한다.

(이 과정들을 gcc명령어의 옵션을 이용해서 확인할 수 있다. (-c, -g, -O, -E, -pg, --32/--64))
<br>
<br>

- programming language -> machine language로 변환하는 2가지 방법

  - interpreter <br>
    한 줄씩 컴파일 해서 실행 (ex. python)
  - compiler <br>
    전체 코드를 컴파일해서 실행 (ex. c)
    <br>
    <br>

- cpp (= C Preprocessor)

  - c preprocessing하는 명령어 2가지

    - cpp
    - cc -E
      <br>
      <br>

- 기타
  - .c파일 = source code
  - .o파일 = object code
    <br>

#### Macro Definition

- 주의 사항

  - 파라미터 사용할 때, 괄호는 필수
    - ex. \#define f(a) ((a)\*(a)) <br>
  - macro파일은 자주 수정하지 말 것
    - macro 파일을 수정할 때마다 다시 컴파일 해 줘야 하는 파일들이 있기 때문이다
      <br>
      <br>

- 여러 번 include하지 않게 하는 명령어 2가지

  - \#pragma includes
  - \#ifndef \_FUNC\_ (끝에 #endif써주기)
    <br>
    <br>

- \#if 0 : 이 명령 뒤 전체 코드를 못쓰게 하는 명령어
  <br>
  <br>

---

### Lecture 08 (01/17)

#### Macro Definition - (2)

- 매크로 상수 선언: `#define <identifier> <replacement>`
- 매크로 함수 정의: `#define <identifier> (<parameter list>) <replacement token list>`
  - identifier: 끊어지지 않은 하나의 단어 ex. PI
  - \#: string으로 바꾸어주는 역할을 한다
  - \#\#: token concatenation을 의미, 문자열을 붙이는 것에 사용된다.
  - \_\_FILE\_\_, \_\_LINE\_\_: 에러가 발생한 파일 이름과 라인 넘버를 찾을 때 사용된다
    <br>

##### 실습예제 )

```
#include <stdio.h>
int add(int *a, int *b, int *c)
{
        *c =  *a + *b;
}

int main()
{
        int a = 100;
        int b = 200;
        int c = 999;

        fprintf(stdout, "%d : %lld %llx\n", a,(long long) &a,(long long) &a);
        fprintf(stdout, "%d : %lld %llx\n", b, (long long)&b, (long long)&b);
        add(&a, &b ,&c);

        fprintf(stdout, "%s %d : %d\n",__FILE__, __LINE__,c);
        fprintf(stdout, "%s %d : %d\n",__FILE__, __LINE__,c);
        fprintf(stdout, "%s %d : %d\n",__FILE__, __LINE__,c);

#define ERR_DATA 2000
#if ERR_DATA  > 1000
#error 1024
#else
#warning ERR_DATA
#endif
        fprintf(stdout, "%s %d : %d",__FILE__, __LINE__,c);
}

```

> define한 값이 어떤 값보다 클 경우, 에러를 내고 그렇지 않을 경우, #warning ERR_DATA를 수행한다.
> 실행 결과: warinig이 제일 먼저 일어나기 때문에 ERR_DATA의 값을 알려주진 않는다.

<br>

#### gcc options

- -E: preprocess only, do not compile
- -S: compile only
- -c: compile and assemble
- -o: make executable file
- -O: optimize
  <br>

#### gcc machine option

- -m32: 32bit용으로 컴파일하는 명령
- -m64: 63bit용으로 컴파일하는 명령
  <br>

#### gcc optimization

- -O0(기본값): 최적화 수행하지 않음
- -O, O1: 코드 크기와 실행 시간을 줄임
- -O2: 메모리 공간과 속도를 희생하지 않는 범위 내의 모든 최적화를 수행한다
- -O3: O2 최적화에 인라인 함수에 레지스터에 대한 최적화를 추가로 수행한다
- -Os: O2 최적화 기능을 사용하지만, 코드 크기를 증가시키는 최적화는 생략한다

  <br>

---

### Lecture 09 (01/18)

#### Debugging

- debugging : 프로그램의 버그를 잡는다는 뜻이다.
- gdb = GNU debugger
  gdb라는 debugger를 가지고 debugging을 할 수 있다.
  <br>

#### gdb command

- gdb a.out <br>
  a.out의 디버깅을 수행

- where <br>
  어디서 에러가 났는지 알려줌

- pwd <br>
  현재 working 디렉토리를 알려줌

- list 함수명 <br>
  해당 함수를 출력해줌

  - list 30,70: 30~70라인까지의 내용 출력해준다

- print 변수명 <br>
  해당 변수 값을 보여주는 명령어

- step <br>
  한 줄을 실행하는 명령어 (함수 call이되면 그 함수의 속으로 감)

- next <br>
  다음 한 줄을 실행하는 명령어 (함수 속으로 가지 않음)

- break 라인번호 <br>
  해당 라인 번호에서 프로그램을 멈추는 명령어

- continue <br>
  break point 이후부터 실행하는 명령어

- clear 라인넘버 <br>
  breakpoint를 삭제하는 명령어

- watch <br>
  변수가 바뀔 때마다 현재 값을 출력하는 명령어

- info reg <br>
  특정 레지스터의 정보를 출력

<br>

#### Fixed point

- 고정소수점(fixed point)
  소수점이 움직이지 않고 고정되었다는 의미, 컴퓨터에서 실수를 표현할 때 쓰는 방법이다. <br>
  10진수를 2진수로 바꿨으면, 그걸 그대로 박아넣는 방식을 사용한다.

  - ex. 7.625(실수, 부동소수점) -> 111.101 (2진수) -> 0 0000111. 10100000 (고정 소수점, in 16비트 체계)
    <br>

  - 부호 비트(1) | 정수부(n/2-1) | 소수부(n/2) : n비트체계라고 가정
    - 맨 앞 1자리는 부호 비트(sign bit) 0이면 양수, 1이면 음수
    - 소수부는 앞에서부터 채우며 남은 뒷자리는 다 0으로 채운다
    - 단점: 정밀도가 낮다
      <br>
      <br>

#### Floating point

- 부동소수점(floating point)
  소수점이 둥둥 떠다닌다는 의미, 컴퓨터에서 실수를 표현할 때 쓰는 방법이다.
  <br>

- 부동 소수점 표현 방식 <br>
  부동 소수점 표현 방식에는 2진수로 변환한 결과에 몇가지 과정을 추가로 거친다.

  - 실수 -> 이진수 변환

    - 정수부: 10진수를 2로 나눠가면서 1과 0을 뽑아냄(1이 나오면 종료)
    - 소수부: 10진수에 2를 곱해가면서 1과 0을 뽑아냄(0이 나오면 종료)
    - ex. 0.625를 이진수로 변환하는 예시 <br>
      0.625 \* 2 = 1.25 -> 1을 빼내고 나머지 0.25 <br>
      0.25 \* 2 = 0.5 -> 0을 빼내고 나머지 0.5 <br>
      0.5 \* 2 = 1.0 -> 1을 빼내고 나머지 0 <br>
      => 나머지 0이 나왔으니 변환을 종료하고 빼낸 숫자들을 위에서부터 읽어주면 된다.<br>
      즉, 0.625(실수) -> 0.101(이진수)이 된다.
      <br>
      <br>

  - 정규화 <br>
    2진수를 1.xxxxx \_ 2^n의 꼴로 변환하는 것을 말한다. <br>
    변환 방법: 정수부에 1만 남을 때 까지 소수점을 왼쪽으로 이동시키고 이동한 칸 수만큼 n자리에 넣는다.

    - ex. 111.101 -> 1.11101 \* 2^2
      <br>
      <br>

  - IEEE 754 부동 소수점 표현
    IEEE 표준에 따르면 부동소수점 방식으로 실수를 저장하는 데는 32비트, 또는 64비트가 사용되며 <br> 32비트 기준으로 아래와 같은 구조를 가진다.

    - 부호비트(1) | 지수부(8) | 가수부(23) (32bit체계)

      - 가수부: 소수점 오른쪽에 있는 숫자들 왼쪽부터 그대로 넣음, 남은 자리는 0으로 채움
      - 지수부: 2^n에서 n에 해당하는 수 + bias(in 32bit, 127) 를 이진수로 변환 <br>
        +\) bias는 지수가 음수일 경우를 대비해서 필요함
        <br>
        <br>

---

### Lecture 10 (01/19)

#### Core dump

- core dump: 컴퓨터 프로그램이 특정 시점에 작업 중이던 메모리 상태를 기록한 것으로, 보통 프로그램이 비정상적으로 종료했을 때 만들어진다

  - `gdb 실행파일 core` <br>
    실행파일의 어느 곳에서 core dumped가 발생했는지 알려줌 <br>
  - `rm core` <br>
    core를 지우는 명령, 디버깅 끝나면 코어파일을 빨리 지워야한다.(메모리를 많이 차지하기 때문이다)
    <br>

- core dump 파일위치: /var/lib/apport/coredump

- ulimit: 프로세스들에 대한 시스템 자원사용을 제한할 수 있는 명령어
  - -a : core file크기를 확인할 수 있다
  - -c : 최대 core file크기를 설정할 수 있다
    <br>

#### GNU Profiling

- golden rule

  - Speed: CPU > Memory > Storage > IO > Human
  - Register > Cache(1st, 2nd) > Memory > ...
  - Locality: 메모리에서 인접하게 위치한 데이터를 사용하는 것이 성능이 좋다. <br>
    인접하지 않은 데이터의 경우, 캐쉬를 메모리에 넣고 빼는 것의 반복으로 인해 성능이 좋지 않다.
  - Pipeline: 명령어 처리 사이클(fetch -> decode -> execute -> memory -> write) 최적화로 실행 시간 단축이 가능하다
    <br>
    <br>

- profile: 프로그램의 성능을 개선하기 위해 성능을 측정하는 방법

- gprof 사용법

  1. cc -gp test.c: 실행 파일을 생성한다
  2. a.out: 실행 파일을 실행한다
  3. gprof a.out gmon.out: profile을 진행한다.
     <br>
     <br>

- 추가
  - 성능면에서 함수의 호출을 굉장히 비싸다.
  - gprof할 때: 함수를 call하는 곳에 직접적으로 코드를 삽입해서 속도를 높인다.
  - gprof끝난 뒤: 위와 같은 부분을 매크로를 이용하여 정의해서 사용한다. 속도는 조금 느려지고 오차가 존재할 수있다.
    <br>
    <br>

---

### Lecture 11 (01/20)

#### C 제공 기능

- Call by value
  변수가 가지는 값을 복사해서 임시로 메모리에 저장한 후 그 값을 value에 집어넣는 방식이다.
  <br>

- Call by address <br>
  포인터의 사용 목적, 주소를 넘겨주는 것처럼 보이지만 사실 call by value 방식처럼 <br> 단순히 주소를 복사해서 주소라는 '값'을 메모리에 임시로 저장 후 인자로 넘긴다. <br> \* 연산자로 주소에 접근하여 변수의 값을 바꿀 수 있다.
  <br>

#### C++ 제공 기능

- Call by reference
  위의 2개가 C에서 제공하는 기능들이고 c++에는 Call by reference개념이 추가되었다.
  함수가 호출되면 parameter는 argument에 할당된 메모리를 공유한다. 즉, argument를 함수안에서는 reference로 부르겠다는 것을 의미한다.
  따라서 매개변수의 값을 바꾸면 해당 변수의 값도 바뀌고, 둘은 같은 주소값을 가진다.
  <br>

#### gprof 추가 설명

- -b: brief, 간결하게 보여줌
- -A: 소스코드에 함수가 몇번 call됐는지 annotation을 달아줌
- --graph: call graph를 누적해서 보여줌
  <br>

#### Performance

- 덧셈과 곱셈의 속도차이는 거의 없고, 곱셈의 속도가 더 빠를 수도 있다.
- 곱셈이 나눗셈보다 4배정도 느리다(컴퓨터가 역수구하는데 시간 오래걸림)
  따라서 역수를 미리 구해서 상수로 정해놓으면 좋다.
- MACRO는 계산해서 컴파일 타임에 집어넣는다 = 그냥 상수가 들어간다.
- function call은 매우 느리기 때문에 #define으로 대체하는 것이 좋다.
- 조건문 대신 ?연산자를 사용하는 것이 좋다. (for문은 피할 수 없는 조건문이 포함되어 있음)
- 32bit int연산을 할 일이 많다면, 32bit용으로 컴파일하는게 더 빠르자
  하지만, 지금 사용하는 cpu에 따라서 조정하더라도 속도가 빨라지지 않을 수도 있다
- optimization은 꼭 필요할 때 하는 것이다. (버그가 없을 때 optimization하는 것 회사에선 비추천)
  <br>

#### 실습예제 (rgba.c)

`return ((r&0xff)<<24)+((g&0xff)<<16)+((b&0xff)<<8)+(a&0xff);`

- (&0xff)의 뜻: 가장 낮은 자리의 8비트만 남기고 나머지는 0으로 채움
  - ex. 76421714 (10) => 00000011(10)
    <br>
    <br>

---

### Lecture 12 (1/24)

#### c project

```
if FX_SYSTEM_FLOAT ==64
#define fromFloat(d)
#define toFloat(d)
# else // ==32
#define fromFloat(d)
#define toFloat(d)
#endif
```

if문에 따라서 32비트면 32비트용으로 계산하게끔 프로그램을 만들어야한다. 즉, 조건부 컴파일이 가능하도록 만들어야 한다. <br>
(위의 코드의 경우, float이 double보다 느리니까 float로 할 필요 없음) <br>

#### Make (GNU make)

include한 파일이 변경되면 컴파일을 다시 해야함 = dependency, prerequisite
그래서 쉽게하는 법 만든 것이 Make이다 (변경된 것만 쉽게 컴파일 가능하다)

- 사용 방법

  1. Makefile을 만든다

  ```
  test.o: test.c test.h
    cc -c -o test.c test.o
  clean:
          rm *.o test.o
  ```

  2. 터미널에 make 명령어를 입력한다

   <br>

- main is up to date일 때, 무조건 컴파일해서 업데이트하는 법 3가지

  1. rm main => make
  2. vi main.c에서 주석 한 줄 쓰고, make하면 업데이트됨
  3. touch main.c => make
     touch \*.h => make // .h로끝나는 모든 파일 컴파일함
  4. clean문 작성 => make clean
     <br>

  <br>

- touch: 파일의 time stamp를 변경하는 명령어, 만약 파일이 없을 경우
  디폴트로 만들어줌
  <br>

#### Macro

```
OBJS = test1.o test2.o test3.o
test: $(OBJS)
```

- $@ : 타겟의 이름을 의미한다.
- $^ : 타겟의 모든 dependency 파일들을 의미한다.
- $< : 타겟의 dependency 파일들 중에서 첫번째 파일을 의미한다.
  <br>

- gccmakedep [dependecies]
  GNU Make의 dependencies를 자동으로 만들어주는 툴이다.

<br>

#### CMake

프로젝트가 커질수록 Makefile에 의존성 관계를 관리하는게 쉽지않다.
따라서 Cmake를 이용해서 Makefile을 만들 수 있다.

- 실행 방법
  1. CMakeLists.txt 파일을 작성한다. <br>
  2. 터미널에 cmake 명령어를 입력한다. (Makefile이 생성됨) <br>
  3. make명령어를 입력한다. (만들어진 Makefile로 빌드함) <br>

<br>
<br>

---

### Lecture 13 (1/25)

#### CPU

- 작업(job)하나는 하나의 코어에서만 수행 가능하다.
- job은 다시 process로 쪼개지는데 core들은 이러한 작업 프로세스를 수행한다는 점에서 processor라고 부른다. <br> (core - job ->process, core = processor)
  <br>

- context switching <br>
  하나의 프로세스가 CPU를 사용 중인 상태에서 다른 프로세스가 CPU를 사용하도록 하기 위해, <br> 이전의 프로세스의 상태를 보관하고 새로운 프로세스의 상태를 적재하는 작업을 말한다.

  - 이후 수행될 프로세스를 선택하는 것을 "프로세스 스케줄링"이라고 한다.
    <br>

#### Process

- process 종류

  - system process <br>
    os의 process들을 의미한다.
  - user process <br>
    이외의 메모리에 올라와 실행을 기다리는 process들을 user process라고 한다.
    <br>
    <br>

- process 상태

  - Run
    - vi를 입력하면 run상태가 됨
    - stop한 것을 다시 run하고 싶으면 fg또는bg 명령어를 사용
    - run하고있는 프로세스의 종류 2가지
      - fg(foreground)
      - bg(background)
        <br>
        <br>
  - Kill(idle)
    - kill PID: 어떤 프로세스를 죽이는 명령어
      <br>
      <br>
  - Stop

    - ctrl+Z: stop하는 명령어
      <br>
      <br>

- process 관련 명령

  - ps <br>
    내가 지금 실행하고 있는 프로세스를 보는 명령
  - ps -l <br>
    프로세스에 대한 상세한 정보
  - PPID <br>
    이 프로세스의 부모 프로세스이다
  - man ps <br>
    ps명령어를 설명해주는 명령
  - jobs <br>
    job ID를 보는 명령
  - fg %3 <br>
    foreground로 돌리는 명령
    <br>
    <br>

- fg/bg 관련 명령

  - fg %3 <br>
    foreground로 돌리는 명령
  - a.out &> output.txt <br>
    a.out의 stdout과 stderr둘다 output.txt로 redirection하는 명령
  - shift+enter <br>
    어떤 명령어를 실행하지 않고 넘길때 사용하는 명령
  - sleep 몇초 <br>
    몇초동안 자라는 명령
    <br>
    <br>

- vi를 background로 돌릴 수 없는 이유 <br>
  stdin을 사용하는 작업(ex. scanf)은 foreground에서만 돌릴 수 있다.
- stdin을 사용하는 작업에서 background로 돌리는 방법 => redirection 사용

  - ex. `./bin << 9988`
    scanf가 있어서 stdin을 사용하지만 redirection을 이용했기 때문에 background에서 돌릴 수 있다
    <br>
    <br>

- 기본적인 입력 장치: stdin
- 기본적인 출력 장치: stdout, stderr
  <br>

#### Thread

core는 실제 하드웨어의 core개수이지만, thread는 가상의 작업 개수이며 여러 개의 cpu에서 작동할 수 있다. <br>
thread간의 context switching이 빠르게 일어날 수 있기 때문에 원래의 core개수 보다 더 많은 core가 존재하는 것 처럼 느껴질 수 있다.

- Thread 만드는 방법

  1. c11표준 (2011) <br>
     thread.h <br><br>
  2. IEEE POSIX <br>
     pthread.h <br>
     - create: 쓰레드를 생성함, 쓰레드가 수행할 함수를 설정할 수 있음
     - join: 쓰레드가 끝날 때 까지 기다림 = 동기화할 때 사용, synchronization
     - cancel: 다른 쓰레드를 종료시킴
     - self: 해당 함수를 호출한 쓰레드의 id를 얻을 수 있음
       <br>
       <br>

- Thread를 컴파일할때는 라이브러리를 반드시 붙여줘야함 (-lpthread) <br>
  `cc threadtest.c -lpthread`
  <br>

#### System Call

프로세스가 컴퓨터를 관리하는 시스템(system)인 운영체제에게 어떤 기능(서비스)를 사용하게 해달라고 요청(call)할 때 사용하는 방법이다.

```
#include <stdlib.h>
int system(const char *command);
int execl(const char *path, const char *arg, ...);
```

- 사용예시: 파일을 여는 것(open), 기존 프로세스를 다른 프로그램으로 바꾸는 것(exec), 똑같은 프로세스를 하나 더 만드는 것(fork), 다른 프로세스에게 어떤 행위를 지시하는 시그널(신호)을 보내는 것(kill)
- system call을 사용하기 위해서는 stdlib.h를 include해야 한다.

<br>

#### Fork

- 프로세스가 자기 자신을 복제하는 동작을 뜻하며, 시스템 호출의 일종으로 커널 안에서 구현된다.
- 복제 대상을 부모 프로세스, 결과물을 자식 프로세스라고 한다.
- fork 함수에 의해 생성된 자식 프로세스는 부모 프로세스의 메모리를 그대로 clone하여 가지게 된다.
- <sys.types.h>와 <unistd.h>를 include해야한다.
- 프로세스가 가지는 고유한 번호를 프로세스 ID라고 함
  fork함수 성공시 부모 프로세스는 자식 프로세스의 프로세스 ID를 리턴
  - `a.out --fork---> a.out2`: 실행 결과 둘의 PID가 다르다
  - 장점: PID에 따라 각각 다른 일을 시킬 수 있음

<br>
<br>

---

### Lecture 14 (1/26)

#### POSIX

IEEE에서 상업용인 UNIX 대체하여 만든 표준이다. <br>
한 운영체제에서 개발한 프로그램을 다른 운영체제에서도 쉽게 돌아가도록 한다. <br>

#### Buffer

입출력을 수행하는데에 있어 속도 차이를 극복하기 위해 사용하는 임시 저장 공간이다. cpu와 보조기억장치 사이에서 사용된다. <br>
보조기억장치가 주기억장치의 버퍼로 데이터를 보내면 cpu가 다른 일들 처리하고 시간이 남으면 버퍼를 확인하여 쌓여있는 데이터를 한번에 처리하는 방식이다. <br>

  <br>

- 리눅스에서 쓰는 제일 중요한 3가지 표준버퍼, 이것들을 쓰기 위해서는
  #include <stdio.h>를 해야한다. (여기에 세가지에 대한 definition이 들어있다)

  - stdin
  - stdout
  - stderr
    <br>

- 버퍼의 값을 가져가는 방식

  - buffer full: 버퍼가 꽉 찼을 때 cpu가 버퍼 값을 가져간다.
  - line by line: \n이 입력되었을 때 cpu가 버퍼 값을 가져간다.
  - character by character: 한 글자 입력 시 cpu가 바로 버퍼 값을 가져간다.
    <br>

- Command

  - stdbuf: 터미널을 통해 표준 버퍼를 제어하는 명령
    `stdbuf --output=0 a.out`
    <br>

  - setvbuf: 프로그램 내에서 버퍼를 직접 설정하는 명령

    ```
    #include <stdio.h>
    int setvbuf(FILE *stream, char *buf, int mode, size_t size);
    ```

    <br>

  - fflush: 버퍼를 지우는 명령 <br>
    no buffering의 경우 버퍼를 계속 지우므로 낭비가 심하다
    <br>

- stdbuf vs setbuf <br>
  두 명령어를 동시에 실행할 경우, setbuf의 힘이 더 쎄다
  <br>

#### Thread - (2)

- pthread에서 p는 POSIX(포식스)를 의미한다.
- pthread_self: 현재 돌고있는 스레드의 ID을 반환하는 함수
- pthread_equal: 스레드들이 같은지 비교하는 함수
  <br>

- 실습 예제

  ```
    static int a = 0;
    printf("== %d %d ==\n",a++, bbb++);
  ```

  - print문에 \\n을 삽입하여 line by line형식으로 버퍼의 값을 읽어가도록 설정하였다.
  - 즉, 줄바꿈이 일어날 때 마다 I/O가 flush된다.
    <br>

#### Mutex

thread끼리는 같은 메모리 공유하기 때문에 여러 쓰레드가 같은 메모리를 수정하려하면 오류가 발생할 수 있다. 따라서 자원을 독점적으로 한 쓰레드가 사용할 수 있게 하는 방법으로 Mutex(= mutual exclusion)가 존재한다. <br>

```
  static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
  static int a = 0;
  printf("<= %d %d =>",a, bbb);
  pthread_mutex_lock(&mutex);
  a++; bbb++;
  pthread_mutex_unlock(&mutex);
```

- 어떤 코드에서 a++을 하는 중에 cpu에서 memory의 값을 가져갔다 돌려주게 된다면, cpu때문에 다른 값으로 다시 덮이는 등 동기화 문제가 발생하게 되는데 위와 같이 mutex를 사용한다면 문제를 해결할 수 있다.
  <br>
  <br>

---

### Lecture 15 (01/27)

#### sotfware testing

소프트웨어 개발 과정에서 발생할 수 있는 오류들을 가정하고,
그러한 오류들을 발견해 내는 활동을 뜻한다.

<img src="/uploads/b9491b9e2008a4c307aa1085c08ff1dd/1.PNG"  width="400" height="300">
<br>

- 내부구조 파악 여부로 구분

  - white box <br>
    소스코드를 보면서 테스팅하는 방법
  - black box <br>
    소스코드를 보지않고 테스팅하는 방법
    <br>
    <br>

- 소프트웨어 실행여부로 구분

  - static <br>
    정적테스팅, 프로그램을 실행하지 않고 하는 테스팅하는 방법
  - dynamic <br>
    동적테스팅, 프로그램을 실행하는 테스팅 방법
    <br>
    <br>

- 위의 두 기준을 동시에 적용하여 총 4가지 방식의 테스팅을 진행할 수 있다.

  1. Documentation Review : 블랙박스 + 정적 테스팅
  2. Specification-based Testing : 블랙박스 + 동적 테스팅
  3. Source code Review : 화이트박스 + 정적 테스팅
  4. Structural Testing : 화이트박스 + 동적 테스팅
     <br>

- 테스팅 방법

  1. 동등 클래스 분할 : 입력을 클래스로 분할하여 동일한 출력을 가지는 입력을 묶어 테스트를 진행한다.
  2. 상태전이 기반 : 소프트웨어의 상태가 변화하는 것을 기준으로 테스트 케이스를 설정한다.
  3. 경로 기반 : 프로그램이 실행되어 나아가는 경로를 기준으로 테스트 케이스를 설정한다.
  4. 경계값 분석 : 입력 범위의 경계 값을 기준으로 테스트를 한다.
     <br>
     <br>

- 환경설정

  1. 도움말>라이선스>편집>노드락>clic/ctic
  2. 창>환경설정>툴체인
     <br>
     <br>

- 프로젝트 생성 <br>
  파일>새로작성>소스파일 c/c++프로젝트>툴체인설정 & 다음>최상위 디렉토리로 test.c파일이 존재하는 폴더 선택>test.c파일 선택
  <br>

---
