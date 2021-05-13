#pragma once
struct object {
    float x;
    float y;
    float r;
    int object_crossing_1;
    int object_crossing_2;
};
void check_circle(char* search, int m_string);
float p_and_a(char* search, int m_string);
void output(struct object* circle);
float coordinate_x(char* search, int m_string);
float coordinate_y(char* search, int m_string);
void object_crossing(struct object* circle);

