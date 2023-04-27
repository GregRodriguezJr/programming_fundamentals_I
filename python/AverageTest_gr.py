# Program will allow a teacher to calculate the average test score
# for a certain number of students.  The teacher can enter the number
# of students who took the test, and then the score for each student.
# The program will calculate the average score and print out the results.
# Greg Rodriguez
# 4/27/2023

def main():
    end_program = False
    is_valid = False
    total_scores = 0.0
    average_scores = 0.0
    score = 0
    number = 0
    counter = 1

    # Loop to run program again
    while not end_program:
        # reset variables
        end_program = False
        is_valid = False
        total_scores = 0.0
        average_scores = 0.0
        score = 0
        number = 0
        counter = 1
        number = get_number()

        while not is_valid:
            answer = input("Do you want to end the program? (yes/no): ")
            if answer == "no":
                is_valid = True
                end_program = False
            elif answer == "yes":
                is_valid = True
                end_program = True
            else:
                print("Invalid entry must be (yes/no) answer: ")

        print("number: ", number)
        print("is valid entry: ", is_valid)
        print("end program: ", end_program)


def get_number():
    number = int(input("How many students took the test: "))
    return number


main()
