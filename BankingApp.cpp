#include <iostream>
#include <iomanip> // For formatting output
#include <vector>  // For storing year-end balances and interests

// Function to calculate and display year-end balances and interest
void calculateAndDisplayReport(double initialInvestment, double monthlyDeposit, double annualInterestRate, int numberOfYears, bool includeMonthlyDeposit) {
    // Display header
    std::string reportType = includeMonthlyDeposit ? "With Monthly Deposits" : "Without Monthly Deposits";
    std::cout << "\n      Balance and Interest (" << reportType << "):\n";
    std::cout << "----------------------------------------------------------\n";
    std::cout << "----------------------------------------------------------\n";
    std::cout << std::setw(10) << "       Year"
        << std::setw(20) << "        Year-End Balance"
        << std::setw(20) << "      Year-End Interest" << std::endl;
    std::cout << "----------------------------------------------------------\n";

    double balance = initialInvestment;
    double annualInterestRateDecimal = annualInterestRate / 100.0;

    // Loop through each year
    for (int year = 1; year <= numberOfYears; ++year) {
        double interestEarned = 0;

        // Calculate monthly compounding
        if (includeMonthlyDeposit) {
            balance += monthlyDeposit; 
        }
        double monthlyInterest = balance * (annualInterestRateDecimal / 12.0);
        interestEarned += monthlyInterest;
        balance += monthlyInterest;


        // Display year-end data
        std::cout << std::setw(10) << year
            << std::setw(20) << std::fixed << std::setprecision(2) << balance
            << std::setw(20) << interestEarned << std::endl;
    }
}

int main() {
    // Variables to store user inputs
    double initialInvestment, monthlyDeposit, annualInterestRate;
    int numberOfYears;

    // Input initial investment amount
    std::cout << "******************AIRGEAD BANKING*********************\n";
    std::cout << "******************************************************\n";
    std::cout << "Initial Investment Amount: $";
    std::cin >> initialInvestment;
    while (initialInvestment < 0) {
        std::cout << "Please enter a positive amount: $";
        std::cin >> initialInvestment;
    }

    // Input monthly deposit amount
    std::cout << "Monthly Deposit: $";
    std::cin >> monthlyDeposit;
    while (monthlyDeposit < 0) {
        std::cout << "Please enter a positive amount: $";
        std::cin >> monthlyDeposit;
    }

    // Input annual interest rate (as a percentage)
    std::cout << "Annual Interest (%): %";
    std::cin >> annualInterestRate;

    // Input number of years
    std::cout << "Number of Years: ";
    std::cin >> numberOfYears;

    // Wait for user to press any key
    std::cout << "Press ENTER to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();
    std::cout << "******************************************************\n";

    // Display reports
    calculateAndDisplayReport(initialInvestment, 0, annualInterestRate, numberOfYears, false); // Without monthly deposits
    calculateAndDisplayReport(initialInvestment, monthlyDeposit, annualInterestRate, numberOfYears, true); // With monthly deposits

    return 0;
}
