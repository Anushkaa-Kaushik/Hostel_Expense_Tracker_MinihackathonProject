#include <stdio.h>
int main(void){
   double budget;
   int choice;
    printf("    HOSTEL EXPENSE TRACKER    \n"); 
printf("Your Personal Budget Assistant \n ");
printf("Let's manage your money smarter! \n");
printf("Enter your monthly budget: ");

scanf("%lf",&budget);

printf("Hey! Your monthly budget is: %.2f\n",budget);
printf("Let's start tracking your expenses! \n"); 
do{
printf("1. Add new expense \n");
printf("2. View expense history \n");
printf("3. View Budget Summary \n");
printf("4. Category wise anayalisis \n");
printf("5. Exit \n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice){
    case 1:
    printf("\n===== ADD NEW EXPENSE =====\n");
    break;
    case 2:
    printf("\n===== VIEW EXPENSE HISTORY =====\n");
    break;
    case 3:
    printf("\n===== VIEW BUDGET SUMMARY =====\n");
    break;
    case 4:
    printf("\n===== CATEGORY WISE ANALYSIS =====\n");
    break;
    case 5:
    printf("Exiting...\n");
    break;
    default:
    printf("Invalid choice. Please try again.\n");
}
while(choice !=5);
}
return 0;
}