/*
## 문제 설명
매달 입금하는 금액과 저축하는 년수를 정수를 입력하여, 저축되는 총액을 출력하는 프로그램을 작성하시오. 
단, 이자는 무시하며, 한달에 입금할 수 있는 금액은 최대 1000만원, 년수는 30년으로 합니다. 
(힌트, 변수의 크기에 따른 오버플로 문제 해결 필요)

## 입력 예시
50000 20

## 출력 예시
12000000
*/

/*
#include <stdio.h>
int main(void)
{
    long long int saving, years;

    scanf("%lld %lld", &saving, &years);
    printf("%lld", saving * 12 * years);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    float radius, theta;
    
    scanf("%f %f", &radius, &theta);
    printf("%.2f", (3.14 * radius * radius * theta)/360);
    
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char ch;

    ch = getchar();
    printf("%d", ch);

    return 0;
}
*/

/*
## 문제 설명
사용자로부터 x의 값을 실수로 입력받아서 다음과 같은 다항식의 값을 계산하는 프로그램을 작성하라. 
(단, 출력은 소수점 2자리까지 반올림하여 표시하라. 예, 답이 80.487인 경우, 소수점 3번째자리의 값을 반올림하여 80.49가 됨.)
x의 값의 범위는 –100.0부터 +100.0임.
y=3.0x^3-7.0x^2+9

## 입력 예시
3.9

## 출력 예시
80.49
*/

/*
#include <stdio.h>
int main(void)
{
    double x,y;

    scanf("%lf", &x);
    y = 3.0 * x * x * x - 7.0 * x * x + 9;
    printf("%.2lf", y);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int a,b;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    printf("%d %d %c\n", a, b, c);

    return 0;
}
*/

/*
# 문제 설명
[교재 132쪽 Lab 수정]

교재의 프로그램에서 자동판매기가 500원짜리 동전도 추가로 보유하고
있어서 거스름돈에 포함된다고 가정하고, 수정 프로그램을 작성한다.

# 입력 예시
투입한 돈: 1000
물건 값: 240

# 출력 예시
거스름돈: 760

500원 동전의 개수: 1
100원 동전의 개수: 2
10원 동전의 개수: 6
*/

/*
#include <stdio.h>
int main(void)
{
    int money, price, return_m, coin_500, coin_100, coin_10;

    printf("투입한 돈: "); // 1000
    scanf("%d", &money);
    printf("물건 값: "); // 240
    scanf("%d", &price); 

    return_m = money - price; // 760
    coin_500 = return_m / 500; // 1
    return_m = return_m - coin_500 * 500; // 260
    coin_100 = return_m / 100; // 2
    return_m = return_m - coin_100 * 100; // 60
    coin_10 = return_m / 10; // 6


    printf("\n거스름돈: %d\n\n", money - price); // 760
    printf("500원 동전의 개수: %d\n", coin_500);
    printf("100원 동전의 개수: %d\n", coin_100);
    printf("10원 동전의 개수: %d\n", coin_10);

    return 0;
} 
*/

/*
# 문제 설명
[교재 158쪽 Programming 문제 6번]

교재의 문제 지시에 따라 프로그램을 작성한다.
단, 출력은 '합의 정수부'가 아니고 '정수부의 합'이다.

# 입력 예시 
2개의 실수를 입력하시오: 2.38 3.14

# 출력 예시
정수부의 합 = 5
*/

/*
#include <stdio.h>
int main(void)
{
    double x, y;
    printf("2개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    printf("정수부의 합 = %d\n", (int)x + (int)y);

    return 0;
}
*/

/*
다음 수식의 값을 계산하여서 화면에 출력하라. x 값은 사용자로부터 입력받는다.
f(x)=(x^3-20)/(x-7)

# 입력 예시
정수를 입력하시오: 10

# 출력 예시
수식의 값은 326.666667입니다.
*/

/*
#include <stdio.h>
int main(void)
{
    double x, y;
    printf("정수를 입력하시오: ");
    scanf("%lf", &x);

    y = (x * x * x - 20) / (x - 7);

    printf("수식의 값은 %lf입니다.\n", y);

    return 0;
}
*/

/*
세 자리로 이루어진 숫자를 입력받은 후에 각각의 자리수를 분리하고 이 자리수를 출력하는 프로그램을 작성하라.
# 입력 예시
정수를 입력하시오: 835

# 출력 예시
백의 자리수: 8
십의 자리수: 3
일의 자리수: 5
*/

