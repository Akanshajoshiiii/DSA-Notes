import mysql.connector
mydb=mysql.connector.connect(host="localhost",user="root",passwd="password")
try:
    if mydb.is_connected():
        print("Connected")
except Error as e:
    print(e)
