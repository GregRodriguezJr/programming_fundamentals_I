# Program will allow a teacher to calculate the average test score
# for a certain number of students.  The teacher can enter the number
# of students who took the test, and then the score for each student.
# The program will calculate the average score and print out the results.
# Greg Rodriguez
# 4/27/2023

def main():
    end_program = False

    # Loop to run program again
    while not end_program:
        number = get_number()
        total_scores = get_scores(number)
        end_program = print_end_program()

        print("number: ", number)
        print("total scores: ", total_scores)
        print("end program: ", end_program)


def get_number():
    while True:
        try:
            number = int(input("How many students took the test: "))
            if number <= 0:
                print("Invalid entry, number must be greater than 0")
            else:
                return number
        except ValueError:
            print("Invalid entry, must be a number")


def get_scores(number):
    total_scores = 0
    for counter in range(number):
        while True:
            try:
                score = float(input("Enter their score: "))
                if score <= 0:
                    print("Invalid entry, number must be greater than 0")
                else:
                    total_scores = total_scores + score
                    break
            except ValueError:
                print("Invalid entry, must be a number")
    return total_scores


def print_end_program():
    is_valid = False
    end_program = False
    while not is_valid:
        answer = input("Do you want to end the program? (yes/no): ")
        if answer == "no":
            is_valid = True
            end_program = False
        elif answer == "yes":
            is_valid = True
            end_program = True
        else:
            print("Invalid entry must be (yes/no) answer")
    return end_program


main()
