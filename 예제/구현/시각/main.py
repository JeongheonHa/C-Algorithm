n = int(input())

count = 0
for h in range(n + 1):
    for m in range(60):
        for s in range(60):
            if '3' in str(h) + str(m) + str(s): # 문자열로 만들고 문자 찾기
                count += 1

print(count)                


