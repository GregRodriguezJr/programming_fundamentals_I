# Program calculates the cost of purchasing a meal.
# Greg Rodriguez
# 4/26/2023

# Create array list to hold food items
# index 0 for burgers, 1 for fries, 2 for sodas
# Function to print to the user the food and price
# Function to show user number entries
# validate the input to ensure only 1,2,3 can be accepted
# Function to keep set and keep count of user choices in an array
# validate user input and update array with while loop
# Prompt user to end order or continue with while loop
# function to calculate pre tax total
# function to calculate tax
# print results

def main():
    choice_array = [0, 0, 0]
    is_continue = True

    # call function to print menu options
    print_menu()

    # Prompt user to end order or continue with while loop
    while is_continue:
        user_choice = get_user_input()
        set_quantity(user_choice, choice_array)
        answer = input("Do you want to end your order? (yes/no): ")
        if answer == "no":
            is_continue = True
        else:
            is_continue = False

    # call function to calculate pre tax total
    pretax_total = float(calc_pretax(choice_array))

    # call function to calculate tax
    total = float(calc_total(pretax_total))

    # print results
    print(f"The total price is $: ${total:.2f}")


# Function to print menu
def print_menu():
    print("Yum Yum Burger = $ .99\n"
          "Grease Yum Fries = $ .79\n"
          "Soda Yum = $ 1.09\n")


# Function to print number entries and return choice
def get_user_input():
    while True:
        try:
            print("Enter 1 for Yum Yum Burger\n"
                  "Enter 2 for Grease Yum Fries\n"
                  "Enter 3 for Soda Yum")
            user_input = int(input("Enter item choice -> "))
            if user_input == 1 or user_input == 2 or user_input == 3:
                return user_input
            else:
                print("\nError: Please enter a valid choice.")
        except ValueError:
            print("\nError: Please enter a valid choice.")


# Function to keep set count of user choices in an array
def set_quantity(user_choice, choice_array):
    index = 0
    item = ""
    if user_choice == 1:
        index = 0
        item = "burgers"
    elif user_choice == 2:
        index = 1
        item = "fries"
    elif user_choice == 3:
        index = 2
        item = "sodas"

    while True:
        try:
            user_input = int(input(f"Enter the number of {item} you want: "))
            if user_input < 0:
                print("Error: Cant be a negative number")
            else:
                choice_array[index] += user_input
                return
        except ValueError:
            print("Error: Please enter a valid number.")


# call function to calculate pre tax total
def calc_pretax(choice_array):
    pretax_total = (choice_array[0] * .99 +
                    choice_array[1] * .79 +
                    choice_array[2] * 1.09)
    return pretax_total


# function to calculate tax
def calc_total(pretax_total):
    total = pretax_total + (pretax_total * .06)
    return total


main()
