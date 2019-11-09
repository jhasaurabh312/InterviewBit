vector<int> Solution::sieve(int A) {
    bool prime[A];
    memset(prime,true,sizeof(prime));

    vector<int>v;
    for(int i=2;i*i<=A;i++){
        if(prime[i]){
            for(int j=i*i;j<=A;j+=i)
             prime[j]=false;
        }
    }

    for(int i=2;i<=A;i++){
        if(prime[i]) v.push_back(i);
    }

    return v;
}
