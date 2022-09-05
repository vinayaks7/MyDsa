@lru_cache()
def dp(n: int, p = 0, pp = 0) -> int:
    return reduce(lambda a,b:(a+b)%1000000007,(dp(n-1,x,p) for x in range(1,7) if x!=p and x!=pp and (p==0 or gcd(x,p)==1))) if n else 1
class Solution:
    def distinctSequences(self, n: int) -> int: return dp(n)