import random 
 
play = ["Rock", "Paper", "Scissors"]
computer = play[random.randint(0,2)] 
player = False

while player == False: 
    player = input("Choose Rock or Paper or Scissors: ") 
    if player == computer: 
        print("It's a tie!") 
    elif player == "Rock": 
        if computer == "Paper": 
            print("You lost! Computer chose paper") 
        else: 
            print("You won! Computer chose scissors") 
    elif player == "Paper": 
        if computer == "Scissors": 
            print("You lost! Computer chose Scissors") 
        else: 
            print("You won! Computer chose rock") 
    elif player == "Scissors": 
        if computer == "Rock": 
            print("You lost! Computer chose rock") 
        else: 
            print("You won! Computer chose paper") 
    else: 
        print("Invalid Input") 
    player = False 
    computer = play[random.randint(0,2)]  
