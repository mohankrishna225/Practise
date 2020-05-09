def findSum(int):
	s=0
	for i in range(0,n+1):
		s+=2**i
	return s
n = int(input())
print(findSum(n))