/*
Replace Vowels by Consonants and Vice versa 

The program must accept a string S as the input. The program must replace every vowel in the string S by the next consonant 
(alphabetical order) and replace every consonant in the string S by the next vowel (alphabetical order). Finally, the program 
must print the modified string as the output. 
Note: All the alphabets in the string S must be in lower case. 

Boundary Condition(s): 
1 <= Length of S <= 100 

Input Format: 
The first line contains the value of string S. 

Output Format: 
The first line contains the modified string. 

Example Input/Output 1: 
Input: 
orange 

Output: 
puboif 

Example Input/Output 2:
Input: 
mergesort 

Output: 
ofuifupuu
*/
#include <stdio.h>
int isVowel(char alpha){
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
        return 1;
    }
    return 0;
}
int main()
{
    char string[101],alpha1;
    int index;
    scanf("%s",string);
    for(index=0; string[index]!='\0'; index++){
        if(isVowel(string[index])){
            printf("%c",string[index]+1);
        }
        else{
            for(alpha1=string[index]; alpha1<='z'; alpha1++){
                if(alpha1=='z')
                alpha1='a';
                if(isVowel(alpha1)){
                    printf("%c",alpha1);
                    break;
                }
            }
        }
    }
}
