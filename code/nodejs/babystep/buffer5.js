var buffer1 = new Buffer('wenhao');
//copy
var buffer2 = new Buffer(3);
buffer1.copy(buffer2);
console.log("buffer2 content: " + buffer2);
