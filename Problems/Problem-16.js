/* 

    Define a function greeting that accepts an optional string 
    argument called name. greeting should return a personalized 
    string if the name is present. 
    Example: 
    -------- 
    greeting('Tala'); // => Hello Tala! 
    greeting(); // => Hello! 

*/ 

function Greeting(Name){

    if(Name === undefined)
        return "Hello";

    return "Hello " + Name + "!";
    
}

console.log(Greeting("Mohammad"));
console.log(Greeting());