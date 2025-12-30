//PRACTICAL 10
//2. Sum of diagnol elements of 2d array.
#include <stdio.h>
int main(){
printf("Aakriti Singh\nRU-25-10007\n");
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j,sum=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i==j)
sum=sum+a[i][j];
}}
printf("Sum of diagonal elements = %d",sum);
return 0;
}
// OUTPUT
// Aakriti Singh
// RU-25-10007
// Sum of diagonal elements = 15
