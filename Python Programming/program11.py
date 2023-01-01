# Code by Bhavy Kharbanda

def check_baggage(weight):
    if(weight >=0 & weight<=40):
        return (True)
    else:
        return (False)
def check_immigration(year):
    if(year>=2030 & year<=2050):
        return (True)
    else:
        return (False)
def check_security(noc):
    if(noc == "VALID" or noc == "valid"):
        return (True)
    else:
        return (False)
def Traveller():
    tid = int(input("Enter the traveller ID: "))
    n = input("Enter the name of traveller : ")
    weight = int(input("Enter the weight of baggage : "))
    year = int(input("Enter the expiry year : "))
    noc = input("Enter the status of NOC : ")
    if(check_baggage(weight) == True & check_immigration(year) == True & check_security(noc) == True):
        print("Traveller ID : ", tid)
        print("Traveller name : ", n)
        print("Allow the traveller to fly....")
    else:
        print("Traveller ID : ", tid)
        print("Traveller Name : ", n)
        print("Detain traveler for re-checking....")
ele = int(input("Enter the number of travellers : "))
for i in range(ele):
    Traveller()



