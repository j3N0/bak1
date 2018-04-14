var buffer1 = new Buffer('Hello');
var buffer2 = new Buffer(' ');
var buffer3 = new Buffer('world');
var buffer4 = Buffer.concat([buffer1, buffer2, buffer3]);
console.log("buffer4 is " + buffer4.toString());
