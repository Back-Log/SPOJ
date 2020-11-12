t=int(input())
while t!=0:
	ans=0
	for i in range(t):
		ans+=(t-i)*(t-i)
	print(ans)
	t=int(input())

