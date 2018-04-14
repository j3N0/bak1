var http = require('http');

http.get('http://example.com/', function (response) {
	var body = [];

	console.log(response.statusCode);
	console.log(response.headers);

	response.on('data', function (chunk) {
		body.push(chunk);
	});

	response.on('end', function () {
		body = Buffer.concat(body);
		console.log(body.toString());
	});
});
