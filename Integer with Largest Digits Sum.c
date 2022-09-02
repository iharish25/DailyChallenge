/*
Integer with Largest Digits Sum 

The program must accept an integer N as the input. The program must print an integer from 1 to N 
which has the largest sum of digits as the output. If more than one integers contain the largest 
digits sum, then the program must print the largest integer among them as the output. 

Boundary Condition(s): 1 <= N <= 1000 

Input Format: 
The first line contains the value of N. 

Output Format: 
The first line contains the integer with the largest digits sum. 

Example Input/Output 
Input: 
100 

Output: 
99 

Explanation: 
sum of digits in 1 is 1 sum of digits in 2 is 2 
. 
. 
sum of digits in 98 is 17 
sum of digits in 99 is 18 
sum of digits in 100 is 1 
From 1 to 100, 99 has the largest digit sum (9 + 9 = 18). 

Example Input/Output 2: 
Input: 
48 

Output: 
48 

Example Input/Output 3: 
Input: 
521 

Output: 
499
*/
#include <stdio.h>

int getSum(int num,int sum){
    if(num == 0)
        return sum;

    sum += num % 10;

    return getSum(num/10, sum);
}
int main()
{
    int number,indexI=0,larSum=-1,sum=0;
    scanf("%d",&number);
    for(indexI=number; indexI>=(number-200); indexI--){
        if(getSum(indexI,sum)>getSum(larSum,sum)){
            larSum=indexI;
        }
    }
    printf("%d",larSum);
}