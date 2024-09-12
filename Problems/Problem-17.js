/*  
    Write a function maxOfThree that accepts three number arguments. 
    maxOfThree should return largest number of the three. 
    Example: 
    -------- 
    maxOfThree(5, 4, 10); // => 10 
    maxOfThree(7, 7, 4); // => 7
    
*/ 

function MaxOfThree(Num1, Num2, Num3){

    if(Num1 >= Num2 && Num1 >= Num3)
        return Num1;
    else if(Num2 >= Num1 && Num2 >= Num3)
        return Num2;
    else
        return Num3;

}