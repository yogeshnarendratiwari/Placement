import random

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

game = [rock,paper,scissors]

# 0 --> 2
# 1 --> 0
# 2 --> 1
# You wins 
#otherwise you loose

game_rule =[0,1,2]
game_result = ["rock","paper","scissors"]
Your_choice = int(input("What do you choose? Type 0 for rock, 1 for paper or 2 for scissors : "))
game_rule.pop(Your_choice)
computer_choice = game_rule[random.randint(0,1)]

if Your_choice==0 and computer_choice==2 or Your_choice==1 and computer_choice==0 or Your_choice==2 and computer_choice==1:
   print("You wins")
else:
    print("You loose")

print(f"You chosen : {game_result[Your_choice]}\n{game[Your_choice]}")
print(f"Computer chosen : {game_result[computer_choice]}\n{game[computer_choice]}")       

