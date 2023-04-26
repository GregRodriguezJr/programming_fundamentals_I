# Program calculates the cost of purchasing a meal.
# Greg Rodriguez
# 4/26/2023

# Function to print to the user the food and price
# Function to show user number entries
# validate the input to ensure only 1,2,3 can be accepted

def main():
    print_menu()
    user_choice = get_user_input()


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
            user_input = int(input("Enter meal amount: $"))
            if user_input == 1 or user_input == 2 or user_input == 3:
                return user_input
        except ValueError:
            print("\nError: Please enter a valid choice.")


main()
