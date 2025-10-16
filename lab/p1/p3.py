import tkinter as tk
from tkinter import messagebox
import re

def validate_input():
    name=name_entry.get().strip()
    email=email_entry.get().strip()
    password=password_entry.get()
    
    if not name:
        messagebox.showerror("name cannot be emoty")
        return
    if not email:
        messagebox.showerror("email cant be empty")
        return
    pattern=r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    if not re.match(pattern,email):
        messagebox.showerror("pattern doesnt match")
        return
    if len(password)<8:
        messagebox.showerror("password length is less tan 8")
        return
    if not any(char.isdigit() for char in password):
        messagebox.showerror("password doesnt have any digit")
        return
    if not any(char.isupper() for char in password):
        messagebox.showerror(" the password shoukd have the uppercase")
        return
    messagebox.showinfo("Success","form submitted successfully")
    
root=tk.Tk()
root.title("user registration form")
root.geometry("400x300") 

tk.Label(root,text="Name",font=("Arial",12)).pack(pady=5)
name_entry=tk.Entry(root,font=("Arial",12))
name_entry.pack(pady=5) 

tk.Label(root,text="Email",font=("Arial",12)).pack(pady=5) 
email_entry=tk.Entry(root,font=("Arial",12))
email_entry.pack(pady=5) 

tk.Label(root,text="password",font=("Arial",12)).pack(pady=5)
password_entry=tk.Entry(root,show="*",font=("Arial",12))
password_entry.pack(pady=5)

Submit_btn=tk.Button(root,text="submit",command=validate_input,font=("Arial",12))
Submit_btn.pack(pady=20)
root.mainloop()