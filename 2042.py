# 백준 2042번 구간 합 구하기

n, m, k = map(int, input().split())
numbers = [int(input()) for _ in range(n)]
sums = [0]
for i in range(1, n+1):
    sums.append(sums[i-1]+numbers[i-1])
for _ in range(m+k):
    a, b, c = map(int, input().split())
    if a == 1:
        orig = numbers[b-1]
        for i in range(b, n+1):
            sums[i] = sums[i] - orig + c
    else:
        print(sums[c]-sums[b-1])
