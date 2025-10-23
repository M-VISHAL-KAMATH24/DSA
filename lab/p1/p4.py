import tkinter as tk
from textblob import TextBlob
import re

def apply_theme(sentiment_score):
    """change the GUI based on sentimnet score"""
    if sentiment_score>0.2:
        root.configure(bg="lightyellow")
        result_label.configure(bg="lightyellow",fg="green",font=("Arial",14))
        return "positive mood:bright color,simple layout normal tetx"
    elif sentiment_score<-0.2:
        root.configure(bg="lightblue")
        result_label.configure(bg="lightblue",fg="navy",font=("Arial",16,"bold"))
        return "negetive mood:calming color,normal layout big tetx"
    else:
        root.configure(bg="lightgrey")
        result_label.configure(bg="lightgrey",fg="black",font=("Arial",13))
        return "neutral mood:standard  color,simple layout normal tetx"
def meaningful_text(text):
    """check if the text has so,me mening ful wokirds"""
    words=re.findall(r"[a-zA-Z]+",text)
    return len(words)>0
def analyze_sentiment(sentence):
    sentence=entry.get().strip()
    if not sentence:
        root_label.config(text="please enter the snetence")
        return
    if not meaningful_text(sentence):
        root_label.config(text="non meaningful sentence")
        return
    analysis=TextBlob(sentence)
    sentiment_score=analysis.sentiment.polarity
    if sentiment_score==0.0 and len(sentence.split())<=2:
        root_label.config(text="unable to analyze sentiment")
        return
    theme_apply=apply_theme(sentiment_score)
    result_label.config(text=f"sentiment score:{sentiment_score:.2f}\n {theme_apply}")
root=tk.Tk()