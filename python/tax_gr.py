# the main function
def main():
    print('Welcome to the total tax calculator program')
    print()  # prints a blank line

    sales = input_data()
    county_tax = calc_county(sales)
    state_tax = calc_state(sales)
    total_tax = calc_total(county_tax, state_tax)
    print_info(county_tax, state_tax, total_tax)


def input_data():
    sales = input("Enter the total sales for the month: ")
    sales = float(sales)
    return sales


def calc_county(sales):
    county_tax = sales * .02
    county_tax = float(county_tax)
    return county_tax


def calc_state(sales):
    state_tax = sales * .04
    state_tax = float(state_tax)
    return state_tax


def calc_total(county_tax, state_tax):
    total_tax = county_tax + state_tax
    total_tax = float(total_tax)
    return total_tax


def print_info(county_tax, state_tax, total_tax):
    print(f"The county tax is ${county_tax: .2f}")
    print(f"The state tax is ${state_tax: .2f}")
    print(f"The total tax is ${total_tax: .2f}")


# calls main
main()
