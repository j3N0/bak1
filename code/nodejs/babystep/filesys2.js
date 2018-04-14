var fs = require('fs');

console.log('ready for loading file');
fs.open('input.txt', 'r+', function(err, fd) {
	if (err) {
		console.error(err.stack);
	}
	//console.log('open success');
	console.log(fd);
});
