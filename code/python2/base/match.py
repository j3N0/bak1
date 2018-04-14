import re

pattern = re.compile(r'world')


#match 函数只能从起始位置匹配，如果起始位置不对应，则返回None
result1 = re.match(pattern, 'world')
result2 = re.match(pattern, 'hello world') 


if result1:
    print result1.group()
else:
    print 'result1 failed'

if result2:
    print result2.group()
else:
    print 'result2 failed'