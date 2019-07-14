const person = {
	firstName: 'Gatling',
	lastName: 'Hutch',
	age: 26,
	email: 'Gatlinghutch@gmail.com',
	hobbies: ['music', 'sports'],
	address: {
		city: 'Miami',
		state: 'FL'
	},
	getBirthYear: function(){
		return 2019 - this.age;
	}
}

let val;

val = person;
//  Get specific value
val = person.firstName;
val = person['lastName'];
val = person.hobbies[1];
val = person.address;
val = person.getBirthYear();
console.log(val)

const people = [
	{name: 'John', age: '30'},
	{name: 'Locus', age: '30'},
	{name: 'Nancy', age: '30'}
];

for (var i = 0; i < people.length; i++) {
	console.log(people[i]);
}