import mysql.connector as mc
import time
import os
sqlobj = mc.connect(host="localhost",username="root",password="password")
sql = sqlobj.cursor()


def view_ac():
    sql.execute("use mcbank")
    sql.execute("select * from accounts")
    ac = sql.fetchall()
    os.system('cls')
    print("____________________________________________________________") 
    print() 
    print("Acnum\tName\tPassword\tActype\tBalance\tDogeBalance\t")
    for i in ac:
        print(i[0],"\t",i[1],"\t",i[2],"\t",i[3],"\t",i[4],"\t",i[5])
    print()
    print("____________________________________________________________")  
    time.sleep(7)
    os.system('cls')

def view_loan():
    sql.execute("use mcbank")
    sql.execute("select * from loanmanager")
    loan = sql.fetchall()
    os.system('cls')
    print("____________________________________________________________") 
    print() 
    print("Acnum\tPrincipal\tRate\tTime\tAmount")
    for i in loan:
        print(i[0],"\t",i[1],"\t",i[2],"\t",i[3],"\t",i[4])
    print()
    print("____________________________________________________________")  
    time.sleep(7)
    os.system('cls')


def view_log():
    sql.execute("use mcbank")
    sql.execute("select * from transactionlog")
    tlog = sql.fetchall()
    os.system('cls')
    print("____________________________________________________________") 
    print() 
    print("SenderAC\tRecieverAC\tAmount")
    for i in tlog:
        print(i[0],"\t","\t",i[1],"\t","\t",i[2])
    print()
    print("____________________________________________________________")  
    time.sleep(7)
    os.system('cls')
