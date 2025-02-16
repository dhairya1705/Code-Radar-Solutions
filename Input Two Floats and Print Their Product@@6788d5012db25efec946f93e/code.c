#include <stdio.h>

int main()
{
    float num1, num2, product;
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    // Calculating the product
    product = num1 * num2;
    
    // Displaying the result
    printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, product);
    
    return 0;
}