/*
#include <stdio.h>
int main(void)
{
    int x, x_100, x_10, x_1;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    x_100 = x / 100;
    x_10 = (x % 100) / 10;
    x_1 = ((x % 100) % 10) / 1;

    printf("백의 자리수: %d\n", x_100);
    printf("십의 자리수: %d\n", x_10);
    printf("일의 자리수: %d\n", x_1);

    return 0;
}
*/

/*
사용자로부터 2개의 정수를 받아서 첫 번째 정수를 두 번째 정수로 나누었을 때의 몫과 나머지를 계산하는 프로그램을 작성하라.

# 입력 예시
첫 번째 정수를 입력하시오 : 11
두 번째 정수를 입력하시오 : 4

# 출력 예시
몫은 2이고 나머지는 3입니다.
*/

/*
#include <stdio.h>
int main(void)
{
    int x,y;
    printf("첫 번째 정수를 입력하시오 : ");
    scanf("%d", &x);
    printf("두 번째 정수를 입력하시오 : ");
    scanf("%d", &y);

    printf("몫은 %d이고 나머지는 %d입니다.\n", x / y, x % y);

    return 0;
}
*/

/*
교재의 프로그램에서 투자원금, 이율(%), 투자기간을 직접 입력한다고
가정하고, 수정 프로그램을 작성한다.
단, 이율은 백분율(%) 정수로 입력한다. 즉 이율 6%이면 6을 입력한다.

# 입력 예시
투자원금 : 24
이율(%) : 6
투자기간 : 10

# 출력 예시
10년 후의 원리금 = 42.980345
*/

/*
#include <stdio.h>
#include <math.h>
int main(void)
{
    double money, interest, period;

    printf("투자원금 : ");
    scanf("%lf", &money);
    printf("이율(%%) : ");
    scanf("%lf", &interest);
    printf("투자기간 : ");
    scanf("%lf", &period);

    interest = interest * (1.0/ 100.0);
    money = money * pow(1.0 + interest, period);

    printf("%.0lf년 후의 원리금 = %lf\n", period, money);

    return 0;
}
*/

/*
문자를 입력받아서 대문자인지 소문자인지 출력하는 프로그램을 작성한다.
단, 입력 문자가 영문자가 아니면 “영문자 아님”이라고 출력한다.

# 입력 예시 1
A

# 출력 예시 1
대문자

# 입력 예시 2
m

# 출력 예시 2
소문자

# 입력 예시 3
3

# 출력 예시 3
영문자 아님
*/

/*
#include <stdio.h>
int main(void)
{
    char x;
    scanf("%c", &x);

    if(x >= 'A' && x <= 'Z')
        printf("대문자\n");
    else if(x >= 'a' && x <= 'z')
        printf("소문자\n");
    else 
        printf("영문자 아님\n");
    return 0;
}
*/

/*
양의 정수를 입력받아서 3의 배수인 동시에 4의 배수이면 “YES”를 출력하고,
그렇지 않으면 “NO”를 출력한다.
만약 입력한 정수가 양수가 아니면 “Wrong input”이라고 출력한다.

# 입력 예시 1
12

# 출력 예시 1
YES

# 입력 예시 2
25

# 출력 예시 2
NO

# 입력 예시 3
-24

# 출력 예시 3
Wrong input
*/

/*
#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);

    if(x % 3 == 0 && x % 4 == 0 && x != 0 && x > 0)
        printf("YES\n");

    else if(x <= 0)
        printf("Wrong input\n");

    else 
        printf("NO\n");

    return 0;
}
*/

/*
사용자로부터 입력받은 서로 다른 3개의 정수 중에서 크기가 중간인 수를 찾는
프로그램을 작성한다.

# 입력 예시 1
20 10 30

# 출력 예시 1
20

# 입력 예시 2
-5 9 0

# 출력 예시 2
0

# 입력 예시 3
200 13 40

# 출력 예시 3
40
*/

/*
#include <stdio.h>
int main(void)
{
    int a, b, c, middle;
    scanf("%d %d %d", &a, &b, &c); // a = 20, b = 10, c = 30

    if ((b < a && a < c) || (c < a && a < b)) middle = a;
    if ((a < b && b < c) || (c < b && b < a)) middle = b;
    if ((a < c && c < b) || (b < c && c < a)) middle = c;

    printf("%d\n", middle);

    return 0;
}
*/

