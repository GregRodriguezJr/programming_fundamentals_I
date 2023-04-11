# Write a program that will take in basic information from a student,
# including student name, degree name, number of credits taken so far,
# and the total number of credits required in the degree program.
# The program will then calculate how many credits are needed to graduate.
# Display should include the student name, the degree name, and credits left to graduate.
# Greg Rodriguez
# 4/10/23

# Input Data
studentName = input("Enter student name: ")
degreeName = input("Enter degree name: ")
degreeHours = int(input("Enter number of credits required for the degree: "))
currentHours = int(input("Enter number of credits taken so far: "))

# Calculation
remainingHours = degreeHours - currentHours

# Output
print("--------------")
print("Student's name is:", studentName)
print("The degree name is:", degreeName)
print("Total credit hours:", degreeHours)
print("There are", remainingHours, "credits left until graduation")
