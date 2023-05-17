#include <stdio.h>

int main(void)
{
    //printf("Hello World\n");

    // ++ 뿔뿔
    /*int a = 10;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n", a); 
    a++;
    printf("a는 %d\n", a);*/
    
    /*int b = 20;
    // 뿔뿔이란? b = b + 1;
    printf("b는 %d\n", ++b); // ++b 는 b + 1을 수행한 후(21이 됨) 이 문장을 끝내는 것. 
    printf("b는 %d\n", b++); // b++ 는 이 문장을 수행하고 나서(아직 21), 끝난뒤에 다음 줄로 넘어갈 때 b + 1 하라는 것(22가 됨). 
    printf("b는 %d\n", b);*/ // ++b 로 한 번, b++ 로 이 문장 넘어올 때 한 번. 총 2번 뿔뿔 돼서 22가 됨. 

    /*int i = 1;
    printf("Hello World %d\n", i++); // i++ 이니까 1이 그대로 출력되고, 다음 줄 넘어가면서 1이 더해져 2가 됨
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);
    printf("Hello World %d\n", i++);*/

    // 반복문
    // for, while, do while

    //for(선언; 조건; 증감) {  }
    /*for (int i = 1; i <= 10; i++) // i는 1이고, i가 10보다 작거나 같을 때 까지 뿔뿔을 해 주는 것. 
    {
        printf("Hello World %d\n", i); // 선언 값과 조건 값이 들어맞을때 수행

    }*/

    // while (조건) {  }
    /*int i = 1; // 선언은 for문과 다르게 while문 바깥에 위에 써 주면 됨
    while(i <= 10) // 조건
    {
        printf("Hello World %d\n", i++); // i는 1이고, i가 10보다 작거나 같을 때 까지 해당 printf 동작을 수행하라. 
        // i++; (이렇게 밑에다 뿔뿔(증감)을 적어도 된다.) 

    }*/

    // do {  } while (조건);
    /*int i = 1;
    do {
        printf("Hello World %d\n", i++);
    } while (i <= 10);*/

    // 2중 반복문
    //for(선언; 조건; 증감) {  }
    /*for(int i = 1; i <= 3; i++)
    {
        printf("첫 번째 반복문 : %d\n", i);

        for(int j = 1; j <= 5; j++)
        {
            printf("    두 번째 반복문 : %d\n", j);
        }
    }*/

    // 구구단
    // 2 x 1 = 2
    // 2 x 2 = 4
    // 2 x 3 = 6
    // 2 x 4 = 8 ...
    // ...
    // 9 x 9 = 81

    /*for(int i = 2; i <= 9; i++)
    {
        printf("%d단 게산\n", i);
        for(int j = 1; j <= 9; j++)
        {
            printf("  %d x %d = %d\n", i, j, i * j);
        }
    }*/

    /*
    *
    **
    ***
    ****
    *****
    */

   /*for(int i = 0; i < 5; i++)
   {
       for(int j = 0; j <= i; j++)
       {
           printf("*"); // i는 0이고 j도 0이므로 별 하나 작성. j는 뿔뿔돼서 1이 되는데 j가 i보다 커져버리므로 탈출. 탈출 후 줄바꿈 진행. 
       }
       printf("\n"); // 줄바꿈을 위해서

   }*/

   /*
    ssss*
    sss**
    ss***
    s****
    *****
    */ // 위와 반대로 오른쪽 정렬(공백을 임의로 s로 표시해 봄)

    /*for(int i = 0; i < 5; i++)
    {
        for(int j = i; j < 5-1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    // 피라미드를 쌓아라 ~ 프로젝트
    /*
    ssss* 1 
    sss*** 3
    ss***** 5
    s******* 7
    ********* 9
    */
    
    /*
    int floor;
    printf("몇 층으로 쌓겠느냐?");
    scanf("%d층", &floor); // scanf 할 때 우리가 입력한 값을 floor 안에 넣는 것이고, &을 꼭 붙여주어야 함. 
    for(int i = 0; i < floor; i++)
    {
        for(int j = i; j < floor-1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("\n"); 
        
    } 
    return 0; 
}
*/


