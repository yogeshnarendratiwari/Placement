print("Welcome to the tip calculator")
total_bill = float(input("What was the total bill ? $"))
tip = float(input("What percentage would you like to give? 10, 12, or 15? "))
net_total = total_bill+(total_bill*tip)/100
person = int(input("How many people to split the bill? "))
print(f"Each person should pay : {round(net_total/person,2)}")