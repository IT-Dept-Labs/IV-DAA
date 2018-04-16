class Interval:
	def __init__(self,start,end):
		self.start=start
		self.end=end


def findInterval(time):
	sorted(time, key=lambda x:x.end)
	st=time[0].start
	end=time[0].end
	if len(time)==0:
		return
	for i in range(1,len(time)):
		if time[i].start>st and time[i].end<end:												# 			(st).___________________.(end)
			del time[i]																			# 					 ._____.
		elif time[i].start>st and time[i].start<end and time[i].end>end:						#						.______________.
			del time[i]
		#print(st,'\t',end)
		del time[0]
		print('\n\n')
		for j in range(len(time)):
			print(time[j].start,end=" ")
		print()
	findInterval(time)
	

def main():
	#n=int(input("Enter the number of intervals: "))
	ints=[(1,20),(5,13),(15,28),(10,30),(25,40),(30,39),(45,65)]
	time=[Interval(x,y) for x,y in ints]
	findInterval(time)

		

if __name__ == '__main__':
	main()