/* 

    Define a function lastCharacter that accepts two strings as 
    arguments. 
    lastCharacter should return true if both strings end with the 
    same character. Otherwise, lastCharacter should return false. 
    Example: 
    -------- 
    lastCharacter('apples', 'pumpkins'); // => true 
    lastCharacter('marker', 'pen'); // => false

*/ 

function LastCharacter(st1, st2){

    if(st1[st1.length - 1] === st2[st2.length - 1])
        return true;

    return false;

}

// Test 1
if(LastCharacter("Mohammad","Ahmad"))
    console.log("they End With The Same Character");
else
    console.log("they Does not End With The Same Character");

// Test 2
if(LastCharacter("Tiger","Lion"))
    console.log("they End With The Same Character");
else
    console.log("they Does not End With The Same Character");
