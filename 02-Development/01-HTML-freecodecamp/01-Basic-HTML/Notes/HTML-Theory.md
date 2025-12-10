# HTML Theory Notes

## 1. Introduction to HTML

### What is HTML?

**HTML (Hypertext Markup Language)** is the foundation of web pages. It provides structure and content through elements like paragraphs, headings, links, images, and videos.

### The Web Development Trinity

**Is HTML enough to build websites?**
- Small practice projects → Yes
- Modern professional websites → No, you need all three

**Think of it like building a house:**
- **HTML** = Foundation & walls (structure & content)
- **CSS** = Paint & furniture (styling & design)
- **JavaScript** = Plumbing & electricity (interactivity & functionality)

---

## 2. HTML Elements & Syntax

### Basic Element Structure

Most HTML elements have three parts:

```html
<tagname>Content goes here</tagname>
```

1. **Opening tag** - `<tagname>`
2. **Content** - Text or nested elements
3. **Closing tag** - `</tagname>`

**Syntax Rules:**
- Tags use angle brackets `< >`
- Tag names are case-insensitive but **lowercase is convention**
- Closing tags include a forward slash `/`

**Examples:**
```html
<h1>Main heading</h1>
<p>This is a paragraph.</p>
```

---

### Void Elements

Some elements don't have closing tags or content:

```html
<img>
<meta>
<br>
<hr>
```

**Both formats are valid:**
```html
<img>
<img />
```

The trailing `/` has no effect but formatters like Prettier may add it.

---

### HTML Comments

Leave notes in your code that won't display on the page:

```html
<!--This is a comment-->

<!--
  Multi-line comment:
  Useful for documentation or
  temporarily disabling code
-->
```

---

### Heading Hierarchy

Six heading levels indicate content importance:

```html
<h1>Most important (page title)</h1>
<h2>Major sections</h2>
<h3>Subsections</h3>
<h4>Sub-subsections</h4>
<h5>Minor headings</h5>
<h6>Least important</h6>
```

**Best Practices:**
- One `<h1>` per page
- Don't skip levels (no `<h2>` to `<h5>`)
- Creates logical document outline
- Crucial for SEO and accessibility

---

## 3. HTML Attributes

### What Are Attributes?

Attributes modify element behavior and go in the **opening tag**:

```html
<element attribute="value">Content</element>
```

**Syntax:** attribute name + `=` + value in quotes

---

### Common Attributes

#### Images

```html
<img
  src="image.jpg"
  alt="Descriptive text"
>
```

- **`src`** - Image location (required)
- **`alt`** - Alternative text for accessibility (highly recommended)

---

#### Links

```html
<a
  href="https://example.com"
  target="_blank"
>
  Link text
</a>
```

- **`href`** - Destination URL (required)
- **`target`** - Where to open the link

---

### Boolean Attributes

Present = true, absent = false. No value needed!

```html
<input type="checkbox" checked>
<input type="text" disabled>
<input type="email" required>
<audio controls loop muted></audio>
```

**Common Boolean Attributes:**
- `checked` - Checkbox pre-selected
- `disabled` - Element cannot be interacted with
- `required` - Must be filled before submission
- `readonly` - Can view but not edit
- `controls` - Show media controls
- `loop` - Repeat continuously
- `muted` - Start with no sound

---

## 4. The HTML Boilerplate

### Complete Template

Every HTML document needs this foundation:

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Page Title</title>
    <link rel="stylesheet" href="./styles.css">
  </head>
  <body>
    <!-- Your content here -->
  </body>
</html>
```

---

### Breaking It Down

#### DOCTYPE Declaration

```html
<!DOCTYPE html>
```

Tells browsers you're using HTML5. Always first line!

---

#### HTML Element

```html
<html lang="en">
  <!-- Everything goes inside -->
</html>
```

- Root element wrapping all content
- `lang="en"` specifies language (English)

---

#### Head Section

Contains **metadata** - information about the page that doesn't display:

```html
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Your Page Title</title>
  <link rel="stylesheet" href="./styles.css">
</head>
```

**What goes in `<head>`:**

| Element | Purpose |
|---------|---------|
| `<meta charset>` | Character encoding |
| `<meta name="viewport">` | Mobile responsiveness |
| `<title>` | Browser tab text |
| `<link>` | External stylesheets |
| `<meta name="description">` | SEO description |
| Open Graph tags | Social media previews |

---

##### Character Encoding (UTF-8)

```html
<meta charset="UTF-8">
```

**Why it matters:**
- Supports all Unicode characters
- Handles special characters (é, ñ, ü, 中文, العربية)
- Works with all languages and symbols

Without it, "Café" might display as "Caf�"

> **Always include** in every project!

---

##### Meta Description (SEO)

```html
<meta
  name="description"
  content="Learn HTML from basics to advanced. Complete guide with examples."
