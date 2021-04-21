#include <stdio.h>
int main()
{
    // Initialize Variables
    unsigned int student_grade = 0; // initial value is 0
    unsigned int maximum_grade = 1000;
    
    // Get Inputs
    printf("Enter maximum-grade and then press Enter:\n");
    scanf_s("%d", &maximum_grade);
    printf("Enter student grade and then press Enter:\n");
    scanf_s("%d", &student_grade);

    // Perform Calculation
    double student_percent = (double)student_grade * 100.00 / (double)maximum_grade;

    // Present Output
    printf("Student grade %d\n", student_grade);
    printf("Max grade %d\n", maximum_grade);
    printf("Student percent grade %g\n", student_percent);
    return 0;
}