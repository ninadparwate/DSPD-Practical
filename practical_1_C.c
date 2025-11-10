#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    char course[20];
    float avgMarks;
};

int main() {
    int n, i, j;
    struct Student temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Course: ");
        scanf("%s", s[i].course);
        printf("Average Marks: ");
        scanf("%f", &s[i].avgMarks);
    }


    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(s[j].avgMarks < s[j+1].avgMarks) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

  
    printf("\nStudents Sorted by Average Marks:\n");
    printf("Roll\tName\tCourse\tAverage Marks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%f\n", s[i].roll, s[i].name, s[i].course, s[i].avgMarks);
    }

    return 0;
}
