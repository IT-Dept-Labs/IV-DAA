def solveHanoi(n,s,i,t):
	if n>1:
		solveHanoi(n-1,s,t,i)
		print("Move disc",n,"from",s,'to',t)
		solveHanoi(n-1,i,s,t)
	else:
		print("Move disc",n,"from",s,'to',t)

def main():
	n=int(input("Enter the number of discs: "))
	solveHanoi(n,'S','I','T')


if __name__ == '__main__':
	main()