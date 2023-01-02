from functools import cache

@cache
def fibonacci(n):
    # base case
    if n==0:
        return 0
    if n==1:
        return 1
    # general case
    return fibonacci(n-1)+fibonacci(n-2)

if __name__=="__main__":
    # print(fibonacci(4))
    n=int(input())
    print(fibonacci(n))