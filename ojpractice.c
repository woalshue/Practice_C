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

/*
int형 변수 a, b에 각각 숫자를 입력받고 swap() 함수를 호출하였을 때
저장된 값이 바뀌어 출력되는 코드를 작성하시오.

입력예제 1
5 6
출력예제 1
6 5

입력예제 2
8 1
출력예제2
1 8
*/

/*
#include <stdio.h>
void swap(int *a, int *b); // 함수 선언

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);

    swap(&x, &y); // swap()함수의 파라미터로 x의 주소, y의 주소 줌

    printf("%d %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) // main 함수에서 swap함수를 호출할 때 파라미터로 준 x, y의 주소가 넘어옴. 여기서는 파라미터가 주소값으로 쓰임.  *a, *b 즉 포인터가 가리키는 값인 x, y 값이 넘어옴
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
*/

/*
팩토리얼(!)은 다음과 같이 정의된다.
n! = n * (n-1) * (n-2) * ... * 2 * 1
즉, 5! = 5 * 4 * 3 * 2 * 1 = 120 이다.
n이 입력되면 n!의 값을 출력하시오.

* 재귀 함수를 사용하여 풀기
입력 예시 1
5
출력 예시 1
120
입력 예시 2
3
출력 예시 2
6
*/

/*
#include <stdio.h>
int factorial(int n);

int main(void)
{
    int x, result;
    scanf("%d", &x);

    result = factorial(x);

    printf("%d\n", result);

    return 0;
}

int factorial(int n)
{
    if(n <= 1)
        return 1;

    else
        return n * factorial(n - 1);
}
*/

/*
팩토리얼(!)은 다음과 같이 정의된다.
n! = n * (n-1) * (n-2) * ... * 2 * 1
즉, 5! = 5 * 4 * 3 * 2 * 1 = 120 이다.
n이 입력되면 n!의 값을 출력하시오.

* 재귀 함수를 사용하지 않고 풀기

입력 예시 1
5
출력 예시 1
120
입력 예시 2
3
출력 예시 2
6
*/

/*
#include <stdio.h>
int factorial(int n);

int main(void)
{
    int x, result;

    scanf("%d", &x);

    result = factorial(x);

    printf("%d\n", result);

    return 0;
}

int factorial(int n)
{
    int fac = 1;

    for(int i = n; i > 0; i--)
    {
        fac = fac * i;
    }

    return fac;
}
*/

/*
## 문제 설명
크기가 n(<=10)인 정수형 배열 v의 원소들을 오름차순 혹은 내림차순으로 정렬하는 함수
void sort_array(int *v, int n, int m)을 작성하라. 
함수에서 v는 배열의 이름, n은 배열의 크기이며, m은 0또는 1의 값을 갖는다.
0은 오름차순을 의미하며, 1은 내림 차순을 의미한다.
입력의 첫 번째 줄은 n(배열의 크기)과 m(오름 차순 또는 내림 차순)이며 두 번째 줄은 배열의
n개의 데이터가 입력된다.

## 입력 예시 
5 0
12 25 45 65 23

## 출력 예시 
12 23 25 45 65

## 입력 예시 
5 1
12 25 45 65 23

## 출력 예시 
65 45 25 23 12

## 입력 예시 
3 1
-58 -65 -63

## 출력 예시 
-58 –63 -65
*/

/*
#include <stdio.h>
void sort_array(int *v, int n, int m);

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    sort_array(v, n, m);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

void sort_array(int *v, int n, int m)
{
    if (m == 0) // 0 이면 오름차순
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[j] > v[j + 1])
                {
                    int tmp = v[j]; // int tmp = *(v + j); 이렇게 써도 같음. 
                    v[j] = v[j + 1];
                    v[j + 1] = tmp;
                }
            }
        }
    }

    else if (m == 1) // 1 이면 내림차순 
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[j] < v[j + 1])
                {
                    int tmp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = tmp;
                }
            }
        }
    }
}
*/

/*
## 문제 설명
크기가 5인 정수 배열을 입력받고, 포인터를 이용하여 배열에 저장된 값을 역순으로 출력하는 프로그램을 작성하라.
반드시 포인터를 이용하는 프로그램을 작성하라.

## 입력 예시 
1 2 3 4 5

## 출력 예시 
5 4 3 2 1

## 입력 예시 
25 36 86 95 45

## 출력 예시 
45 95 86 36 25
*/

