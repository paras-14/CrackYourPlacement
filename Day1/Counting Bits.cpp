    // vector<int> countBits(int num) {
    //     vector<int>v(num+1, 0);
    //     for (int i=1;i<=num;++i){
    //         v[i]=v[i&(i-1)] + 1;
    //     }
    //     return v;
    // }


    //(i&(i-1)) will give me a number which has set bet 1 lesser than i
    // for example 8 & 7 
    // 1000 & 0111
    // = 0000
    // 0 has 1 lesser set bit than 8