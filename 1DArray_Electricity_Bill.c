/*
   Write a program in c to generate the electricity bills
   for 5 customers as per following billing plan to be paid
   by the customer :
   -> If consumed units 0-200 then electricity charges are NIL.
   -> If consumed units 0-300 then electricity charges are Rs. 3/unit.
   -> If consumed units 301-500 then electricity charges are Rs. 3/unit 
   for 1 to 300 units and Rs. 5/unit for 301-500 units.
   -> if consumed units are more than 500 then electricity charges are Rs. 3/unit
   for 1-300 units Rs. 5/unit for 301 to 500 units and Rs. 7/unit for 501 and above.

   INPUT :
   First five lines of the input contains two space separated values n amd m, representing
   the previous meter reading and the current meter readings respectively of each customer.
   
   OUTPUT :
   Output shows one value reflecting the total electricity bill of all customers .
   

*/
#include<stdio.h>
int main(){
    int input,output,final,amount=0;
    for (int i=0;5>i;i++){
        scanf("%d %d",&input,&output);
        final=output-input;
        if (final<=200){
            amount=amount+0;
        }
         else if (final<=300){
            amount=amount+final*3;
        }
        else if (final<=500){
            int t=final-300;
            amount=amount+300*3+t*5;
        }
        else {
            int t=final-500;
            amount=amount+300*3+200*5+t*7;
        }
    }
    printf("%d",amount);    
}