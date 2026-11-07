#include <stdio.h>
int main(void){
   double budget;
    printf("    HOSTEL EXPENSE TRACKER    \n"); 
printf("Your Personal Budget Assistant \n ");
printf("Let's manage your money smarter! \n");
printf("Enter your monthly budget: ");
scanf("%lf",&budget);

printf("Hey! Your monthly budget is: %.2f\n",budget);
printf("Let's start tracking your expenses! \n"); 

return 0;
}