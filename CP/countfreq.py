a = "hello world"
freq = {}
for i in a:
    if i in freq:
        freq[i]+=1
    if i not in freq:
        freq[i] = 1
print(freq)