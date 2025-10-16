chat_data=[
    {
        "question":"what is java",
        "short_answer":"java is a porgramming language",
        "detailed_answer":"java i a high level language that includes the OOP concepts and alsos upprots multithreading and i an interpreter langauge"
    },
    {
        "question":"what is cloud computing",
        "short_answer":"computting in cloud",
        "detailed_answer":"cloud computing is an porcess of offering the various services such as the databases ,servers and networking by the cloud service providers instead of using the physcial infrastructure"
    },
    {
        "question":"what is Hallucination",
        "short_answer":"Wrong answers by AI",
        "detailed_answer":"AI Misinterprets the data or the context and gives the infromation that is non valid or inappropriate and also in some cases if there are no information it acts as if it knows the answr which can be avoided by training the LLM models aslo Retrievel agumented generation"
    },
]
short_count=0
detailed_count=0
print("welcome to the chatbot")
for x in chat_data:
    print("Q:",x["question"]) # type: ignore
    print("short response:",x["short_answer"]) # type: ignore
    print("detailed response:",x["detailed_answer"]) # type: ignore
    
    while True:
        choice=input("enter the whichresponse is usable 1 or 2")
        if choice=="1":
            short_count+=1
            break
        elif choice=="2":
            detailed_count+=1
            break
        else:
            print("invalid")
        print()
        
print("detaiuled summary")
print("short count",short_count)
print("detailed count",detailed_count)

if (detailed_count>short_count):
    print("detailed was more preferred")
elif (detailed_count<short_count):
    print("short was more preferred")
else:
    print("both was more preferred")