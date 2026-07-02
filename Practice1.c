# include<stdio.h>
// Area of square
int main()  {
    int side;
    printf("enter side");
    scanf("%d", &side);
    printf("area is :%d\n", side*side);

//  Area of circle   
    float radius;
    scanf("%f", &radius);
    printf("%f", 3.14 * radius * radius);
    
// Convert Celsius to Fahrenheit
    float Celsius,Fahrenheit;
    scanf("%f", &Celsius);
    printf("%f", Fahrenheit = (Celsius*9/5)+32);
// Simple Interest
    int rate,time,principle;
    scanf("%d %d %d", &rate, &time, &principle);
    printf("%d",(rate*time*principle)/100);
    return 0;
}