import re

pattern = re.compile(r'\d+')

#按照能够匹配的子串将string分割后返回列表
#即将'one1two2three3four4'　按'1 2 3 4'为间隔分割
print re.split(pattern, 'one1two2three3four4')