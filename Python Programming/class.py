class Account:
    '''a simple bank account class'''
    
    def __init__(self, b=0):
        self.bal = b        
        
    def deposit(self, amount):
        self.bal += amount
        
    def withdraw(self, amount):
        self.bal -= amount
        
    def showBalance(self):
        print(self.bal)

ob = Account(10000)
