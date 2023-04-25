# Py5_1 The Bottle Return Program
# Greg Rodriguez
# 4/25/2023

# the main function
def main():
    end_program = 'no'

    while end_program == 'no':
        total_bottles = get_bottles()
        total_payout = calc_payout(total_bottles)
        print_info(total_bottles, total_payout)
        end_program = input('Do you want to end the program? (Enter yes or no): ')


# this function will get the number of bottles returned
def get_bottles():
    total_bottles = 0
    today_bottles = 0
    counter = 1

    while counter <= 7:
        today_bottles = int(input('Enter number of bottles for today: '))
        total_bottles = total_bottles + today_bottles
        counter = counter + 1

    return total_bottles


# this function will calculate the payout
def calc_payout(total_bottles):
    total_payout = 0
    total_payout = total_bottles * .10
    total_payout = round(total_payout, 2)
    return total_payout


# this function will display the information
def print_info(total_bottles, total_payout):
    print('The total number of bottles collected is ', total_bottles)
    print('The total paid out is $', total_payout)


# calls main
main()
