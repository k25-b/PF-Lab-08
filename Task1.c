#include<stdio.h>
int main() {
    int array[4][3] ={{80,75,90},{60,70,85},{88,92,79}, {55,65,70}};
    float sub1=0, sub2=0, sub3=0;
    for (int i=0;i<4;i++) {
        float sum=0;
        for (int j=0;j<3;j++) {
            sum = sum + array[i][j];
            if (j==0) {
                sub1 = sub1 + array[i][j];
            }
            else if (j==1) {
                sub2 = sub2 + array[i][j];
            }
            else if (j==2) {
                sub3 = sub3 + array[i][j];
            }
        }
        printf("Total marks of student %d are %.2f\n", i+1, sum);

    }
    printf("Avg marks in subject 1 are %.2f\n", sub1/4);
    printf("Avg marks in subject 2 are %.2f\n", sub2/4);
    printf("Avg marks in subject 3 are %.2f\n", sub3/4);

}
