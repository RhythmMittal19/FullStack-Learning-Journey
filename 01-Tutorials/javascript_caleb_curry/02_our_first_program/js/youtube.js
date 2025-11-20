document.getElementById("button").onclick = function () {
  document.getElementById("confirm").innerHTML =
    "Order placed, check email for confirmation";
  document.getElementById("button").style.display = "none";
};

var username = prompt();
username = 5;
username = "hello";
console.log(username);

var age = 50;
console.log(age);
console.log(age);
console.log(age);


//declaration ---->  var age;

//initialization ----> age = 50;

// this is really important

/* this is
multiline
comment
*/


(function(){
  //IIFE = immediately invoked function expression
  var age = 50;
})();
