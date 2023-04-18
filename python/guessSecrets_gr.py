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
    correct_answers(age, weight, birth_month)
    print("Thank you for playing goodbye")


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
    while True:
        month = input("Enter the person's birth month: ")
        if month.isalpha():
            return month
        else:
            print("Error: Please enter a valid month.")


# correctAnswers function will conditionally render the secret answer results
def correct_answers(age, weight, birth_month):
    answers_count = 0
    # if age is 25 print Congratulations, the age is 25 or less
    if age <= 25:
        answers_count += 1
        print("Congratulations, the age is 25 or less")
    # if weight is 128 print Congratulations, the weight is 128 or more
    if weight >= 128:
        answers_count += 1
        print("Congratulations, the weight is 128 or more")
    # if birthMonth is April print Congratulations, the  birth month is April
    if birth_month == "April":
        answers_count += 1
        print("Congratulations, the birth month is April")
    if answers_count == 0:
        print("No guesses were correct")


main()
