var fs = require('fs');
var data = 'foooooooooooo bar\n';

var writerStream = fs.createWriteStream('output.txt');
writerStream.write(data, 'utf8');
writerStream.end();

writerStream.on('finish', function() {
	console.log('write over');
});

writerStream.on('error', function(err) {
	console.log(err.stack);
});

console.log('end');
