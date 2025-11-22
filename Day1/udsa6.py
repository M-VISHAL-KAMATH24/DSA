import pandas as pd 
import tkinter as tk
import seaborn as sns
import matplotlib.pyplot as plt
mouse_data=[]
def record_motion(event):
  mouse_data.append([event.x,event.y,"move"])
  canvas.create_oval(event.x-1,event.y-1,event.x+1,event.y+1,fill="blue",outline="blue")
def record_click(event):
  mouse_data.append([event.x,event.y,"click"])
  canvas.create_oval(event.x-3,event.y-3,event.x+3,event.y+3,fill="red",outline="red")
def close_and_show():
  root.destroy()
root=tk.Tk()
root.title("mouse tracking UI")
root.geometry("500x400")
label=tk.Label(root,text="move your mouse and click somewhere",font=("Arial",12))
label.pack()

canvas=tk.Canvas(root,width=480,height=300,bg="white")
canvas.pack(pady=10)
canvas.bind("<Motion>",record_motion)
canvas.bind("<Button-1>",record_click)
button= tk.Button(root,text="click and show the heatmap",command=close_and_show)
button.pack(pady=10)
root.mainloop()

df=pd.DataFrame(mouse_data,columns=["x","y","action"])
if not df.empty:
  plt.figure(figsize=(6,8))
  sns.kdeplot(data=df,x="x",y="y",fill=True,cmap="Reds",thresh=0.05)
  plt.title("mouse movement and the clicks")
  plt.gca().invert_yaxis()
  plt.show()
else:
  print("no data")