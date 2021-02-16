//You will be given two numbers stored in variables 'a' and 'b'. Your task is to swap the values present and print them.
//Example
//input: 
//4 5
//output: 
//5 4

#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the values for a & b\n");
    scanf("%d%d", &a, &b);

    //Write your code here
    temp=a;    
    a=b;
    b=temp; 
    printf("a=%d\t b=%d\n",a,b);
    return 0;
}
