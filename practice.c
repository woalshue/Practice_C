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
/*
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
    // 예를 들어, 1부터 45까지로 한정시키려면 위와 같이. 1에서 45까지의 값이 생성됨.
    // 원래 rand() % 45 의 범위가 0부터 44까지의 값이 생성되게 하는 것임. 이에 1을 더한 것.

    printf("%d\n", pseudo);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45
int main(void)
{
    int i, k, lotto[6] = { 0 }; // 로또 번호 6개 배열
    int dup_check[MAX + 1] = { 0 }; // 중복 검사 배열 
    srand(time(NULL));

    for(i = 0; i < 6; i++) // 0번째 로또번호 ~ 5번째 로또번호까지
    {
        k = 1 + (rand() % MAX); // 1 ~ 45까지의 난수 생성하여 k에 저장

        // 이때까지 아직 dup_check[k] = 0임

        while(dup_check[k] == 1) // dup_check[k] == 1 일 동안 반복. (dup_check[k] == 1이라는건 i가 0부터 5까지 반복할 동안 이미 생성된 난수가 또 생성되었다는 것. 중복.)
            k = 1 + (rand() % MAX); // 중복되면 다시 생성
        
        lotto[i] = k; // 로또번호 배열의 i번째에 k 저장
        dup_check[k] = 1; // 중복 검사 배열의 k번째를 1로 저장하여 이미 생성된 난수라는 것을 표시. 
        printf("%d ", lotto[i]);
    }
    printf("\n");

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
double get_array_avg(int *ptr, int n);

int main(void)
{
    int array[SIZE];

    printf("5개의 정수를 입력해 주세요 : ");
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("[ ");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]\n");

    printf("입력하신 숫자들의 평균을 구하는 함수 호출중...\n");

    double average = get_array_avg(array, SIZE);

    printf("입력하신 숫자들의 평균 : %.2lf\n", average);

    return 0;
}

double get_array_avg(int *ptr, int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

    double avg = sum / n;

    return avg;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char line[100] = "";
    char line2[100] = "";

    printf("문자열을 입력하시오 : ");
    fgets(line, sizeof(line), stdin);

    int k = 0;
    for(int i = 0; line[i] != '\0'; ++i)
    {
        while(line[i] > 'A' && line[i] < 'Z')
        {
            line2[k++] = line[i++];
        }
    }
    line2[k] = '\0';

    printf("출력 문자열 : %s\n", line2);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int ch;
    ch = getchar();
    putchar(ch);
    printf("\n");

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? ");
    scanf("%s", name);

    printf("어디 사시나요 ? ");
    scanf("%s", address);

    printf("안녕하세요. %s에 사는 %s씨.\n", address, name);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? ");
    gets_s(name, 99);

    printf("어디 사시나요 ? ");
    gets_s(address, 99);

    printf("안녕하세요. %s에 사는 %s씨.\n", address, name);

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char name[100];
    char address[100];

    printf("이름이 어떻게 되시나요? ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // fgets로 입력 받을 때 개행 문자 제거

    printf("어디 사시나요? ");
    fgets(address, sizeof(address), stdin);
    address[strcspn(address, "\n")] = '\0';  // fgets로 입력 받을 때 개행 문자 제거

    printf("안녕하세요. %s에 사는 %s씨.\n", address, name);

    return 0;
}
*/

// 문자열 길이
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[] = "abcdefgh";
    int len = strlen(s);
    printf("문자열 %s의 길이 = %d\n", s, len);

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char key[80] = "C";
    char ans[80] = "";

    do {
        printf("임베디드 장치에 가장 많이 사용되는 언어는 ? ");
        // gets_s(ans, sizeof(ans)); vscode 컴파일러에서 gets_s 사용 불가
    } while(strcmp(key, ans) != 0);

    printf("맞았습니다!");

    return 0;
}
*/

