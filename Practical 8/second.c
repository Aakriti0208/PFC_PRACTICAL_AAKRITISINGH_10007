//PRACTICAL 8
//2. Swap 2 numbers using pass by reference
#include<stdio.h>
void swap(int*num1,int*num2){
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;}
int main(){
printf("Aakriti Singh \nRU-25-10007\n");
int a;
printf("Enter first number: ");
scanf("%d",&a);
int b;
printf("Enter second number: ");
scanf("%d",&b);
printf("Before swapping:a=%d,b=%d\n",a,b);
swap(&a,&b);
printf("After swapping:a=%d,b=%d\n",a,b);
return 0;
}
// OUTPUT
// Aakriti Singh 
// RU-25-10007
// Enter first number: 10
// Enter second number: 8
// Before swapping:a=10,b=8
// After swapping:a=8,b=10