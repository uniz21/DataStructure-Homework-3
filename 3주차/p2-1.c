#include <stdio.h>

#define MAX_SIZE 100

float sum(float list[], int);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");

    for(i=0; i<MAX_SIZE; i++)
        input[i] = i;

    // input의 주소
    printf("address of input = %p\n", input);

   answer = sum(input, MAX_SIZE);
   printf("The sum is : %f\n", answer);
}

float sum(float list[], int n)
{
    // list의 값 == input의 주소
    printf("value of list = %p\n", list);
    // list의 주소 != input의 주소
    printf("address of list = %p\n\n", &list);

    /*
    배열의 이름이 함수에 파라미터로 호출될 때 값이 복사되는 것이 아닌
    주소를 받아 참조에 의해 호출된다
    */

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];
    return tempsum;
}