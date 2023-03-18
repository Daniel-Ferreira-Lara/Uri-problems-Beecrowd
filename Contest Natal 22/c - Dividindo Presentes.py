a = int(input())
b = int(input())
c = a mod b
if  a==b:
    print("Sobraram 0 presentes!\n")
elif a<b:
    print("Ainda faltam "+abs(a-b)+" presentes!\n")
else:
    print("Sobraram "+c+" presentes!\n")