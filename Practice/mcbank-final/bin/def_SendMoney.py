import time
import os
from bin.def_database import *

def moneysender(userer):
    temp_dat = pull_dat("Accounts")
    
    print("____________________________________________________________")
    
    os.system('cls')   
    print("____________________________________________________________")
    print("     INPUT THE AC NUMBER OF PERSON YOU WANT TO SEND MONEY TO      ")
    print("  (Enter PROPER user name with the proper capitalisations)   ")
    nameinp= input("AC_NUM:")
    print("____________________________________________________________")
    print()
    print("____________________________________________________________")
    
         
    for i in temp_dat:
        if int(i[0]) == int(nameinp):
            print("ENTER AMOUNT TO BE SEND TO ",nameinp.upper()," : ",end="")		
            moneyboi = float(input())
            if int(moneyboi) > (i[4]):
                print("Not enough balance")
            else:
                new_reciever_bal = i[4] + moneyboi
                new_senders_bal = userer[4] - moneyboi
                bal_upd(new_reciever_bal,i[0])
                bal_upd(new_senders_bal,userer[0])
                push_log(userer[0],i[0], moneyboi)
                os.system('cls')
                time.sleep(2)
                print("TRANSACTION SUCCESFULL")
                time.sleep(1)
        else:
            pass
    
    
        
        
        
    
    
    
    
    
    
    
    
    
    
    
    
