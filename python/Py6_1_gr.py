# Py6_1 Practicing for loops
# Greg Rodriguez
# 4/27/2023

# the main function
def main():
    # A Basic For loop
    print("A Basic For loop")
    print('I will display the numbers 1 through 5.')
    for num in [1, 2, 3, 4, 5]:
        print(num)

    # The Second Counter code
    print("Second Counter code")
    for second in range(1, 61):
        print(second)

    # The Accumulator code
    total = 0
    for counter in range(5):
        total += int(input("Enter a number: "))

    print("The total is ", total)

    # The Average Age code
    total_age = 0
    average_age = 0
    number = int(input("How many ages do you want to enter: "))
    for counter in range(0, number):
        total_age += int(input("Enter an age: "))

    average_age = int(total_age / number)
    print("The average age is ", average_age)


# calls main
main()
