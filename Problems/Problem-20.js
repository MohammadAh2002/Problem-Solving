/* 

    Define a function, evenCouple, that accepts an array of 
    numbers as an argument. 
    evenCouple should return a new array with the first two  
    even numbers from the original array: 
    evenCouple([1, 2, 3, 4, 5, 6]); // => [2, 4] 

    If fewer than two even numbers exist in the original array, 
    return an empty array or an array with the only even number: 
    Example: 
    -------- 
    evenCouple([13, 15, 20]); // => [20] 
    evenCouple(1, 3, 5, 7); // => [] 
*/

function IsEven(Number){
    
    return Number % 2 === 0

}

function EvenCouple(Arr){

    let NewArray = [];

    for(let i = 0; i < Arr.length; i++){

        if(IsEven(Arr[i]))
            NewArray.push(Arr[i]);

        if(NewArray.length === 2)
            break;
    }

    return NewArray;

}

// Test 1
let OriginalArray1 = [1,2,3,4,5,6];
console.log(EvenCouple(OriginalArray1));

// Test 2
let OriginalArray2 = [13,15,20];
console.log(EvenCouple(OriginalArray2));

// Test 3
let OriginalArray3 = [1,3,5,7];
console.log(EvenCouple(OriginalArray3));