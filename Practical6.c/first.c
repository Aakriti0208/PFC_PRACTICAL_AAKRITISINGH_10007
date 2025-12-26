//PRACTICAL 6 
//1. Print numbers from a to b using loops
#include <stdio.h>
int main(){
printf("Aakriti Singh \nRU-25-10007\n");
int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Number between %d and %d are:\n",a,b);
for(int i=a;i<=b;i++){
    printf("%d\n",i);}
    printf("\n");
return 0;
}
//OUTPUT
//Aakriti Singh 
//RU-25-10007
//Enter the first number: 9
//Enter the second number: 17
//Number between 9 and 17 are:
//9
//10
//11
//12
//13
//14
//15
//16
//17