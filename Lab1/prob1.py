
def wPrefer(w_pref,j,m1,w):
	for i in range(len(w_pref)):
		if w_pref[w][i] == j:
			return True
		if w_pref[w][i]==m1:
			return False	


n=int(input("Enter n: "))
m_pref=[[0 for i in range(n)] for k in range(n)]
w_pref=[[0 for i in range(n)] for k in range(n)]


lines=[line.rstrip('\n') for line in open('i.txt')]
for i in range(n):
	for j in range(n):
		m_pref[i][j]=int(lines[i][j])

for i in range(n,2*n):
	for j in range(n):
		w_pref[i-n][j]=int(lines[i][j])

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
for i in range(n):
	print(str(i)+"\t"+str(wife[i]))


