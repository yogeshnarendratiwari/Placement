weight = int(input("Enter your weight"))
height = float(input("Enter your height"))

bmi = int(weight*100*100/(height*height))
print("Your bmi is "+str(bmi))

if bmi>35:
    print("Clinically obese")
elif bmi>30 and bmi<=35:
    print("Obese")
elif bmi>25 and bmi<=30:
    print("Overweight")
elif bmi>18.5 and bmi<=25:
    print("Normal")
else:
    print("Underweight")        
