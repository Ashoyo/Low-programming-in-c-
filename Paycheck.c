
#include <stdio.h>

#include <stdlib.h>


// jimmy jiang 9/4, cis 2107, lab2


int main()
{

double employee;
double salary;
double time;








printf("welcome to \"temple human resource\"\n"); 



printf("enter employee number:\n");
scanf("%lf", &employee);
int employ= employee;
if (employee<=0 || employee !=employ)
{

        printf("This is not a valid employee number \n");
        printf("please run the program again \n");
        printf("thank you for useing \"temple human resource\"\n ");
        exit(1);    
}





printf("enter hourly salary:\n");
scanf("%lf", &salary);
if (salary<=0)
{
        printf("This is not a valid  hourly salary  \n");
        printf("please run the program again \n");
        printf("thank you for useing \"temple human resource\"\n ");
        exit(1);   
}



printf("enter weekly time:\n");
scanf("%lf", &time);
if (time<=0)
{
        printf("This is not a valid weeky time \n");
        printf("please run the program again \n");
        printf("thank you for useing \"temple human resource\"\n ");
        exit(1);   
}





printf("============================== \n");
printf("Employee #: %.1lf \n",employee);
printf("Hourly Salary: $%.1lf \n",salary);
printf("weekly time: %.1lf \n", time);
double regularplay;
regularplay=  salary*((time > 40) ? 40 : time);
printf("regular play:%.1lf \n",regularplay);

double overtimepay;
overtimepay= ( 1.5 * salary ) * ( (time > 40) ? (time - 40) : 0 );
printf("overtime pay: %.1lf \n",overtimepay);

double netpay;
netpay= regularplay + overtimepay;
printf("netpay: %.1lf\n",netpay);
printf("============================== \n");
printf("thank you for using \"temple human resource\" ");




}





