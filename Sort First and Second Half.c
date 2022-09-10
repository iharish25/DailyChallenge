/*
Sort First and Second Half

The program must accept an integer array of size N as the input. The program must sort the first half of the array in ascending 
order and then sort the second half of the array in descending order. Finally, the program must print the modified array as the 
output. 
Note: If N is odd then consider the first N/2 integers as the first half of the array and consider the remaining integers as the 
second half of the array. 

Boundary Condition(s): 
1 <= N <= 100000 

Input Format: 
The first line contains the value of N. 
The second line contains N integers separated by a space(s). 

Output Format: 
The first line contains N integers of the modified array separated by a space(s). 

Example Input/Output 1: 
Input: 
6 
1 3 2 4 5 6 

Output: 
1 2 3 6 5 4 

Explanation: 
The elements in the first half of the array are 1 3 2 
So the elements in the first half of the array are sorted in ascending order as 1 2 3 
The elements in the second half of the array are 4 5 6 
So the elements in the second half of the array are sorted in descending order as 6 5 4 
Hence the output is printed as 1 2 3 6 5 4 

Example Input/Output 2: 
Input: 
5 
4 3 2 6 7 

Output: 
3 4 7 6 2 

Explanation: 
The N value is odd, the first half of the array are 4 3 
So the elements in the first half of the array are sorted in ascending order as 3 4 
The elements in the second half of the array are 2 6 7 
So the elements in the second half of the array are sorted in descending order as 7 6 2 
Hence the output is printed as 3 4 7 6 2
*/
#include <stdio.h>

int main()
{
    int num, index, indexj, tempVar;
    scanf("%d",&num);
    int arrayNum[num+1];
    for(index=1; index<=num; index++)
    scanf("%d",&arrayNum[index]);
    int halfIter=num/2;
    for(index=1; index<=halfIter; index++){
        for(indexj=index+1; indexj<=halfIter; indexj++){
            if(arrayNum[index]>arrayNum[indexj]){
                tempVar=arrayNum[index];
                arrayNum[index]=arrayNum[indexj];
                arrayNum[indexj]=tempVar;
            }
        }
    }
    for(index=halfIter+1; index<=num; index++){
        for(indexj=index+1; indexj<=num; indexj++){
            if(arrayNum[index]<arrayNum[indexj]){
                tempVar=arrayNum[index];
                arrayNum[index]=arrayNum[indexj];
                arrayNum[indexj]=tempVar;
            }
        }
    }
    for(index=1; index<=num; index++)
    printf("%d ",arrayNum[index]);
}
