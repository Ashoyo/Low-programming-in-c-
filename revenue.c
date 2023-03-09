#include<stdio.h>
#include<stdlib.h>


// jimmy jiang 9/4, cis 2107, lab2




int main(){

double price;
double quantity;


printf("Welcome to \"Temple\" store \n");

printf("Enter item price: \n");
scanf("%lf",&price);
if (price <=0)
{
                printf("This is not a valid item price  \n");
                printf("please run the program again \b");
                printf("Thank You for using \"Temple\" store");
                exit(1);
 }





printf("enter quanity: \n");
scanf("%lf",&quantity);
int quat= quantity;
if(quantity<=0 || quantity != quat){
                printf("This is not a valid quanity \n");
                printf("please run the program again \n");
                printf("Thank You for using \"Temple\" store");
                exit(1);    
}


double discountrate;

        if(quantity >= 1 && quantity <= 49)
                discountrate = 0;
        else if(quantity >= 50 && quantity <= 99)
                discountrate = 10;
        else if(quantity >= 100 && quantity <= 149)
                discountrate = 15;
        else if(quantity >= 150)
                discountrate = 25;



printf("The item price is: $%.1lf \n",price);
printf("The order is: %.1lf item(s) \n", quantity);

double cost;
cost= price * quantity;

printf("The cost is: $%.1lf \n",cost);



double discount;
discount = ((double)discountrate/100.0)*cost;



printf("the discount rate is:%.1lf %% \n",discountrate);



printf("the discount is $%.1lf \n",discount);


double total;
total= cost - discount;

printf("The total is: $%.1lf \n",total);


printf("Thank You for using \"Temple\" store");










}

