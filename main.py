#Code Translated by SyedSaifAliAlvi
import random
import os
#For playing on google colab remove this line and all '#'
#from IPython.display import clear_output

life=number=var=diff=0
def game(rand_no, user):
    diff=rand_no - user
    if(diff==0):
        return 1
    else:
        if(-5< diff and diff < 5):
            print("\nYou are very close at a difference of less than 5")
            return 0
        elif(-10< diff and diff< 10):
            print("\nYou are close and at a difference of less than 10")
            return 0
        elif(-30< diff and diff< 30):
            print("\nNice Try, You are at a difference of less than 30")
            return 0
        elif(-50< diff and diff< 50):
            print("\nNice Try, You are at a difference of less than 50")
            return 0
        else:
            print("\nOOPS! Try again , You are too far from the number")
            return 0

print("Guess The Number : TheCyberAtom")
again=''
d=0
while(True):
  while(True):
    print("\t\t\t\t\t\tGuess The Number (1-100)\n\n\n\n")
    print("\n\t\t\t\t\t\tDifficulty Level of Game: ")
    print("\n\t\t\t\t\t\t\t 1.Easy")
    print("\n\t\t\t\t\t\t\t 2.Medium")
    print("\n\t\t\t\t\t\t\t 3.Hard")
    print("\n\t\t\t\t\t\t\t 4.Extreme")
    print("\n\n\n\t\t\t\t\t  Enter Game Difficulty (1-4) : ")
    d=int(input())
    if(d==1):
      life=8
      break
    elif(d==2):
      life=7
      break
    elif(d==3):
      life=6
      break
    elif(d==4):
      life=4
      break
    else:
      print("\nWrong Selection !")
      print("\nCPU is making default level selection as Easy ")
      life=8
      break
  #clear_output()
  os.system('clear')
  print("\t\t\t\t\t\tGuess The Number Between 1 - 100 ")
  number=random.randint(1,100)
  while(True):
    if(life>0):
      print("\n\t\t\t\t\t\t\t\t\t\t\t\t Life Remaining : ",life)
      print("\nGuess The Number : ")
      var=int(input())
      if(game(number,var)):
        #clear_output()
        os.system('clear')
        print("\n\t\t\t\t\t\t\tYou WON")
        print("\n\t\t\t\t\t You Guessed the Correct Number : ",number)
        print("\n\n")
        break
    else:
      #clear_output()
      os.system('clear')
      print("\n\t\t\t\t\t\t  You are Out of Lives")
      print("\n\t\t\t\t\t\t\tYou Loose")
      print("\n\t\t\t\t\t\t    Number was : ",number)
      print("\n\n")
      break
    print("\t\t\t\t\t\t Your Guess : ",var)
    life-=1
  print("\nDo you want to play Again (Y|N): ")
  again=input()
  if(again=='y' or again=='Y'):
    continue
    #clear_output()
    os.system('clear')
  else:
    #clear_output()
    os.system('clear')
    break
