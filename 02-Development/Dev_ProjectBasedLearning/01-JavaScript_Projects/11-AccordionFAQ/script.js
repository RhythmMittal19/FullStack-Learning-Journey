/*

NEW CONCEPTS:
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

// Find closest ancestor matching selector
element.closest('.accordion-item')

// Toggle class
element.classList.toggle('open')

// Rotate icon (toggle class)
icon.classList.toggle('rotate-180')

// Get all matching elements
document.querySelectorAll('.accordion-content')

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

*/

/*

STEP 1: Grab DOM elements
├── #accordion (container)
├── All .accordion-item elements
└── #openCount (counter display)

*/

let accordion = document.getElementById("accordion");
let accordionItems = document.querySelectorAll(".accordion-item");
let count = document.getElementById("openCount");

/*

STEP 2: Add click listener to #accordion
│
└── Inside callback:
    │
    ├── Find clicked button using:
    │   └── event.target.closest('.accordion-btn')
    │
    ├── If not a button → return
    │
    └── If button clicked:
        │
        ├── Find parent: .accordion-item
        │
        ├── Find content: .accordion-content inside item
        │
        ├── Find icon: .accordion-icon inside button
        │
        ├── Toggle 'open' class on content
        │
        ├── Toggle 'rotate-180' class on icon
        │
        └── Update open count

*/

accordion.addEventListener("click", (event) => {
  let btn = event.target.closest(".accordion-btn");

  if (!btn) return;

  let parent = btn.closest('.accordion-item');
  let content = parent.querySelector(".accordion-content");
  let icon = btn.querySelector(".accordion-icon");

  content.classList.toggle("open");
  icon.classList.toggle("rotate-180");

  count.textContent = document.querySelectorAll('.accordion-content.open').length
});
