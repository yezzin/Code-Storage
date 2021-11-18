# 음계

a = input()
lst = a.split(" ")
n = [int(x) for x in lst]
tmp = n[0]
what = 0
for i in n:
    if what == 0:
        if i < n[1]:
            what = 1 # what==1, ascending
        elif i > n[1]:
            what = 2 # what==2, descending
    
    if what == 1:
        if tmp > i:
            what = 3 # what==3, mixed
            break

    if what == 2:
        if tmp < i:
            what = 3
            break
    tmp = i

if what == 1:
    print("ascending")
elif what == 2:
    print("descending")
else:
    print("mixed")
