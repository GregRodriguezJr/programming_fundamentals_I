# The main function
def main():
    monthly_sales = get_sales()  # call to get sales
    sales_increase = get_increase()  # call to get sales increase
    store_amount = store_bonus(monthly_sales)  # call to get store bonus amount
    emp_amount = emp_bonus(sales_increase)
    print_bonus(store_amount, emp_amount)  # call to print


# This function gets the monthly sales
def get_sales():
    monthly_sales = float(input('Enter the monthly sales $'))
    return monthly_sales


# This function gets the percent of increase in sales
def get_increase():
    sales_increase = float(input('Enter percent of sales increase: '))
    sales_increase = float(sales_increase)
    sales_increase = sales_increase / 100
    return sales_increase


# This function determines the storeAmount bonus
def store_bonus(monthly_sales):
    if monthly_sales >= 110000:
        store_amount = 6000
    elif monthly_sales >= 100000:
        store_amount = 5000
    elif monthly_sales >= 90000:
        store_amount = 4000
    elif monthly_sales >= 80000:
        store_amount = 3000
    else:
        store_amount = 0
    return store_amount


# This function determines the empAmount bonus
def emp_bonus(sales_increase):
    if sales_increase >= 0.05:
        emp_amount = 75
    elif sales_increase >= 0.045:
        emp_amount = 50
    elif sales_increase >= .036:
        emp_amount = 40
    else:
        emp_amount = 0
    return emp_amount


# This function prints the bonus information
def print_bonus(store_amount, emp_amount):
    print('The store bonus amount is $', store_amount)
    print('The employee bonus amount is $', emp_amount)
    if store_amount == 6000 and emp_amount == 75:
        print('Congrats! You have reached the highest bonus amounts possible!')


# calls main
main()
