#include <stdio.h>
#include "grade_calculator.h"

int main()
{
    float threshold[] = {90.0, 85.0, 70.0, 65.0, 60.0, 55.0, 50.0};

    // Define weights for each course professionally
    CourseWeights courses[] = {
        {"Mathematics", 0.30, 0.10, 0.10, 0.00, 0.00, 0.50},
        {"Physics", 0.30, 0.05, 0.05, 0.05, 0.00, 0.50},
        {"Computer Programming", 0.30, 0.10, 0.10, 0.00, 0.25, 0.25},
        {"Intro to Engineering", 0.30, 0.10, 0.10, 0.00, 0.00, 0.50}};

    int choice, grade_idx;
    float midterm, quiz, homework, lab, project, current_total, required;

    print_banner();
    print_courses();
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 4)
        return 1;

    print_grade_letters();
    if (scanf("%d", &grade_idx) != 1 || grade_idx < 1 || grade_idx > 7)
        return 1;

    CourseWeights selected = courses[choice - 1];
    printf("\n--- Entering Grades for %s ---\n", selected.name);

    printf("Midterm: ");
    scanf("%f", &midterm);
    printf("Quiz: ");
    scanf("%f", &quiz);
    printf("Homework: ");
    scanf("%f", &homework);

    current_total = (midterm * selected.midterm_w) + (quiz * selected.quiz_w) + (homework * selected.homework_w);

    if (selected.lab_w > 0)
    {
        printf("Lab: ");
        scanf("%f", &lab);
        current_total += (lab * selected.lab_w);
    }
    if (selected.project_w > 0)
    {
        printf("Final Project: ");
        scanf("%f", &project);
        current_total += (project * selected.project_w);
    }

    required = calculate_final(threshold[grade_idx - 1], current_total, selected.final_w);

    printf("\n>>> RESULT <<<\n");
    if (required > 100)
        printf("Impossible to pass with this grade.\n");
    else if (required <= 0)
        printf("You already met the target score!\n");
    else
        printf("Minimum Final Grade Needed: %.2f\n", required);

    printf("=========================================\n");
    return 0;
}