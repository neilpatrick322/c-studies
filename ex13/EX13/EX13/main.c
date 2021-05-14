#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    int age[10];
    int r_no[10];


};

    int main() {
        int max = 10;
        int i;
        struct student s[10];


        for (i = 0; i < max; i++) {
            char name[20];
            int age[10];
            int r_no[10];

            printf("Enter name of the student:");
            scanf_s("%s", name, (unsigned)_countof(name));
            printf("Enter age of the student:");
            scanf_s("%d", age, ((unsigned)_countof(age)));
            printf("Enter student's roll no :");
            scanf_s("%d", r_no, ((unsigned)_countof(r_no)));

        }
        for (int i = 0; i < max; i++)
        {
            printf("Name : %s", s[i].name);
            printf("age : %d", s[i].age);
            printf("roll no. : %d", s[i].r_no);
            printf("\n");
        }

       return 0;
}