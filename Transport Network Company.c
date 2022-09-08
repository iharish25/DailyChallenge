/*
Transport Network Company 

The program must accept an uppercase alphabet CH (only either O or U) and a number N as the input. The program must print 
the output based on the following conditions. 
If CH is O, it represents Ola. When O is chosen, it must check for the following options, 
- If N is 1, then print Auto. 
- If N is 2, then print Mini. 
- If N is 3, then print Micro. 
- If N is 4, then print Prime. 

If any of the input values is not in the list mentioned above, then the program must print Invalid. 

If CH is U, it represents Uber. When U is chosen, it must check for the following options, 
- If N is 1, then print Auto. 
- If N is 2, then print Cab. 
If any of the input values is not in the list mentioned above, then the program must print Invalid. 

Example Input/Output 1: 
Input: 
O 2 

Output: 
Ola Mini 

Example Input/Output 2: 
Input: U 2 

Output:
Uber Cab
*/
#include <stdio.h>
#include<ctype.h>

int main()
{
    char alpha;
    int num;
    scanf("%c %d",&alpha,&num);
    alpha=tolower(alpha);
    if(alpha=='o'){
        if(num<1||num>4){
            printf("Invalid");
            return 0;
        }
        printf("Ola ");
        if(num==1)
        printf("Auto");
        else if(num==2)
        printf("Mini");
        else if(num==3)
        printf("Micro");
        else if(num==4)
        printf("Prime");
    }
    else if(alpha=='u'){
        if(num<1||num>2){
            printf("Invalid");
            return 0;
        }
        printf("Uber ");
        if(num==1)
        printf("Auto ");
        else if(num==2)
        printf("Cab");
    }
}
