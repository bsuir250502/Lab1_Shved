#include <stdio.h>
#include <stdlib.h>
#define name_count 256
#define surname_count 256
#define exam_limit 10
struct student{
    char name[name_count];
    char surname[surname_count];
    int sem_number;
}
struct exam{
    int exam_number;
    int mark;
}
union exams{
    exam sem1[exam_limit];
    exam sem2[exam_limit];
    int sem1_count;
    int sem2_count;
}
struct info{
    student s;
    union exams e;
}