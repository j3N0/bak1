var fs = require('fs');
fs.readFile('insput.txt', function(err, data) {
	if(err) {
		return console.error(err);
	}
	console.log('async-load: ' + data.toString());
});

var data = fs.readFileSync('input.txt');
console.log('sync-load: ' + data.toString());

console.log('end');