/*
#include <stdio.h>
#define SIZE 5
void array_reverse(int *arr);

int main(void)
{
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    array_reverse(arr); // array_reverse(&arr[0]) 이렇게 써도 됨. arr 배열의 첫 번째 값의 주소를 전달한 것과 주소 자체인 arr을 전달하는 것은 같음. 

    return 0;
}

void array_reverse(int *arr)
{
    for(int i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/

/*
## 문제 설명
5개의 원소를 갖는 1차원 배열을 받아서 배열 요소들의 합을 계산하는 함수
int get_arry_sum(int *A, int size)을 구현하고 합을 출력하는 프로그램을 작성하라.

## 입력 예시 
50 -69 85 20 -100

## 출력 예시 
-14

## 입력 예시
1 2 3 4 5

## 출력 예시 
15
*/

/*
#include <stdio.h>
#define SIZE 5
int get_arry_sum(int *A, int size);

int main(void)
{
    int array[SIZE]; // 1차원 배열 선언

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]); // 사용자로부터 입력받음
    }

    int sum = get_arry_sum(array, SIZE);

    printf("%d\n", sum);

    return 0;
}

int get_arry_sum(int *A, int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += A[i]; // sum += *(A + i); 이렇게 써도 됨. A 배열의 0번째 값의 주소로부터 i 만큼 떨어져있는 주소의 값
    }

    return sum;
}
*/

/*
## 문제 설명
크기가 5인 int형 배열 v의 원소를 입력받고 원소의 평균과 표준편차를 출력하는 함수
double get_array_avg(int *v, int n), double get_array_std(int *v, double avg, int n) 함수를 작성하라.
get_array_std 함수의 매개변수는 배열, 평균, 배열의 크기이다.
평균과 표준편차를 출력하여라. (출력은 소수점 2자리까지 반올림하여 출력)

표준편차 구하는 공식
1. 데이터의 평균을 계산한다.
2. 각 데이터 포인트에서 평균을 뺀 차이값(편차, deviation)을 계산합니다.
3. 편차의 제곱을 계산합니다.
4. 편차 제곱의 평균을 계산합니다. 
5. 편차 제곱의 평균의 양의 제곱근을 구하면 표준편차가 됩니다. 

## 입력 예시 
10 20 30 40 50

## 출력 예시 
30.00 14.14

## 입력 예시 
5 6 3 2 1

## 출력 예시 
3.40 1.85
*/

/*
#include <stdio.h>
#include <math.h>
#define SIZE 5

double get_array_avg(int *v, int n); 
double get_array_std(int *v, double avg, int n);

int main(void)
{
    int array[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    double average = get_array_avg(&array[0], SIZE);
    double standard_deviation = get_array_std(array, average, SIZE);

    printf("%.2lf %.2lf\n", average, standard_deviation);

    return 0;
}

double get_array_avg(int *v, int n)
{
    double sum = 0.0; // 합을 실수형으로 초기화

    for(int i = 0; i < SIZE; i++)
    {
        sum += v[i];
    }

    double average = sum / n;

    return average;
}

double get_array_std(int *v, double avg, int n)
{
    double deviation[n]; // 편차의 제곱 배열
    double deviation_pow_sum = 0; // 편차의 제곱들의 합 초기화 

    for(int i = 0; i < n; i++)
    {
        deviation[i] = pow(v[i] - avg, 2); // 편차의 제곱을 배열에 저장하고
        deviation_pow_sum += deviation[i]; // 편차의 제곱들을 편차의 제곱들의 합 변수에 더해감
    }

    double std = sqrt(deviation_pow_sum / n); // 편차의 제곱들의 합을 n으로 나누어 평균을 구하고, 해당 평균에 제곱근을 씌워 std 변수에 저장

    return std;
}
*/

/*
## 문제 설명
사용자로부터 5개의 정수를 입력받아 배열에 저장한다. 포인터 변수 pt를 선언하고 pt에 배열의 주소값을 입력한다.
이후 포인터를 이용하여 배열 각 원소의 값을 모두 더하여 출력하는 프로그램을 작성하라. 
(반드시 포인터를 이용하여 배열의 값을 더하는 프로그램이 작성되어야 한다.) 

## 입력 예시
5 10 20 30 60

## 출력 예시
125

## 입력 예시
6 3 5 8 1

## 출력 예시
23
*/

