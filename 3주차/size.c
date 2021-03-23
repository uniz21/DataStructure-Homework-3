#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");

    int **x;

    // x의 크기 == *x의 주소의 크기(역참조 된 포인터)
    printf("sizeof(x) = %lu\n", sizeof(x));
    // *x의 크기 == **x의 주소의 크기(역참조 된 포인터)
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    // **x의 크기 == **x의 크기(정수형)
    printf("sizeof(**x) = %lu\n", sizeof(**x));

}