// Lab. 단어 애나그램 게임
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define SOL "apple"
int main(void)
{
    srand(time(NULL)); // 난수 시드 설정하여 매번 뒤섞인 값이 달라지도록 만듬.
    char enagram[100] = SOL; // enegram 배열에 정답인 apple 저장
    char ans[100]; // 사용자가 입력한 답을 저장할 배열
    int i, len;

    len = strlen(SOL); // 정답의 길이를 잼. len 에는 apple 의 길이인 5가 저장될 것. 
    
    for(i = 0; i < len; i++) // 0부터 4까지 5회 반복
    {
        int pos1 = rand() % len; // 0 ~ 4 범위 안에서 난수 생성하여 pos1에 저장. 정답의 길이를 재서 범위를 제한하여 난수를 생성하므로 정답의 길이 이상의 난수가 생성되지는 않을 것. 
        int pos2 = rand() % len; // 0 ~ 4 범위 안에서 난수 생성하여 pos2에 저장.

        int tmp = enagram[pos1]; // tmp 에 enagram 배열의 pos1번째 단어를 저장하고 
        enagram[pos1] = enagram[pos2]; // enagram 배열의 pos1번째 자리에 pos2번째 값을 저장하고
        enagram[pos2] = tmp; // enagram 배열의 pos2번째 자리에 tmp를 저장
        // 여기까지 진행하였을 시 enagram 배열 안의 문자열 "apple"이 뒤섞임. 
    }

    do {
        printf("%s의 원래 단어를 맞춰보세요 : ", enagram);
        scanf("%s", ans); 
    } while(strcmp(ans, SOL) != 0); // 사용자가 입력한 답(ans) 와 정답(SOL)이 일치하지 않을 동안(strcmp 값이 0이 도출되지 않을 동안)
    // ans 와 SOL 이 일치하면(strcmp 값이 0이 도출되면) do - while 문 탈출

    printf("축하합니다. %s의 원래 단어는 %s입니다!\n", enagram, SOL);

    return 0;
}
*/

// Lab 한영사전의 구현
/*
#include <stdio.h>
#include <string.h>
#define WORDS 5
int main(void)
{
    char dic[WORDS][2][50] = {
        { "macbook", "맥북" },
        { "fingerboard", "핑거보드" },
        { "university", "대학교" },
        { "apple", "사과" },
        { "pencil", "연필" },
    };

    char ans[50];

    printf("단어를 입력하세요 : ");
    scanf("%s", ans);

    for(int i = 0; i < WORDS; i++)
    {
        if(strcmp(dic[i][0], ans) == 0)
        {
            printf("%s : %s\n", ans, dic[i][1]); 
            return 0;
        }
    }

    printf("입력하신 단어가 사전에 존재하지 않습니다.\n");

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#define SIZE 6
int main(void)
{
    int i, k;
    char fruits[SIZE][30] = {
        "apple",
        "avocado",
        "banana",
        "pear", 
        "pineapple",
        "tomato"
    };

    printf("\n.....정렬 전 문자열들.....\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%s\n", fruits[i]);
    }

    for(i = 0; i < SIZE; i++)
    {
        for(k = 0; k < SIZE - 1; k++)
        {
            if(strcmp(fruits[k], fruits[k + 1]) > 0)
            {
                char tmp[30];
                strcpy(tmp, fruits[k]);
                strcpy(fruits[k], fruits[k + 1]);
                strcpy(fruits[k + 1], tmp);
            }
        }
    }

    printf("\n.....정렬 후 문자열들.....\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s;
    s.number = 20221241;
    strcpy(s.name, "손재민");
    s.grade = 4.3;

    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1lf\n", s.grade);

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p = { 1, 2 };
    struct point q = { .x = 1, .y = 2};
    struct point r = p;
    r = (struct point) { 1, 2 };

    printf("p = (%d, %d)\n", p.x, p.y);;
    printf("q = (%d, %d)\n", q.x, q.y);
    printf("r = (%d. %d)\n", r.x, r.y);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1;
	struct point p2;

	printf("p1점의 좌표를 입력하시오 (x,y) : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("p2점의 좌표를 입력하시오 (x,y) : ");
	scanf("%d %d", &p2.x, &p2.y);

	double distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	printf("p1 p2 두 점 사이의 거리는 %lf입니다.\n", distance);

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 3
struct student
{
	int num;
	char name[30];
	double grade;
};

int main(void)
{
	struct student std[SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		printf("%d번째 학생의 학번을 입력하시오 : ", i + 1);
		scanf("%d", &std[i].num);

		printf("%d번째 학생의 이름을 입력하시오 : ", i + 1);
		scanf("%s", std[i].name);

		printf("%d번째 학생의 학점을 입력하시오 (실수) : ", i + 1);
	    scanf("%lf", &std[i].grade);

	    printf("\n");

	}

	printf("\n=================================================================\n");

	for(int i = 0; i < SIZE; i++)
	{
		printf("#%d번째 학생의 데이터\n", i + 1);
		printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", std[i].num, std[i].name, std[i].grade);
		printf("\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 100
struct question
{
	char ques[SIZE];
	char item1[SIZE];
	char item2[SIZE];
	char item3[SIZE];
	char item4[SIZE];
	int solution;
};

int main(void)
{
	struct question q[SIZE] = {
			{ "임베디드 장치에 가장 적합한 프로그래밍 언어는?" , "1. Python" , "2. Java" , "3. C" , "4. Javascript" , 3 },
			{ "서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3 }
	};

	int select, i;
	for(i = 0; i < 2; i++)
	{
		printf("%s\n", q[i].ques);
		printf("%s   ", q[i].item1);
		printf("%s   ", q[i].item2);
		printf("%s   ", q[i].item3);
		printf("%s   \n", q[i].item4);

		printf("정답을 입력해주세요 : ");
		scanf("%d", &select);

		if(select == q[i].solution)
		    printf("정답입니다!\n");

		else
			printf("틀렸습니다.\n");

		printf("\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>

struct vector
{
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);

	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}
*/

