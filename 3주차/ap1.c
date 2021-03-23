#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");
    
    int list[5];
    // 정수형 포인터를 담은 배열 선언
    int *plist[5] = {NULL,};

    // plist[0]이 가르키는 힙 영역에 정수형 크기(4바이트)의 영역을 할당
    plist[0] = (int *)malloc(sizeof(int));

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;

    printf("value of list[0] = %d\n", list[0]);
    // list[0]의 주소
    printf("address of list[0]      = %p\n", &list[0]);
    // list 값
    printf("value of list           = %p\n", list);
    // list 주소
    printf("address of list (&list) = %p\n", &list);
    // list[0]의 주소 == list의 값 == list의 주소

    printf("---------------------------------------------\n\n");

    printf("value of list[1]    = %d\n", list[1]);
    // list[1]의 주소
    printf("address of list[0]  = %p\n", &list[1]);
    // list + 1 의 값
    printf("value of list       = %d\n", *(list + 1));
    // list + 1 의 주소
    printf("address of list+1   = %p\n", list+1);
    // list[1]==&list[1]==*(list+1)==list+1
    // list+1 은 정수형 으로 선언된 list의 주소 + 4바이트(sizeof(int))

    printf("---------------------------------------------\n\n");

    printf("value of *plist[0]  = %d\n", *plist[0]);
    // plist[0]의 주소
    printf("&plist[0]           = %p\n", &plist[0]);
    // plist의 주소
    printf("&plist              = %p\n", &plist);
    // plist의 값
    printf("plist               = %p\n", plist);
    // plist[0]이 가르키는 영역의 주소
    printf("plist[0]            = %p\n", plist[0]);
    // plist[1]이 가르키는 영역의 주소==null
    printf("plist[1]            = %p\n", plist[1]);
    // plist[2]이 가르키는 영역의 주소==null
    printf("plist[2]            = %p\n", plist[2]);
    // plist[3]이 가르키는 영역의 주소==null
    printf("plist[3]            = %p\n", plist[3]);
    // plist[4]이 가르키는 영역의 주소==null
    printf("plist[4]            = %p\n", plist[4]);

    // plist[0]의 주소와 plist[0]이 가르키는 주소는 다르다.(&plist[0]!=plist[0])
    // 선언된 배열의 이름은 해당 배열 첫번째 항의 주소를 값과 주소로 갖는다.

    free(plist[0]);

}