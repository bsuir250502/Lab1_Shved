#include <stdio.h>
#include <stdlib.h>

#define NAME_COUNT 256
#define SURNAME_COUNT 256
#define EXAM_LIMIT 10

typedef struct {
    char name[NAME_COUNT];
    char surname[SURNAME_COUNT];
    int sem_number;
} student;

typedef struct {
    int exam_number;
    int mark;
} exam;

typedef union {
    exam sem1[EXAM_LIMIT];
    exam sem2[EXAM_LIMIT];
    int sem1_count;
    int sem2_count;
} exams;

typedef struct {
    student s;
    exams e;
} info;

int main(int argc, char *argv[]) {
	int i;

	printf("Arguments in main() function:\n");
	for(i=0; i<argc; i++) {
		printf("%d) %s\n", i+1, argv[i]);
	}

	return 0;
}