#include <stdio.h>
#include "grade_calculator.h"

void print_banner() {
    printf("=========================================\n");
    printf("       GRADE PASSER - PRO VERSION        \n");
    printf("=========================================\n");
}

void print_courses() {
    printf("Select a course:\n");
    printf("1. Mathematics\n");
    printf("2. Physics\n");
    printf("3. Computer Programming\n");
    printf("4. Intro to Computer Engineering\n");
    printf("Choice: ");
}

void print_grade_letters() {
    printf("\nTarget Grade (1:AA, 2:BA, 3:BB, 4:CB, 5:CC, 6:DC, 7:DD): ");
}

float calculate_final(float target, float current_total, float final_weight) {
    return (target - current_total) / final_weight;
}