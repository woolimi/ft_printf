# ft_printf

42 School 프로젝트: 표준 printf 함수의 커스텀 구현

## 📋 목차

- [프로젝트 소개](#프로젝트-소개)
- [기능](#기능)
- [지원하는 변환 지정자](#지원하는-변환-지정자)
- [지원하는 플래그](#지원하는-플래그)
- [지원하는 폭과 정밀도](#지원하는-폭과-정밀도)
- [빌드 방법](#빌드-방법)
- [사용 예제](#사용-예제)
- [프로젝트 구조](#프로젝트-구조)

## 프로젝트 소개

`ft_printf`는 C 표준 라이브러리의 `printf` 함수를 직접 구현한 프로젝트다. 가변 인자(variadic arguments)를 처리하고 다양한 형식 지정자를 지원한다.

## 기능

- ✅ 가변 인자 처리 (`va_list`, `va_start`, `va_arg`, `va_end`)
- ✅ 형식 문자열 파싱 및 검증
- ✅ 플래그 처리 (`-`, `0`)
- ✅ 최소 폭 지정 (숫자 및 `*`)
- ✅ 정밀도 지정 (`.` 및 `*`)
- ✅ 다양한 변환 지정자 지원

## 지원하는 변환 지정자

| 지정자 | 설명                             | 예제                       |
| ------ | -------------------------------- | -------------------------- |
| `c`    | 문자 출력                        | `ft_printf("%c", 'A')`     |
| `s`    | 문자열 출력                      | `ft_printf("%s", "Hello")` |
| `p`    | 포인터 주소 출력 (16진수)        | `ft_printf("%p", &var)`    |
| `d`    | 부호 있는 10진수 정수            | `ft_printf("%d", 42)`      |
| `i`    | 부호 있는 10진수 정수 (d와 동일) | `ft_printf("%i", -42)`     |
| `u`    | 부호 없는 10진수 정수            | `ft_printf("%u", 42)`      |
| `x`    | 부호 없는 16진수 정수 (소문자)   | `ft_printf("%x", 255)`     |
| `X`    | 부호 없는 16진수 정수 (대문자)   | `ft_printf("%X", 255)`     |
| `%`    | 퍼센트 기호 출력                 | `ft_printf("%%")`          |

## 지원하는 플래그

### `-` (마이너스)

- 왼쪽 정렬
- 기본값은 오른쪽 정렬

```c
ft_printf("%-10s", "Hello");  // "Hello     "
```

### `0` (제로 패딩)

- 숫자 앞에 0으로 패딩
- `-` 플래그와 함께 사용되면 `-`가 우선
- 정밀도가 지정되면 무시됨

```c
ft_printf("%05d", 42);  // "00042"
```

## 지원하는 폭과 정밀도

### 최소 폭 (Minimum Width)

- 출력할 최소 문자 수 지정
- 숫자 또는 `*` 사용 가능
- `*`는 가변 인자에서 폭 값을 가져옴

```c
ft_printf("%10s", "Hi");      // "        Hi"
ft_printf("%*s", 10, "Hi");   // "        Hi"
```

### 정밀도 (Precision)

- `.` 다음에 숫자 또는 `*` 사용
- 문자열: 최대 출력 길이
- 숫자: 최소 자릿수 (0으로 패딩)

```c
ft_printf("%.5s", "Hello World");  // "Hello"
ft_printf("%.5d", 42);              // "00042"
ft_printf("%.*d", 5, 42);           // "00042"
```

## 빌드 방법

### 라이브러리 빌드

```bash
make
```

이 명령어는 `libftprintf.a` 정적 라이브러리를 생성한다.

### 정리 명령어

```bash
make clean      # 오브젝트 파일 삭제
make fclean     # 오브젝트 파일과 라이브러리 삭제
make re         # 완전히 재빌드
```

### 코드 스타일 검사

```bash
make norme      # Norminette 스타일 검사
```

## 사용 예제

### 기본 사용법

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello, %s!\n", "World");
    // 출력: "Hello, World!"
    // count = 14

    ft_printf("Number: %d\n", 42);
    // 출력: "Number: 42"

    ft_printf("Hex: %x\n", 255);
    // 출력: "Hex: ff"

    ft_printf("Pointer: %p\n", &count);
    // 출력: "Pointer: 0x..."

    return (0);
}
```

### 플래그 사용 예제

```c
// 왼쪽 정렬
ft_printf("%-10s\n", "left");
// 출력: "left      "

// 제로 패딩
ft_printf("%05d\n", 42);
// 출력: "00042"

// 폭 지정
ft_printf("%10d\n", 42);
// 출력: "        42"

// 정밀도 지정
ft_printf("%.5d\n", 42);
// 출력: "00042"

// 복합 사용
ft_printf("%-10.5d\n", 42);
// 출력: "00042     "
```

### 컴파일 및 링크

```c
// main.c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    return (0);
}
```

```bash
gcc main.c -L. -lftprintf -I./include -o main
./main
```

## 프로젝트 구조

```
ft_printf/
├── include/
│   ├── ft_printf.h      # 메인 헤더 파일
│   └── libft.h          # 유틸리티 함수 헤더
├── lib/
│   ├── ft_isdigit.c     # 숫자 검사
│   ├── ft_itoa_base.c   # 정수를 문자열로 변환 (임의 진법)
│   ├── ft_utoa_base.c   # 부호 없는 정수를 문자열로 변환
│   ├── ft_strlen.c      # 문자열 길이
│   └── ft_strlcpy.c     # 문자열 복사
├── srcs/
│   ├── ft_printf.c      # 메인 함수
│   ├── aux_check.c      # 형식 문자열 검증
│   ├── aux_pl.c         # 플래그 및 옵션 파싱
│   ├── aux_print_and_count.c  # 출력 및 카운트
│   ├── print_c.c        # 문자 출력
│   ├── print_s.c        # 문자열 출력
│   ├── print_p.c        # 포인터 출력
│   ├── print_d.c        # 정수 출력
│   ├── print_u.c        # 부호 없는 정수 출력
│   ├── print_x.c        # 16진수 출력
│   └── print_percent.c  # 퍼센트 기호 출력
├── obj/                 # 오브젝트 파일 디렉토리
├── Makefile             # 빌드 스크립트
└── README.md            # 이 파일
```

## 주요 함수

### `ft_printf`

```c
int ft_printf(const char *form, ...);
```

- 메인 함수
- 형식 문자열과 가변 인자를 받아 포맷팅된 출력을 생성한다
- 출력된 문자 수를 반환한다

### 내부 함수들

- `check_form`: 형식 문자열 유효성을 검사하는 함수
- `make_pl`: 플래그, 폭, 정밀도를 파싱하는 함수
- `print_and_count`: 변환 지정자에 따른 출력 함수를 호출하는 함수
- `print_c`, `print_s`, `print_p`, `print_d`, `print_u`, `print_x`, `print_percent`: 각 변환 지정자별 출력 함수

## 참고사항

- 이 구현은 42 School의 `ft_printf` 프로젝트 요구사항에 맞춰 작성되었다
- 표준 `printf`의 모든 기능을 지원하지는 않는다 (예: `+`, `#`, `l`, `h` 플래그 등)
- 메모리 관리는 `malloc`과 `free`를 사용한다
- 모든 출력은 `write` 시스템 콜을 통해 수행된다
