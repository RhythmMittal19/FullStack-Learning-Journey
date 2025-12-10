// // // // alert("hello, world!");

// // // // console.log(1);

// // // // let age = 25;

// // // // console.log(age);

// // // //strings

// // // console.log('hello world');

// // // let email = 'to@gmail.com';

// // // console.log(email);

// // // // string concatenation

// // // let firstName = 'rhythm';
// // // let secondName = 'mittal';

// // // console.log(firstName + ' ' + secondName);

// // // // string characters

// // // console.log(secondName[2]);

// // // // string length

// // // console.log(secondName.length);

// // // // string methods

// // // console.log(secondName.toUpperCase());

// // // let result = secondName.toLowerCase();
// // // console.log(result);

// // // let index = email.indexOf('@');
// // // console.log(index);

// // // // common string methods

// // // let mail = "chiggaworld@to.co.in";
// // // // console.log(mail.lastIndexOf('g'));
// // // // console.log(mail.slice(0,6));
// // // console.log(mail.substr(4,10));
// // // console.log()

// // // template strings
// // const title = 'best reads of 2019';
// // const author = 'mario';
// // const likes = 30;

// // //string concatenation way
// // // let result = 'the blog called' + title + 'by' + author + 'has' + likes + 'likes';
// // // console.log(result);

// // // template string way
// // let result = `the blog called ${title} by ${author} has ${likes} likes`;
// // console.log(result);

// // // create html templates
// // let html = `
// //   <h2>${title}</h2>
// //   <p>by ${author}</p>
// //   <span>this blog has ${likes} likes</span>
// // `;

// // let ninja = ['min-chin', 'shaun', 'lingling', 'shaun'];
// // // ninja[1] = 'ding-li-fo';
// // // console.log(ninja[2]);
// // // console.log(ninja);
// // // console.log(ninja.length);

// // // array methods

// // // let result  = ninja.join(',');

// // // let result = ninja.indexOf('shaun');

// // // let result = ninja.concat(['ken' , 'crystal']); // dont alter the orignal variable

// // let result = ninja.push('ken'); // outputs the lenth of the variable but also alter the orignal variable
// // result = ninja.pop(); // outputs what has been popped out of the array  and also alters the variable
// // console.log(ninja);
// // console.log(result);

// // let age = null;
// // console.log(age, age+3, `the age is ${age}`);

// // //booleans & comparisons
// // console.log(true, false, "true", "false");

// // //methods can return booleans
// // let email  = 'to@gmail.com';
// // let name = ['mario', 'luigi', 'toa'];

// // let result = email.includes('gmail.com');
// // console.log(email);
// // console.log(result);

// //comparison operators
// let age = 25;
// // console.log(age == 25);
// // console.log(age == 30);
// // console.log(age != 30);

// // loose comparison (different data type can still be same)
// console.log("loose comparison");
// console.log(age == 25);
// console.log(age != 25);
// console.log(age == '25');
// console.log(age != '25');

// // strict comparison (different data type cant be same)
// console.log("strict comparison");
// console.log(age === 25);
// console.log(age !== 25);
// console.log(age === '25');
// console.log(age !== '25');

// type conversion
console.log("Type Conversion:");
let score = "100";
score = Number(score);
console.log(score + 1, typeof score);
console.log("---------------------------------------------------------->>");
let result = "Hello";
result = Number(result);
console.log(result + 1, typeof result);
console.log("---------------------------------------------------------->>");
let result_1 = String(50);
console.log(result_1, typeof result_1);
console.log("---------------------------------------------------------->>");
let result_2 = 50;
console.log(result_2, typeof result_2);

// Control Flow
console.log("---------------------------------------------------------->>");
console.log("for loops:");
let i = 0;
for (let i = 0; i < 5; i++) {
  console.log("in loop:", i);
}
console.log(i);
const names = ["shaun", "mario", "luigi"];
for (let i = 0; i < names.length; i++) {
  // console.log(names[i]);
  let html = `<div>${names[i]}</div>`;
  console.log(html);
}

console.log("---------------------------------------------------------->>");
console.log("while loops:");

// var i = 0;
while (i < 5) {
  console.log("in loop:", i);
  i++;
}
console.log(i);
let j = 0;
const namesNew = ["shaun", "mario", "luigi"];
while (j < namesNew.length) {
  console.log(namesNew[j]);
  let html = `<div>${namesNew[j]}</div>`;
  console.log(html);
  j++;
}

// if else statements are just code blocks with a conditional statement like for and while rest the syntax is not much different

// logical operators OR || and AND && should be used properly too.

//LOGICAL NOT (!)
console.log("---------------------------------------------------------->>");
console.log("Logical Not");
let user = false;
if (!user) {
  //if true this will run
  console.log(user);
  console.log(!user);
}

