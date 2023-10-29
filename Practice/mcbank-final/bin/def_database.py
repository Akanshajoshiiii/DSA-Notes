import mysql.connector as mc
sqlobj = mc.connect(host="localhost",username="root",password="password")
sql = sqlobj.cursor()



def db_init():
    ### Database Initiailisation ###
    sql.execute("Create database if not exists McBank")
    sql.execute("use McBank")
    sql.execute("create table if not exists Accounts(AcNum integer primary key,Name varchar(50),password varchar(50),AcType varchar(10),Balance integer,DogeBalance integer)")
    sql.execute("create table if not exists LoanManager(AcNum integer,Principal integer,Rate integer,Time date,Amount integer)")
    sql.execute("create table if not exists TransactionLog(SenderAC integer,RecieverAC integer,Amount integer)")
    sqlobj.commit()

def cnst_recs():
    try:
        sql.execute("use McBank")
        sql.execute("Insert into Accounts values(10066,'Aditya Banerjee','bruhpassword','User',500000,1500)")
        sql.execute("Insert into Accounts values(10067,'Uday Singh','zyzzwannabe','User',569304,1502350)")
        sql.execute("Insert into Accounts values(10068,'Vaibhav Sundriyal','zawarudo','User',50,1500)")
        sql.execute("Insert into Accounts values(10069,'Admin','admin','admin',999999,999999)")
        sqlobj.commit()
    except Exception as e:
        pass


def push_acc(ac,name,pswd,actype,bal,doge):   
    sql.execute("use McBank") 
    sql.execute("Insert into Accounts values({a},'{b}','{c}','{d}',{e},{f})".format(a=ac,b=name,c=pswd,d=actype,e=bal,f=doge))
    sqlobj.commit()

def push_loan(ac,principal,rate,time,amt):
    sql.execute("use McBank")
    sql.execute("Insert into LoanManager values({a},{b},{c},'{d}',{e})".format(a=ac,b=principal,c=rate,d=time,e=amt))
    sqlobj.commit()

def push_log(send,recv,amt):
    sql.execute("use McBank")
    sql.execute("Insert into Transactionlog values({a},{b},{c})".format(a=send,b=recv,c=amt))
    sqlobj.commit()


def pull_dat(db):
    sql.execute("use mcbank")
    sql.execute("select * from {}".format(db))
    dat = sql.fetchall()
    return dat


def bal_upd(bal,ac):
    sql.execute("use mcbank")
    sql.execute("update accounts set balance={a} where Acnum={b}".format(a=bal,b=ac))
    sqlobj.commit()

def Dogebal_upd(bal,ac):
    sql.execute("use mcbank")
    sql.execute("update accounts set dogebalance={a} where Acnum={b}".format(a=bal,b=ac))
    sqlobj.commit()


def update_gg(gg):
    temp_dat = pull_dat("Accounts")
    for i in temp_dat:
        if gg[0] == i[0]:
            return i
    