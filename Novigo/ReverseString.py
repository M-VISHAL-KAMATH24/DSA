def reverse(s):
    chars=list(s)
    left,right=0,len(s)-1
    while (left<right):
        chars[left],chars[right]=chars[right],chars[left]
        left=left+1
        right=right-1
    return ''.join(chars)
input_str="vishal"
result=reverse(input_str)
print(result)
        
    
    