def fibonacci(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)
def main():
    num=int(input("enter the number"));
    res=fibonacci(num)
    print(res);
if __name__=='__main__':
    main()