from sys import stdin, stdout  

a, b = list(map(int, stdin.readline().split()))
aa = list(map(int, stdin.readline().split()))
bb = list(map(int, stdin.readline().split()))
bb = sorted(bb)
idx1 = 0
idx = 0
while (idx1 < len(aa)):
    if (idx < len(bb) and aa[idx1] > bb[idx]):
        stdout.write(str(bb[idx]) + " ")
        idx = idx + 1
    else:
        stdout.write(str(aa[idx1]) + " ")
        idx1 = idx1 + 1
while idx < len(bb):
    stdout.write(str(bb[idx]) + " ")
    idx = idx + 1
