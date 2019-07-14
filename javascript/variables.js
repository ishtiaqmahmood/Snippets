// var, let, const

// Declare a variable
// We can reassign variable if we use var or let
// var name = 'John Doe'
// console.log(name);
// name = 'Gatling';
// console.log(name);

// Init var
var foo;
console.log(foo);
foo = 'Hello';
console.log(foo);

// Rules of conducting variables
// letters, number, _, $
// Can not start with number

// Multiword variables
var firstName = 'john'; // Camel case
var first_name = 'sara'; // Underscore
var FirstName = 'tom';  // Pascal case

// Let
let name;
name = 'John Doe'
console.log(name);
name = 'Gatling';
console.log(name);

// Const
// const name = 'Gatling';
// console.log(name);
// Can not reassign
// Have to assign a value

const person = {
	name: 'john',
	age: 30
}
console.log(person);

person.name = 'sara';
person.age = 32;
console.log(person);

const numbers = [1,2,3,4,5];
numbers.push(6);
console.log(numbers);
















