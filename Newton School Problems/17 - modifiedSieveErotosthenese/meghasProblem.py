def SieveOfEratosthenes(n):
    prime = [True for i in range(n + 1)]
    p = 2
    dict={}
    count=0
    while (p * p <= n):
        if (prime[p] == True):
            count=count + 1
            dict[p] = count
            for i in range(p * 2, n + 1, p):
                prime[i] = False
        p += 1
    prime[0] = False
    prime[1] = False
    # r = []
    # for p in range(n + 1):
    #     if prime[p]:
    #         r.append(p)
    return dict

n = int(input())
dict = SieveOfEratosthenes(n)
print(dict)
