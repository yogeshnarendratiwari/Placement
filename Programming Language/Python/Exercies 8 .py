import random
name_string = input("Give me everybody's name , separated by comma.\n")
name = name_string.split(",")
print(f"{name[random.randint(0,len(name)-1)]} is going to buy the meal today!")

