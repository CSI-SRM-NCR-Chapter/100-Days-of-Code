function createHelloWorld() {
    return function() {
      return "Hello World";
    };
  }
  const helloWorldFunc = createHelloWorld();
  console.log(helloWorldFunc()); // Outputs "Hello World"
  