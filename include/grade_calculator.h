#ifndef GRADE_CALCULATOR_H
#define GRADE_CALCULATOR_H

typedef struct {
    char name[50];
    float midterm_w;
    float quiz_w;
    float homework_w;
    float lab_w;
    float project_w;
    float final_w;
} CourseWeights;

void print_banner();
void print_courses();
void print_grade_letters();
float calculate_final(float target, float current_total, float final_weight);

#endif