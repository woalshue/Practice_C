/*
#include <stdio.h>
#define SIZE 26
int main(void)
{
    int i;
    char array[SIZE];
    

    for(i = 0; i < SIZE; i++)
    {
        array[i] = 'A' + i;
    }

    for(i = 0; i < SIZE; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
#include <stdio.h>
#define STUDENTS 5
int main(void)
{
    int i;
    int score[STUDENTS];

    for(i = 0; i < STUDENTS; i++)
    {
        printf("학생들의 성적을 입력하시오 : ");
        scanf("%d", &score[i]);
    }

    int sum = 0;

    for(i = 0; i < STUDENTS; i++)
    {
        sum = sum + score[i];
    }

    int average = sum / STUDENTS;

    printf("성적 평균 : %d\n", average);

    return 0;
}
*/

/*
// 가장 싼 물건 찾기
#include <stdio.h>
#define PRICE 10
int main(void)
{
    int i;
    int array[PRICE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };

    printf("[ ");
    for(i = 0; i < PRICE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    int min = array[0];

    for(i = 1; i < PRICE; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    printf("최소값은 %d입니다.\n", min);
    
    return 0;
}
*/

/*
// 배열에서 특정한 값 탐색하기
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i;
    int array[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    
    printf("[ ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");
    int segment;
    printf("탐색할 값을 입력하시오 : ");
    scanf("%d", &segment);

    for(i = 0; i < SIZE; i++)
    {
        if(segment == array[i])
        {
            printf("탐색 성공 인덱스 = %d\n", i);
            break; 
            // break는 걸어도 되고 안 걸어도 됨. 걸면 조건이 맞아 떨어지는 순간 탈출. 안 걸면 조건 맞아 떨어져도 계속 탐색.
            // 탐색하고자 하는 값이 배열 안에 2개 이상이라면 break 쓰면 안 됨.
        }
    }

    return 0;
}
*/

/*
// 버블정렬 알고리즘
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i, j;
    int array[SIZE] = { 16, 7, 9, 1, 3 };
    

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE - 1; j++) // 앞 뒤 배열 요소 비교이므로 끝에서 인덱스가 하나 오버되지 않게 SIZE - 1
        {
            if(array[j] > array[j + 1])
            {
                int tmp = array[j]; // j인덱스 요소값 잠시 tmp에 넣어두고
                array[j] = array[j + 1]; // j인덱스에 j + 1 인덱스 요소값 넣고
                array[j + 1] = tmp; // j + 1 인덱스에다가 tmp에 있는 원래 j 인덱스 요소값 갖다 넣기
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
#include <stdio.h>
int main(void)
{
    int array[3][5] = { {0, 1, 2, 3, 4}, {0, 1, 2, 3, 4}, {0, 1, 2, 3, 4} };
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("array[%d][%d] = %d ", i, j, array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(void)
{
    int array_1[ROWS][COLS] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
    int array_2[ROWS][COLS] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%d ", array_1[i][j] + array_2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

// programming 1번 
/*
#include <stdio.h>
#define SIZE 12
int main(void)
{
    int days[SIZE] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i, j = 1;
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d월은 %d일까지 있습니다.\n", j, days[i]);
        j++;
    }
    
    return 0;
}
*/

// programming 2번
/*
#include <stdio.h>
int main(void)
{
    int SIZE, i, j;
    printf("입력할 정수의 개수 : ");
    scanf("%d", &SIZE); // 3

    int array[SIZE];

    for(i = 0; i < SIZE; i++)
    {
        printf("%d번째 요소를 입력하시오 : ", i);
        scanf("%d", &array[i]);
    }

    for(i = SIZE - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/

// programming 3번
/*
#include <stdio.h>
int main(void)
{
    int num, i, j;
    printf("입력할 정수의 개수 : ");
    scanf("%d", &num);

    int array[num];

    for(i = 0; i < num; i++)
    {
        printf("%d번째 요소를 입력하시오 : ", i);
        scanf("%d", &array[i]);
    }

    int sum = 0;

    for(i = 0; i < num; i++)
    {
        sum += array[i];
    }

    printf("합 : %d\n", sum);

    return 0;
}
*/

// programming 4번
/*
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i;
    int array[SIZE];
    for(i = 0; i < SIZE; i++)
    {
        printf("정수를 입력하시오 : ");
        scanf("%d", &array[i]);
    }

    int max = array[0];
    for(i = 1; i < SIZE; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    int min = array[0];
    for(i = 1; i < SIZE; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    printf("최대값 = %d 최소값 = %d\n", max, min);

    return 0;
}
*/

// programming 5번
/*
#include <stdio.h>
#define SIZE 3
int main(void)
{
    int array[SIZE][SIZE] = {
         {30, 10, 11}, // 1번 학생
         {40, 90, 32}, // 2번 학생 
         {70, 65, 56} // 3번 학생
         };
    
    int i, j = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    for(i = 0; i < SIZE; i++)
    {
        sum1 = sum1 + array[0][i];
    }
    printf("1번 학생의 평균 점수 = %d\n", sum1 / 3);

    for(i = 0; i < SIZE; i++)
    {
        sum2 = sum2 + array[1][i];
    }
    printf("2번 학생의 평균 점수 = %d\n", sum2 / 3);

    for(i = 0; i < SIZE; i++)
    {
        sum3 = sum3 + array[2][i];
    }
    printf("3번 학생의 평균 점수 = %d\n", sum3 / 3);

    return 0;
}
*/

