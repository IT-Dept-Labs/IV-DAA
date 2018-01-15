
def wPrefer(w_pref,j,m1,w):
	for i in range(len(w_pref)):
		if w_pref[w][i] == j:
			print(w,"changes from man ",m1," to ",j )
			return True
		if w_pref[w][i]==m1:
			return False	


#n=int(input("Enter n: "))
n=3
m_pref=[[0 for i in range(n)] for k in range(n)]
w_pref=[[0 for i in range(n)] for k in range(n)]


# lines=[line.rstrip('\n') for line in open('input.txt')]
# k=0
# # print(lines[1].strip(" "))
# print(lines[2][4])
# for i in range(2,2+n):
# 	for j in range(2,n,2):
# 		m_pref[i-2][k]=int(lines[i][j])
# 		k+=1
# k=0
# for i in range(2+n,2+2*n):
# 	for j in range(2,n,2):
# 		w_pref[i-n-2][k]=int(lines[i][j])
# 		k+=1

# print(m_pref[0][1])

Men=['m1','m2','m3']
Women=['w1','w2','w3']
m_pref=[[1, 2, 0],
		[1, 0, 2],
		[0, 2, 1]]
w_pref=[[1, 2, 0],[1,0, 2],[2, 1, 0]]

# for i in range(n):
# 	print("Enter preference of man "+str(i)+": ")
# 	for j in range(n):
# 		m_pref[i][j]=int(input(""))

# for i in range(n):
# 	print("Enter preference of woman "+str(i)+": ")
# 	for j in range(n):
# 		w_pref[i][j]=int(input(""))

husband=[None for i in range(n)]
wife=[None for i in range(n)]
mFree=[False for i in range(n)]
free=n


while free>0:
	for j in range(n):
		if mFree[j]==False:
			break

	for i in range(n):
		if mFree[j]==False:
			w=m_pref[j][i]

			if husband[w]==None:
				husband[w]=j
				wife[j]=w

				mFree[j]=True
				free-=1
			else:
				m1=husband[w]

				if wPrefer(w_pref,j,m1,w)==True:
					husband[w]=j
					wife[j]=w
					mFree[j]=True
					mFree[m1]=False

print("Man\tWoman")
for i in range(0,n):
	print(str(Men[i])+"\t"+Women[wife[i]])


