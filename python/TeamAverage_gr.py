# This program will calculate the average number of wins for their
# football team over the past five years.  The user of the
# program should be able to enter the number of wins each year.
# The program will calculate the average number of wins during
# that five-year period and display that will print the information to the screen.
# Greg Rodriguez
# 4/11/2023

# initialize variables
totalWins = 0
average = 0
years = 5

# Input
# use of range() to define a range of values
for i in range(years):
    totalWins += (int(input(f"Enter wins for year {i + 1}: ")))

# calculate the average
# number of college games per year is 12
average = totalWins / (12 * years)
print(f"The average number of wins during the five-year period is{average: .2f}")