// programming 6번
/*
#include <stdio.h>
#define SIZE 9
int main(void)
{
    int array[SIZE][SIZE];
    int i, j;
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            array[i][j] = (i + 1) * (j + 1);
        }
    }

    printf("알고싶은 구구단을 입력하시오(예: 9 3) : ");
    scanf("%d %d", &i, &j);

    printf("%d x %d = %d\n", j, i, array[j - 1][i - 1]);

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
    scanf("%d", &size);

    int array[size][size];

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            array[i][j] = k;
            k++;
        }
    }

    int sum = 0;
    for(i = 0; i < size; i++)
    {
        sum = sum + array[i][i];
    }
    printf("%d\n", sum);

    return 0;
}
*/

/*
#include <stdio.h>
int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y)
{
    int i, result = 0;
    
    for(i = 0; i < y; i++)
    {
        result = result * x;
    }
    return result;
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    int result = power(x, y);
    
    printf("%d의 %d승은 %d이다.\n", x, y, result);

    return 0;
}
*/

/*
#include <stdio.h>
int compute_sum(int n);

int main(void)
{
    int sum;
    sum = compute_sum(100);
    printf("1부터 100까지의 합 = %d\n", sum);
    return 0;
}

int compute_sum(int n)
{
    int i, result = 0;
    for(i = 1; i <= n; i++)
    {
        result = result + i;
    }
    return result;
}
*/

/*
#include <stdio.h>
double FtoC(double temp_f);

int main(void)
{
    double c, f;
    f = 32.0;
    c = FtoC(f);
    printf("화씨온도 %lf은 섭씨온도 %lf에 해당한다.\n", f, c);
}

double FtoC(double temp_f)
{
    double temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
    return temp_c;
}
*/

/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, j;
    int array[SIZE];

    printf("정렬할 10개의 숫자를 입력하시오\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d번째 => ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("입력받은 정렬 전 배열 : [ ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

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

    // 정렬 완료

    printf("정렬 후 배열 : [ ");

    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    return 0;
}
*/

// 소수 검사 함수 작성
// 정수를 입력받아서 소수인지 아닌지 반환하는 함수 작성
/*
#include <stdio.h>
int check_prime(int n);

int main(void)
{
    int num;
    
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);

    if(check_prime(num) == 1)
    {
        printf("%d => 소수입니다.\n", num);
    }

    else 
    {
        printf("%d => 소수가 아닙니다.\n", num);
    }

    return 0;
}

int check_prime(int n)
{
    int is_prime = 1; // 1이면 소수이고 0이면 소수가 아닌데, 일단 소수라고 함. 
    
    for(int i = 2; i < n; i++) // 2 입력받으면 자동으로 for문 탈출. 그래서 is_prime 그대로 1 => 소수처리 
    {
        if(n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}
*/

// 소수의 합 찾기
// 양의 정수를 입력받고, 해당 양의 정수가 소수 2개의 합으로 표시될 수 있는지를 검사
// ex) 양의 정수를 입력하시오 : 33
// 33 = 2 + 31
// 33 = 31 + 2
/*
#include <stdio.h>
int check_prime(int n);

int main(void)
{
    int n, flag = 0; // flag가 0이면 입력받은 양의 정수를 소수 2개의 합으로 표시할 수 없다는 뜻.
    
    printf("양의 정수를 입력하시오 : ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++) // 0, 1은 소수가 아니고, 2부터 소수가 될 수 있기 때문에 2부터 시작. 
    {
        if(check_prime(i) == 1)
        {
            if(check_prime(n - i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }

    if(flag == 0)
    {
        printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", n);
    }

    return 0;
}

int check_prime(int n)
{
    int is_prime = 1; // 1이면 소수이고 0이면 소수가 아닌데, 일단 소수라고 함. 
    
    for(int i = 2; i < n; i++) // 2 입력받으면 자동으로 for문 탈출. 그래서 is_prime 그대로 1 => 소수처리 
    {
        if(n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    return is_prime;
}
*/

// 순환 호출 (팩토리얼)
/*
#include <stdio.h>
int factorial(int n);

int main(void)
{
    int x, result;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    result = factorial(x);

    printf("%d!은 %d입니다.\n", x, result);

    return 0;
}

int factorial(int n)
{
    printf("factorial(%d)\n", n);

    if(n <= 1)
        return 1;
    
    else 
        return n * factorial(n - 1);
}
*/

// 난수 정리
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    // 프로그램을 실행할 때마다 다른 난수가 생성되게 하기 위해 난수 시드(씨앗값) 사용
    // 시드는 난수 생성 시 씨앗값이 되는데, 시드값이 달라지면 이후 생성되는 모든 난수값이 달라짐.
    // 일반적으로 시드값으로 '현재 시각'을 많이 사용. 프로그램이 실행되는 시간은 다를 가능성이 많기 때문.
    // 현재 시각을 얻기 위해 time.h 헤더파일을 불러오고, time()을 사용. 이를 호출하면 1970년 1월 1일로부터 현재까지 경과된 시간을 초단위로 반환.
    // 이를 srand() 함수를 이용하여 시드값으로 설정. srand(time(NULL));

    int pseudo = 1 + (rand() % 45); 
    // 난수의 값을 어떠한 범위로 한정하려면 % 연산자를 사용. 
    // 예를 들어, 1부터 45까지로 한정시키려면 위와 같이. 1dptj 45까지의 값이 생성됨.
    // 원래 rand() % 45 의 범위가 0부터 44까지의 값이 생성되게 하는 것임. 이에 1을 더한 것.

    printf("%d\n", pseudo);

    return 0;
}
