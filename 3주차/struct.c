#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() 
{
    printf("[----- [윤용진] [2016039040] -----]\n\n");

    //typedef로 선언한 구조체가 아니기 때문에 구조체임을 명시해야 한다.
    struct student1 st1 = {'A',100,'A'};

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
 
    student2 st2 = {'B',200,'B'};

    printf("st2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
 
    student2 st3;

    //구조치환(옛날 컴파일러는 불가능하다.)
    st3 = st2;

    printf("st3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /*
    //전체 구조의 동등성 검사(비교불가), 각각 비교해야한다.
    if(st3 == st2)
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;
}