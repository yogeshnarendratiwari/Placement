from unicodedata import name


name = input("What is your name ? ")
partner = input("What is your partner name ? ")

couple = name + partner
couple = couple.lower()

print(couple)
num1 = couple.count('t')+couple.count('r')+couple.count('u')+couple.count('e')
num2= couple.count('l')+couple.count('o')+couple.count('v')+couple.count('e')

num3 = int(str(num1)+str(num2))

if num3>90 or num3<40:
    print(f"Your score is {num3}, you go together like coke and mentos.")
elif num3>=40 and num3<=50:
    print(f"Your score is {num3}, you are alright together")
else:
    print(f"Your score is {num3}")        