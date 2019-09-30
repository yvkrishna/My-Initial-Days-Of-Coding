# https://www.hackerrank.com/challenges/swap-case/copy-from/119245556

def swap_case(s):
    k=""
    for i in s:
        if i.isupper():
            i=i.lower()
        else:
            i=i.capitalize()
        k=k+i
    return k

if __name__ == '__main__':
