//1. Write a program to print Hello Students on the screen.
/*#include<stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}*/
//*2. Write a program to print Hello in the first li/ne and Students in the second line.
/*#include<stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
}*/
//3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes),
/*#include<stdio.h>
int main()
{
    printf(" \"MySirG\" ");
    return 0;
}*/
//4. WAP to find the area of the circle. Take radius of circle from user as input and print the 
//result in below given format.
#include<stdio.h>
int main()
{   
    int R,A;
    printf("Enter the radius");
    scanf("%d",&A);
    A=3.14*R*R;
    printf("Area of circle is %d having the radius %d ”,A,R);
    return 0;
}