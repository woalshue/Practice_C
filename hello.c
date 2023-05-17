#include <stdio.h>

int main(void)
{
    // 변수는 변하는 수, 상수는 변하지 않는 수
    // 정수형 변수에 대한 예제
    /*int age = 12;
    printf("%d\n", age); // 정수는 %d
    age = 13;
    printf("%d\n", age);*/ 

    // 실수형 변수에 대한 예제
    /*float f = 46.5f; // float 을 사용할 때에는 항상 숫자 뒤에 f 붙여주기
    printf("%f\n", f); // 실수는 %f 
    // 46.500000 이 출력될 것. 소수점을 원하는 만큼만 잘라서 보려면? % 다음에 .2 이렇게 쓰기. 소수점 둘째자리까지만 보여준다는 것.
    printf("%.2f\n", f); 
    double d = 4.428;
    printf("%.2lf\n", d);*/ // double 은 %lf 소수점 둘째자리까지만 보여주기 위해 8이 반올림되어 4.43
    
    /*const int YEAR = 2000; // const 를 붙이면 상수 
    printf("태어난 년도 : %d\n", YEAR);*/

    // printf
    // 연산
    /*int add = 3 + 7; // 10
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3 + 7); 
    printf("%d x %d = %d\n", 30, 79, 30 * 79);*/

    // scanf
    // 키보드 입력을 받아서 저장
    /*int input;
    printf("값을 입력하세요 : "); // 값을 입력하세요 : 를 콘솔창에 표시
    scanf("%d", &input); // 우리가 키보드상에서 값을 적으면 그 값이 input 에 들어감. & 꼭 적어주어야 함. 
    printf("입력값 : %d\n", input);*/ // 우리가 적은 값인 input 이 입력값으로 들어감 

    /*int one, two, three;
    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫 번째 값 : %d\n", one);
    printf("두 번째 값 : %d\n", two);
    printf("세 번째 값 : %d\n", three);*/

    // 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
    /*char c = 'A'; // 문자가 됨
    printf("%c\n", c);*/ // 문자는 %c 사용

    /*char str[256]; // 배열 사용. 위의 c 와 같은 문자를 저장하기 위한 변수를 256개를 연속으로 쭉 만든다는 의미. 
    scanf("%s", str, sizeof(str)); // str 앞에 & 안 적어도 됨. 다만, 크기를 명시해 주어야 함. str 변수같은 경우 총 256개의 공간을 만들었기 때문에 256개보다 더 큰 문자열이 들어오면 문제가 발생할 수 있음. 그래서 sizeof 를 써서 256개 이내의 문자열만 받겠다! 라고 알려주는 것. 
    printf("%s\n", str);*/ // scanf 에서 키보드에서 우리가 친 문자열이 str 에 저장되고, printf 로 출력하면 str 에 있던 문자열이 그대로 출력됨. 

    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름? 나이? 몸무게? 키? 범죄명? 
    char name[256];
    printf("이름이 뭐예요? ");
    scanf("%s", name, sizeof(name));
    
    int age;
    printf("몇살이예요? ");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg 이예요? ");
    scanf("%f", &weight); // float 도 int 처럼 변수 앞에 & 붙여주어야 함. 

    double height;
    printf("키는 몇 cm 이예요? ");
    scanf("%lf", &height); // height 도 int 처럼 변수 앞에 & 붙여주어야 함. 

    char what[256];
    printf("무슨 범죄를 저질렀어요? ");
    scanf("%s", what, sizeof(what)); 

    // 조서 내용 출력
    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf(" 이름        : %s\n", name);
    printf(" 나이        : %d세\n", age);
    printf(" 몸무게      : %.2fkg\n", weight);
    printf(" 키          : %.2lfcm\n", height);
    printf(" 범죄        : %s\n", what);

    return 0;
}

