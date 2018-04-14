var net = require('net');

net.createServer(function (conn) {
	conn.on('data', function (data) {
		conn.write([
			'HTTP/1.1 200 OK',
			'Content-Type: text/plain',
			'Content-Lenght: 11',
			'',
			'Hello world'
		].join('\n'));
	});
}).listen(8000);
