const fs = require("fs"); // fs = filesystem

// reading files

//async & await
fs.readFile("./docs/blog1.txt", (err, data) => {
  if (err) {
    console.log(err);
  }
  console.log(data.toString()); // buffer
});

console.log("last line");

// writing files

// three arguments (path, what u want to write, callback function)
fs.writeFile("./docs/blog2.txt", "hello, again", () => {
  console.log("file was written");
});

//if the file doesnt exists it will create a new file

// directories

if (!fs.existsSync("./assets")) {
  fs.mkdir("assets", (err) => {
    if (err) {
      console.log(err);
    }
    console.log("folder created");
  });
} else {
  fs.rmdir("./assets", (err) => {
    if (err) {
      console.log(err);
    }
    console.log("folder deleted");
  });
}

// deleting files

if (fs.existsSync("./docs/deleteme.txt")) {
  fs.unlink('./docs/deleteme.txt', (err) => {
    if (err) {
      console.log(err);
    }
    console.log("file deleted");
  });
}
