Initialize the InvestmentCalculator with the initial investment amount, monthly deposit amount, annual interest rate, and the number of years for the investment.

For calculating growth without additional monthly deposits:

Set the monthly deposit amount to 0.
Calculate the total growth for each year.
Store the year-end balance and year-end earned interest for each year.
For calculating growth with additional monthly deposits:

Use the user-provided monthly deposit amount.
Calculate the total growth for each year, including the monthly deposits.
Store the year-end balance and year-end earned interest for each year.
For the calculateYearlyGrowth method (used by both calculations):

Initialize the year's starting balance with the initial amount for the first year or the previous year's ending balance for subsequent years.
For each month, calculate the month's interest based on the current balance and monthly deposit.
Add the monthly interest to the current balance.
After all months in a year, update the year-end balance and interest earned.
For displaying the report:

Display a header with columns for Year, Year End Balance, and Year End Earned Interest.
For each year, display the year number, the calculated year-end balance, and the earned interest.
For handling user input in main.cpp:

Prompt the user for the initial investment amount.
Prompt the user for the monthly deposit amount.
Prompt2mno1 the user for the annual interest rate.
Prompt the user for the number of years for the investment.
Validate that all inputs are positive numbers.
After collecting inputs:

Instantiate an InvestmentCalculator object with the provided inputs.
Call the method to calculate growth without additional monthly deposits.
Display the report for growth without additional monthly deposits.
Call the method to calculate growth with additional monthly deposits.
Display the report for growth with additional monthly deposits.