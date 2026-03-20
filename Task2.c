#include<stdio.h>
int main() {
    int array[5][6] = {{0,0,0,1,1}, {0,0,0,0,0}, {1,1,1,1,1}, {0,1,1,1,1}, {1,0,1,1,0}};
    int seats_available = 0, max = 0, row_number = 0;
    for (int i=0; i<5; i++) {
        int seats_taken = 0;
        for (int j=0; j<6; j++) {
            if (array[i][j] == 0) {
                seats_available++;
            }
            else if (array[i][j] == 1) {
                seats_taken++;
            }
            if (seats_taken > max) {
                max = seats_taken;
                row_number = i+1;
            }
        }
    }
    printf("Row %d is the most populated with %d viewers\n", row_number, max);
printf("%d seats are available", seats_available);

}
