# Enter your code here. Read input from STDIN. Print output to STDOUT
x = int(input())
dictionary = {}

for i in range(x):
    text= input().split()
    dictionary[text[0]] = text[1]
    
while True:
    try:
        inp= input()
        if inp in dictionary:
            print (inp + "=" + dictionary[inp])
        else: 
            print ("Not found")
    except EOFError:
        break
