# Risks Associated with this Code are:
'''
1. Printing a value that we have passed in ac.balance second time.
2. Usage of Account class attributes aren't present.
3. We are not implementing any of the function using class object
4. Wrong declaration of function using object class
5. Usage of function using class is not there. 
'''


# Code by Bhavy Kharbanda 
class Account:
    def __init__(self, initial_amount):
        self.balance = initial_amount
    def deposit(self, amount):
        self.balance = self.balance + amount
        return self.balance
    def withdraw(self, amount):
        self.balance = self.balance - amount
        return self.balance
ac = Account(1000)
x = Account.deposit(ac, 2000) 
y = Account.withdraw(ac, 1000)
print("\n Initial amount : ", 1000)
print("\n Total amount after deposit : ", x)
print("\n Total amount after withdrawl : ", y)