/*
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int array[SIZE]; 

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    int *pt; // 포인터 변수 pt 선언
    pt = array; // pt 에 배열 array 의 주소값 입력. array라는 배열의 이름 자체가 주소이기 때문에 array 입력해줌. 

    int sum = 0;
    for(int i = 0; i < SIZE; i++)
    {
        sum += pt[i]; 
        // *&pt[i] 라 써도 됨. pt 가 담고있는 array 배열 주소로 가서 i 번째의 주소의 값 을 뜻하므로. 
        // *(pt + i) 라 써도 됨. pt 가 담고있는 array 배열 주소로 가서 0번째 주소부터 i만큼 떨어져 있는 주소의 값 을 뜻하므로 
    }

    printf("%d\n", sum);

    return 0;
}
*/

/*
1부터 50사이의 정수를 순서대로 10개 입력 받는다(1부터 50사이의 수가 아니면 반복한다). 
void swap(int *px, int *py) 함수를 작성하고 이를 이용하여 입력받은 10개의 수를 증가하는 순으로 출력하는 프로그램을 작성하라. 

## 입력 예시
15 28 14 19  36 23 9 3 1 47

## 출력 예시
1 3 9 14 15 19 23 28 36 47

## 입력 예시
1 2 3 4 5 6 7 8 9 1

## 출력 예시
1 1 2 3 4 5 6 7 8 9
*/

/*
#include <stdio.h>
#define SIZE 10
void swap(int *px, int *py);

int main(void)
{
    int array[SIZE], i, j;

    for(i = 0; i < SIZE; i++)
    { 
        do{
            scanf("%d", &array[i]); // 적어도 한 번은 실행하는 do - while 문의 장점을 이용하여 array[i]에 들어갈 숫자를 입력받되, 
        } while(array[i] < 1 || array[i] > 50); // 입력받은 숫자가 1보다 작거나 혹은 50 보다 클 때, 실행문을 반복. 이때 i 값은 계속 유지되므로 문제x 
    }

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE - 1; j++)
        {
            if(array[j] > array[j + 1]) // 버블정렬
            {
                swap(&array[j], &array[j + 1]); // array 배열의 j 번째의 주소와 j + 1 번째의 주소를 파라미터로 넘김
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

void swap(int *px, int *py) // 넘겨받은 주소의 값으로 받음 
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}
*/

/*
단어 10개를 입력하고 찾는 단어를 입력해서 10개의 단어 중에 찾는 단어가 몇 개인지 출력하는 코드를 작성하라. 
입출력 예시를 참고하고 strcmp를 사용해보자.

//입출력 예시 1, Find:, 2 number of I가 출력이다.
hello world I love c coding is best I think
Find: I
2 number of I

//입출력 예시 2
My cat's name is foot foot he likes mice foot
Find: foot
3 number of foot

//입출력 예시 3
I'm Mojojojo that is my name it's what I'm called
Find: I'm
2 number of I'm

//입출력 예시 4
one two three four five six seven eight nine ten
Find: zero
0 number of zero
*/

/*
#include <stdio.h>
#include <string.h>
#define SIZE 10
int main(void)
{
    char str[SIZE][50];
    int i, j = 0;

    for(i = 0; i < SIZE; i++)
    {
        scanf("%s", (char *)str[i]); // (char *)&str[i] 이렇게 해도 됨. str 배열의 i 행의 주소의 값. 
    }

    char seg[20];
    printf("Find : ");
    scanf("%s", seg);

    for(i = 0; i < SIZE; i++)
    {
        if(strcmp(seg, str[i]) == 0)
            j++;
    }

    printf("%d number of %s\n", j, seg);

    return 0;
}
*/

/*
## 문제 설명
삼각형, 사각형, 원을 동시에 표현할 수 있는 공용체를 사용하라. 
삼각형은 밑변과 높이, 사각형은 가로와 세로, 원은 반지름만 저장하도록 하라. 

현재의 공용체가 표현하고 있는 도형의 종류는 열거형 변수를 이용하여 나타내라. 
도형의 종류와 도형의 데이터를 입력 받아, 도형의 면적을 계산하는 프로그램을 작성하라.
원의 면적을 계산할 때 는 3.14로 계산한다.

- 조건1: 공용체를 사용해야 함.
- 조건2: 열거형 변수를 사용해야 함.

아래의 코드 힌트를 사용할 것.

## 입력
- 첫 번째 줄은 도형의 타입이 주어진다. 
0은 삼각형, 1는 사각형, 2는 원을 의미한다.

- 두번째 줄은 도형별 데이터가 주어진다. 
삼각형의 경우: 밑변 높이 
사각형의 경우: 가로 세로
원의 경우: 반지름

## 출력
도형의 면적

## 입력 예시 1
0
10.0 5.0

## 출력 예시 1
25.000000

## 입력 예시 2
1
4.0 4.0

## 출력 예시 2
16.0000000

## 입력 예시 3
2
5.0

## 출력 예시 3
78.500000

## 코드 힌트

enum type {TRI, REC, CIR};

struct Triangle {
	double w;
	double h;
};
struct Rectangle {
	double x;
	double y;
};
struct Circle {
	double r;
};
union P {
	struct Triangle T;
	struct Rectangle R;
	struct Circle C;
};
struct Polygon {
	enum type kind;
	union P poly;
};
int main()
{
    ???
    ???

    return 0;
}
*/

