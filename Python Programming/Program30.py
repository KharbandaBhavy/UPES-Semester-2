# Code by Bhavy Kharbanda
def gtoq():
  
  with open('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\myfile.txt', 'r') as file :
    text = file.read()


  text = text.replace('g', 'q')
  print('Changed String is : ', text)
  with open('C:\\Users\\BHAVY KHARBANDA\\Desktop\\VS Code CC++\\myfile.txt', 'w') as file:
    file.write(text)

gtoq()


