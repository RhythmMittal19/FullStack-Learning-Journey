# HTML Theory Notes

## 1. Introduction to HTML

### What is HTML?

**HTML (Hypertext Markup Language)** is a markup language for creating web pages. It provides the content and structure through elements like:

- Paragraphs
- Headings
- Links
- Images
- Videos

### HTML + CSS + JavaScript: The Web Trinity

**Is HTML enough?**

- For small practice projects → Yes
- For modern professional websites → You need all three

**The Building Analogy:**

- **HTML** = Foundation (structure & content)
- **CSS** = Interior/Exterior design (makes it beautiful)
- **JavaScript** = Electrical & plumbing (makes it functional & interactive)

---

## 2. HTML Elements Basics

### Element Structure

Most HTML elements have three parts:

```html
<tagname>Content goes here</tagname>
```

1. **Opening tag** - `<tagname>`
2. **Content** - Text or nested elements
3. **Closing tag** - `</tagname>`

**Tag Syntax:**

- Start with `<`, end with `>`
- Tag names are case-insensitive but **lowercase is convention**
- Closing tags include a forward slash `/`

**Example:**

```html
<h1>Main heading</h1>
<p>I am a paragraph element.</p>
```

---

### Void Elements

Some elements don't have closing tags or content. These are **void elements**.

```html
<img />
<!-- or -->
<img />
```

Both formats are valid. The trailing `/` has no effect per HTML spec, but formatters like Prettier may add it. You'll see both in real projects.

---

## 3. HTML Attributes

### What Are Attributes?

Attributes provide additional information or modify element behavior. They go in the **opening tag**.

**Syntax:**

```html
<element attribute="value">Content</element>
```

- Attribute name + `=` + value in quotes

---

### Common Attributes

#### Link Attributes

**`href`** - Specifies the destination URL (required)
**`target`** - Where to open the link

- `target="_blank"` opens in new tab

```html
<a href="https://www.freecodecamp.org" target="_blank"> Visit freeCodeCamp </a>
```

---

#### Image Attributes

**`src`** - Image source/location (required)
**`alt`** - Alternative text for accessibility (highly recommended)

```html
<img src="https://example.com/cats.jpg" alt="Two cats running in the dirt" />
```

> **Accessibility** means making websites usable for everyone, including people with disabilities.

---

### Boolean Attributes

Boolean attributes don't need values. Present = true, absent = false.

**Common Boolean Attributes:**

- `checked` - Checkbox is checked by default
- `disabled` - Element cannot be interacted with
- `readonly` - Element is read-only
- `required` - Field must be filled before submission

```html
<!-- Checked by default -->
<input type="checkbox" checked />

<!-- Disabled text input -->
<input type="text" disabled />
```

---

### Input Elements

The `type` attribute specifies the input kind:

```html
<input type="checkbox" /> <input type="text" />
```

---

## 4. The HTML Boilerplate

### What Is It?

A boilerplate is a ready-made template—the foundation every HTML document needs. It saves time, ensures proper structure, and follows best practices.

**Complete Boilerplate:**

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Page Title</title>
    <link rel="stylesheet" href="./styles.css" />
  </head>
  <body>
    <!-- Your content goes here -->
  </body>
</html>
```

---

### Breaking It Down

#### DOCTYPE Declaration

```html
<!DOCTYPE html>
```

Tells browsers you're using HTML5. Always goes at the very top.

---

#### HTML Root Element

```html
<html lang="en">
  <!-- Everything goes inside -->
</html>
```

- Wraps all content
- `lang="en"` specifies page language (English)

---

#### The Head Section

Contains **behind-the-scenes information** that doesn't appear on the page.

```html
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Document Title</title>
  <link rel="stylesheet" href="./styles.css" />
</head>
```

**What goes in `<head>`:**

- Meta tags (charset, viewport)
- Page title (shows in browser tab)
- Links to stylesheets
- Scripts

---

##### Character Encoding (UTF-8)

```html
<meta charset="UTF-8" />
```

**UTF-8 (UCS Transformation Format 8):**

- Standard character encoding for the web
- Supports all Unicode characters
- Handles special characters like é, ñ, ü
- Works with all languages and symbols

**Why it matters:** Without UTF-8, special characters like "é" in "Café" may not display correctly.

```html
<body>
  <p>Café</p>
  <!-- Displays correctly with UTF-8 -->
</body>
```

> **Always include** `<meta charset="UTF-8" />` in every project.

---

##### Linking to External Stylesheets

```html
<link rel="stylesheet" href="./styles.css" />
```

**Attributes:**

- `rel="stylesheet"` - Defines the relationship (it's a stylesheet)
- `href` - Path to the CSS file
- `./` means "current folder"

**Other Uses for `<link>`:**

**Google Fonts:**

```html
<link rel="preconnect" href="https://fonts.googleapis.com" />
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin />
<link
  href="https://fonts.googleapis.com/css2?family=Playwrite+CU:wght@100..400&display=swap"
  rel="stylesheet"
/>
```

- `rel="preconnect"` creates early connection to speed up loading
- Google Fonts are free, open-source custom fonts

**Favicons:**

```html
<link rel="icon" href="favicon.ico" />
```

- **Favicon** = Favorite Icon
- Small icon in browser tab next to page title
- Used for brand identity

> **Best Practice:** Keep HTML and CSS in separate files. Use `<link>` to connect them.

---

#### The Body Section

All **visible content** goes here.

```html
<body>
  <h1>Main Title</h1>
  <p>Example paragraph</p>
</body>
```

Everything users see—headings, paragraphs, images, links, etc.

---

## 5. Organizing Content

### Container Elements

#### The Div Element

A **generic container** for grouping elements.

```html
<div>
  <p>Paragraph one</p>
  <p>Paragraph two</p>
