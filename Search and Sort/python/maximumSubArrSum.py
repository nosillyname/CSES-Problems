def main():
    n = int(input())
    arr = list(map(int, input().split()))
 
    maximum = arr[0]
    curr = arr[0]
    for index in range(1, n):
        curr += arr[index]
        if arr[index]>curr:
            curr = arr[index]
        maximum = max(maximum, curr)
     
    print(maximum)
 
if __name__ == "__main__":
    main()