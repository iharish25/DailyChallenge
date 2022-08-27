/*
Consonants Rotated String 

The program must accept the value of a string S and an integer N as input. The program must rotate the consonants (anti-clockwise direction) in the string by N times. Finally, the program must print the rotated string as the output. 

Boundary Condition(s): 
2 <= Length of String S <= 1000 
1 <= N <= 50 

Input Format: 
The first line contains the value S and value of N separated by a space. 
Output Format: 
The first line contains the rotated string. 

Example Input/Output 1: 
Input: 
aabaajaaks 2 

Output: 
aakaasaabj 

Example Input/Output 2: 
Input: 
helloworld 5 

Output: 
ledhololwr
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int isConsonant(char alpha){
    alpha=tolower(alpha);
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
        return 0;
    }
    return 1;
}
int RotateString(char String[], int N, int StringLen){
    int index,indexK;
    char alpha1;
    while(N>0){
        for(index=0; index<StringLen; index++){
            if(isConsonant(String[index])){
                alpha1=String[index];
                break;
            }
        }
        for(indexK=StringLen-1; indexK>=0; indexK--){
            if(isConsonant(String[indexK])){
                char tempVar=String[indexK];
                String[indexK]=alpha1;
                alpha1=tempVar;
            }
        }
        N--;
    }
}
int main()
{
    char S[1001];
    int N;
    scanf("%s %d",S,&N);
    int StringLen=strlen(S);
    RotateString(S,N,StringLen);
    printf("%s",S);
}
