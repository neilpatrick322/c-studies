#include <stdio.h>
int main()
{
    // Initialize Variable
    double students_average = 0; // initial value is 0
    double students_total_grade = 0; // initial value is 0
    unsigned int student0_grade = 0; // initial value is 0
    unsigned int student1_grade = 0; // initial value is 0
    unsigned int student2_grade = 0; // initial value is 0
    unsigned int student3_grade = 0; // initial value is 0
    unsigned int student4_grade = 0; // initial value is 0
    unsigned int student5_grade = 0; // initial value is 0
    unsigned int student6_grade = 0; // initial value is 0
    unsigned int student7_grade = 0; // initial value is 0
    unsigned int student8_grade = 0; // initial value is 0
    unsigned int student9_grade = 0; // initial value is 0


    // Get Inputs
    printf("Enter student0 grade and then press Enter:\n");
    scanf_s("%d", &student0_grade);
    printf("Enter student1 grade and then press Enter:\n");
    scanf_s("%d", &student1_grade);
    printf("Enter student2 grade and then press Enter:\n");
    scanf_s("%d", &student2_grade);
    printf("Enter student3 grade and then press Enter:\n");
    scanf_s("%d", &student3_grade);
    printf("Enter student4 grade and then press Enter:\n");
    scanf_s("%d", &student4_grade);
    printf("Enter student5 grade and then press Enter:\n");
    scanf_s("%d", &student5_grade);
    printf("Enter student6 grade and then press Enter:\n");
    scanf_s("%d", &student6_grade);
    printf("Enter student7 grade and then press Enter:\n");
    scanf_s("%d", &student7_grade);
    printf("Enter student8 grade and then press Enter:\n");
    scanf_s("%d", &student8_grade);
    printf("Enter student9 grade and then press Enter:\n");
    scanf_s("%d", &student9_grade);

    // Perform Calculation
    students_total_grade = (double)student0_grade
        + (double)student1_grade
        + (double)student2_grade
        + (double)student3_grade
        + (double)student4_grade
        + (double)student5_grade
        + (double)student6_grade
        + (double)student7_grade
        + (double)student8_grade
        + (double)student9_grade;
    students_average = (double)students_total_grade / 10;

    // Present Output;
    printf("Students total grade %g\n", students_total_grade);
    printf("Students total average %g\n", students_average);
  
    return 0;
}