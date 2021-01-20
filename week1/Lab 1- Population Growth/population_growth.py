# solution in python3

while True:
    try: 
        start = int(input("Enter the start size: "))
    except ValueError:
        print("Enter an integer value!!!!!!!!!")
        continue
    if start < 9: 
        print("Enter a value greater than 9!!")
    else: 
        break
        
while True:       
    try: end = int(input("Enter an end value: "))
    except ValueError:
        print("Enter an integer value!!!!!!!!!")
        continue
    if end < start: print("Enter a value greater than the start value: ", start)
    else: break

n = start
y = 0

while n < end:
    n = n + int(n/3) - int(n/4)
    y += 1

print("Years: ",y)