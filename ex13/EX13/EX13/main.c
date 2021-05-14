#include <stdio.h>
#include <stdlib.h>

// 8 bits = 1 byte

struct student  { // total in bytes = 28
    char name[20]; // 20 bytes (1 char is 1 byte)
    int age; 
    int r_no;
};

    int main() {
        int max =10;
        int i;
        struct student s[10] ; // 2000dec -> 2280dec


        for (i = 0; i < max; i++) {
            printf("Enter name of the student:");
            scanf_s("%s", s[i].name, (unsigned)_countof(s[i].name));
            printf("Enter age of the student:");
            scanf_s("%d", &(s[i].age));
            printf("Enter student's roll no :"); 
            scanf_s("%d", &(s[i].r_no));
        }
        for ( i = 0; i < max; i++)
        {
            printf("Name : %s | Age : %d | Roll no : %d ", s[i].name, s[i].age, s[i].r_no);
            printf("\n");
        }

       return 0;
}