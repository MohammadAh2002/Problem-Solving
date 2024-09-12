/* 

    Define a function, onlyOdds, that accepts a number as an argument.  
    onlyOdds should return the sum of all the odd numbers  
    between the given number and 1. 
    If onlyOdds receives an argument less than 1, it should return 0. 
    Example: 
    -------- 
    onlyOdds(6); // => 9 (5 + 3 + 1)

*/

function IsEven(Number){
    
    return Number % 2 === 0

}

function OnlyOdds(Number){

    let Sum = 0;
    
    while(Number >= 1){
    
        if(!IsEven(Number))
            Sum += Number;
    
        Number--;
    
    }
    
        return Sum;
    
}
    
    console.log(OnlyOdds(6));
    console.log(OnlyOdds(3));
