var events = require('events');
var emitter = new events.EventEmitter();
emitter.on('some_event', function(arg1, arg2) {
	console.log('listen1', arg1, arg2);
});
emitter.on('some_event', function(arg1, arg2) {
	console.log('listen2', arg1, arg2);
});
emitter.emit('some_event', 'zz', 'rr');
