# Program that will ask the user to enter a person’s age,
# their weight, and their birth month.
# Program will compare the entered values to the following and
# print the appropriate responses
# Greg Rodriguez
# 4/17/2023


def main():
    # Call getAge() and assign to variable age
    age = get_age()
    # Call getWeight() and assign to variable to weight
    weight = get_weight()
    # Call getMonth() and assign to variable to birthMonth
    birth_month = get_month()
    # Call correctAnswers(age, weight, birthMonth) and pass data to function
    print(age, birth_month)


# getAge() function will prompt user for input and return the value
def get_age():
    while True:
        age = input("Enter the persons age: ")
        if age.isnumeric():
            age = int(age)
            return age
        else:
            print("Error: Please enter a valid integer age")


# getWeight() function will prompt user for input and return the value
def get_weight():
    while True:
        weight = input("Enter the persons weight: ")
        if weight.isnumeric():
            weight = int(weight)
            return weight
        else:
            print("Error: Please enter a valid integer weight")


# getMonth() function will prompt user for input and return the value
def get_month():
    return input("Enter the persons birth month: ")


# correctAnswers function will conditionally render the secret answer results
# if age is 25 print Congratulations, the age is 25 or less
# if weight is 128 print Congratulations, the weight is 128 or more
# if birthMonth is April print Congratulations, the  birth month is April


main()
