# HTML Fundamentals (HyperText Markup Language)

## 1. What is HTML?

- **Definition:** HTML (HyperText Markup Language) is a markup language used to create the content and structure of web pages.
- **Role:** It defines elements like paragraphs, headings, links, images, and videos.

## 2. Syntax & Structure

HTML represents content through **Elements**. Most elements consist of an opening tag, content, and a closing tag.

**Syntax:**

- `<p>`I am a paragraph element.`</p>`
- Opening Tag: `<p>` (Starts with `<` and ends with `>`)
- Content: The text or other elements inside.
- Closing Tag: `</p>` (Distinguished by the forward slash `/`).
  > <em>Best Practice: While HTML tags are case-insensitive (e.g. `<p>`), it is widely accepted to write them in lowercase.</em>

## 3. Void Elements

Some elements do not have content and do not require a closing tag. These are called Void Elements.

Example (Image):

```HTML
<!-- Standard HTML5 -->
<img>

<!-- Self-closing syntax (Common in React/Prettier) -->
<img />
```

- Note: The trailing slash / in void elements is optional in standard HTML but often used by code formatters. It does not affect the element's behavior.

## 4. Attributes

Attributes are special values added to the opening tag to adjust behavior or provide data.

**Common Image Attributes:**

1. src (Source): Specifies the location/URL of the image.
2. alt (Alternative Text): Provides a text description of the image (used for accessibility or if the image fails to load).

Example:

```HTML
<img
  src="https://cdn.freecodecamp.org/curriculum/cat-photo-app/cats.jpg"
  alt="Two tabby kittens sleeping together."
/>
```

## 5. The Web Tech Stack (Analogy)

**_Building a modern website requires three layers. Think of it like building a house:_**

| Technology     | Role              | House Analogy                                           |
| :------------- | :---------------- | :------------------------------------------------------ |
| **HTML**       | **Structure**     | The foundation, walls, bricks, and concrete.            |
| **CSS**        | **Style**         | The paint, interior design, and landscaping.            |
| **JavaScript** | **Interactivity** | The electricity, water system, and smart home features. |

## 6. Common Attributes & Links

Attributes define how elements behave.

### The Anchor Tag (`<a>`)

Used to create hyperlinks.

- **`href` (Hypertext Reference) :** The destination URL. **Required** for the link to work.
- **`target` :** Specifies where to open the link.
  - Value `_blank`: Opens the link in a **newtab**.

**Example:**

```html
<a href="https://www.freecodecamp.org" target="_blank">Visit freeCodeCamp</a>
```

## 7. Boolean Attributes

Most attributes have a value (like `src="..."`), but **Boolean Attributes** are unique.

- **Rule:** They do not require a value.
- **Logic:** If the attribute is present, the feature is ON. If it is absent, the feature is OFF.
  Common Boolean Attributes:

| Attribute  | Used On                   | Effect                                                  |
| :--------- | :------------------------ | :------------------------------------------------------ |
| `checked`  | `<input type="checkbox">` | The box starts with a checkmark inside.                 |
| `disabled` | `<input>, <button>`       | The user cannot click or type in the element.           |
| `readonly` | `<input>`                 | The user can read the text but cannot change it.        |
| `required` | `<input>`                 | The user must fill this field before submitting a form. |

**Code Example:**

```HTML
<!-- A checkbox that is checked by default -->
<input type="checkbox" checked />

<!-- A text box you cannot type inside -->
<input type="text" disabled />
```

## 8. Connecting Resources (The Link Element)

The `<link>` element is used to connect the HTML document to external resources, such as stylesheets and site icons.

- **Placement:** Must be placed inside the `<head>` element.
- **Type:** It is a **Void Element** (no closing tag).

### Linking External CSS

It is best practice to keep HTML (content) and CSS (styles) in separate files.

**Syntax:**

```html
<link rel="stylesheet" href="./styles.css" />
```

**Attribute Breakdown:**

- `rel` (Relationship): Specifies the relationship between the file and the page. For CSS, the value is `stylesheet`.

- `href` (Hypertext Reference): The location of the file.

  - _Note_ : The `./` tells the browser to look in the current folder (directory).

Context Example:
