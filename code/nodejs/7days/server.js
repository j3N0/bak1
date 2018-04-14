var http = require('http');

try{
	http.createServer(function (request, response) {
		response.writeHead(200, { 'Content-Type': 'text-plain' });
		response.end('Hello World\n');
	}).listen(8124);
	console.log('open at 8124');
}catch(err) {
	process.exit(1);
}
