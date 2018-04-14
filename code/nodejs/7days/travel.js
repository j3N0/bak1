var fs = require('fs');
var path = require('path');
function travel(dir, callback) {
	fs.readdirSync(dir).forEach(function (file) {
		var pathname = path.join(dir, file);

		if (fs.statSync(pathname).isDirectory()) {
			travel(pathname, callback);
		} else {
			callback(pathname);
		}
	});
}

function main(argv) {
	var dirname = argv.toString();
	travel(dirname, function(pathname) {
		console.log(pathname);
	});
}

main(process.argv.slice(2));
