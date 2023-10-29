from os import system
import time
from bin.def_database import *


def Deposit(Ac):
    print("____________________________________________________________")
    print()
    n=int(input('Enter amount to be deposited:'))
    print("____________________________________________________________")
    print()
    NewBal = int(Ac[4] + n)
    bal_upd(NewBal, Ac[0])
    print("Amount succesfully deposited")
    time.sleep(0.5)
    
    
