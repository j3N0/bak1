var fs = require('fs');

console.log('ready to write file.');

fs.readFile('input.txt', function(err, data) {
	if (err) {
		console.error(err.stack);
	}
	console.log('read: ' + data.toString());
});

fs.writeFile('input.txt', '1', function(err) {
	if (err) {
		return console.error(err);
	}
});
fs.writeFile('input.txt', '2', function(err) {
	if (err) {
		return console.error(err);
	}
});
console.log('end');
