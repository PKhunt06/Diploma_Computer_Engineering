# P-8-F Write a program that lets the user enter the loan amount, number of years, and interest rate, and defines a function to calculate monthly EMI, 
#  total payment and display the amortization schedule for the loan.

def calculate_emis(loan_amount, years, interest_rate):
    interest_rate = interest_rate / 100 / 12
    months = int(years * 12)
    monthly_emi = round(loan_amount * interest_rate * (1 + interest_rate) ** months / ((1 + interest_rate) ** months - 1), 2)
    total_payment = round(monthly_emi * months, 2)
    print(f"Monthly EMI: {monthly_emi}")
    print(f"Total Payment: {total_payment}")
    balance = loan_amount
    print("Amortization Schedule:")
    print("Month Interest        Principal         Balance")
    for month in range(1, months + 1):
        interest = round(balance * interest_rate, 2)
        principal = round(monthly_emi - interest, 2)
        balance -= principal

        print(f"{month}\t{round(interest, 2)}\t\t{round(principal, 2)}\t\t{round(balance, 2)}")

loan_amount = float(input("Enter the loan amount: "))
years = float(input("Enter the number of years: "))
interest_rate = float(input("Enter the interest rate (in %): "))
calculate_emis(loan_amount, years, interest_rate)
