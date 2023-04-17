# This program will demonstrate how to use decision
# statements in Python.
# This program determines if a bonus should be awarded

# The main function
def main():
    print("Welcome to the program")
    monthly_sales = get_sales()  # gets sales

    # Function call to determine bonus
    is_bonus(monthly_sales)


# This function gets the monthly sales
def get_sales():
    monthly_sales = float(input("Enter the monthly sales $"))
    return monthly_sales


# This function conditionally prints out results based on user input
def is_bonus(monthly_sales):
    if monthly_sales <= 102499:
        print("No bonus earned")

    if monthly_sales >= 102500:
        print("You have earned a $5,000 bonus!")

    if monthly_sales >= 112500:
        print("All employees get one day off!")


# calls main
main()
