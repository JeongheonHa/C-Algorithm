# <1>
''' 
    combinations를 이용한 경우 
                            '''
# from itertools import combinations

# dwarf = [int(input()) for _ in range(9)]
# occasion = list(combinations(dwarf,7))

# for i in occasion:
#     if sum(i) is 100:
#         answer = list(i)

# answer.sort()

# for i in answer:
#     print(i)

#<2>
'''
    이중for문을 이용한 경우
                        '''
import sys
height = []
for _ in range(9):
    height.append(int(sys.stdin.readline()))

sum = sum(height)

finish = False

for i in range(8):
    for j in range(i+1,9):
        if (height[i] + height[j] == sum - 100):
            save = [i,j]
            finish = True
            break
    if finish:
        break

del height[save[0]]
del height[save[1]-1]

height.sort()

for i in height:
    print(i)
