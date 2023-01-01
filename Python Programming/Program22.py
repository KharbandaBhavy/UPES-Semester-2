# Code by Bhavy Kharbanda
def click():
    print("Button was clicked") 


from tkinter import *
root = Tk()
root.geometry('400x400')
root.title("FIRST TKINTER APP")
lab=Label(root,text="Hello").pack()
button = Button(root, text='Click Me', bd=15,width=20,bg = "blue",fg = "white",command=click)
button.pack(padx=50, pady=50)
root.mainloop()


