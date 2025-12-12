/*

STEP 1: Grab the elements
├── We need the button (to listen for clicks)
├── We need the span (to display color code)
└── We need the body (to change its background)

STEP 2: Understand HEX colors
├── Format: #RRGGBB
├── Uses characters: 0-9 and A-F (16 options)
├── Example: #FF5733, #3498DB
└── We need to randomly pick 6 characters from "0123456789ABCDEF"

STEP 3: Create a function to generate random HEX
├── Start with "#"
├── Loop 6 times
├── Each time: pick random character from hex string
└── Return the complete color

STEP 4: Add click event
├── When button clicked → generate color
├── Apply color to body background
└── Update the span text to show the color code

*/

let button = document.getElementById('btn');
let span = document.getElementById('color-display');
let body = document.body;

function randHex(){
  let hexColor = "#";
  const chars = "0123456789ABCDEF"

  for(let value = 0; value < 6; value++){
    hexColor += chars[Math.floor(Math.random() * 16)];
  }
  return hexColor;
};

button.addEventListener('click',() => {
  let newHexColor = randHex();
  body.style.backgroundColor = newHexColor;
  span.textContent = newHexColor;
})




