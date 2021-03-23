#include <stdio.h>

struct student {
    char lastName[13];  /* 13bytes */ //padding 3bytes
    int studentId;  /* 4bytes */
    short grade;  /* 2bytes */ //padding 2bytes
};
// 구조체 student의 변수 크기 합 = 19bytes

int main()
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");

    //***padding 처리는 Compiler마다 다르다.***
    /*
    – 구조는 같은 메모리 경계에서 시작하고 끝나야 함
    – 짝수바이트거나 4, 8, 16등의 배수가 되는 메모리 경계
    */

    struct student pst;

    // 구조체 student의 크기 출력 = 24bytes(padding)
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));

    return 0;
}