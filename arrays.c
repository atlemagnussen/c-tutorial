#include <stdio.h>

int main() {
    int grades[2][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* TODO: complete the for loop with appropriate terminating conditions */
    int length2 = sizeof(grades[0]);
    int length1 = sizeof(grades) / length2;
    for (i = 0; i < length1; i++) {
        average = 0;
        for (j = 0; j < length2; j++) {
            average += grades[i][j];
        }
        average = average / 5;
        /* TODO: compute the average marks for subject i */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}
