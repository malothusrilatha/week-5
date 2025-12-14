#include <stdio.h>
int main() {
    int n, i, sum = 0;
    float percentage;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    int marks[n];  
    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for(i = 0; i < n; i++) {
        sum += marks[i];
    }
    percentage = (float)sum / n;
    printf("\nTotal Marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}




