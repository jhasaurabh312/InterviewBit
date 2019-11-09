string Solution::findDigitsInBinary(int A) {
    string s="",ans="";
    int k=0;
    if(A==0) ans+='0';
    else{
        while(A>=1){
            if(A%2==1) s+='1';
            else s+='0';

            k++;
            A=A/2;
        }

        for(int i=1;i<=k;i++)
            ans+=s[k-i];
    }

    return ans;
}
