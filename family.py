n = int(input())
x = int(input())
# iterating till the range
lst=[]
for i in range(0, n): 
    ele = int(input())
    lst.append(ele) # adding the element
#print(lst)
new = set(lst)
final = list(new)
print(final)
b=0
for i in range(len(final)):
    count=0
    if(final[i]!=-1):
       for j in range(len(lst)):
           if(final[i]==lst[j]):
               count=count+1
    if(count>=x):
        b=b+1
print(b)  
       