/*
연도와 달이 입력되면 그 달의 일수를 출력한다. 단, 윤년도 고려해야 한다.

# 입력 예시 1
2022 3

# 출력 예시 1
31

# 입력 예시 2
2096 2

# 출력 예시 2
29

# 입력 예시 3
2021 11

# 출력 예시 3
30
*/

/*
#include <stdio.h>
int main(void)
{
    int year, month, days;

    scanf("%d %d", &year, &month);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // 윤년 : (연도가 4로 나누어 떨어지는 경우와 연도가 100으로 나누어 떨어지지 않는 경우를 동시에 모두 만족한 해) 혹은 (연도가 400으로 나누어 떨어지는 경우)
    {
        switch (month) // switch를 사용하여 월별 일수 경우 따짐
        {
        case 2: 
            days = 29; // 윤년의 2월의 경우 29일
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
    }

    else // 윤달 : 존재하는 모든 연도 중 위의 if문의 윤년 조건을 제외한 모든 연도
    {
        switch (month)
        {
        case 2: 
            days = 28; // 윤달은 2월이 28일
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
        }
    }
    

    printf("%d\n", days); // 입력받은 연도와 달의 일수를 출력

    return 0;
}
*/

/*
양수 정수를 입력 받고 팩토리얼 계산을 출력하는 코드를 작성하라. 
출력 예시를 확인하고 팩토리얼 값이 아닌 계산하는 법을 출력하라.

//입력 출력 예시 1. 입력은 1이고 1*1가 출력이다.
1
1*1

//입력 출력 예시 2
3
1*1*2*3

//입력 출력 예시 3
4
1*1*2*3*4
*/

/*
홀수를 입력 받아, 홀수 크기의 피라미드를 그려보자. 
피라미드는 마이너스와 곱하기 문자를 사용한다.

//입력 출력 예시 1
5
--*--
-***-
*****

//입력 출력 예시 2
7
---*---
--***--
-*****-
*******
*/

/*
// chat gpt 참고함. 계속 생각하고 고민해보기. 
#include <stdio.h>
int main(void) 
{
    int num, i, j, k;
    scanf("%d", &num);

    for (i = 1; i <= num; i += 2) // 각 줄의 길이는 2씩 증가
    {   
        for (j = 0; j < (num - i) / 2; j++) 
        { // 왼쪽 공백 출력
            printf("-");
        }
        for (k = 0; k < i; k++) 
        { // 피라미드 출력
            printf("*");
        }
        for (j = 0; j < (num - i) / 2; j++) 
        { // 오른쪽 공백 출력
            printf("-");
        }
        printf("\n"); // 줄바꿈
    }

    return 0;
}
*/

/*
unsigned 정수를 입력 받고 정수 크기의 네모를 그리시오. 문자 A와 B를 사용.

//입력 출력 예시 1
5
AAAAA
ABBBA
ABBBA
ABBBA
AAAAA

//입력 출력 예시 2
4
AAAA
ABBA
ABBA
AAAA
*/

/*
// 내가 직접 고민해서 풀었음 
#include <stdio.h>
int main(void)
{
    int input, i, j, k;
    scanf("%d", &input);

    for(i = 1; i <= input; i++)
    {
        printf("A");
    }
    printf("\n");
    
    for(j = 0; j < input -2; j++)
    {
        printf("A");
        for(k = 0; k < input - 2; k++)
        {
            printf("B");
        }
        printf("A");
        printf("\n");
    }

    for(i = 1; i <= input; i++)
    {
        printf("A");
    }
    printf("\n");
    return 0;
}
*/

/*
Unsigned 정수를 입력 받아 받은 수의 소수를 2부터 출력하라.
예시: 5를 입력 받으면 5개의 소수를 출력, 2 3 5 7 11.

//입력 출력 예시 1
5
2 3 5 7 11

//입력 출력 예시 2
3
2 3 5

//입력 출력 예시 3
8
2 3 5 7 11 13 17 19
*/

/*
// 이해x 수요일에 같이 풀어보기
#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a); 
    int number = 2; 
    int prime_count = 0; 
    while (prime_count < a) 
    {
        int is_prime = 0; 
        for (int i = 1; i <= number; i++) 
        {
            if (number % i == 0) 
            {
                is_prime++; 
            }
        }
        if (is_prime <= 2) 
        {
            printf("%d ", number); 
            prime_count++; 
        }
        number++; 
    }
    printf("\n");
    return 0;
}
*/

