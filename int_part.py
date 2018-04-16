class activity:

	def __init__(self,stt,endt):
		self.stt=stt
		self.endt=endt
		self.visited=0
count=1
i=0
int_count=0
def sche(L):

	global count

	global i

	global int_count

	print("Resource:",count)

	print(L[i].stt,L[i].endt,end=" ")

	L[i].visited=1

	int_count=int_count+1

	

	for j in range(1,len(L)):

		if L[j].stt>L[i].endt and L[j].visited==0:

			print(L[j].stt,L[j].endt,end=" ")

			L[j].visited=1

			int_count=int_count+1

			i=j
	count=count+1

	for k in range(len(L)):
		if L[k].visited==0:
			i=k
			sche(L)


l=[]
a1=activity(1,3)
a2=activity(1,6)
a3=activity(1,3)
a4=activity(4,6)
a5=activity(4,10)
a6=activity(8,12)
a7=activity(8,12)
a8=activity(11,15)
a9=activity(13,15)
a10=activity(13,15)
l.append(a1)
l.append(a2)
l.append(a3)
l.append(a4)
l.append(a5)
l.append(a6)
l.append(a7)
l.append(a8)
l.append(a9)
l.append(a10)
ls=[]
ls=sorted(l,key=lambda a1: a1.stt)
sche(ls)


