#include <stdio.h>
int main(void){
   double budget,amount,total_expenses=0;
double category_expenses[5] = {0};
   int choice,category;
    printf("    HOSTEL EXPENSE TRACKER    \n"); 
printf("Your Personal Budget Assistant \n ");
printf("Let's manage your money smarter! \n");
do {
    printf("Enter your monthly budget: ");
    scanf("%lf", &budget);

    if (budget <= 0)
        printf("Invalid budget! Try again.\n");

} while (budget <= 0);
printf("Hey! Your monthly budget is: %.2f\n",budget);
printf("Let's start tracking your expenses! \n"); 
do{
printf("1. Add new expense \n");
printf("2. View expense history \n");
printf("3. View Budget Summary \n");
printf("4. Category wise analysis \n");
printf("5. Exit \n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice){
    case 1:
    printf("\n===== ADD NEW EXPENSE =====\n");
printf("1. Food\n");
printf("2. Travel\n");
printf("3. Clothing\n");
printf("4. Study Materials\n");
printf("5. Entertainment\n");
printf("Enter the category number: ");
scanf("%d", &category);
if (category < 1 || category > 5)
{
    printf("Invalid category!\n");
    break;
}
printf("Enter expense amount: ");
scanf("%lf", &amount);
if (amount <= 0)
{
    printf("Invalid amount!\n");
    break;
}
total_expenses += amount;
printf("Expense of Rs. %.2f entered!\n", amount);
category_expenses[category - 1] += amount;
if (total_expenses > budget)
{
    printf("WARNING: Monthly budget exceeded!\n");
}
    break;
    case 2:
    printf("\n===== VIEW EXPENSE HISTORY =====\n");
printf("Food: Rs. %.2f\n", category_expenses[0]);
printf("Travel: Rs. %.2f\n", category_expenses[1]);
printf("Clothing: Rs. %.2f\n", category_expenses[2]);
printf("Study Materials: Rs. %.2f\n", category_expenses[3]);
printf("Entertainment: Rs. %.2f\n", category_expenses[4]);

    break;
    case 3:
    printf("\n===== VIEW BUDGET SUMMARY =====\n");
    printf("Total Expenses: Rs. %.2f\n", total_expenses);
    printf("Remaining Budget: Rs. %.2f\n", budget - total_expenses);
    break;
    case 4:
    printf("\n===== CATEGORY WISE ANALYSIS =====\n");
     if (total_expenses == 0)
    {
        printf("No expenses recorded yet.\n");
    }
    else
    {
        int max_index = 0;

        for (int i = 1; i < 5; i++)
        {
            if (category_expenses[i] > category_expenses[max_index])
            {
                max_index = i;
            }
        }

        printf("Highest Spending Category: ");

        switch (max_index)
        {
            case 0: printf("Food\n"); break;
            case 1: printf("Travel\n"); break;
            case 2: printf("Clothing\n"); break;
            case 3: printf("Study Materials\n"); break;
            case 4: printf("Entertainment\n"); break;
        }

        printf("Amount Spent: Rs. %.2f\n", category_expenses[max_index]);
    }

    break;
    case 5:
    printf("Exiting...\n");
    break;
    default:
    printf("Invalid choice. Please try again.\n");
}}
while(choice !=5);

return 0;
}