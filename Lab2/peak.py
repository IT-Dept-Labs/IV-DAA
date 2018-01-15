def getPeak(arr):
	n=len(arr)
	if len(arr)==1:
		print( arr[0])
	elif arr[n//2]>arr[n//2-1]:
		return getPeak(arr[n//2:])
	else:
		return getPeak(arr[:arr[n//2]])


def main():
	arr=[2,4,6,8,7,5,3]
	getPeak(arr)

if __name__ == '__main__':
	main()