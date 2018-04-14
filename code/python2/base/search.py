import re

pattern = re.compile(r'world')

#与match函数不同，search可以实现扫描整个string查找匹配
match1 = re.search(pattern, 'hello world')

#与match函数类似，　如果遇到无法匹配的字符，立即停止匹配
match2 = re.search(r'\d+', 'one1two2three3four4')

if match1:
    print match1.group()
else:
    print 'match1 failed'

if match2:
    print match2.group()
else:
    print 'match1 failed'
