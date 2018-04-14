# -*- coding: utf-8 -*-
import urllib2

URL = 'http://jwgl.jsu.edu.cn/sys/ValidateCode.aspx'
data = urllib2.urlopen(URL).read()
f = open('1.png', 'wb+')
f.write(data)
f.close()