###########################
import os
import time
###########################
from bin.def_create_acc import *
from bin.def_Deposit import *
from bin.def_doge_convertion import *
from bin.def_loan import *
from bin.def_SendMoney import *
from bin.def_login import *
from bin.def_Withdraw import *
from bin.def_database import *
from bin.def_admin import *
##########################




def ui():
    db_init()
    cnst_recs()
    os.system("mode 60,40")
    os.system('cls')
    print("____________________________________________________________")
    

    print("""
    ███╗░░░███╗░█████╗░██████╗░░█████╗░███╗░░██╗██╗░░██╗
    ████╗░████║██╔══██╗██╔══██╗██╔══██╗████╗░██║██║░██╔╝
    ██╔████╔██║██║░░╚═╝██████╦╝███████║██╔██╗██║█████═╝░
    ██║╚██╔╝██║██║░░██╗██╔══██╗██╔══██║██║╚████║██╔═██╗░
    ██║░╚═╝░██║╚█████╔╝██████╦╝██║░░██║██║░╚███║██║░╚██╗
    ╚═╝░░░░░╚═╝░╚════╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝""")
    
     
    print("____________________________________________________________")
    print()
     
    print("____________________________________________________________")  
    print()
    print()
    print("                   WELCOME TO McBANK                  ")
    print()
    print("                Please login to continue              ")
    print()
    print()
    print("             1.Login into existing account            ")
    print("             2.Create a New Account                   ")
    print("____________________________________________________________")
    print()
    lgin=int(input("Choose : "))
    print()
    print("____________________________________________________________")
    print()
    
    if lgin == 1:     
        gg = user_login()
        mainmenu(gg)
        
    if lgin == 2:        
        empty = "finished"
        ac = create_acc()
        if ac == empty:
            ui()
    
    
def mainmenu(gg):    
    global gg2
    gg2 = gg
    gg = update_gg(gg)

    if gg[3] == "admin":
        adminUI(gg)
    else:
        pass

    os.system("mode 60,40")
    os.system('cls')
    
    account = gg[1]
    
    balance = float(gg[4])
    acc_id = gg[0]
    print("____________________________________________________________")
    print("""
    ███╗░░░███╗░█████╗░██████╗░░█████╗░███╗░░██╗██╗░░██╗
    ████╗░████║██╔══██╗██╔══██╗██╔══██╗████╗░██║██║░██╔╝
    ██╔████╔██║██║░░╚═╝██████╦╝███████║██╔██╗██║█████═╝░
    ██║╚██╔╝██║██║░░██╗██╔══██╗██╔══██║██║╚████║██╔═██╗░
    ██║░╚═╝░██║╚█████╔╝██████╦╝██║░░██║██║░╚███║██║░╚██╗
    ╚═╝░░░░░╚═╝░╚════╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝""")
    
    print("____________________________________________________________")
    print()
    print("----------------------    MCBANK  --------------------------")
    print("____________________________________________________________")  
    print()
    
    print("                            {}                              ".format(account))
    print()
    print("             BALANCE - {}                                   ".format(balance))
    print("             ACC NO - {}                                    ".format(acc_id))
    print()
    
    
    print("____________________________________________________________")  
    print("____________________________________________________________")  
    print()    
    print("             1.Deposit Money                                ")
    print()
    print("             2.Withdraw Money                               ")
    print()
    print("             3.Send Money                                   ")
    print()
    print("             4.Convert to DOGE Coin                         ")
    print()
    print("             5.Loan                                         ")
    print()
    print("             6.logout                                       ")
    print()
    print("             7.Exit                                         ")
    print("____________________________________________________________") 
    
    inp2 = int(input("ENTER YOUR OPTION : "))
    
    if inp2 == 1:
        
        Deposit(gg)
        mainmenu(gg)

    if inp2 == 2:
        
        withdraw(gg)
        mainmenu(gg)
        
    if inp2 == 3:
        
        moneysender(gg)
        mainmenu(gg)
        
    
        
    if inp2 == 4:
        
        dogeui(gg)
        mainmenu(gg)
        
    if inp2 == 5:
        
        loanui(gg)
        mainmenu(gg)
        
    if inp2 == 6:
        ui()

    if inp2 == 7:
        system('cls')
        print()
        
        print()
        time.sleep(1)
        print("Do you really want to exit?")
        time.sleep(.5)
        exitinp = input("Tell (yes/no) : ")
        if exitinp == "yes":
            time.sleep(1)
            exit()
        else:
            mainmenu(gg)
        exit()
    
    



        
        
        
    


def loanui(gg):
    loanuix(gg)
    inp3 = input("Enter your Input: ").lower()
    
    if inp3 == "yes":        
        loaner(gg)       
    
    if inp3 == 2:
        mainmenu(gg)
    
def adminUI(gg):
    account = gg[1]
    print("____________________________________________________________")
    print("""
    ███╗░░░███╗░█████╗░██████╗░░█████╗░███╗░░██╗██╗░░██╗
    ████╗░████║██╔══██╗██╔══██╗██╔══██╗████╗░██║██║░██╔╝
    ██╔████╔██║██║░░╚═╝██████╦╝███████║██╔██╗██║█████═╝░
    ██║╚██╔╝██║██║░░██╗██╔══██╗██╔══██║██║╚████║██╔═██╗░
    ██║░╚═╝░██║╚█████╔╝██████╦╝██║░░██║██║░╚███║██║░╚██╗
    ╚═╝░░░░░╚═╝░╚════╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝""")
    
    print("____________________________________________________________")
    print()
    print("-----------------    MCBANK ADMIN UI  ---------------------")
    print("____________________________________________________________")  
    print()
    
    print("                            {}                              ".format(account))
   
    print("____________________________________________________________")  
    print("____________________________________________________________")  
    print()    
    print("             1.View All Accounts                            ")
    print() 
    print("             2.View All Loans                               ")
    print()
    print("             3.View All Transaction Logs                    ")
    print()
    print("             4.Exit                  ")
    print()


    inp2 = int(input("ENTER YOUR OPTION : "))
    
    if inp2 == 1:
        
        view_ac()
        adminUI(gg)

    if inp2 == 2:
        
        view_loan()
        adminUI(gg)
        
    if inp2 == 3:
        
        view_log()
        adminUI(gg)
    
    if inp2 == 4:
        exit()
    

ui()

