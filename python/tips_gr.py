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
    tip_amount = calc_tip(meal_amount)
    # variable to hold tax amount
    print(tip_amount)


# variable to hold total amount
# function to prompt user to enter a meal price with validation
def get_meal_amount():
    while True:
        try:
            meal_amount = float(input("Enter meal amount: $"))
            if meal_amount < 0:
                print("Error: Meal amount cannot be negative")
            elif meal_amount.is_integer():
                return int(meal_amount)
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
# function to calculate the total amount
# function to print results to the user


main()
