var events = require('events');
var eventEmitter = new events.EventEmitter();

var listener1 = function listener1() {
	console.log('listener1 emit');
}

var listener2 = function listener2() {
	console.log('listener2 emit');
}

eventEmitter.addListener('connection', listener1);

eventEmitter.on('connection', listener2);

var eventListeners = require('events').EventEmitter.listenerCount(eventEmitter, 'connection');
console.log(eventListeners + " listenters are listening");

eventEmitter.emit('connection');

eventEmitter.removeListener('connection', listener1);
console.log('listener1 has been removed');

eventEmitter.emit('connection');

eventListeners = require('events').EventEmitter.listenerCount(eventEmitter, 'connection');
console.log(eventListeners + " listeners are listening");

console.log('end');
