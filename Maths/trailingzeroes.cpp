int Solution::trailingZeroes(int A) {
 int count=0;
     for(int i=5;i<=A;i+=5)
     {
         int n=i;
         while(n%5==0){
             n=n/5;
             count++;
         }
     }

  return count;
}
