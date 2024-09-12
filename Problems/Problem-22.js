/* 

    Define a function, compareObjects, that accepts two objects as 
    arguments. 
    compareObjects should return true if both objects have exactly the same 
    key/value pairs. Otherwise, compareObjects should return false.  
    Assume the objects are not nested. 
    compareObjects({ name: "Yara" }, { name: "Yara" }) // -> true 
    compareObjects({ name: "Omar" }, { name: "Omar", age: 12 }) // -> false 

*/

function CompareObjects(object1, object2) {
    
    if (Object.keys(object1).length !== Object.keys(object2).length) 
    
        return false;

    for (key in object1) {

    if (object1[key] !== object2[key]) 
    
        return false;
    
    }
        return true;
}