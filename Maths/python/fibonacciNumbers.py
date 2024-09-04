mem = {0:0, 1:1}
MOD = 10**9+7
 
def fib(n):
    if n not in mem:
        if n%2:
            k = (n+1)//2
 
            if k not in mem:
                mem[k] = fib(k)
            if k-1 not in mem:
                mem[k-1] = fib(k-1)
            mem[n] = mem[k]**2 + mem[k-1]**2
        else:
            k = n//2
            if k not in mem:
                mem[k] = fib(k)
            if k-1 not in mem:
                mem[k-1] = fib(k-1)
            mem[n] = (2*mem[k-1]+mem[k])*mem[k]
    return mem[n]%MOD
 
print(fib(int(input())))