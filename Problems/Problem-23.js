/* 

    Write a function callThemAll, that, given an object and a value,  
    calls every method in the object, passing in the value as the 
    argument with each call. 
    callThemAll should return an array with all of the returned values 
    from each method invocation. The order of the elements in the 
    returned array does not matter. 
    callThemAll(addNums, 100); // => [110, 120] 

*/


let sumNum = {

    Add10: function (Num){

        return Num + 10;

    },

    Add20: function (Num){

        return Num + 20;

    }
}

function callThemAll(object, value) {

    let output = [];

    for (key in object) {

        if (typeof object[key] === "function") 
            output.push(object[key](value));

    }

    return output;
}
console.log(callThemAll(sumNum, 100));