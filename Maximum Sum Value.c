/*
Maximum Sum Value 

The program must accept an array of positive integers of size N as the input. The program must print the maximum sum of the 
increasing order of the integers in the given array as the output. 

Boundary Condition(s): 
3 <= N <= 999 

Input Format: 
The first line contains the value of N. 
The second line contains the N integers separated by space(s). 

Output Format: 
The first line contains the maximum sum of the increasing order of the integers. 

Example Input/Output 1: 
Input: 
7 
1 2 1 7 10 9 5 

Output: 
18 

Explanation: 
The increasing order of integers in the array are 
1 2 (sum is 3) 
1 7 10 (sum is 18) 
18 is the maximum sum between the two sum values. 
Hence, 18 is printed as the output. 

Example Input/Output 2: 
Input: 
5 
1 5 6 8 9 

Output: 
29
*/
#include <stdio.h>

int main()
{
    int number,sumVar=0,tempVar=-10,flag=0,indexI=0;
    scanf("%d",&number);
    int array[number];
    for(indexI=0; indexI<number; indexI++){
        scanf("%d",&array[indexI]);
    }
    for(indexI=0; indexI<number; indexI++){
        if(array[indexI]<array[indexI+1]){
            sumVar=sumVar+array[indexI];
        }
        else if(array[indexI]>array[indexI+1]){
            sumVar=sumVar+array[indexI];
            if(sumVar>tempVar){
                tempVar=sumVar;
                flag=1;
            }
            sumVar=0;
        }
    }
    if(flag==0)
    tempVar=sumVar;
    printf("%d",tempVar);
}
