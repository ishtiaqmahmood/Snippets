let val;

// Number to string
val = String(5);
// Bool to string
val = String(true);
// Date to string
val = String(new Date());
// Array to string
val = String([1,2,3,4]);

// toString()
val = (5).toString();

// output
console.log(val);
console.log(typeof val);
console.log(val.length);

// String to number
val = Number('5');
val = Number(true);
val = Number(null);
val = Number([1,2,3]);

val = parseInt('100.30');
val = parseFloat('100.30');

// output
console.log(val);
console.log(typeof val);
console.log(val.toFixed());

// Type coersion
const val1 = '5';
const val2 = 5;
const sum = val1 + val2;

console.log(sum);
console.log(typeof sum);



















