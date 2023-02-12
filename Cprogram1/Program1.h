#ifndef PROGRAM1_H
#define PROGRAM1_H

int MONTHS = 12;
char *ALL_MONTHS[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

float* read_data(char *file_name);
void print_data(float *sales);
void min_max_avg(float *sales);
void six_month_avg(float *sales);
void print_sales_descending(float *sales);

#endif