//PRACTICAL 9
//3. Sum of all even elements of an array.
#include <stdio.h>
int main(){
printf("Aakriti Singh\nRU-25-10007\n");
int a[10]={1,2,3,4,5,6,7,8,9,10};
int i,sum=0;
for(i=0;i<10;i++){
if(a[i]%2==0){
sum=sum+a[i];
}}
printf("Sum of even elements = %d",sum);
return 0;
}
//OUTPUT
// Aakriti Singh
// RU-25-10007
// Sum of even elements = 30
