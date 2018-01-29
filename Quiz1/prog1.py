arr=[-2,0,2,6,8,10,12,15]
# arr1=[-6,-5,-2,1,4]
n=len(arr)
def getx(arr,lo,hi):
	while lo<=hi:
		mid=(lo+hi)//2
		if mid>=0:
			if mid==arr[mid]:
				return arr[mid]
			elif mid > arr[mid]:
				return getx(arr,mid+1,hi)
			elif mid<arr[mid]:
				return getx(arr,lo,mid-1)
			else:
				return -1
		else:
			return -1
	else:
		return -1

print(getx(arr,0,n-1))
# print(getx(arr1,0,n-1))



























# def getVal(arr,n):
# 	mid=(n-1)//2
# 	if mid>=0:
# 		if arr[0]==0:
# 			return 0
# 		if arr[n-1]==n-1:
# 			return n-1
# 		if mid==arr[mid]:
# 			return arr[mid]
# 		elif mid>arr[mid]:
# 			return getVal(arr[mid:],len(arr[mid:]))
# 		elif mid<arr[mid]:
# 			return getVal(arr[:mid],len(arr[:mid]))
# 		else:
# 			return -1
# 	else:
# 		return -1
#
# print(getVal(arr,n))
# print(getVal(arr1,n))