</div>
```

**When to use:**

- Grouping elements for CSS styling
- As a fallback when no semantic element fits

**Warning:** Don't overuse! Semantic elements are often better.

---

#### The Section Element

Used to divide content into **thematic sections**.

```html
<section>
  <h2>Mammals</h2>
  <p>Mammals are warm-blooded animals with fur or hair.</p>
  <ul>
    <li>Lion</li>
    <li>Elephant</li>
    <li>Dolphin</li>
  </ul>
</section>
```

---

### Semantic vs Non-Semantic

**Semantics** = Meaning in language

| Element     | Type         | Browser Understanding        |
| ----------- | ------------ | ---------------------------- |
| `<section>` | Semantic     | "This is a thematic section" |
| `<div>`     | Non-semantic | "Just a generic container"   |

**Why semantics matter:**

- Better accessibility (screen readers)
- Improved SEO
- Clearer code structure
- Consistent across all devices

> **Best Practice:** Use semantic elements when they fit. Reserve `<div>` for when nothing else works.

---

## 6. IDs and Classes

### The ID Attribute

Adds a **unique identifier** to an element.

```html
<h1 id="title">Movie Review Page</h1>
<h2 id="subtitle">A great film</h2>
```

**ID Rules:**

- Must be **unique** (one per page)
- No spaces allowed
- Only use: letters, digits, underscores `_`, dashes `-`

**Wrong:**

```html
<h1 id="main heading">Wrong!</h1>
<!-- Space breaks it -->
```

**Correct:**

```html
<h1 id="main-heading">Correct!</h1>
<h1 id="main_heading">Also correct!</h1>
```

**Using in CSS:**

```css
#title {
  color: red;
}
```

Use `#` to target IDs in CSS.

---

### The Class Attribute

Groups elements that share the same styles.

```html
<div class="box"></div>
<div class="box red-box"></div>
<div class="box blue-box"></div>
```

**Key differences from ID:**

- **Reusable** - use on multiple elements
- Can have **multiple classes** (space-separated)

**Using in CSS:**

```css
.box {
  width: 100px;
  height: 100px;
}

.red-box {
  background-color: red;
}
```

Use `.` to target classes in CSS.

---

### ID vs Class: When to Use What

| Attribute | Use For              | Reusable?   | CSS Selector  |
| --------- | -------------------- | ----------- | ------------- |
| `id`      | One specific element | No (unique) | `#id-name`    |
| `class`   | Multiple elements    | Yes         | `.class-name` |

**Simple rule:**

- One specific element → `id`
- Multiple elements with shared styles → `class`

---

## 7. HTML Entities

### The Problem

Want to display `<img />` as text? This won't work:

```html
<p>This is an <img /> element</p>
```

The browser sees `<img />` and tries to render an actual image!

**Solution:** HTML entities let you display reserved characters as text.

---

### Three Types of Entities

#### 1. Named Character References

**Format:** `&name;`

```html
<p>This is an &lt;img /&gt; element</p>
<!-- Displays: This is an <img /> element -->
```

**Common Named Entities:**

| Character | Entity   | Description  |
| --------- | -------- | ------------ |
| `<`       | `&lt;`   | Less than    |
| `>`       | `&gt;`   | Greater than |
| `&`       | `&amp;`  | Ampersand    |
| `"`       | `&quot;` | Quote        |
| `'`       | `&apos;` | Apostrophe   |

---

#### 2. Decimal Numeric References

**Format:** `&#number;`

```html
<p>&#60;img /&#62;</p>
<!-- Displays: <img /> -->

<p>Copyright &#169; 2024</p>
<!-- Displays: Copyright © 2024 -->
```

**Common Decimal Codes:**

- `&#60;` = `<`
- `&#169;` = `©` (copyright)
- `&#174;` = `®` (trademark)

---

#### 3. Hexadecimal Numeric References

**Format:** `&#xhex;`

```html
<p>Price: &#x20AC;50</p>
<!-- Displays: Price: €50 -->

<p>Greek letter: &#x03A9;</p>
<!-- Displays: Greek letter: Ω -->
```

**Common Hex Codes:**

- `&#x3C;` = `<`
- `&#x20AC;` = `€` (Euro)
- `&#x03A9;` = `Ω` (Omega)

---

### Quick Reference

Same character, three ways:

| Named   | Decimal | Hexadecimal | Result |
| ------- | ------- | ----------- | ------ |
| `&lt;`  | `&#60;` | `&#x3C;`    | `<`    |
| `&gt;`  | `&#62;` | `&#x3E;`    | `>`    |
| `&amp;` | `&#38;` | `&#x26;`    | `&`    |

> **Tip:** Named entities are easiest to read and remember!

---

## 8. The Script Element

### Adding JavaScript

The `<script>` element embeds JavaScript for interactivity.

**Inline JavaScript:**

```html
<body>
  <script>
    alert("Welcome to freeCodeCamp");
  </script>
</body>
```

---

### External JavaScript Files (Recommended)

```html
<script src="path-to-javascript-file.js"></script>
```

- `src` attribute specifies file location

---

### Why External Files?

**Separation of Concerns** - Each file handles one responsibility:

- `index.html` → Structure
- `styles.css` → Styling
- `script.js` → Interactivity

**Benefits:**

- Cleaner, organized code
- Easier maintenance
- Better team collaboration
- Code reusability

> **Best Practice:** Always use external JavaScript files instead of inline code.

---

## What's Next?

As you build projects, you'll develop your own custom boilerplate with your preferred meta tags and setup. This saves time and ensures consistency across projects!
