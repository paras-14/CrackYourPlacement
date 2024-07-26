    // string addBinary(string a, string b) {
    //     char carry=0;
    //     int i=a.length()-1;
    //     int j=b.length()-1;
    //     string ans="";
    //     while(i>=0 || j>=0 || carry==1){
    //         int num1=0;
    //         int num2=0;

    //         if(i>=0)num1=a[i]-'0';
    //         if(j>=0)num2=b[j]-'0';

    //         int total=num1+num2+carry;

    //         if(num1==0 && num2==0 && carry>0)carry=0;
    //         else if(carry==0 && num1==1 && num2==1)carry=1;
    //         else if(carry==1 && (num1>0 || num2>0))carry=1;

    //         cout<<num1<<" "<<num2<<" "<<total<<endl;

    //         if(total%2==0)ans='0'+ans;
    //         else ans='1'+ans;

    //         i--;
    //         j--;
    //     }

    //     if(carry=='1')ans='1'+ans;

    //     return ans;
    // }