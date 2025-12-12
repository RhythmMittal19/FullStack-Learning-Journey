/*

STEP 1: Identify what we need from the DOM
├── The count display (span#count)
├── Decrease button (button#decrease)
├── Reset button (button#reset)
└── Increase button (button#increase)

STEP 2: Create a STATE variable
├── We need to track the current count
├── Initialize it to 0
└── This variable will be our "source of truth"

STEP 3: Create a function to UPDATE the display
├── Set the textContent of span to current count
├── BONUS: Change color based on value
│   ├── Positive → green (add 'positive' class)
│   ├── Negative → red (add 'negative' class)
│   └── Zero → white (add 'zero' class)
└── Remove old classes before adding new one

STEP 4: Add event listeners to each button
├── Increase button → count++ → update display
├── Decrease button → count-- → update display
└── Reset button → count = 0 → update display

*/

// STEP 1: Grab DOM elements
let countDisplay = document.getElementById("count");
let Decrease = document.getElementById("decrease");
let Reset = document.getElementById("reset");
let Increase = document.getElementById("increase");

let stateCount = 0;

function displayCount() {
  countDisplay.textContent = stateCount;

  if (stateCount > 0) {
    countDisplay.style.color = 'green'
  } else if (stateCount < 0) {
    countDisplay.style.color = 'red';
  } else {
    countDisplay.style.color = 'white';
  }
}

Increase.addEventListener("click", () => {
  stateCount++;
  displayCount();
});

Decrease.addEventListener("click", () => {
  stateCount--;
  displayCount();
});

Reset.addEventListener("click", () => {
  stateCount = 0;
  displayCount();
});
