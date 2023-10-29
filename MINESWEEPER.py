import random
box=int(input(" Please Enter the size of the grid"))
#board user cannot see
board=[[ 0 for x in range(box)] for y in range(box)]
               #[[0,0,0,0,0],                                                                     #0= no mine
               #[0,0,0,0,0],
                                                                                                                 #1  = bomb
               # [0,0,0,0,0],
               #[0,0,0,0,0],
               #[0,0,0,0,0]]
#board user can see
board_see=[[ -1 for x in range(box)] for y in range(box)]
                        #[[-1,-1,-1,-1,-1],                                                            # -1=unknown
                        #[-1,-1,-1,-1,-1],
                        #[-1,-1,-1,-1,-1],
                        #[-1,-1,-1,-1,-1],
                        #[-1,-1,-1,-1,-1]]
def checkmines(row,col):
    t=0
    i=row-1
    while i<=row+1:
        if i>0 and i<box:
            j=col-1
            while j<=col+1:
                if j>=0 and j<box:
                    t=t+board[i][j]
                j=j+1
        i=i+1
    return t
       
#asking the user for no of mines
y=1
while (y==1):
    mines=int(input("Plesase enter the no of mines you want"))
    y=0
    if mines >(box*box):
        print("Impossible")
        y=int(input("Do u want another chance?{Press 1 for yes/ Press 0 for no}"))
    

n=0
while n< mines:
    row=random.randint(0,box-1)
    col=random.randint(0,box-1)
    if board[row][col]==0:
        board[row][col]=1 #add mine
        n=n+1

def display_ans():
    for row in range(0,box):
        for col in range(0,box):
           
                print(board[row][col], end=" ")
        print(" ")
        
def display_board():
    print("-"*(box*box))
    for row in range(0,box):
        print("  |  " ,end=" ")
        for col in range(0,box):
             if board_see[row][col]==-1:
                print(" ",end="  |  ")
             else:
                print(board_see[row][col], end="  |   ")
        print(" ")
        print("-"*(box*box))
#display_ans()
display_board()

guess=0
while guess<((box*box) - mines):
    row=int(input("Enter a row"))-1
    col =int(input("Enter a column"))-1
    if board[row][col]==1:
        print("You Lose !! You hit a mine")
        display_ans()
    else:
        board_see[row][col]=checkmines(row,col)
        display_board()
