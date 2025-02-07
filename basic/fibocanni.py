def fibo(n, memo={}):
    if n in memo:
        return memo[n]
    if n==0 or n==1:
        return n
    memo[n]=fibo(n-1, memo)+fibo(n-2, memo)
    return memo[n]
x=int(input())
print(fibo(x))