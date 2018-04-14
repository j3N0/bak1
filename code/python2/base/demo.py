import urllib2
import urllib

values = {}
values["username"] = 'wenhao'
values['password'] = 'XXX'
data = urllib.urlencode(values)
url = "www.wenhao.com"
geturl = url + "?" + data
print geturl

#request = urllib2.Request("http://www.baidu.com")
# response = urllib2.urlopen(request)
#print response.read()