/*
#include <stdio.h>

struct student
{
	int number;
	char name[30];
	double grade;
};

int main(void)
{
	struct student s = { 20221241, "손재민", 4.3 };
	struct student *p;
	p = &s;

	printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", s.number, s.name, s.grade);
	printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", (*p).number, (*p).name, (*p).grade);
	printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", p -> number, p -> name, p -> grade);

	return 0;
}
*/

/*
#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN }; // 열거형 정의

char *days_name[] = { "Monday", "Tuedsday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

int main(void)
{
	enum days d;

	for(d = MON; d <= SUN; d++)
	{
		printf("%d번째 요일의 이름은 %입니다.\n", d, days_name[d]);
	}

	return 0;
}
*/

/*
#include <stdio.h>
typedef struct point
{
	int x;
	int y;
} POINT; // struct point 구조체를 POINT 라는 새로운 타입으로 정의

POINT translate(POINT p, POINT delta);

int main(void)
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);

	printf("(%d, %d) + (%d, %d) -> (%d, %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta)
{
	POINT move_result;
	move_result.x = p.x + delta.x;
	move_result.y = p.y + delta.y;

	return move_result;
}
*/

/*
#include <stdio.h>
#include <math.h>
struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1;
	struct point p2;

	printf("p1점의 좌표를 입력하시오 (x,y) : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("p2점의 좌표를 입력하시오 (x,y) : ");
	scanf("%d %d", &p2.x, &p2.y);

	double distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	printf("p1 p2 두 점 사이의 거리는 %lf입니다.\n", distance);

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 3
struct student
{
	int num;
	char name[30];
	double grade;
};

int main(void)
{
	struct student std[SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		printf("%d번째 학생의 학번을 입력하시오 : ", i + 1);
		scanf("%d", &std[i].num);

		printf("%d번째 학생의 이름을 입력하시오 : ", i + 1);
		scanf("%s", std[i].name);

		printf("%d번째 학생의 학점을 입력하시오 (실수) : ", i + 1);
	    scanf("%lf", &std[i].grade);

	    printf("\n");

	}

	printf("\n=================================================================\n");

	for(int i = 0; i < SIZE; i++)
	{
		printf("#%d번째 학생의 데이터\n", i + 1);
		printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", std[i].num, std[i].name, std[i].grade);
		printf("\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 100
struct question
{
	char ques[SIZE];
	char item1[SIZE];
	char item2[SIZE];
	char item3[SIZE];
	char item4[SIZE];
	int solution;
};

int main(void)
{
	struct question q[SIZE] = {
			{ "임베디드 장치에 가장 적합한 프로그래밍 언어는?" , "1. Python" , "2. Java" , "3. C" , "4. Javascript" , 3 },
			{ "서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3 }
	};

	int select, i;
	for(i = 0; i < 2; i++)
	{
		printf("%s\n", q[i].ques);
		printf("%s   ", q[i].item1);
		printf("%s   ", q[i].item2);
		printf("%s   ", q[i].item3);
		printf("%s   \n", q[i].item4);

		printf("정답을 입력해주세요 : ");
		scanf("%d", &select);

		if(select == q[i].solution)
		    printf("정답입니다!\n");

		else
			printf("틀렸습니다.\n");

		printf("\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>

struct vector
{
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);

	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);

	return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
	struct vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}
*/

