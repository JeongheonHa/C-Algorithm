'''
    이해 : N 과 N의 자리수의 합이 분해합, N 은 생성자, 생성자가 없을 수 도 있고 없을 수 도 있다, nlogn이상
          정답을 찾을 때까지 모든 수 탐색 -> brute force 이용
'''

N = int(input())

for i in range(1, N + 1):
    tmp = i + sum(map(int, str(i)))

    if tmp == N:
        result = i
        break

print(result)