/*
#include <stdio.h>

enum type { TRI, REC, CIR }; // 열거형 type 에는 삼각형 사각형 원 이 들어있음

struct Triangle
{
    double w; // 밑변
    double h; // 높이
};

struct Rectangle 
{
    double x; // 가로
    double y; // 세로
};

struct Circle
{
    double r; // 반지름
};

union P
{
    struct Triangle T; // 구조체 Triangle 형 T 변수가 멤버로 있음
    struct Rectangle R; 
    struct Circle C;
};

struct Polygon // 다각형 구조체
{
    enum type kind; // 열거형 type 형 kind 변수가 멤버로 있음
    union P poly; // 공용체 P 형 poly 변수가 멤버로 있음
};

int main(void)
{
    struct Polygon shape; // 구조체 Polygon 형 shape 변수 선언
    double surface; // 넓이 
    // printf("도형의 타입을 입력하시오 (0 : 삼각형, 1 : 사각형, 2 : 원) : ");
    scanf("%d", &shape.kind); // kind 에는 0, 1, 2 중 하나가 담김

    if(shape.kind == TRI) // 삼각형이면
    {
        // printf("삼각형의 밑변과 높이를 입력해 주십시오 : ");
        scanf("%lf %lf", &shape.poly.T.w, &shape.poly.T.h);

        surface = shape.poly.T.w * shape.poly.T.h * (1.0 / 2.0);
    }

    else if(shape.kind == REC)
    {
        // printf("사각형의 가로와 세로를 입력해 주십시오 : ");
        scanf("%lf %lf", &shape.poly.R.x, &shape.poly.R.y);

        surface = shape.poly.R.x * shape.poly.R.y;
    }

    else if(shape.kind == CIR)
    {
        // printf("원의 반지름을 입력해 주십시오 : ");
        scanf("%lf", &shape.poly.C.r);

        surface = shape.poly.C.r * shape.poly.C.r * 3.14;
    }

    printf("%lf\n", surface);
}
*/

/*
## 문제 설명
구조체를 이용하여 현재 시각을 표현한다.

사용자로부터 2개의 시각을 입력 받아서,
두 시각 사이의 차이를 계산하여,
출력하는 프로그램을 작성한다.

단, 입력 받는 2개의 시각은 어떤 것이 먼저이고
어떤 것이 나중인지 모른다.

즉, 첫 번째 입력으로 주어지는 시각이
두 번째로 주어지는 시각보다 나중의 시간일 수 있다.

시로 주어지는 숫자는 0보다 크고 23보다 작다.
분으로 주어지는 숫자는 0보다 크고 59보다 작다.
초로 주어지는 숫자는 0보다 크고 59보다 작다.

## 입력
시 분 초
시 분 초

## 출력
시 분 초

## 입력 예시 1
1 10 20
3 20 30

## 출력 예시 1
2 10 10

## 입력 예시 2
3 20 30
1 10 20

## 출력 예시 2
2 10 10
*/

/*
#include <stdio.h>
#include <stdlib.h>
struct time
{
	int hour;
	int min;
	int sec;
};

struct time get_diff(struct time x, struct time y);

int main(void)
{
	struct time t1;
	struct time t2;

	scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
	scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

	struct time result = get_diff(t1, t2);

	printf("%d %d %d\n", result.hour, result.min, result.sec);

	return 0;
}

struct time get_diff(struct time x, struct time y)
{
	struct time diff;

	diff.hour = abs(x.hour - y.hour);
	diff.min = abs(x.min - y.min);
	diff.sec = abs(x.sec - y.sec);

	return diff;
}
*/