console.log(!true);
console.log(!false);

//Break and Continue
console.log("---------------------------------------------------------->>");
console.log("Break and Continue");

const scores = [50, 25, 0, 30, 100, 20, 10];
for (let i = 0; i < scores.length; i++) {
  if (scores[i] === 0) {
    continue;
  }

  console.log("your score: ", scores[i]);

  if (scores[i] === 100) {
    console.log("congrats u got the top score!");
    break;
  }
}

//Switch Statements
console.log("---------------------------------------------------------->>");
console.log("Switch Statements");

//using if statements can be a bit untidy and messy so use switch cases in these instances
//switch uses strict operations === and not ==

const grade = "D";

switch (grade) {
  case "A":
    console.log("You got an A!");
    break;
  case "B":
    console.log("You got an B!");
    break;
  case "C":
    console.log("You got an C!");
    break;
  case "D":
    console.log("You got an D!");
    break;
  case "E":
    console.log("You got an E!");
    break;
  case "F":
    console.log("You got an F!");
    break;
  default:
    console.log("Not a valid grade!");
}

//variable scope
console.log("---------------------------------------------------------->>");
console.log("Variable Scope");

let age = 30;

if (true) {
  let age = 25;
  console.log(age);
}

console.log(age);

//functions

console.log("---------------------------------------------------------->>");
console.log("Functions");

//function decleration

function greet() {
  console.log("hi there!");
}

greet();
greet();
greet();

//function expression

const speak = function () {
  console.log("speak");
};

speak();
speak();
speak();

//there is a slight difference in both of these which is called "HOISTING"
/*

when using function decleration u can call the function even if u declared it after calling it like this:

greet()

function greet(){
};

but in fucntion expression this is not true u have declare it before calling in below

*/

//whenever u are returning any value from function "return" its good to always store it

//regular function

// const calcArea = function(radius){
//   return 3.14 * radius**2;
// };

//arrow function
const calcArea = (radius) => {
  // if there is only one parameter u can remove breackets else its prefered to keep them
  return 3.14 * radius ** 2;
};

//shorter version --> const calcArea = radius => 3.14 * radius**2;

const area = calcArea(5);
console.log(area);

// practice function into arrow functions

/*
1.

const greet = function(){
  return "hello world!";
};

const greet = () => "hello world!";

2.

//normal function

const bill = function(products, tax){
  let total = 0;
  for (let i = 0; i < products.length; i++){
    total += products[i] + products[i]*tax;
  }
  return total;
}

//arrow funtion

const bill = (products,tax) => {
  let total = 0;
  for (let i = 0; i < products.length; i++){
    total += products[i] + products[i]*tax;
  }
  return total;
}

console.log(bill([10,15,30], 0,2));

*/

const nameOne = "shaun";

//functions

const greetOne = () => "hello";

let resultOne = greetOne();
console.log(resultOne);

//methods

let resultTwo = nameOne.toUpperCase();
console.log(resultTwo);

// callback & foreach
console.log("---------------------------------------------------------->>");
console.log("Callback & Foreach");
const myFunc = (callbackFunc) => {
  let value = 50;
  callbackFunc(value);
};

myFunc((value) => {
  console.log(value);
  //functions without a name is called anonymous function generally used in callbacks;
});

let people = ["mario", "luigi", "ryu", "shaun", "chun-li"];

const logPerson = (person, index) => {
  console.log(`${index}. Good evening! ${person}`);
};

people.forEach(logPerson);

//get a reference to the 'ul' ( IMPORTANT )

const ol = document.querySelector(".people");

const peopleOne = ["mario", "luigi", "ryu", "shaun", "chun-li"];

let html = ``;

peopleOne.forEach((person) => {
  //create a html template for each person
  html += `<li style="color: blue">${person}</li>\n`;
});
console.log(html);
ol.innerHTML = html;

//OBJECTS - in real life had properties and things they can do like phone
console.log("---------------------------------------------------------->>");
console.log("OBJECTS");
//object literals

let users = {
  name: "crystal",
  age: 30,
  email: "crystal@thenetninja.co.uk",
  location: "berlin",
  blogs: ["why mac & cheese rules", "10 things to make with marmite"],
  login() {
    console.log("the user logged in");
  },
  logout() {
    console.log("the user logged out");
  },
  logBlog() {
    this.blogs.forEach((person) => {
      console.log(`This person has these blogs: ${person}`);
    }); 
  },
};

// console.log(users);
// console.log(users.name);

// console.log(users.age);
// users.age = 35;
// console.log(users.age);
// console.log(typeof users);
users["login"](); // method
users["logout"](); // method

users.logBlog();
console.log(this);
