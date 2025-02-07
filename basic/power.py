def power(n):
    if n==0:
        return -1
    reverse=0
    for _ in str(n):
        digit = n % 10
        reverse = reverse * 10 + digit
        n //= 10
    print(reverse)
    return n**int(reverse)
x=int(input())
print(power(x))