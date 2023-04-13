# This program demonstrates how to use variables and functions.
# Greg Rodriguez
# 4/12/2023

# This program uses functions and variables

# the main function
def main():
    print('Welcome to the variable program')
    print()  # prints a blank line

    name = inputName()
    print('Hello', name)

    age = inputAge()
    print("Age: ", age)


# this function inputs data
def inputName():
    name = input('Enter your name: ')
    return name


def inputAge():
    age = int(input("Enter your age: "))
    return age


# calls main
main()
