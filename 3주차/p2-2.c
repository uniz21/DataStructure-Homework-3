#include <stdio.h>

void print1 (int *ptr, int rows);

int main()
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");

    int one[] = {0, 1, 2, 3, 4};

    // 배열 one의 주소

    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");

    // 배열 인덱스별 주소와 값 출력
    print1(&one[0], 5);
    // 정수형 배열인 one의 각 인덱스별 주소가 4바이트씩 증가

    return 0;
}

void print1 (int *ptr, int rows)
{
    int i;
    printf("Address \t Contents\n");
    for (i=0; i<rows; i++)
        printf("%p \t %5d\n", ptr+i, *(ptr+i));
    printf("\n");
}