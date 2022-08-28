/*
Consecutive 1's Count 

The program must accept a matrix of size RxC as input. The program must print the count of consecutive 1's column-wise as the output. 

Boundary Condition(s): 
1 <= R, C <= 100 

Input Format: 
The first line contains the value of R and C. 
The next R lines contain C integers (0's and 1's) separated by space. 
Output Format: 
The first line contains the count of consecutive 1's column-wise. 

Example Input/Output 1: 
Input: 
5 4 
1 0 1 1 
1 0 0 1 
0 1 1 1 
1 0 0 0 
1 1 1 1 

Output: 
3 
Explanation: 
In the first column, there are two consecutive 1's. 
In the last column, there is one consecutive 1's. 
Hence the output is 3. 

Example Input/Output 2: 
Input: 
5 6 
0 0 1 1 0 
1 0 0 1 0 
0 1 0 1 1 
1 0 0 0 1 
0 0 1 1 0 
0 0 0 0 1 

Output: 
4
*/
#include <stdio.h>

int main()
{
    int row, col,indexI=0,indexj=0,indexK=0,consecutive=0,counter=0;
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    for(indexI=0; indexI<row; indexI++){
        for(indexj=0; indexj<col; indexj++){
            scanf("%d",&matrix[indexI][indexj]);
        }
    }
    for(indexI=0; indexI<col; indexI++){
        for(indexj=0; indexj<row; indexj++){
            if(matrix[indexj][indexI]==1){
                for(indexK=indexj; indexK<row; indexK++){
                    if(matrix[indexK][indexI]==0){
                        break;
                    }
                    if(matrix[indexK][indexI]==1){
                        consecutive++;
                    }
                }
                if(consecutive>=2){
                    counter++;
                }
                indexj=indexK;
                consecutive=0;
            }
        }
    }
    printf("%d",counter);
}
