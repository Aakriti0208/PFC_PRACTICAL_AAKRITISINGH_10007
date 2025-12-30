//PRACTICAL 9
//2. Max and min element of an array.
#include <stdio.h>
int main(){
printf("Aakriti Singh\nRU-25-10007\n");
int arr[]={10,324,45,90,9808,200};
int n=sizeof(arr)/sizeof(arr[0]);
int max=arr[0];
int min=arr[0];
for(int i=1;i<n;i++){
if(arr[i]>max){
max=arr[i];}
if(arr[i]<min){
min=arr[i];}}
printf("The maximum element in the array is: %d\n",max);
printf("The minimum element in the array is: %d\n",min);
return 0;
}
//OUTPUT
// Aakriti Singh
// RU-25-10007
// The maximum element in the array is: 9808
// The minimum element in the array is: 10
