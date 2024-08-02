#include<stdio.h>
int main() {
    int a=9,b=7;
    a=a^b;
    b=b^a;
    a=a^b;
    printf("%d,%d\n",a,b);
    return 0;
}