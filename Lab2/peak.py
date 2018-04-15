def getPeak(arr):
	n=len(arr)
	mid=n//2
	if len(arr)==1:
		print(arr[0])
	elif arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1]:
		print( arr[mid])
	elif arr[mid-1]<arr[mid]:
		return getPeak(arr[n//2:])
	else:
		return getPeak(arr[:n//2])


def main():
	print("Enter a sequence of integers that first strictly increase and then strictly decrease: ")
	arr=[int(_) for _ in input().split()]
	getPeak(arr)

if __name__ == '__main__':
	main()