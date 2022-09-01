/*
Pattern Printing with Two Characters 

The program must accept an integer N and two characters as input. 
The program must print the desired pattern as shown in the Example Input/Output section. 

Boundary Condition(s): 
1 <= N <= 50 

Input Format: 
The first line contains the value of N followed by a space and then the two 
characters(without any space between the two characters). 

Output Format: 
The first N lines contain the desired pattern as shown in the Example Input/Output section. 

Example Input/Output 1: 
Input: 
5 $# 

Output:
    $
   #$#
  $#$#$
 #$#$#$#
$#$#$#$#$ 

Example Input/Output 2: 
Input: 
6 @% 

Output:
     @
    %@%
   @%@%@
  %@%@%@%
 @%@%@%@%@
%@%@%@%@%@%
*/
#include <stdio.h>

int main()
{
    int number,flag=1,indexI=0;
    char alpha1,alpha2;
    scanf("%d %c %c",&number,&alpha1,&alpha2);
    int spacesRequired=number,counter=0,totRow=0;
    while(totRow<number){
        for(indexI=0; indexI<spacesRequired; indexI++)
        printf(" ");
        spacesRequired--;
        for(indexI=0; indexI<=counter; indexI++){
            if(flag==1){
                printf("%c",alpha1);
                flag=0;
            }
            else if(flag==0){
                printf("%c",alpha2);
                flag=1;
            }
        }
        printf("\n");
        counter+=2;
        totRow++;
    }
}
