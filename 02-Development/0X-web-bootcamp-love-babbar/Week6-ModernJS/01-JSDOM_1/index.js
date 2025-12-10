/**
 * ==========================================
 * JS DOM CLASS 1 - COMPLETE NOTES & CODE
 * CodeHelp - by Babbar
 * ==========================================
 */

// ==========================================
// 1. WHAT IS DOM?
// ==========================================
/*
DOM = Document Object Model
- Tree-like structure representation of HTML document
- Browser creates DOM when page loads
- JavaScript can access and modify DOM
- Makes web pages dynamic and interactive

DOM Tree Structure:
    window
      |
   document
      |
    html
    /  \
  head  body
   |      |
  ...   div, p, etc.
*/

// ==========================================
// 2. ACCESSING/SELECTING ELEMENTS
// ==========================================

// getElementById - Returns single element
const heading = document.getElementById('heading');
console.log(heading);

// getElementsByClassName - Returns HTMLCollection (array-like)
const items = document.getElementsByClassName('item');
console.log(items);
console.log(items[0]); // Access first element

// getElementsByTagName - Returns HTMLCollection
const paragraphs = document.getElementsByTagName('p');
console.log(paragraphs);

// querySelector - Returns FIRST matching element (CSS selector)
const firstItem = document.querySelector('.item');
const firstDiv = document.querySelector('div');
const idElement = document.querySelector('#heading');
console.log(firstItem);

// querySelectorAll - Returns NodeList of ALL matching elements
const allItems = document.querySelectorAll('.item');
console.log(allItems);
allItems.forEach(item => {
  console.log(item);
});

// ==========================================
// 3. MODIFYING CONTENT
// ==========================================

// innerHTML - Gets/sets HTML content (can include tags)
const box = document.querySelector('.box');
box.innerHTML = '<strong>Bold Text</strong>';
console.log(box.innerHTML);

// innerText - Gets/sets visible text only (no tags)
box.innerText = 'Plain Text';
console.log(box.innerText);

// textContent - Gets/sets all text including hidden (similar to innerText)
box.textContent = 'All Text Content';
console.log(box.textContent);

// Difference: innerHTML vs innerText vs textContent
/*
innerHTML: <strong>Bold</strong> → renders as bold
innerText: <strong>Bold</strong> → shows as text
textContent: includes hidden text too
*/

// ==========================================
// 4. MODIFYING ATTRIBUTES
// ==========================================

const link = document.querySelector('a');

// getAttribute - Get attribute value
const href = link.getAttribute('href');
console.log(href);

// setAttribute - Set attribute value
link.setAttribute('href', 'https://google.com');
link.setAttribute('target', '_blank');

// Direct property access
link.href = 'https://youtube.com';
link.className = 'link-class';
link.id = 'myLink';

// ==========================================
// 5. MODIFYING STYLES
// ==========================================

const box2 = document.querySelector('.box');

// style property - Modify inline CSS
box2.style.color = 'red';
box2.style.backgroundColor = 'yellow'; // camelCase for CSS properties
box2.style.fontSize = '20px';
box2.style.padding = '10px';
box2.style.border = '2px solid black';

// Multiple styles at once
Object.assign(box2.style, {
  color: 'white',
  backgroundColor: 'blue',
  fontSize: '24px',
  padding: '20px'
});

// ==========================================
// 6. CLASS MANIPULATION
// ==========================================

const element = document.querySelector('.myElement');

// className - Get/set entire class string
element.className = 'class1 class2 class3';
console.log(element.className);

// classList - Better way to manage classes
console.log(element.classList);

// add() - Add one or more classes
element.classList.add('active');
element.classList.add('highlight', 'selected');

// remove() - Remove one or more classes
element.classList.remove('active');

// toggle() - Add if not present, remove if present
element.classList.toggle('dark-mode');
element.classList.toggle('dark-mode'); // toggles back

// contains() - Check if class exists
if (element.classList.contains('active')) {
  console.log('Element has active class');
}

// replace() - Replace old class with new class
element.classList.replace('oldClass', 'newClass');

// ==========================================
// 7. CREATING ELEMENTS
// ==========================================

// createElement - Create new element
const newDiv = document.createElement('div');
const newPara = document.createElement('p');
const newButton = document.createElement('button');

// Set content and attributes
newDiv.innerHTML = '<strong>New Div</strong>';
newPara.textContent = 'This is a new paragraph';
newButton.innerText = 'Click Me';
newButton.setAttribute('class', 'btn');
newButton.style.padding = '10px';

// ==========================================
// 8. ADDING ELEMENTS TO DOM
// ==========================================

const container = document.querySelector('.container');

// appendChild - Add as last child
container.appendChild(newDiv);
container.appendChild(newPara);

// append - Can add multiple elements and text
container.append(newButton, 'Some text', newDiv);

// prepend - Add as first child
container.prepend(newDiv);

// insertBefore - Insert before a reference element
const referenceElement = document.querySelector('.reference');
container.insertBefore(newDiv, referenceElement);

// insertAdjacentHTML - Insert HTML at specific position
container.insertAdjacentHTML('beforebegin', '<p>Before container</p>');
container.insertAdjacentHTML('afterbegin', '<p>Start of container</p>');
container.insertAdjacentHTML('beforeend', '<p>End of container</p>');
container.insertAdjacentHTML('afterend', '<p>After container</p>');

// insertAdjacentElement - Insert element at specific position
const newElement = document.createElement('span');
newElement.textContent = 'Inserted';
container.insertAdjacentElement('afterbegin', newElement);

