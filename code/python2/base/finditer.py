import re

pattern = re.compile(r'\d+')

#返回一个匹配结果的迭代器
for m in re.finditer(pattern, 'one1two2three3four4'):
    print m.group(),


