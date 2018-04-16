from heapq import heappush, heappop, heapify 
class MinHeap:
     
    def __init__(self):
        self.heap = [] 

    def insertKey(self, k):
        heappush(self.heap, k)           
             
    def extractMin(self):
        return heappop(self.heap)
 
    def getMin(self):
        return self.heap[0]


class Node:
	def __init__(self,freq,sym,left,right):
		self.freq=freq
		self.sym=sym
		self.left=left
		self.right=right

	def __lt__(self,other):
 		return self.freq<other.freq

H= MinHeap()

def Huffman(s,f):
	n=len(s)
	leaves=[]
	for i in range(n):
		leaf=Node(f[i],s[i],None,None)
		leaves.append(leaf)
	for leaf in leaves:
		H.insertKey(leaf)

	for i in range(n-1):
		l1=H.extractMin()
		l2=H.extractMin()
		p=Node(l1.freq+l2.freq,None,l1,l2)
		H.insertKey(p)
	trav(H.getMin())
	return H.extractMin()

b=[]

#Code to traverse through the tree and print the encoded bits of each character
def trav(x):
	if x.left==None and x.right==None:
		print(x.sym,b)
	else:
		b.append(0)
		trav(x.left)
		b.pop()
		b.append(1)
		trav(x.right)
		b.pop()

def main():
	# s=input("Enter number of symbols: ")
	# f = [int(x) for x in input().split()]
	s=['a','b','c','d','e','f']
	f=[20,12,10,8,4,3]
	print('Result: ',Huffman(s,f).freq)
	
if __name__ == '__main__':
	main()