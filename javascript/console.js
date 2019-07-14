// Log to console
console.log('Hello World');
console.log(123);
console.log(true);

// Log variable
var foo = 'Hello';
console.log(foo);

// Log Arrays
console.log([1,2,3,4]);

// Log Object
console.log({a:1, b:2});
console.table({a:1, b:2});

console.error('This is an error');
console.clear();
console.warn('This is warning');

// Log time
console.time();
	console.log('Hello World');
	console.log('Hello World');
	console.log('Hello World');
	console.log('Hello World');
	console.log('Hello World');
console.timeEnd();