// ==========================================
// 9. REMOVING ELEMENTS
// ==========================================

const elementToRemove = document.querySelector('.remove-me');

// remove() - Remove element from DOM
elementToRemove.remove();

// removeChild() - Remove child from parent
const parent = document.querySelector('.parent');
const child = document.querySelector('.child');
parent.removeChild(child);

// ==========================================
// 10. TRAVERSING THE DOM
// ==========================================

const currentElement = document.querySelector('.current');

// Parent navigation
console.log(currentElement.parentElement);
console.log(currentElement.parentNode);

// Children navigation
console.log(currentElement.children); // HTMLCollection (elements only)
console.log(currentElement.childNodes); // NodeList (all nodes including text)
console.log(currentElement.firstElementChild);
console.log(currentElement.lastElementChild);

// Sibling navigation
console.log(currentElement.nextElementSibling);
console.log(currentElement.previousElementSibling);

// ==========================================
// 11. EVENT HANDLING (Basics)
// ==========================================

const btn = document.querySelector('.btn');

// Method 1: onclick property
btn.onclick = function() {
  console.log('Button clicked!');
};

// Method 2: addEventListener (RECOMMENDED)
btn.addEventListener('click', function() {
  console.log('Button clicked with addEventListener');
});

// Arrow function
btn.addEventListener('click', () => {
  console.log('Arrow function click');
});

// Named function
function handleClick() {
  console.log('Named function click');
}
btn.addEventListener('click', handleClick);

// Common events
const input = document.querySelector('input');
input.addEventListener('focus', () => console.log('Input focused'));
input.addEventListener('blur', () => console.log('Input blurred'));
input.addEventListener('input', (e) => console.log(e.target.value));
input.addEventListener('change', (e) => console.log('Changed:', e.target.value));

// ==========================================
// 12. PRACTICAL EXAMPLES
// ==========================================

// Example 1: Toggle Dark Mode
const toggleBtn = document.querySelector('.toggle-btn');
toggleBtn.addEventListener('click', () => {
  document.body.classList.toggle('dark-mode');
});

// Example 2: Create and Add Items to List
const addButton = document.querySelector('.add-btn');
const itemInput = document.querySelector('.item-input');
const list = document.querySelector('.list');

addButton.addEventListener('click', () => {
  const newItem = document.createElement('li');
  newItem.textContent = itemInput.value;
  newItem.classList.add('list-item');
  list.appendChild(newItem);
  itemInput.value = ''; // Clear input
});

// Example 3: Change Color on Click
const colorBox = document.querySelector('.color-box');
const colors = ['red', 'blue', 'green', 'yellow', 'purple'];
let colorIndex = 0;

colorBox.addEventListener('click', () => {
  colorBox.style.backgroundColor = colors[colorIndex];
  colorIndex = (colorIndex + 1) % colors.length;
});

// Example 4: Counter
const counterDisplay = document.querySelector('.counter');
const incrementBtn = document.querySelector('.increment');
const decrementBtn = document.querySelector('.decrement');
let count = 0;

incrementBtn.addEventListener('click', () => {
  count++;
  counterDisplay.textContent = count;
});

decrementBtn.addEventListener('click', () => {
  count--;
  counterDisplay.textContent = count;
});

// ==========================================
// 13. IMPORTANT NOTES & TIPS
// ==========================================

/*
KEY DIFFERENCES:

1. innerHTML vs innerText vs textContent
   - innerHTML: parses HTML tags
   - innerText: only visible text
   - textContent: all text including hidden

2. querySelector vs querySelectorAll
   - querySelector: returns FIRST match
   - querySelectorAll: returns ALL matches

3. children vs childNodes
   - children: only element nodes
   - childNodes: all nodes (including text, comments)

4. appendChild vs append
   - appendChild: only one element
   - append: multiple elements and text

5. className vs classList
   - className: string of all classes
   - classList: methods to manipulate classes

BEST PRACTICES:
- Use querySelector/querySelectorAll for flexibility
- Use classList instead of className
- Use addEventListener instead of onclick
- Cache DOM selections for better performance
- Use const for elements that won't change

COMMON MISTAKES:
- Forgetting that getElementsByClassName returns HTMLCollection (not array)
- Using innerHTML when innerText would suffice (security risk)
- Not checking if element exists before manipulating
- Selecting elements before DOM is loaded
*/

// ==========================================
// 14. TESTING CODE IN CONSOLE
// ==========================================

/*
Console Testing Commands:
- document.body // Access body element
- document.title // Get page title
- document.URL // Get current URL
- window.location.href // Current page URL
- console.dir(element) // Show element properties
- $0 // Last selected element in DevTools
- $$('selector') // Same as querySelectorAll
*/

// ==========================================
// 15. ANIMATION ATTRIBUTES (data-aos example from video)
// ==========================================

/*
data-aos attributes (from your screenshot):
- data-aos-easing: Animation easing function
- data-aos-duration: Duration in milliseconds (e.g., "1200")
- data-aos-delay: Delay before animation starts (e.g., "0")
- style="overflow: unset;": Prevents content clipping

Example:
<body data-aos-easing="ease" data-aos-duration="1200" data-aos-delay="0">
*/

const animatedElement = document.querySelector('[data-aos]');
console.log(animatedElement.dataset.aos);
console.log(animatedElement.dataset.aosEasing);
console.log(animatedElement.dataset.aosDuration);

// ==========================================
// END OF NOTES
// ==========================================

console.log('DOM Class 1 Notes Complete! 🚀');
