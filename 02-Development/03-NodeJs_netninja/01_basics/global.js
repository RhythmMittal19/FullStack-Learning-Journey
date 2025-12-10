//Global Object

console.log("--------------------------------------------------->");
console.log("GLOBAL OBJECT");
console.log("--------------------------------------------------->");


// console.log(global);

setTimeout(() => {
  // dont have to use global. everytime we run methods of global object.
  console.log('in the timeout');
  clearInterval(int);
}, 3000);

const int = setInterval(() => {
  console.log('in the interval');
}, 1000);

//directory and file path is important
console.log(__dirname); // IMPORTANT to circulate path in node js
console.log(__filename);

// console.log(document.querySelector);
