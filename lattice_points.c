#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* A program to compute the lattice points of a circle centered at (0,0)
 */

int main() {
    
    int r;
    printf("Enter the radius of the circle ");
    scanf("%d", &r);

    int out[1000][2];
    int out_index = 0;

    int xcount;
    for(xcount = 0; xcount <= r ; xcount++) {
        float temp = sqrt(pow(r,2) - pow(xcount, 2));
        if((float)((int)temp - temp) == 0.000000) {
            out[out_index][0] = xcount;
            out[out_index][1] = (int)temp;
            out_index++;
        }
    }

    printf("Lattice points are...\n");

    int count;
    for(count = 0; count < out_index; count++) {
        printf("x = %d, y = %d \n", out[count][0], out[count][1]);
        if(out[count][0] != 0) {
            printf("x = %d, y = %d \n", -1* out[count][0], out[count][1]);
        }
        if(out[count][1] != 0) {
            printf("x = %d, y = %d \n", out[count][0], -1 * out[count][1]);
        }
        if(out[count][0] != 0 && out[count][1] != 0) {
            printf("x = %d, y = %d \n", -1 * out[count][0], -1 * out[count][1]);
        }
    }
    return 0;
}
