def validpalindrome(s):
    s=''.join(char.lower() for char in s if char.isalnum())
    left,right=0,len(s)-1
    while(left<right):
        if (s[left]!=s[right]):
            return False
        left=left+1
        right=right-1
    return True

input_str=input(str("enter thestring"))
res=validpalindrome(input_str)
print(res)
