
import os
'''
print os.getcwd()



p='/'

r=os.listdir(p)

for i in r:
	print i
'''

p= "/home/guo/python_base/f1.py"
#print os.path.isfile(p)
fp=file(p,'r')
s=fp.read()
fp.close()
print s
