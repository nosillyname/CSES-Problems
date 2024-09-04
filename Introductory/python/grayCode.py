def backtrack(k, n, gray):
    if k==n:
        for bit in gray:
            print(bit,end='')
        print()
    else:
        backtrack(k+1, n, gray)
        gray[k] = 1-gray[k]
        backtrack(k+1, n, gray)
 
def main():
    n = int(input())
    gray = [0]*n
    backtrack(0, n, gray)
 
if __name__=="__main__":
    main()