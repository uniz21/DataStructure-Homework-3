#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");

    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));

    printf("list[0] \t= %d\n", list[0]);
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);
    // list[0]의 주소 == list의 주소

    // list + 0 의 주소 == list의 주소 + 0*4바이트
    printf("address of list + 0 \t= %p\n", list+0);
    // list + 1 의 주소 == list의 주소 + 1*4바이트
    printf("address of list + 1 \t= %p\n", list+1);
    // list + 2 의 주소 == list의 주소 + 2*4바이트
    printf("address of list + 2 \t= %p\n", list+2);
    // list + 3 의 주소 == list의 주소 + 3*4바이트
    printf("address of list + 3 \t= %p\n", list+3);
    // list + 4 의 주소 == list의 주소 + 4*4바이트
    printf("address of list + 4 \t= %p\n", list+4);
    // list[4]의 주소
    printf("address of list[4] \t= %p\n", &list[4]);

    // list + a == list[a]의 주소
    // *(list + a) == list[a]의 값

    free(plist[0]);
}