/*
양수 정수를 입력 받고 팩토리얼 계산을 출력하는 코드를 작성하라. 
출력 예시를 확인하고 팩토리얼 값이 아닌 계산하는 법을 출력하라.

//입력 출력 예시 1. 입력은 1이고 1*1가 출력이다.
1
1*1

//입력 출력 예시 2
3
1*1*2*3

//입력 출력 예시 3
4
1*1*2*3*4
*/

// 내가 직접 고민해서 기프 시간에 품
/*
#include <stdio.h>
int main(void)
{
    int input, i, j;
    scanf("%d", &input);

    printf("1*");
    for(i = 1; i <= input; i++)
    {
        printf("%d", i);

        if(i < input)
        {
            printf("*");
        }
    }
    printf("\n");
    return 0;
}
*/

/*
## 문제 설명 
교재의 프로그램에서 최솟값 대신에 최댓값을 찾고 그 최댓값의 개수도 함께 찾아서 출력하는 프로그램을 작성해보자. 
단, 물건의 개수는 5개로 고정하고 물건의 가격은 키보드로부터 입력한다.


# 입력 예시 1
20 30 70 40 70

# 출력 예시 1
70 2


# 입력 예시 2
7 8 13 10 1

# 출력 예시 2
13 1


# 입력 예시 3
30 30 10 20 30

# 출력 예시 3
30 3
*/

/*
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i, j, count_max = 0, count_min = 0;
    int prices[SIZE]; 

    printf("물건 다섯개의 가격을 입력해 주세요 : ");
    scanf("%d %d %d %d %d", &prices[0], &prices[1], &prices[2], &prices[3], &prices[4]);

    int maximum = prices[0];
    int minimum = prices[0];

    for(i = 1; i < SIZE; i++)
    {
        if(prices[i] > maximum)
        {
            maximum = prices[i];
        }
    }

    for(i = 0; i < SIZE; i++)
    {
        if(prices[i] == maximum)
        {
            count_max++;
        }
    }

    for(i = 1; i < SIZE; i++)
    {
        if(prices[i] < minimum)
        {
            minimum = prices[i];
        }
    }

    for(i = 0; i < SIZE; i++)
    {
        if(prices[i] == minimum)
        {
            count_min++;
        }
    }

    printf("최댓값 : %d, 최댓값의 개수 : %d\n", maximum, count_max);
    printf("최솟값 : %d, 최솟값의 개수 : %d\n", minimum, count_min);

    return 0;
}
*/


/*
## 문제 설명 
길이가 10인 배열이 있다. 이 배열에서 최댓값의 인덱스를 찾는 프로그램을 작성해보자.
인덱스는 0부터 시작한다. 키보드로부터 10개의 배열의 값들을 입력받고, 인덱스를 출력한다.
최댓값이 여러 개인 경우에는 가장 작은 인덱스를 출력한다.

## 입력 예시 1
10 9 8 7 6 5 4 3 2 1

## 출력 예시 1
0

## 입력 예시 2
1 1 1 1 1 2 2 2 2 2

## 출력 예시 2
5

## 입력 예시 3
7 8 9 10 11 7 8 9 10 5

## 출력 예시 3
4
*/

/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, j;
    int array[SIZE];

    scanf("%d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);

    int maximum = array[0];
    for(i = 1; i < SIZE; i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }

    }

    for(i = 0; i < SIZE; i++)
    {
        if(maximum == array[i])
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
*/

// 버블정렬 내림차순
/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, j;
    int array[SIZE];

    scanf("%d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);
    
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(array[j + 1] > array[j])
            {
                int tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp; 
            }
        }
    }
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/

// 버블정렬 오름차순(oj 7장 문제 중 하나)
/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, j;
    int array[SIZE];

    scanf("%d %d %d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7], &array[8], &array[9]);
    
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp; 
            }
        }
    }
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
## 문제 설명
사용자로부터 구구단 중 하나의 단을 키보드로부터 입력받아 그 단을 출력한다.


## 입력 예시 1
3

## 출력 예시 1
3 X 1 = 3
3 X 2 = 6
3 X 3 = 9
3 X 4 = 12
3 X 5 = 15
3 X 6 = 18
3 X 7 = 21
3 X 8 = 24
3 X 9 = 27
*/

