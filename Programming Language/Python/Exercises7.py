print("Welcome to the python pizza deliveries")

size = input("What size of pizza do you want? S,M or L ? ")
add_pepproni = input("Do you want pepperoni? Y or N ? ")
extra_cheese = input("Do you want to add extra cheese? Y or N ? ")

bill=0

if size=="S":
    bill+=15
    if add_pepproni=="Y":
        bill += 2
elif size=="M":
    bill += 20
    if add_pepproni=="Y":
        bill += 3
else:
    bill += 25
    if add_pepproni=="Y":
       bill += 3

if extra_cheese=="Y":
    bill += 1            

print(f"Your final bill is ${bill}")    