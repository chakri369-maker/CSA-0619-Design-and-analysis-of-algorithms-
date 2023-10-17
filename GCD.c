#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int  gcd = (num1, num2);
    int  lcm  =(num1, num2);

    printf("gcd: %d\n", gcd);
    printf("lcm: %d\n", lcm);

    return 0;
}