/* ## 문제 설명
직원을 나타내는 구조체 employee가
이름(영문 문자열), 사번(정수), 전화번호(숫자 문자열), 나이(정수) 등으로 구성된다.

다음의 직원 10명의 정보를 구조체 배열로 저장하고,
주어진 검색 조건에 따라 검색의 결과를 출력하는 프로그램을 작성하자.

Jeon 123 2345-7890 32
Kim 125 3458-9990 22
Lee 133 7345-9870 45
Bae 140 5321-1234 54
Kang 205 4916-5052 48
Lee 245 2039-3458 25
Kim 777 4708-2323 34
Smith 900 6408-3298 39
Park 428 3482-9283 21
Kim 973 8934-2738 25

## 입력
입력은 아래의 포맷으로 구성된다.
{검색의 종류} {각 검색 종류에 따른 검색 조건}

{검색 종류}는 아래의 숫자 중 하나이며,
각 번호는 이름, 사번, 전화번호, 나이의 범위를 의미한다.
1 --> 이름, 2 --> 사번, 3 --> 전화번호, 4 --> 나이의 범위

{각 검색 종류에 따른 검색 조건}의 형식은 아래와 같다.
1 Kim --> Kim이란 이름을 가진 사람을 모두 찾아, 그 사람들의 정보를 출력
2 133 --> 사번 133을 가진 사람을 찾아, 그 사람의 정보를 출력
3 5321-1234 전화번호 5341-1234를 가진 사람을 찾아 그 사람의 정보를 출력
4 20 30 --> 나이 20살 이상 30살 이하의 사람들을 찾아 그 사람들의 정보를 출력

## 출력
검색 조건에 맞는 사람 또는 사람들의 정보를 출력,
해당 조건에 맞는 사람이 없을 때는 -1을 출력한다.

## 입력 예제 1
1 Kim

## 출력 예제 1
Kim 125 3458-9990 22
Kim 777 4708-2323 34
Kim 973 8934-2738 25

## 입력 예제 2
4 20 30

## 출력 예제 2
Kim 125 3458-9990 22
Lee 245 2039-3458 25
Park 428 3482-9283 21
Kim 973 8934-2738 25
 */

/*
#include <stdio.h>
#include <string.h>
#define SIZE 10
struct employee
{
	char name[30];
	int cor_num;
	char p_num[20];
	int age;
};

int main(void)
{
	struct employee emp[SIZE] = {
			{ "Jeon", 123, "2345-7890", 32 },
			{ "Kim" , 125 , "3458-9990" , 22 },
			{ "Lee" , 133 , "7345-9870" , 45 },
			{ "Bae" , 140 , "5321-1234" , 54 },
			{ "Kang" , 205 , "4916-5052" , 48 },
			{ "Lee" , 245 , "2039-3458" , 25 },
			{ "Kim" , 777 , "4708-2323" , 34 },
			{ "Smith" , 900 , "6408-3298" , 39 },
			{ "Park" , 428 , "3482-9283" , 21 },
			{ "Kim" , 973 , "8934-2738" , 25 }
	};

	int num, i;
	char search_name[30];
	int search_cor_num;
	char search_p_num[20];
	int age_min, age_max;

	scanf("%d", &num);

	if(num == 1)
	{
		scanf("%s", search_name);

		for(i = 0; i < SIZE; i++)
		{
			if(strcmp(search_name, emp[i].name) == 0)
			{
				printf("%s %d %s %d\n", emp[i].name, emp[i].cor_num, emp[i].p_num, emp[i].age);
			}
		}
	}

	else if(num == 2)
	{
		scanf("%d", &search_cor_num);

		for(i = 0; i < SIZE; i++)
		{
			if(search_cor_num == emp[i].cor_num)
			{
				printf("%s %d %s %d\n", emp[i].name, emp[i].cor_num, emp[i].p_num, emp[i].age);
			}
		}
	}

	else if(num == 3)
	{
		scanf("%s", search_p_num);

		for(i = 0; i < SIZE; i++)
		{
			if(strcmp(search_p_num, emp[i].p_num) == 0)
			{
				printf("%s %d %s %d\n", emp[i].name, emp[i].cor_num, emp[i].p_num, emp[i].age);
			}
		}
	}

	else if(num == 4)
	{
		scanf("%d %d", &age_min, &age_max);

		for(i = 0; i < SIZE; i++)
		{
			if(emp[i].age >= age_min && emp[i].age <= age_max)
			{
				printf("%s %d %s %d\n", emp[i].name, emp[i].cor_num, emp[i].p_num, emp[i].age);
			}
		}
	}

	else
		printf("%d", -1);

	return 0;
}
*/

