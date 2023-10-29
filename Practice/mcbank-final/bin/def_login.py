from os import system
import time
from bin.def_database import *


def user_login():    
    cnt = 0  
    for cnt in range(0,5) :
        if cnt == 4 :
            print("You can't have more tries !!")
            break

        input_name = input("Enter your Account Number : ")
        input_pass = input("Enter your password : ")

        
        temp_dat = pull_dat("Accounts")

        for i in temp_dat:            
            if str(i[0]) == str(input_name):                               
                if str(i[2]) == str(input_pass):                                
                    return i
                    break
                    break
                else:
                    pass
            else:
                time.sleep(1)
                system('cls')
                cnt += 1
                



        
        






