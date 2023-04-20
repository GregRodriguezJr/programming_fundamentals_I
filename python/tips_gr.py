# Program that will calculate X% tip and a 6% tax on a meal price.
# The user will enter the meal price and the program will calculate tip, tax,
# and the total.  The total is the meal price plus the tip plus the tax.
# Program will then display the values of tip, tax, and total.
# Greg Rodriguez
# 4/20/2023

def main():
    # variable to hold meal input
    meal_amount = get_meal_amount()
    # variable to hold tip amount
    tip_amount = float(calc_tip(meal_amount))
    # variable to hold tax amount
    tax_amount = float(calc_tax(meal_amount))
    # variable to hold total amount
    total = float(calc_total(meal_amount, tip_amount, tax_amount))
    # call function to print results
    print_results(tip_amount, tax_amount, total)


# function to prompt user to enter a meal price with validation
def get_meal_amount():
    while True:
        try:
            meal_amount = float(input("Enter meal amount: $"))
            if meal_amount < 0:
                print("Error: Meal amount cannot be negative")
            else:
                return meal_amount
        except ValueError:
            print("Error: Please enter a valid number.")


# function to calculate the tip amount
def calc_tip(meal_amount):
    if .01 <= meal_amount <= 5.99:
        return meal_amount * .10
    if 6 <= meal_amount <= 12:
        return meal_amount * .13
    if 12.01 <= meal_amount <= 17:
        return meal_amount * .16
    if 17.01 <= meal_amount <= 25:
        return meal_amount * .19
    else:
        return meal_amount * .22


# function to calculate the tax amount
def calc_tax(meal_amount):
    return meal_amount * .06


# function to calculate the total amount
def calc_total(meal_amount, tip_amount, tax_amount):
    return meal_amount + tip_amount + tax_amount


# function to print results to the user
def print_results(tip_amount, tax_amount, total):
    print(f"Tip amount: ${tip_amount:.2f}")
    print(f"Tax amount: ${tax_amount:.2f}")
    print(f"Total amount: ${total:.2f}")


main()
