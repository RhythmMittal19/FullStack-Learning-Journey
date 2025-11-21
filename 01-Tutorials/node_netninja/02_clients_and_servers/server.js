const http = require("http"); // to handle http
const fs = require("fs"); //file system to access html pages

// if a guest comes at the door the things the person has to do or provide
const server = http.createServer((req, res) => {
  console.log(req.url, req.method);

  // set header content type
  res.setHeader("Content-Type", "text/html");

  // body of the page but the below method is very messy for few lines

  // res.write('<head><link rel="stylesheet" href="#" /></head>');
  // res.write("<p>Hello, ninjas</p>");
  // res.write("<p>Hello again, ninjas</p>");
  // res.end();

  //basic routing

  let path = "./views/";
  switch (req.url) {
    case "/":
      path += "index.html";
      break;
    case "/about":
      path += "about.html";
      break;
    default:
      path += "404.html";
      break;
  }

  // send a html file
  fs.readFile(path, (err, data) => {
    if (err) {
      console.log(err);
      res.end();
    } else {
      // res.write(data);
      res.end(data);
    }
  });
});

// local host is like a domain name on the web
// local host ----- 127.0.0.1 ------ Own Computer ( HOST )
// port number are like 'doors' into a computer

// THE BUILDING and the person sitting behind the door 3000
server.listen(3000, "localhost", () => {
  console.clear(); // Clears terminal so it looks clean
  console.log("I am the SERVER (The Building 'localhost').");
  console.log("I am sitting at Door 3000 (Port 3000) waiting...");
  console.log("Go to your browser and type: http://localhost:3000");
});
