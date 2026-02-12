with open('src.txt','r') as src_file:
 data = src_file.read()

with open('copy.txt','w') as cpy_file:
 cpy_file.write(data)