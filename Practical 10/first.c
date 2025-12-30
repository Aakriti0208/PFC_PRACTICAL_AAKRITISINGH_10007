//PRACTICAL 10
//1. Max and min element in 2D array.
#include <stdio.h>
int main(){
printf("Aakriti Singh\nRU-25-10007\n");
int a[2][3]={{10, 20, 30},{5, 15, 25}};
int i,j,max,min;
max=a[0][0];
min=a[0][0];
for(i=0;i<2;i++){
for(j=0;j<3;j++){
if(a[i][j]>max)
max=a[i][j];
if(a[i][j]<min)
min=a[i][j];
}}
printf("Maximum=%d\n",max);
printf("Minimum=%d",min);
return 0;
}
// OUTPUT
// Aakriti Singh
// RU-25-10007
// Maximum=30
// Minimum=5
