n = int(input())
mp, mf, ms, mv = map(int, input().split())
materials = [list(map(int, input().split())) for _ in range(n)]
answers = []


def f():
    tp = tf = ts = tv = 0

    def inner():
        nonlocal tp, tf, ts, tv
