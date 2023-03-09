#include <stdlib.h>
#include <stdio.h>



// jimmy jiang 9/4, cis 2107, lab3


int balance = 5000;
int transactions=0;





void receipt(){

    int rece;

    printf(" do you want your receipt  0.no 1.yes : \n");
    scanf("%d", &rece);

    if(rece == 1){

        printf(" your receipt is being printed please wait");
    }
    if(rece ==0){
        printf(" receipt will not be printed \n");
    }
}





void getbalance(){

printf( " your blance is  %d  " ,balance);
receipt();
transactions++;


}


void cashwithdrawl(){


int attempt2=0;
int with;

do
{
    printf("enter an amount to withdraw : \n");
    scanf("%d" ,&with);


    if (with >0)
    {
        break;
    }
    

    if (with <=0)
    {
        printf(" invalid amount please try again");
        attempt2++;
    }

    
    




} while (attempt2 <3);




if (attempt2 == 3)
{
    printf("you have enter a invalid 3 times, atm will now exit");
    exit(0);

}






if(with>balance){
    printf("not enough money ");
}


    int withlimit= 1000- with;


 if (withlimit <0 )
    {
        printf("the limited amount to withdraw is $1000! \n")  ;
    }

if(with %20 !=0){
    printf("withdrawn can only be in 20s \n");
}


  

  else{
        int blance= 5000 -  with;

        printf("your current account blance is %d ", blance);

        receipt();
        transactions++;



    }
    




}




void depostion(){


double depos;
int attempt1=0;
int depositlimit= 10000;
int depos1= depos;



do
{
    printf("enter an amount to deposit : \n");
    scanf("%lf" ,&depos);


    if (depos >0)
    {
        break;
    }
    
    if (depos <=0)
    {
        printf(" invalid amount please try again");
        attempt1++;
    }



   

    

} while (attempt1 <3);


if (attempt1 == 3)
{
    printf("you have enter a invalid 3 times, atm will now exit");
    exit(0);

}




if (depositlimit >=depos)
{
    balance = 5000 + depos;
    printf("your current blance is %d " ,balance);
    receipt();
    transactions++;
}
else {
    printf(" the max amoutn you can deposit is $10000!");
}



}






void quit(){

printf(" The number of transactions is %d \n",transactions);
printf(" Thank you for using atm \n");

}















int main(){


int pin;
int attempts=0;
double option;
int counter=0;

while (pin != 3014 && attempts<3)
{
printf("Please enter the pin number \n");
scanf("%d" ,&pin);  

if (pin != 3014)
{
printf(" wrong pin number please try again \n");
attempts++;
}

}

if (attempts == 3)
{
    printf("you have enter the wrong pin 3 times, atm will now exit");
    exit(0);

}





do
{


printf("welcome!, please enter one of the 4 options!   \n");
printf(" 1 check Balance      \n");
printf(" 2 cash withdrawl     \n");
printf(" 3 cash deposition    \n");
printf(" 4 Quit               \n");
scanf("%lf" , &option);



if(option == 1){
    getbalance();
    
}
if (option ==2){
    cashwithdrawl();
}

if(option==3 ){
    depostion();
}




if(option==4){
    quit();
    break;


}



} while (option != 4 );






}
























