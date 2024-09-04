def findLeftStart(y):
    row = y
    if y%2:
        row -= 1
    
    value = row**2
    if y%2:
        value += 1
    return value
 
def findTopStart(x):
    column = x
    if x%2 == 0:
        column -= 1
    
    value = column**2
    if x%2 == 0:
        value += 1
    return value
 
def main():
    for _ in range(int(input())):
        y, x = map(int, input().split())
 
        left = findLeftStart(y)
        top = findTopStart(x)
        
        value = 0
        if top>left:
            if x%2 == 0:
                value = top+y-1
            else:
                value = top-y+1
        else:
            if y%2 == 0:
                value = left-x+1
            else:
                value = left+x-1
        print(value)
 
if __name__ == "__main__":
    main()       