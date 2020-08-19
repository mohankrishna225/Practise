from itertools import product
def even_odd(num):
    sum=0
    for i in range(len(num)):
        sum=sum+int(num[i])
    return sum
low,high=map(int,input().split())
k=int(input())
queue=[]
for i in range(low,high+1):
    queue.append(str(i))
count=0
permutations=product(lst,repeat=k)
for i in permutations:
    if (even_odd(i)%2==0):
        count+=1
print(count%1000000007)