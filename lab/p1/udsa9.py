import tkinter as tk
from datetime import datetime

root = tk.Tk()
root.title("Dynamic UI Adaptation")
root.geometry("780x700")

click_counts = {"Click Me!": 0, "Press Here": 0, "Tap Again": 0}
current_theme = "light"
MIN_CLICKS = 5
current_layout = None

def adapt_theme():
    hour = datetime.now().hour
    global current_theme

    if 18 <= hour or hour < 6:
        root.configure(bg="black")
        label.config(bg="black", fg="white")
        frame.config(bg="black")
        status_label.config(bg="black", fg="white")
        current_theme = "dark"
    else:
        root.configure(bg="white")
        label.config(bg="white", fg="black")
        frame.config(bg="white")
        status_label.config(bg="white", fg="black")
        current_theme = "light"

    root.after(60000, adapt_theme)

def apply_layout(mode):
    global current_layout
    if current_layout == mode:
        return

    for widget in frame.winfo_children():
        widget.grid_forget()
        widget.pack_forget()

    if mode == "Click Me!":
        btn1.pack(pady=5)
        btn2.pack(pady=5)
        btn3.pack(pady=5)
        status_label.config(text="Adaptive Layout → Vertical ('Click Me!')")

    elif mode == "Press Here":
        btn1.pack(side="left", expand=True, fill="x", padx=5, pady=5)
        btn2.pack(side="left", expand=True, fill="x", padx=5, pady=5)
        btn3.pack(side="left", expand=True, fill="x", padx=5, pady=5)
        status_label.config(text="Adaptive Layout → Horizontal ('Press Here')")

    elif mode == "Tap Again":
        btn1.grid(row=0, column=0, padx=5, pady=5)
        btn2.grid(row=0, column=1, padx=5, pady=5)
        btn3.grid(row=1, column=0, padx=5, pady=5)
        status_label.config(text="Adaptive Layout → Grid ('Tap Again')")

    current_layout = mode

def record_click(name):
    click_counts[name] += 1
    status_label.config(text=f"{name} clicked {click_counts[name]} times")
    most_used = max(click_counts, key=click_counts.get)
    if click_counts[most_used] >= MIN_CLICKS:
        apply_layout(most_used)

label = tk.Label(root, text="Dynamic UI Adaptation", font=("Arial", 16, "bold"))
label.pack(pady=10)

frame = tk.Frame(root)
frame.pack(pady=20)

btn1 = tk.Button(frame, text="Click Me!", width=12, height=2, command=lambda: record_click("Click Me!"))
btn2 = tk.Button(frame, text="Press Here", width=12, height=2, command=lambda: record_click("Press Here"))
btn3 = tk.Button(frame, text="Tap Again", width=12, height=2, command=lambda: record_click("Tap Again"))

btn1.grid(row=0, column=0, padx=5, pady=5)
btn2.grid(row=0, column=1, padx=5, pady=5)
btn3.grid(row=1, column=0, padx=5, pady=5)
current_layout = "Tap Again"

status_label = tk.Label(root, text="Click buttons to adapt layout dynamically.", font=("Arial", 10))
status_label.pack(pady=15)

adapt_theme()
root.mainloop()
