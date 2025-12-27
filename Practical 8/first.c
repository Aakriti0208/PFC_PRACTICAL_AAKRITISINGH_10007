//PRACTICAL 8
//1. Write a function sum of digits that take n as input and return sum of its digits.
#include <stdio.h>
int sumOfDigit(int n){
int sum=0;
while(n!=0){
sum+=n%10;n/=10;}
return sum;
}
int main(){
printf("Aakriti Singh \nRU-25-10007\n");
int n;
printf("Enter a number: ");
scanf("%d",&n);
int result=sumOfDigit(n);
printf("Sum of digits of %d=%d\n", n, result);
return 0;
}
// OUTPUT
// Aakriti Singh 
// RU-25-10007
// Enter a number: 5846
// Sum of digits of 5846=23