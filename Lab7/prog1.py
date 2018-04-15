class Interval:
	def __init__(self,start,end):
		self.start=start
		self.end=end


def findInterval(time):
	sorted(time, key=lambda x:x.end)
	for i in range(len(time)):
		print(time[i].start,time[i].end)
	

def main():
	#n=int(input("Enter the number of intervals: "))
	ints=[(1,20),(5,13),(15,28),(10,30),(25,40),(30,39),(45,65)]
	time=[Interval(x,y) for x,y in ints]
	findInterval(time)
		

if __name__ == '__main__':
	main()