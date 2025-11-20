// if u want to only fetch some specific modules from the export of the people file u can use destructuring
// const xyz = require('./people');

const { people, ages } = require('./people');

console.log(people, ages); // empty object
// console.log(people); // u cant access declarations from one file to another

const os = require('os');

console.log(os.platform(),os.homedir());

