t=int(input())
while t:
	n=int(input())
	ans=1
	for x in range(1,n+1):
		ans=ans*x
	print(ans)
	t=t-1;
