import re

pattern = re.compile(r'\d+')

#搜索string，以列表形式返回全部能匹配的子串
#与search不同，遇到不匹配的跳过，直到string的结尾
print re.findall(pattern, 'one1two2three3four4')