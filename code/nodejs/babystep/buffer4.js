//Buffer.compare()

var buffer1 = new Buffer('ABC');
var buffer2 = new Buffer('ABCD');
var result = buffer1.compare(buffer2);

if (result < 0) {
	console.log(buffer1 + " before " + buffer2);
}else if (result == 0) {
	console.log(buffer1 + " is as same as " + buffer2);
}else {
	console.log(buffer1 + " after " + buffer2);
}

//there is no toString() function, with "+" and string type can automatically change everything to a string type.