>
```

**Purpose:**
- Appears in search engine results
- Helps users understand your page
- Increases click-through rates

**Best Practice:** Keep it short (150-160 characters)

---

##### Open Graph Tags (Social Media)

Control how your page looks when shared on social media:

```html
<meta property="og:title" content="My Awesome Site">
<meta property="og:type" content="website">
<meta property="og:image" content="https://example.com/preview.jpg">
<meta property="og:url" content="https://example.com">
```

**The Four Essential Properties:**

1. **`og:title`** - Title shown in social posts
2. **`og:type`** - Content type (website, article, video, music)
3. **`og:image`** - Preview image (min 600x315px, recommended 1200x630px)
4. **`og:url`** - Canonical URL

**Result:** Better-looking social media shares = more clicks = more traffic!

---

##### Linking External Stylesheets

```html
<link rel="stylesheet" href="./styles.css">
```

- **`rel="stylesheet"`** - Defines relationship
- **`href`** - Path to CSS file
- **`./`** - Current folder

**Other Uses:**

**Fonts:**
```html
<link rel="preconnect" href="https://fonts.googleapis.com">
<link href="https://fonts.googleapis.com/css2?family=Roboto&display=swap" rel="stylesheet">
```

**Favicon:**
```html
<link rel="icon" href="favicon.ico">
```

> **Best Practice:** Keep HTML and CSS in separate files!

---

#### Body Section

All **visible content** goes here:

```html
<body>
  <h1>Welcome!</h1>
  <p>This is what users see.</p>
  <img src="photo.jpg" alt="A photo">
</body>
```

---

## 5. Organizing Content

### Semantic vs Generic Elements

**Semantic elements** have meaning - browsers understand their purpose:
- Better accessibility
- Improved SEO
- Clearer code structure

---

### Container Elements

#### Section Element (Semantic)

Divides content into thematic sections:

```html
<section>
  <h2>About Me</h2>
  <p>I'm a web developer...</p>
</section>
```

Use for distinct thematic groupings.

---

#### Div Element (Generic)

Generic container with no semantic meaning:

```html
<div>
  <h1>Heading</h1>
  <p>Paragraph</p>
</div>
```

**When to use:**
- Grouping for CSS styling
- When no semantic element fits

⚠️ **Don't overuse!** Always prefer semantic elements when available.

---

### Structural Elements

#### Main Element

The primary content of the page:

```html
<main>
  <h1>Welcome</h1>
  <article>Main article content...</article>
</main>
```

**Rule:** Only one `<main>` per page.

---

#### Footer Element

Bottom section with metadata:

```html
<footer>
  <p>&copy; 2024 My Website</p>
  <a href="/privacy">Privacy Policy</a>
</footer>
```

**Common contents:**
- Copyright info
- Contact links
- Social media
- Site navigation

---

### Content Grouping

#### Figure & Figcaption

Group media with captions:

```html
<figure>
  <img src="chart.png" alt="Sales chart">
  <figcaption>Q4 2024 Sales Performance</figcaption>
</figure>
```

Perfect for images, diagrams, code snippets, or quotes.

---

### Lists

#### Unordered Lists

```html
<ul>
  <li>Item one</li>
  <li>Item two</li>
  <li>Item three</li>
</ul>
```

Creates bullet points.

---

#### Ordered Lists

```html
<ol>
  <li>First step</li>
  <li>Second step</li>
  <li>Third step</li>
</ol>
```

Creates numbered lists.

---

### Text Formatting

#### Emphasis (`<em>`)

```html
<p>Cats <em>love</em> lasagna.</p>
```

Semantic emphasis (usually italic). For stress in speech.

---

#### Strong Importance (`<strong>`)

```html
<p><strong>Warning:</strong> High voltage!</p>
```

Strong emphasis (usually bold). Indicates urgency or importance.

---

## 6. Links & Navigation

### Anchor Elements

```html
<a href="https://example.com">Click here</a>
```

---

### Target Attribute

Controls where links open:

```html
<a href="https://external.com" target="_blank">New Tab</a>
```

| Value | Opens In | Use For |
|-------|----------|---------|
| `_self` | Same tab (default) | Normal navigation |
| `_blank` | New tab | External links |
| `_parent` | Parent frame | Breaking out of iframes |
| `_top` | Top window | Breaking out of nested iframes |

**Security tip for `_blank`:**
```html
<a href="https://external.com" target="_blank" rel="noopener noreferrer">
  Safe External Link
