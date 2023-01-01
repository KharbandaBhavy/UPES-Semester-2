# Code by Bhavy Kharbanda

class Employee:
    fname = input("Enter first name of the Employee : ")
    lname = input("Enter the last name of the Employee : ")
    pay = int(input("Enter the pay of Employee : "))
    email = fname+'.'+lname+'@company.com'
emp = Employee()
print(f"First name of Employee is : {emp.fname}")
print(f"Last name of Employee is : {emp.lname}")
print(f"Pay of employee is : {emp.pay}")
print(f"Email of Employee : {emp.email}")


