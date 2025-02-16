#include <stdio.h>

int main()
{
    float num1, num2, product;
    
    // Taking input from the user
    printf("Enter the first floating number: ");
    scanf("%f", &num1);
    
    printf("Enter the second floating number: ");
    scanf("%f", &num2);
    
    // Calculating the product
    product = num1 * num2;
    
    // Displaying the result
    printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, product);
    
    return 0;
}
