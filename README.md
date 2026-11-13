# Hostel Expense Tracker

### C Programming Mini Hackathon Project

**Team Name:** HerLogic  
**Batch:** 38  
**Team Members:**
- Anushka Kaushik
- Pragya Singh

## 1. Problem Statement

Develop a simple expense tracking system using C programming to help hostel students manage their monthly budget, record expenses across different categories, calculate total expenditure, and identify the category with the highest spending.

## 2. Project Objectives

- Help students monitor their monthly expenses.
- Organize spending into different categories.
- Calculate total expenses and remaining budget.
- Identify the highest-spending category.
- Warn users when their monthly budget is exceeded.

## 3. Features

The Hostel Expense Tracker is a menu-driven console application with five options:

1. **Add New Expense:** Record an expense under Food, Travel, Clothing, Study Materials, or Entertainment.
2. **View Expense Summary:** Display category-wise expenditure totals.
3. **View Budget Summary:** Display total spending and remaining budget.
4. **Category-wise Analysis:** Identify the category with the highest expenditure.
5. **Exit:** Terminate the application.

The program also includes budget-exceeded warnings and basic numeric input validation.

## 4. Algorithm

1. Start the program.
2. Ask the user to enter a positive monthly budget.
3. Initialize the total expense and category-wise expense values to zero.
4. Display the main menu.
5. Accept the user's menu choice.
6. Perform the selected operation:
   - **Option 1:** Accept a valid category and expense amount. Update the category total and overall expenditure. Display a warning if spending exceeds the monthly budget.
   - **Option 2:** Display the total expenditure for each category.
   - **Option 3:** Display total expenses and remaining budget.
   - **Option 4:** Find and display the highest-spending category.
   - **Option 5:** Exit the program.
7. Repeat the menu until the user selects Exit.
8. End the program.

## 5. C Programming Concepts Used

- Variables and data types
- Input and output using `scanf()` and `printf()`
- Arrays
- Arithmetic and relational operators
- Conditional statements (`if-else`)
- `switch-case` statements
- `for` loops
- `do-while` loops

## 6. How to Compile and Run

**Requirements:** GCC compiler and a compatible terminal.

Open the project folder in a terminal.

**Compile:**

```bash
gcc main.c -o herlogic.exe
```

**Run on Windows PowerShell:**

```powershell
.\herlogic.exe
```

The program will ask for a monthly budget and display the main menu.

## 7. Sample Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| Monthly budget | ₹5,000 | Budget accepted |
| Add expense | Food ₹200 | Food total increases by ₹200 |
| Multiple expenses | Food ₹200, Travel ₹500 | Total spending ₹700 |
| Budget summary | Budget ₹5,000, spending ₹700 | Remaining budget ₹4,300 |
| Highest expenditure | Food ₹200, Travel ₹500 | Travel is the highest-spending category |
| Budget exceeded | Budget ₹1,000, spending ₹1,200 | Budget exceeded warning |
| Invalid category | Category 9 | Invalid category message |
| Invalid amount | -₹100 | Invalid amount message |
| Invalid budget | -₹500 | Invalid budget message |

**Actual Results:** To be recorded after executing the complete test suite.

## 8. Limitations

- Expenses are stored in memory while the program runs.
- Recorded expenses are reset when the program closes.
- The application uses a text-based console interface rather than a graphical website.
- Expense summaries display category totals rather than individual transaction records.

## 9. Conclusion

The Hostel Expense Tracker demonstrates the practical application of fundamental C programming concepts to a real-world student budgeting problem.

The project provides a simple way to record expenses, monitor spending, calculate the remaining budget, and identify spending patterns.

---

**Developed by Team HerLogic | Batch 38**