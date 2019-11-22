int calc(int a, int b){
    if(a==0 || b==0)  return 1;
    return (calc(a-1,b)+calc(a,b-1));
}

int Solution::uniquePaths(int m, int n) {
    return calc(m-1,n-1);
}
