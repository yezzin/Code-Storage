m, n = map(int,input().split())
arr = []
for i in range(5*m+1):
    arr.append(list(input()))

answer = [0,0,0,0,0]
i=1
while i < 5*m+1:
    temp = []
    j = 1
    while j < 5*n+1:
        temp = [arr[i + a][j] for a in range(4)]
        if temp == ['.', '.', '.', '.']:
            answer[0] += 1
        elif temp == ['*', '.', '.', '.']:
            answer[1] += 1
        elif temp == ['*', '*', '.', '.']:
            answer[2] += 1
        elif temp == ['*', '*', '*', '.']:
            answer[3] += 1
        elif temp == ['*', '*', '*', '*']:
            answer[4] += 1
        j+=5
    i += 5

for i in range(len(answer)):
    print(answer[i], end = ' ')

'''
input: 
2 3
################
#****#****#****#
#****#****#****#
#****#....#****#
#....#....#****#
################
#....#****#****#
#....#****#....#
#....#....#....#
#....#....#....#
################

output: 1 1 2 1 1
'''