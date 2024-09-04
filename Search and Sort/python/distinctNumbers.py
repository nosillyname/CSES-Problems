def main():
    n = int(input())
    arr = list(map(int, input().split()))
 
    arr.sort()
    
    ans, index = 0, 0
    while index<n:
        j = index
        while j<n and arr[j] == arr[index]:
            j+=1
        ans += 1
        index = j
    
    print(ans)
 
if __name__ == '__main__':
    main()