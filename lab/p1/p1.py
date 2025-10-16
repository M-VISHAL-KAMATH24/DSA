heuristic=[
    "1.visibility of teh syetm status",
    "2. match between the syetm and the real world",
    "3. user control and freedom",
    "4. consistency and standards",
    "5. error portection",
    "6.regonition rather than recall",
    "7.flexibilitry and effiency",
    "8.aesthtic and minimilastic design",
    "9. help user recognize and diagnoize the errors",
    "10. help and documentation"
]
ratings=[]
print("rate each heuristic from 1(poor ) to 5(excellent)\n")
for h in heuristic:
    print(h)
    while True:
        rating=input("enter the rating")
        if rating.isdigit() and 1<=int(rating)<=5:
            ratings.append(int(rating))
            break
        else:
            print("enter the proper rating")
        print()
average=sum(ratings)/len(ratings)
print("aveage usability")
print(average)
if(average>=4.5):
    print("excellent")
elif (average>=3.5):
    print("good")
elif (average>=2.5):
    print("average")
elif (average>=1.5):
    print("bad")
else:
    print("poor")