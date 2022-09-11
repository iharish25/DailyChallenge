/*
Disount on Book Price 

The program must accept two integers X and Y as the number of books and price of each book as the input. The program must 
print the total price of the amount after applying the discount based on the below conditions: 
-If the number of books is greater than or equal to 2 and less than or equal to 4, then 10 percent is discounted from the total 
price of the books. 
-If the number of books is 5, then 20 percent is discounted from the total price of the books. 
-If the number of books is more than 5, then 50 percent is discounted from the total price of the books. 
-No discount is applied if none of the conditions matches. 

Boundary Condition(s): 
1 <= X <= 999 30 <= Y <= 800 

Input Format: 
The first line contains the value of X and Y separated by a space. 

Output Format: 
The first line contains the discounted price. 

Example Input/Output 1: 
Input: 
2 
30 

Output: 
54 

Explanation: 
There are 2 books and each costs 30. 
The number of books is greater than or equal to 2 and less than or equal to 4. 
So 10% discount is applied to the total price 60. 
So 54 is printed as the output. 

Example Input/Output 2: 
Input: 
1 
300 

Output: 
300
*/
#include <stdio.h>

int main()
{
    int Books, Price, totalPrice,Discount=0;
    scanf("%d %d",&Books, &Price);
    totalPrice=Price*Books;
    if(Books>=2&&Books<=4){
        Discount=(10*totalPrice)/100;
    }
    else if(Books==5){
        Discount=(20*totalPrice)/100;
    }
    else if(Books>5){
        Discount=(50*totalPrice)/100;
    }
    printf("%d",totalPrice-Discount);
    return 0;
}