/*
#include <stdio.h>

struct student
{
	int number;
	char name[30];
	double grade;
};

int main(void)
{
	struct student s = { 20221241, "손재민", 4.3 };
	struct student *p;
	p = &s;

	printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", s.number, s.name, s.grade);
	printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", (*p).number, (*p).name, (*p).grade);
	printf("학번 : %d, 이름 : %s, 학점 : %.1lf\n", p -> number, p -> name, p -> grade);

	return 0;
}
*/

/*
#include <stdio.h>

enum days { MON, TUE, WED, THU, FRI, SAT, SUN }; // 열거형 정의

char *days_name[] = { "Monday", "Tuedsday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

int main(void)
{
	enum days d;

	for(d = MON; d <= SUN; d++)
	{
		printf("%d번째 요일의 이름은 %입니다.\n", d, days_name[d]);
	}

	return 0;
}
*/

/*
#include <stdio.h>
typedef struct point
{
	int x;
	int y;
} POINT; // struct point 구조체를 POINT 라는 새로운 타입으로 정의

POINT translate(POINT p, POINT delta);

int main(void)
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);

	printf("(%d, %d) + (%d, %d) -> (%d, %d)\n", p.x, p.y, delta.x, delta.y, result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta)
{
	POINT move_result;
	move_result.x = p.x + delta.x;
	move_result.y = p.y + delta.y;

	return move_result;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *pc;

	pc = (char *)malloc(1 * sizeof(char));

	if(pc == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	*pc = 'a';
	printf("%c\n", *pc);

	free(pc);

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *pi;

	pi = (int *)malloc(5 * sizeof(int));

	if(pi == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	*pi = 1; // pi 배열의 0번째 주소의 값 -> pi[0] 와 같
    *(pi + 1) = 2; // pi 배열의 0번째 주소로부터 1만큼 떨어져 있는 주소의 값
    *(pi + 2) = 3;
    *(pi + 3) = 4;
    *(pi + 4) = 5;

    free(pi);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *p;
	int size;

	printf("항목의 개수는 몇개입니까? : ");
    scanf("%d", &size);

    p = (int *)malloc(size * sizeof(int));

    if(p == NULL)
    {
    	printf("메모리 할당 오류\n");
    	exit(1);
    }

    for(int i = 0; i < size; i++)
    {
    	printf("항목(정수)을 입력하시오 : ");
    	scanf("%d", &*(p + i));
    }

    printf("입력된 값은 다음과 같습니다.\n");
    for(int i = 0; i < size; i++)
    {
    	printf("%d ", *(p + i));
    }

    free(p);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
int main(void)
{
	srand(time(NULL));

	int *p, i;

	p = (int *)malloc(SIZE * sizeof(int));

	if(p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for(i = 0; i < SIZE; i++)
	{
		*(p + i) = rand();
	}

	int max = p[0];
	for(i = 1; i < SIZE; i++)
	{
		if(p[i] > max)
		{
			max = p[i];
		}
	}

	printf("최대값 : %d\n", max);

	free(p);

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	int number;
	char title[100];
};

int main(void)
{
	struct book *p;

	p = (struct book *)malloc(2 * sizeof(struct book));

	if(p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

    p[0].number = 1;
	strcpy(p[0].title, "C Programming");

	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");

	free(p);

	return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct movie
{
	char title[100];
	double rating;
};

int main(void)
{
	struct movie *ptr;
	int i, size;

	printf("영화의 개수 : ");
	scanf("%d", &size);

	ptr = (struct movie *)malloc(size * sizeof(struct movie));

	if(ptr == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for(i = 0; i < size; i++)
	{
		printf("영화 제목 : ");
	    scanf("%s", ptr[i].title);

		printf("영화 평점 : ");
		scanf("%lf", &ptr[i].rating);
	}

	printf("\n====================================\n");
	for(i = 0; i < size; i++)
	{
		printf("영화 제목 : %s\n", ptr[i].title);
		printf("영화 평점 : %.2lf\n", ptr[i].rating);
	}
	printf("====================================\n");

	free(ptr);

	return 0;
}
*/

