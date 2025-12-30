//PRACTICAL 10
//3. Row wise sum of 2d array.
#include <stdio.h>
int main(){
printf("Aakriti Singh\nRU-25-10007\n");
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j,sum;
for(i=0;i<3;i++){
sum=0;
for(j=0;j<3;j++){
sum=sum+a[i][j];}
printf("Sum of row %d=%d\n",i+1,sum);}
return 0;
}
// OUTPUT
// Aakriti Singh
// RU-25-10007
// Sum of row 1=6
// Sum of row 2=15
// Sum of row 3=24