/*
// 이렇게 풀었더니 oj에서 wrong answer 뜸.
#include <stdio.h>
#define SIZE 9
int main(void)
{
    int x, i, j;
    int time[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    scanf("%d", &x);

    for(i = 0; i < SIZE; i++)
    {
        printf("%d x %d = %d\n", x, time[i], x * time[i]);
    }

    return 0;
}
*/

// 해답지 보니 단순 반복문으로 풀어야 하는 듯. -> 수정) oj 문제인듯.
/*
#include <stdio.h>
int main(void)
{
    int i, j;
    scanf("%d", &i);

    for(j = 1; j < 10; j++)
    {
        printf("%d x %d = %d\n", i, j, i * j);
    }
    return 0;
}
*/

/*
## 문제 설명
학생들의 숫자와 성적을 입력받고, 성적의 평균을 계산하는 프로그램을 작성해보자. 학생의 숫자를 가장 먼저 입력받으며, 학생의 숫자는 1보다는 크고 100보다 작은 숫자이다. 학생의 숫자 다음에 나오는 숫자들이 학생들의 성적이다. 성적은 모두 정수형으로 처리하며 평균도 정수형으로 출력한다.


## 입력 예시 1
5 8 9 10 11 12

## 출력 예시 1
10


## 입력 예시 2
10 10 20 30 40 50 60 70 80 90 100

## 출력 예시 2
55


## 입력 예시 3
3 50 70 90

## 출력 예시 3
70
*/

/*
#include <stdio.h>
#define STUDENTS 100 // 학생의 숫자는 1보다 크고 100보다 작은 숫자이므로
int main(void)
{
    int i, num, sum = 0; // 성적 총 합 0으로 초기화
    int score[STUDENTS];

    scanf("%d ", &num); // 학생 수 입력받기

    for(i = 0; i < num; i++) // 입력받은 학생 수 만큼 반복
    {
        scanf("%d ", &score[i]); // 0번째 학생부터 num - 1번째 학생까지 각각의 성적 입력받기
        sum = sum + score[i]; // 한 명씩 입력 받을 때 마다 sum에 더해줌
    }
    printf("%d\n", sum / num); // 성적 총 합 / 전체 학생 수

    return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 6
int main(void)
{
    int i, j;
    int array[SIZE];

    scanf("%d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);
    
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp; 
            }
        }
    }
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
## 문제 설명
1보다 크거나 같은 홀수 N을 입력받아, N x N의 크기를 가지는 2차원 배열을 선언하고, 대각선에 있는 배열값들만 합하여 출력하는 프로그램을 작성해보자. 배열들의 값들은 1부터 순서대로 초기화한다. (N의 크기는 100보다는 작다.)

예를 들어 3을 입력한다면,

1 2 3
4 5 6
7 8 9

와 같이 배열에 저장한 후 대각선의 값인 1+5+9 = 15를 출력하는 프로그램을 작성한다.


## 입력 예시 1
3

## 출력 예시 1
15


## 입력 예시 2
5

## 출력 예시 2
65
*/

/*
#include <stdio.h>
int main(void)
{
    int size, i, j, k = 1;

    scanf("%d", &size); // 배열 사이즈 입력 받음

    int array[size][size]; // 입력 받은 사이즈로 배열 선언

    for(i = 0; i < size; i++) // i는 행을 의미
    {
        for(j = 0; j < size; j++) // j는 열을 의미
        {
            array[i][j] = k; // i행 j열의 값은 k. k는 초기값 1이고 계속 ++됨
            k++;
        }
    } // 배열 완성

    int sum = 0; // 대각선 값 총합 0으로 초기화

    for(i = 0; i < size; i++) // i는 행과 열 모두 의미. 0행 0열 -> 1행 1열 -> 2행 2열 . . . 이런 식으로 증가되면 대각선 값을 전부 더할 수 있음 
    {
        sum += array[i][i]; // sum에다가 대각선 값을 계속 더해줌 
    }

    printf("%d\n", sum);

    return 0;
}
*/

/*
6개의 숫자를 입력받아 오름차순이 되도록 정렬하시오.

입력예시 1
5 4 3 2 1 0
출력예시 1
0 1 2 3 4 5

입력예시 2
7 9 1 4 7 3
출력예시 2
1 3 4 7 7 9
*/

#include <stdio.h>
#define SIZE 6
int main(void)
{
    int i, j;
    int array[SIZE];

    for(i = 0; i < SIZE; i++)
    {
    scanf("%d", &array[i]);
    }

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}