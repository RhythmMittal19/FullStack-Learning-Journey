/*

┌─────────────────────────────────────────────────────────────────────────┐
│                        MULTI-STEP FORM FLOW                             │
└─────────────────────────────────────────────────────────────────────────┘

    ┌─────────┐     ┌─────────┐     ┌─────────┐     ┌─────────┐
    │ Step 1  │────▶│ Step 2  │────▶│ Step 3  │────▶│ Step 4  │
    │Personal │     │ Contact │     │ Account │     │ Confirm │
    └────┬────┘     └────┬────┘     └────┬────┘     └────┬────┘
         │               │               │               │
         ▼               ▼               ▼               ▼
    ┌─────────┐     ┌─────────┐     ┌─────────┐     ┌─────────┐
    │Validate │     │Validate │     │Validate │     │ Submit  │
    │Step 1   │     │Step 2   │     │Step 3   │     │  Form   │
    └─────────┘     └─────────┘     └─────────┘     └─────────┘


┌─────────────────────────────────────────────────────────────────────────┐
│                      NEXT BUTTON CLICK                                  │
└─────────────────────────────────────────────────────────────────────────┘
                              │
                              ▼
                    ┌──────────────────┐
                    │ Validate Current │
                    │      Step        │
                    └────────┬─────────┘
                             │
              ┌──────────────┴──────────────┐
              │                             │
              ▼                             ▼
        ┌───────────┐                 ┌───────────┐
        │   VALID   │                 │  INVALID  │
        └─────┬─────┘                 └─────┬─────┘
              │                             │
              ▼                             ▼
        ┌───────────┐                 ┌───────────┐
        │currentStep│                 │Show errors│
        │    ++     │                 │   STOP    │
        └─────┬─────┘                 └───────────┘
              │
              ▼
        ┌───────────┐
        │ showStep()│
        └───────────┘


┌─────────────────────────────────────────────────────────────────────────┐
│                      showStep(stepNumber)                               │
└─────────────────────────────────────────────────────────────────────────┘
                              │
                              ▼
        ┌─────────────────────────────────────────────┐
        │  1. Hide all form steps                     │
        │  2. Show step matching stepNumber           │
        │  3. Update step indicators                  │
        │  4. Update step lines                       │
        │  5. Update prev/next/submit buttons         │
        │  6. If step 4 → populate summary            │
        └─────────────────────────────────────────────┘

*/

/*

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 1: Define State
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

let currentStep = 1
const totalSteps = 4

*/

let currentStep = 1;
const totalSteps = 4;

/*

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 2: Grab Elements
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

├── All form steps (querySelectorAll)
├── All step indicators (querySelectorAll)
├── All step lines (querySelectorAll)
├── Prev button
├── Next button
├── Submit button
├── Form element
├── Modal elements
└── All input fields for each step

*/

let formSteps = document.querySelectorAll(".form-step");
let stepItems = document.querySelectorAll(".step-item");
let stepLines = document.querySelectorAll(".step-line");
let nextBtn = document.getElementById("nextBtn");
let prevBtn = document.getElementById("prevBtn");
let submitBtn = document.getElementById("submitBtn");
let form = document.getElementById("multiStepForm");
let successModal = document.getElementById("successModal");
let closeModal = document.getElementById("closeModal");


/*

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 3: Create "showStep" function
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
PURPOSE: Show the specified step, hide others

├── Remove "active" from all form steps
├── Add "active" to step matching stepNumber
├── Update step indicators:
│   ├── Steps < currentStep → add "completed" class
│   ├── Step === currentStep → add "active" class
│   └── Steps > currentStep → remove both classes
├── Update step lines (completed if step before is done)
├── Update button states:
│   ├── If step 1 → disable Prev button
│   ├── If last step → hide Next, show Submit
│   └── Otherwise → enable Prev, show Next
└── If last step → populate summary

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 4: Create Validators for Each Step
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

validateStep1():
├── Validate firstName (required, min 2 chars)
├── Validate lastName (required, min 2 chars)
├── Validate dob (required)
└── Return true if ALL valid

validateStep2():
├── Validate email (required, valid format)
├── Validate phone (required, 10 digits)
├── Validate address (required)
└── Return true if ALL valid

validateStep3():
├── Validate username (required, 3-15 chars)
├── Validate password (required, min 8 chars)
├── Validate confirmPassword (must match password)
└── Return true if ALL valid

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 5: Create "validateCurrentStep" function
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
PURPOSE: Run the correct validator based on currentStep

├── IF currentStep === 1 → return validateStep1()
├── IF currentStep === 2 → return validateStep2()
├── IF currentStep === 3 → return validateStep3()
└── IF currentStep === 4 → return true (no validation)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 6: Create "nextStep" function
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
PURPOSE: Go to next step if current is valid

├── IF validateCurrentStep() is false → return (stop)
├── IF currentStep < totalSteps:
│   ├── Increment currentStep
│   └── Call showStep(currentStep)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 7: Create "prevStep" function
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
PURPOSE: Go to previous step

├── IF currentStep > 1:
│   ├── Decrement currentStep
│   └── Call showStep(currentStep)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 8: Create "populateSummary" function
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
PURPOSE: Fill in the summary on step 4

├── Set summaryName = firstName + " " + lastName
├── Set summaryDob = formatted date
├── Set summaryEmail = email value
├── Set summaryPhone = phone value
├── Set summaryAddress = address value
└── Set summaryUsername = username value

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 9: Create Helper Functions (Reuse from Form Validator!)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

showError(input, message):
├── Get parent .form-group
├── Add "error" class
└── Set error message text

showSuccess(input):
├── Get parent .form-group
├── Remove "error", add "success"
└── Clear error message

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 10: Event Listeners
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

nextBtn.click → nextStep()
prevBtn.click → prevStep()

form.submit:
├── preventDefault()
├── IF validateCurrentStep():
│   └── Show success modal

closeModal.click:
├── Hide modal
└── Reset form & go to step 1

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
STEP 11: Initialize
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Call showStep(1)

*/

showStep(1);
