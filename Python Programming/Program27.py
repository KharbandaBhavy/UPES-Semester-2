# Code by Bhavy kharbanda
# Part A
print("\n Part A")
import pandas as pd
fl = pd.read_excel('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\VS Code Python\\stocks.xlsx')
print(fl)
# Part B
print("\n Part B")
fl = pd.read_excel('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\VS Code Python\\stocks.xlsx')
fl.to_csv("new.csv")
print(fl)

# Part C
print("\n Part C")
col_names = ['Ticker', 
             'Eps',
             'Revenue',
             'Price',
             'People']
fl = pd.read_excel('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\VS Code Python\\stocks.xlsx', names=col_names)
fl.to_csv("new.csv", index = False)
fl.to_csv("new.csv", header = False)
fl.to_csv("new.csv", columns =["Ticker", "Eps", "Revenue", "Price", "People"], index = False)
fl = pd.read_csv('new.csv', names=col_names, skiprows=[0])
print(fl)

# Part D
print("\n Part D")
col_names = ['Ticker', 
             'Eps',
             'Revenue',
             'Price',
             'People']
fl = pd.read_excel('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\VS Code Python\\stocks.xlsx', names=col_names)
fl.to_csv("new.csv", index = False)
fl.to_csv("new.csv", header = False)
fl.to_csv("new.csv", columns =["Ticker", "Eps", "Revenue", "Price", "People"], index = False)
fl = pd.read_csv('new.csv', names = col_names, skiprows=[0], na_values=["n.a.", "not available", -1])
fl = pd.read_csv('new.csv', na_values={
        'Eps': ['not available'],
        'Revenue': [-1],
        'Price': ['n.a.'],
        'People': ['not available', 'n.a.']
    })  
'''print(fl)
# Part E
print("\n Part E")
col_names = ['Ticker', 
             'Eps',
             'Revenue',
             'Price',
             'People']
fl = pd.read_excel('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\VS Code Python\\stocks.xlsx', names=col_names)
fl.to_csv("new.csv", index = False)
fl.to_csv("new.csv", header = False)
fl.to_csv("new.csv", columns =["Ticker", "Eps", "Revenue", "Price", "People"], index = False)
fl = pd.read_csv('new.csv', names = col_names, skiprows=[0], na_values=["n.a.", "not available", -1])
fl = pd.read_csv('new.csv', na_values={
        'Eps': ['not available'],
        'Revenue': [-1],
        'Price': ['n.a.'],
        'People': ['not available', 'n.a.']
    })  '''
fl["Eps"].fillna("2.12", inplace = True)
fl["Revenue"].fillna("70", inplace = True)
fl["Price"].fillna("50", inplace = True)
fl["People"].fillna("Sam Walton", inplace = True)
print(fl)

'''# Part F
print("\n Part F")
col_names = ['Ticker', 
             'Eps',
             'Revenue',
             'Price',
             'People']
fl = pd.read_excel('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\VS Code Python\\stocks.xlsx', names=col_names)
fl.to_csv("new.csv", index = False)
fl.to_csv("new.csv", header = False)
fl.to_csv("new.csv", columns =["Ticker", "Eps", "Revenue", "Price", "People"], index = False)
fl = pd.read_csv('new.csv', names = col_names, skiprows=[0], na_values=["n.a."])
fl = pd.read_csv('new.csv', na_values={
        'People': ['n.a.']
    })
fl["People"].fillna("Sam Walton", inplace = True)
print(fl)'''


