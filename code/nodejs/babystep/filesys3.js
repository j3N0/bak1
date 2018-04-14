var fs = require('fs');
console.log('ready to open file.');
fs.stat('input.txt', function(err, stats) {
	if (err) {
		return console.log(err);
	}
	console.log(stats);
	console.log('read file information successfully');

});
console.log('end');
