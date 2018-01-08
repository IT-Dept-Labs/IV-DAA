n=int(input("Enter n: "))
men=[i for i in range(n)]
women=[i for i in range(n)]
m_pref=[[0 for i in range(n)] for k in range(n)]
w_pref=[[0 for i in range(n)] for k in range(n)]
for i in range(n):
	print("Enter preference of man "+str(i)+": ")
	for j in range(n):
		m_pref[i][j]=int(input(""))

for i in range(n):
	print("Enter preference of woman "+str(i)+": ")
	for j in range(n):
		w_pref[i][j]=int(input(""))

free_men=[True for i in range(n)]
free_women=[True for i in range(n)]
husband=[None for i in range(n)]
wife=[None for i in range(n)]
prop_count=[0 for i in range(n)]
curr=0
x1=0
x2=0

for i in range(n):
	if free_men[i]==True:
		for j in range(n):
			if free_women[m_pref[i][j]]==True:
				free_women[m_pref[i][j]]=False
				wife[i]=m_pref[i][j]
				husband[m_pref[i][j]]=i
				free_men[i]=False
				break
			else:
				curr=husband[m_pref[i][j]]
				for k in range(n):
					if w_pref[m_pref[i][j]][k]==curr:
						x1=w_pref[m_pref[i][j]][k]
					if w_pref[m_pref[i][j]][k]==i:
						x2=w_pref[m_pref[i][j]][k]
				if x1>x2:
					wife[i]=m_pref[i][j]
					husband[m_pref[i][j]]=i
					free_men[curr]=True
					free_men[i]=False
for i in range(n):
	print(str(i)+" - "+str(wife[i]))


		