/*

TIP CALCULATOR
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

STEP 1: Grab DOM Elements
├── input#bill (bill amount)
├── input#people (number of people)
├── All .tip-btn buttons
├── span#tip-amount (display tip)
├── span#total (display total)
├── span#per-person (display per person)
└── button#reset

STEP 2: Track selected tip percentage
├── Create variable: let selectedTip = 0
├── Loop through tip buttons
├── On click:
│   ├── Remove "active" class from ALL buttons
│   ├── Add "active" class to clicked button
│   └── Store tip value: selectedTip = btn.dataset.tip
└── Call calculate function

STEP 3: Create calculate function
├── Get bill amount → parseFloat(bill.value)
├── Get people count → parseFloat(people.value) || 1
├── Calculate:
│   ├── tipAmount = bill * (selectedTip / 100)
│   ├── total = bill + tipAmount
│   └── perPerson = total / people
└── Update display spans

STEP 4: Reset button
├── Clear all inputs
├── Reset selectedTip to 0
├── Remove "active" from all buttons
└── Reset displays to "$0.00"

**NEW CONCEPTS**
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

// Default value if NaN
parseFloat(input.value) || 1

// Format to 2 decimal places
number.toFixed(2)  // 15.5 → "15.50"

// Remove class from ALL buttons
buttons.forEach(b => b.classList.remove("active"))

*/
