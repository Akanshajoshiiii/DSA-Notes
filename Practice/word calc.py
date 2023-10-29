from tkinter import *

def count_words():
    input_text = entry.get().strip()  # Remove leading and trailing spaces
    words = input_text.split()
    num_words = len(words)
    result_label.config(text=f"Number of words: {num_words}")

# Creating the main window
root = Tk()
root.title("Word Counter")

# Create and configure the widgets
label =Label(root, text="Enter a sentence:")
label.pack()

entry = Entry(root, width=40, bg="yellow")
entry.pack()

count_button = Button(root, text="Count Words", command=count_words, bg="orange")
count_button.pack()

result_label = Label(root, text="")
result_label.pack()

#Start the tkinter main loop
root.mainloop()