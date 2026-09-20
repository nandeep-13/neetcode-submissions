class Solution:
    def findLucky(self, arr: List[int]) -> int:
            # Write your solution here
        h ={}
        for i in arr:
            if i not in h:
                h[i]=1
            else:
                h[i]=h[i] +1
        maxf=-1
        for z in arr:
            if z==h[z]:
                if z > maxf:
                    maxf=z
        return maxf
        