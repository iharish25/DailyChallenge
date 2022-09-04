/*
Count of N's 

The program must accept three integers N (represents a digit), X and Y as input. The program must 
print the count of N in the digits of each integer(s) from X to Y (exclusive of X and Y). 

Boundary Condition(s): 
0 <= N <= 9 
1 < Y <= 99999999 
0 <= X < Y 

Input Format: 
The first line contains the integer value of N. 
The second line contains the integers X and Y separated by a space. 

Output Format: 
The first line contains the count of N in the digits of each integer(s) from X to Y. 

Example Input/Output 1: 
Input: 
5 
50 55 
Output: 
4 
Explanation: 
The integers between 50 and 55 are 51, 52, 53 and 54. 
Here, 5 has occurred 4 times. 
Hence 4 is printed as the outputs

Example Input/Output 2: 
Input: 
7 
325 654 

Output: 
63
*/
#include <stdio.h>
int CountOfN(int number,int index){
    int count=0;
    for(int i=index; i!=0; i/=10){
        if(i%10==number){
            count++;
        }
        
    }
    return count;
}
int main()
{
    int number,X,Y,count=0;
    scanf("%d\n%d%d",&number,&X,&Y);
    for(int index=X+1; index<Y; index++){
        count+=CountOfN(number,index);
    }
    printf("%d",count);
}
