int Solution::titleToNumber(string A) {
   int length = A.size();
    int index, solution = 0;


    if(length == 1)solution =  A[length-1]-64;

    else{
        for(index = 0; index < length-1; index++){
            solution = solution + pow(26,index+1);
            solution = solution + (((int)A[index])%64-1)*pow(26, length-index-1);
        }
        solution = solution + (((int)A[length-1])%64);
    }
    return solution;
}
