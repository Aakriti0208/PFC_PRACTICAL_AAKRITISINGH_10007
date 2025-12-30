//PRACTICAL 9
//1. Reverse an array.
#include <stdio.h>
int main() {
printf("Aakriti Singh\nRU-25-10007\n");
int arr[5]={10,20,30,40,50};
int i,temp;
for(i=0;i<5/2;i++){
temp=arr[i];
arr[i]=arr[4-i];
arr[4-i]=temp;
}
printf("Reversed array: ");
for(i=0;i<5;i++){
printf("%d ",arr[i]);
}
return 0;
}
//OUTPUT
// Aakriti Singh
// RU-25-10007
// Reversed array: 50 40 30 20 10 
