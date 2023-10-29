import time
from os import system
from bin.def_database import *
from datetime import date

today = str(date.today())


def loanuix(gg):
    system("mode 60,40")
    system('cls')
    print("""
    ███╗░░░███╗░█████╗░██████╗░░█████╗░███╗░░██╗██╗░░██╗
    ████╗░████║██╔══██╗██╔══██╗██╔══██╗████╗░██║██║░██╔╝
    ██╔████╔██║██║░░╚═╝██████╦╝███████║██╔██╗██║█████═╝░
    ██║╚██╔╝██║██║░░██╗██╔══██╗██╔══██║██║╚████║██╔═██╗░
    ██║░╚═╝░██║╚█████╔╝██████╦╝██║░░██║██║░╚███║██║░╚██╗
    ╚═╝░░░░░╚═╝░╚════╝░╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝""")
    
    print("____________________________________________________________")
    print()
    print("                      Loan Assistant                        ")
    print("____________________________________________________________")  
    print()
    print("              type `yes` if you want a loan                 ")
    print("____________________________________________________________")
    print()
    


def loaner(gg):
    system("mode 60,40")
    system('cls')
    time.sleep(0.5)

    print()
    print("____________________________________________________________")
    print("             ENTER AMOUNT YOU WANT TO LOAN                  ")
    print("____________________________________________________________")
    print()
    principle = float(input("                   AMOUNT : ") )
    time.sleep(0.5)

    print()
    print("____________________________________________________________")
    print("            ENTER NO. OF MONTHS FOR LOAN                    ")
    print("____________________________________________________________")
    print()
    timex = int(input("                          TIME (IN MONTHS) : "))
    system('cls')
    rate = 12/100
    loanamt=(float(principle)*rate) + float(principle)
    try:
        push_loan(gg[0],principle,12,today,loanamt)
    except Exception as E:
        pass
    balanceNew = int(gg[4]+principle)
    bal_upd(balanceNew,gg[0])
    print()
    print("____________________________________________________________")
    print("                    RATE OF INTREST 12%                     ")
    print()
    print("     Amount to repay after {} month = ".format(timex),loanamt)
    print()
    print("____________________________________________________________")
    time.sleep(3)
    
    
    
  
    
    
    
    
