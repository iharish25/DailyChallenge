/*
Count of Longest Consecutive 1's 

The program must accept an integer N as the input. The program must print the count of longest consecutive 
1's in the binary representation of N as the output. 

Boundary Condition(s): 
1 <= N <= 99999999 

Input Format: 
The first line contains the integer value of N. 

Output Format: 
The first line contains the count of longest consecutive 1's in the binary representation of N. 

Example Input/Output 1: 
Input: 
55 

Output: 
3 

Explanation: 
The binary representation of 55 is 110111. 
The first two bits and the last three bits are consecutive 1's. 
The count of the longest consecutive 1's is 3. 
Hence, 3 is printed as the output. 

Example Input/Output 2: 
Input: 
1468 

Output: 
4
*/
#include <stdio.h>
int ans(int number){
    int highCount=-1, counter=0, temp=0;
    while(number>0){
        temp=number%2;
        if(temp==1){
            counter++;
        }
        if(temp==0||number/2==0){
            if(counter>highCount){
                highCount=counter;
            }
            counter=0;
        }
        number=number/2;
    }
    if(highCount==-1)
    return counter;
    return highCount;
}
    int main(){
    int number;
    scanf("%d",&number);
    printf("%d",ans(number));
}
