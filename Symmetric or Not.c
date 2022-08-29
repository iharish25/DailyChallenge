/*
Symmetric or Not 

The program must accept a binary matrix of size RxC as input. The program must print H if the matrix is horizontally symmetric, V if the matrix is vertically symmetric or S if the matrix is symmetric (both horizontally and vertically). Else the program must print -1 as the output. 

Boundary Condition(s): 3 <= R, C <= 30 

Input Format: 
The first line contains the value of R and C separated by a space. 
The next R lines contain C elements of the binary matrix separated by space(s). 

Output Format: 
The first line contains either 'H' or 'V' or 'S' or '-1'. 

Example Input/Output 1: 
Input: 
3 3 
1 0 1 
0 1 0 
1 0 1 

Output: 
S 

Explanation: 
In the given binary matrix, first row is equal to the last row and the second row is equal to the second last row(middle row). Similarly, first column is equal to the third column and the second column is equal to the second last column(middle column). Hence, S is printed. 

Example Input/Output 2: 
Input: 
4 4 
1 0 1 0 
0 1 0 1 
1 0 1 0 
0 1 0 1 

Output: 
-1 

Explanation: 
In the binary matrix, first row is not equal to the last row and the second row is not equal to the second last row. Similarly, first column is not equal to the last column and the second column is not equal to the second last column. Hence, -1 is printed. 

Example Input/Output 3: 
Input: 
4 4 
1 0 0 1 
0 0 0 0 
1 1 1 1 
1 1 1 1 

Output: 
V 

Explanation: 
In the given binary matrix, first column is equal to the last column and the second column is equal to the second last column. Hence, V is printed. 
Example Input/Output 4: 
Input: 
4 4 
1 0 1 0 
0 0 1 1 
0 0 1 1 
1 0 1 0 

Output: 
H 

Explanation: 
In the given binary matrix, first row is equal to the last row and the second row is equal to the second last row. Hence, H is printed.
*/

#include <stdio.h>

int main()
{
    int row, col, indexI,indexJ;
    scanf("%d %d",&row,&col);
    int IpMatrix[row][col], flagHorizontal=1, flagVertical=1;
    int traverseRow=row/2, traverseCol=col/2;
    if(row%2==0)
    traverseRow--;
    if(col%2==0)
    traverseCol--;
    for(indexI=0; indexI<row; indexI++){
        for(indexJ=0; indexJ<col; indexJ++){
            scanf("%d",&IpMatrix[indexI][indexJ]);
        }
    }
    for(indexI=0; indexI<=traverseRow; indexI++){
        for(indexJ=0; indexJ<col; indexJ++){
            if(IpMatrix[indexI][indexJ]!=IpMatrix[row-indexI-1][indexJ]){
                flagHorizontal=0;
            }
        }
    }
    for(indexI=0; indexI<=traverseCol; indexI++){
        for(indexJ=0; indexJ<row; indexJ++){
            if(IpMatrix[indexJ][indexI]!=IpMatrix[indexJ][col-indexI-1]){
                flagVertical=0;
            }
        }
    }
    if(flagHorizontal==0&&flagVertical==0){
        printf("%d",-1);
    }
    else if(flagHorizontal==1&&flagVertical==1){
        printf("S");
    }
    else if(flagHorizontal==1){
        printf("H");
    }
    else if(flagVertical==1){
        printf("V");
    }
}
