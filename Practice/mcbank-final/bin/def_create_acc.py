from os import system
import time
from bin.def_database import *

def create_acc():
    name=input("Enter name : ")
    new_bal=int(input("Enter Balance : "))
    
    temp_dat = pull_dat("Accounts")
    ac_num = temp_dat[-1][0]+1

    user_pass = input('Enter a password for your account : ')

    if len(user_pass) < 8 :  # add other things like number and special character should be included
        #to check the strength of pass(longer than 8 digits , alphanum)
        system('cls')
        print('name :', name)
        print()
        print('The password is not strong enough ')
        print('The password must be more than 8 characters long , it should also contain numbers ')
        user_pass = input('Enter a new password for your account : ')
        time.sleep(5)
        system('cls')

    push_acc(ac_num,name,user_pass,"User",new_bal,0)
    # user data added to the database
    system('cls')
    time.sleep(2)
    print('YOUR ACCOUNT HAS BEEN SUCCESSFULLY CREATED ')
    print('Your Account Number is ',ac_num)
    time.sleep(5)
    finish = "finished"
    return finish







