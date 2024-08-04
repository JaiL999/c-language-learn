#include <stdio.h>
int main() {
    int year;
    float money,rate,total;
    printf ("Input money and year");
    scanf("%f,%d,&money,&year");
    switch(year) {
        case 1:
            rate=0.0032;
            break;
        case 2:
            rate=0.0041;
            break;
        case 2
            rate=0.005;
            break;
        default;
            rate=0.0
    }
    total=money+money*rate*12*year;
    printf("Total=%.2f\n",total)
}
        