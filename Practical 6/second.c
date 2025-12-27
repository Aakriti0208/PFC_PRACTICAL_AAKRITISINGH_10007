//PRACTICAL 6 
//2. Sum of even numbers using continue
#include <stdio.h>
int main(){
    printf("Aakriti Singh \nRU-25-10007\n");
    int i, num, sum = 0;
    printf("Enter the value of num (N): ");
    scanf("%d", &num);
    printf("Even numbers considered:\n");
    for (i = 1; i <= num; i++){
        if (i % 2 != 0){
        continue;}
        sum += i;
        printf("%d\n",i);}
        printf("Sum of all even numbers from 1 to %d = %d\n", num, sum);
return 0;
}
//OUTPUT
//Aakriti Singh 
//RU-25-10007
//Enter the value of num (N): 18
//Even numbers considered:
//2
//4
//6
//8
//10
//12
//14
//16
//18
//Sum of all even numbers from 1 to 18 = 90