/*
## 문제 설명
두 개의 복소수를 더하는 프로그램을 작성해 보자.
단, 복소수를 구조체로 정의하고 구현하라. a, b, c, d는 실수이다.

a+bi와 c+di의 덧셈은 다음과 같다.
(a + bi) + (c + di) = (a + c) + (b + d)i

## 입력
입력은 아래와 같이 주어진다.
첫번째 줄에는 첫번째 복소수가
두번째 줄에는 두번째 복소수가 아래의 형식으로 주어진다.
(복소수 입력에는 공백이 없음)

a+bi
c+di

## 출력
(a+c)+(b+d)i
(복소수 출력에도 공백이 없음)

## 입력 예제 1
1.0+3.0i
5.0+2.0i

## 출력 예제 1
6.00+5.00i
*/

/*
#include <stdio.h>

struct complex
{
	double x;
	double y;
};

struct complex get_hap(struct complex c1, struct complex c2);

int main(void)
{
	struct complex c_num1;
	struct complex c_num2;
	char operator[10];
	char imaginary[10];

	scanf("%lf%c%lf%c", &c_num1.x, operator, &c_num1.y, imaginary);
	scanf("%lf%c%lf%c", &c_num2.x, operator, &c_num2.y, imaginary);

	struct complex result = get_hap(c_num1, c_num2);

	printf("%.2lf+%.2lfi\n", result.x, result.y);

	return 0;
}

struct complex get_hap(struct complex c1, struct complex c2)
{
	struct complex hap;
	hap.x = c1.x + c2.x;
	hap.y = c1.y + c2.y;

	return hap;
}
*/

/*
int 배열 크기를 입력한 후, 입력 크기만큼 동적 메모리를 할당한다. 배열에 int 값들을 입력 받고,
찾는 int 값을 입력 받는다. 찾는 int 값이 배열에 몇개 있는지 출력하고, 동적 메모리를 반환한다.
입출력 예시를 확인해서 코드를 작성하라.

//입출력 예시 1, 입력은 3 23 56 77 77 순이다.
Enter size: 3
Enter 3 numbers: 23 56 77
Find: 77
1 number of 77

//입출력 예시 2, 입력은 4 12 85 12 36 12 순이다.
Enter size: 4
Enter 4 numbers: 12 85 12 36
Find: 12
2 number of 12
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *p;
	int size, find, i, count = 0;

	printf("Enter size: ");
	scanf("%d", &size);

	p = (int *)malloc(size * sizeof(int));

	if(p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	printf("Enter %d numbers: ", size);
	for(i = 0; i < size; i++)
	{
		scanf("%d", &p[i]);
	}

	printf("Find: ");
	scanf("%d", &find);

	for(i = 0; i < size; i++)
	{
		if(p[i] == find)
		{
			count++;
		}
	}

	printf("%d number of %d\n", count, find);

	free(p);

	return 0;
}
*/

/*
아래 main 함수를 보면, 문자열을 입력 받아, 문자열을 int 배열에 카피하고 int 배열을 char로 출력하는 코드가 있다.
main 함수에서 사용되는 copy 함수를 정의하라. copy 함수는 문자열을 입력 받아 char들을 int 배열에 저장한다.
main 함수는 수정 불가하다.

int main(){
	char str[256];
	scanf("%[^\n]", str);
	//printf("%s\n", str);

	int* c = copy(str);

	int i = 0;
	while( c[i] != 0){
		printf("%c", c[i]);
		i++;
	}
	printf("\n");
	free(c);
	return 0;
}

//입출력 예시 1
char can be saved as int
char can be saved as int

//입출력 예시 2
int can be printf as char
int can be printf as char
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *copy(char *arr);

int main(void)
{
	char str[256];
	scanf("%[^\n]", str);

	int *c = copy(str);

	int i = 0;
	while(c[i] != 0)
	{
		printf("%c", c[i]);
		i++;
	}
	printf("\n");

	free(c);

	return 0;
}

int * copy(char *arr)
{
	int length = strlen(arr);
	int *p = (int *)malloc((length + 1) * sizeof(int));

	if(p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for(int i = 0; i < length; i++)
	{
		p[i] = (int)arr[i];
	}

	p[length] = 0;

	return p;
}
