import time
from os import system
from bin.def_database import *

def withdraw(gg):
    
    system('cls')
    print("____________________________________________________________")
    print("____________________________________________________________")
    print()
    xinp=float(input("ENTER THE AMOUNT YOU WANT TO WITHDRAW   :  "))
    
    balance = gg[4]
    
    if xinp >= balance :
        print('You do not have enough money!! Try again ')
        time.sleep(1)
    else :
        balance = balance - float(xinp)
        bal_upd(balance,gg[0])
        system('cls')
        time.sleep(1)
        print("WITHDRAWAL SUCCESSFULL")
        print ("BALANCE - ",balance) 
        time.sleep(1)
                
        

