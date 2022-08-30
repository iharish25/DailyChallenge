/*
Amount of Waiters 

There are W waiters in a restaurant and N families dining in. The waiters are serving the families in round robin 
fashion. Each family spends X amount for the waiter serving them. The program must print the amount given to 
each waiter as the output. 

Boundary Condition(s): 1 <= W <= 500 1 <= N <= 1000 

Input Format: 
The first line contains the value of W and N separated by a space. 
The second line contains the amount given by each family separated by space(s). 

Output Format: 
The first line contains the amount received by each waiter separated by space(s). 

Example Input/Output 1: 
Input: 
3 5 
100 150 125 50 25 

Output: 
150 175 125 

Explanation: 
The first waiter recieved the amount of Rs.100 from the first family. 
The second waiter received the amount of Rs.150 from the second family. 
The third waiter received the amount of Rs.125 from the third family. 
Again, the first waiter received the amount of Rs.50 from the fourth family. Now, the amount received by the 
first waiter in total is Rs.150 (100 + 50). 
The second waiter received the amount of Rs.25 from the fifth family. Now, the amount received by the second 
waiter in total is Rs.175 (150 + 25). 
Hence, 150 175 125 is printed as output. 

Example Input/Output 2: 
Input: 
7 5 
100 150 100 200 50 

Output: 
100 150 100 200 50 0 0
*/
#include <stdio.h>

int main()
{
    int waiter, families,indexI=0,WaiterCtr=1;
    scanf("%d %d",&waiter,&families);
    int waiterArr[waiter+1], familiesArr[families+1];
    for(indexI=1; indexI<=families; indexI++)
    scanf("%d",&familiesArr[indexI]);
    for(indexI=1; indexI<=waiter; indexI++)
    waiterArr[indexI]=0;
    for(indexI=1; indexI<=families; indexI++){
        waiterArr[WaiterCtr++]+=familiesArr[indexI];
        if(WaiterCtr>waiter){
            WaiterCtr=1;
        }
    }
    for(indexI=1; indexI<=waiter; indexI++)
    printf("%d ",waiterArr[indexI]);
}