</a>
```

---

### Link States (Pseudo-classes)

Links change appearance based on user interaction:

```css
a:link    { color: blue; }    /* Unvisited */
a:visited { color: purple; }  /* Visited */
a:hover   { color: red; }     /* Cursor over */
a:focus   { color: green; }   /* Keyboard focus */
a:active  { color: black; }   /* Being clicked */
```

**CSS Order Matters!** Use: **L**ink, **V**isited, **H**over, **F**ocus, **A**ctive

**Memory trick:** "LoVe Fears HAte"

⚠️ **Never remove focus styles** without providing alternatives - keyboard users need them!

---

## 7. File Paths

### Absolute Paths

**Complete URL** from root:

```html
<!-- Web resource -->
<img src="https://example.com/images/logo.png" alt="Logo">

<!-- Local file -->
<a href="/Users/user/Desktop/project/page.html">Link</a>
```

**Components:**
- Protocol (`https://`, `file://`)
- Domain (if web)
- Full directory path
- Filename

**Use when:**
- Linking to external websites
- Needs to work regardless of location
- CDN resources

---

### Relative Paths

**Location relative to current file:**

```html
<a href="about.html">About</a>
```

**No protocol, no domain** - shorter and portable!

**Use when:**
- Internal site resources
- Want maintainable code
- Local testing
- Site will move domains

---

### Path Syntax

**Forward Slash `/` - Path Separator**
```
folder/subfolder/file.html
```
Always use `/` in web development (even on Windows!)

**Single Dot `./` - Current Directory**
```html
<img src="./image.png" alt="Image">
```
Explicit current folder (usually optional).

**Double Dot `../` - Parent Directory**
```html
<link rel="stylesheet" href="../styles.css">
```
Go up one level.

---

### Navigation Examples

```
my-app/
├─ public/
│  ├─ index.html
│  ├─ favicon.ico
├─ src/
│  ├─ styles.css
│  ├─ script.js
```

**From `public/index.html`:**

```html
<!-- Same folder -->
<link rel="icon" href="./favicon.ico">

<!-- Up to my-app/, then into src/ -->
<link rel="stylesheet" href="../src/styles.css">
<script src="../src/script.js"></script>
```

**Common Patterns:**
- Same folder: `file.html` or `./file.html`
- Subfolder: `folder/file.html`
- Parent: `../file.html`
- Two levels up: `../../file.html`
- Up then down: `../other-folder/file.html`

---

## 8. IDs and Classes

### ID Attribute

**Unique identifier** for one element:

```html
<h1 id="main-title">Welcome</h1>
```

**Rules:**
- Must be unique (once per page)
- No spaces (use dashes or underscores)
- Letters, digits, `_`, `-` only

**CSS Targeting:**
```css
#main-title {
  color: blue;
}
```

Use `#` to target IDs.

---

### Class Attribute

**Groups multiple elements:**

```html
<div class="card">Card 1</div>
<div class="card featured">Card 2</div>
<div class="card">Card 3</div>
```

**Features:**
- Reusable across elements
- Multiple classes (space-separated)

**CSS Targeting:**
```css
.card {
  padding: 20px;
}

.featured {
  background: gold;
}
```

Use `.` to target classes.

---

### When to Use What

| Use | ID | Class |
|-----|----|----|
| **One element** | ✅ | ❌ |
| **Multiple elements** | ❌ | ✅ |
| **JavaScript targeting** | ✅ | ✅ |
| **CSS styling** | ✅ | ✅ |

**Simple rule:** One specific element → ID, Multiple elements → Class

---

## 9. Special Characters

### HTML Entities

Display reserved characters as text:

```html
<p>This is an &lt;img&gt; element</p>
<!-- Displays: This is an <img> element -->
```

**Why needed?** Browser interprets `<img>` as actual HTML!

---

### Three Types

**1. Named Entities** (easiest to remember)
```html
&lt;   <!-- < -->
&gt;   <!-- > -->
&amp;  <!-- & -->
&quot; <!-- " -->
&copy; <!-- © -->
```

**2. Decimal Codes**
```html
&#60;  <!-- < -->
&#169; <!-- © -->
```

**3. Hexadecimal Codes**
```html
&#x3C;   <!-- < -->
&#x20AC; <!-- € -->
&#x03A9; <!-- Ω -->
```

---

### Common Entities

| Character | Named | Decimal | Hex | Result |
|-----------|-------|---------|-----|--------|
| Less than | `&lt;` | `&#60;` | `&#x3C;` | < |
| Greater than | `&gt;` | `&#62;` | `&#x3E;` | > |
| Ampersand | `&amp;` | `&#38;` | `&#x26;` | & |
| Copyright | `&copy;` | `&#169;` | `&#xA9;` | © |
| Euro | `&euro;` | `&#8364;` | `&#x20AC;` | € |

---

## 10. Media Elements

### Images

