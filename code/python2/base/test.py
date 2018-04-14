import re

pattern = re.compile(r'(\w+) (\w+)')

s = 'i say, hello world!'

print re.sub(pattern, r'\1\2', s)