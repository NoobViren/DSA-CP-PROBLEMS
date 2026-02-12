nums = list(map(int, input("Enter numbers separated by space: ").split()))
mini = min(nums)
maxi = max(nums)
low = 2*mini
high = 2*maxi
dict = {}
for i in nums:
    if i not in dict:
        dict[i] = 0
    dict[i]+=1
m = 1
for i in range(mini,maxi+1):
    temp = dict.copy()
    count = 0
    for j in nums:
        if temp[i]>0 and temp[i-j]>0:
            if i == i-j and temp[i]>=2:
                count+=1
                temp[i]-=2
            elif i!=i-j:
                count+=1
                temp[i]-=1
                temp[i-j]!=1
    m = max(m,count)
print(m)