```html
<img
  src="photo.jpg"
  alt="Description of photo"
>
```

Always include `alt` for accessibility!

---

### Audio

```html
<audio src="song.mp3" controls></audio>
```

**Supported formats:** MP3, WAV, OGG

**Attributes:**
- `controls` - Show player controls
- `loop` - Replay continuously
- `muted` - Start muted
- `autoplay` - Auto-play (often blocked by browsers)

---

### Video

```html
<video src="video.mp4" controls width="640"></video>
```

**Supported formats:** MP4, WebM, OGG

**Attributes:**
- All audio attributes plus:
- `poster` - Thumbnail image while loading
- `width`/`height` - Dimensions

---

### Multiple Sources (Browser Compatibility)

```html
<audio controls>
  <source src="audio.ogg" type="audio/ogg">
  <source src="audio.mp3" type="audio/mpeg">
</audio>

<video controls>
  <source src="video.webm" type="video/webm">
  <source src="video.mp4" type="video/mp4">
</video>
```

Browser plays first supported format.

---

### Optimizing Media

**Three key factors:**

**1. Size**
- Match display dimensions
- 640x480 display → serve 640x480 image
- Don't serve 1920x1080 when displaying smaller!

**2. Format**
- **Old:** PNG, JPG
- **Modern (better):** WebP, AVIF
- Use modern formats unless supporting old browsers

**3. Compression**
- **Lossless:** No quality loss (PNG)
- **Lossy:** Reduced quality (JPG)
- Tools: TinyPNG, Squoosh, ImageOptim

⚠️ **Warning:** Compressing JPG multiple times degrades quality!

---

### Image Licenses

**Default:** All rights reserved - need permission!

**Ways to legally use images:**
1. Get written permission
2. Purchase a license
3. Fair use (limited/transformative)

**Permissive Licenses:**
- Creative Commons (CC BY, CC BY-SA)
- BSD, MIT
- Read terms! May require attribution

**Public Domain:**
- No copyright
- Free to use
- Creative Commons 0 (CC0)

**Find legal images:**
- Unsplash, Pixabay, Pexels (free)
- Google Images (filter by usage rights)

> **Always check licenses!** Copyright violations = legal trouble.

---

### SVG (Scalable Vector Graphics)

**Vector vs Raster:**
- **Raster** (PNG/JPG) - Pixels → pixelates when scaled
- **Vector** (SVG) - Math equations → scales perfectly

**Benefits:**
- Infinite scalability
- Small file size
- Editable with code
- Perfect for icons and logos

```html
<svg width="100" height="100" viewBox="0 0 100 100">
  <circle cx="50" cy="50" r="40" fill="blue" />
</svg>
```

**Perfect for:**
- Icons and logos
- Simple illustrations
- Responsive designs

**Not for:**
- Photos
- Complex images

---

### IFrames (Embedded Content)

Embed external content in your page:

```html
<iframe
  src="https://www.youtube.com/embed/VIDEO_ID"
  width="560"
  height="315"
  title="Video description"
  allowfullscreen
></iframe>
```

**Common uses:**
- YouTube videos
- Maps
- External websites

**Important attributes:**
- `src` - URL to embed
- `title` - For accessibility
- `allowfullscreen` - Enable fullscreen
- `allow` - Permission policy

**Security:** Only embed trusted sources!

---

### Replaced Elements

Elements whose content comes from external sources:

```html
<img src="external-image.jpg" alt="Image">
<iframe src="https://example.com"></iframe>
<video src="video.mp4"></video>
```

**What this means:**
- CSS controls position/size
- CSS **cannot** modify the actual content
- Can't style what's inside the external resource

---

## 11. JavaScript Integration

### Script Element

```html
<script src="app.js"></script>
```

**Inline (not recommended):**
```html
<script>
  alert("Hello!");
</script>
```

**External file (best practice):**
```html
<script src="./js/app.js"></script>
```

**Why external?**
- **Separation of concerns**
- Cleaner code
- Reusable across pages
- Easier maintenance

---

## Quick Reference

### Essential Elements Checklist

✅ DOCTYPE declaration
✅ HTML element with lang
✅ Head with meta tags
✅ UTF-8 charset
✅ Viewport meta tag
✅ Title element
✅ Link to stylesheet
✅ Body with content
✅ Semantic HTML where possible
✅ Alt text on images
✅ Proper heading hierarchy

---

### Common Mistakes to Avoid

❌ Missing DOCTYPE
❌ No UTF-8 charset
❌ Skipping alt attributes
❌ Overusing divs (use semantic elements!)
❌ Multiple H1 tags
❌ Skipping heading levels
❌ Not closing tags
❌ Inline styles (use external CSS)
❌ Removing focus styles
❌ Using absolute paths for internal links

---
