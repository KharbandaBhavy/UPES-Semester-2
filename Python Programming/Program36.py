class Student:
    def __init__(self,name):
        self.name=name
    def fun(self):
        print("Hello "+ self.name)

class CseStudent(Student):
    def fun(self):
        print("Hi"+ self.name)

x= Student("Bhavy")
x.fun()



