/* 

    Define a function, myIndexOf, that accepts two arguments: 
    - source (string) 
    - searchValue (string) 

    If the source contains the searchValue, return the index  
    at which the searchValue starts.  
    If the searchValue appears more than once in the source, 
    return the index from the first occurrence of the searchValue. 
    If the searchValue doesn't exist in the source, return -1. 
    Do not use the built-in .indexOf string method in your answer.  
    Feel free to use it in all future workshop problems though! 
    Example: 
    -------- 
    myIndexOf('hello', 'h'); // => 0 
    myIndexOf('hello', 'e'); // => 1 
    myIndexOf('hello', 'l'); // => 2 
    myIndexOf('hello', 'l'); // => 2 
    myIndexOf('hello', 'o'); // => 4 
    myIndexOf('twice twice', 'ice'); => 2 
    myIndexOf('happy string', 'sad'); => -1

*/

function MyIndexOf(Source, SearchValue){

    for(let i = 0; i < Source.length; i++){

        if(Source[i] === SearchValue)
            return i;
    
    }

        return -1;

}
    console.log(MyIndexOf("Mohammad Ahmad", 'M'));
    console.log(MyIndexOf("Mohammad Ahmad", 'd'));
    console.log(MyIndexOf("Mohammad Ahmad", 'h'));