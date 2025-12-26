//PRACTICAL 7 
//3.Print the Alphabet pattern
#include <stdio.h>
int main(){
printf("Aakriti Singh \nRU-25-10007\n");
int rows=4;
for(int i=1;i<=rows;i++){
char ch='A';
for(int j=1;j<=i;j++){
printf("%c",ch);
ch++;}
printf("\n");}
return 0;
}
// OUTPUT
// Aakriti Singh 
// RU-25-10007
// A
// AB
// ABC
// ABCD