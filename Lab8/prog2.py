def longestSubsequence(A):
	memo=[]
	memo.append(0)
	i=0
	k=0
	for i in range(1,len(A)):
		Max=0
		for k in range(i-1):
			if A[k]<A[i]:
				memo.insert(memo[k-1]+1,k)
		if Max<(memo[k]):
			Max=memo[k]
	memo[i]=Max
	print(memo)
	return (max(memo))

def main():
	A=[5,2,8,6,3,6,9,7]
	print(longestSubsequence(A))

if __name__ == '__main__':
	main()