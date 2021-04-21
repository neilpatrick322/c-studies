#include <stdio.h>

// Initialize Variable
double students_average = 0; // initial value is 0
double students_total_grade = 0; // initial value is 0
int student_grade[10]; // access from [0] --> [9]

void scan_inputs() {
    // Get Inputs
    for (int i = 0; i < 10; i++) {
        printf("Enter student%d grade(0 to 100) and then press Enter:\n", i + 1);
        scanf_s("%d", &student_grade[i]);

        if (student_grade[i] < 0) {
            printf("Invalid input! Input should be greater than or equal to 0.");
            return 0;
        }

        if (student_grade[i] > 100) {
            printf("Invalid input! Input should be less than or equal to 100.");
            return 0;
        }

        students_total_grade = students_total_grade + student_grade[i];
    }
}

void print_outputs() {
    printf("Students total grade %g\n", students_total_grade);
    printf("Students total average %g\n", students_average);
}

double calculate_average() {
    return (double)(students_total_grade / 10.0);
}

int main()
{
    scan_inputs();
    students_average = calculate_average();
    print_outputs();
  
    return 0;
}