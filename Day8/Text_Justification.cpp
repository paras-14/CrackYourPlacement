    // int MAX_WIDTH;
    // string findLine(int i,int j,int eachGaddhaSpace,int extraGaddhaSpace,vector<string>& words){
    //     string line="";
    //     for(int k=i;k<j;k++){
    //         line+=words[k];

    //         if(k==j-1)continue;

    //         for(int z=1;z<=eachGaddhaSpace;z++){
    //             line+=" ";
    //         }

    //         if(extraGaddhaSpace>0){
    //             line+=" ";
    //             extraGaddhaSpace--;
    //         }
    //     }

    //     while(line.length()<MAX_WIDTH)line+=" ";

    //     return line;
    // }
    // vector<string> fullJustify(vector<string>& words, int maxWidth) {
    //     MAX_WIDTH=maxWidth;
    //     int cnt=0;
    //     int n=words.size();
    //     int i=0;
    //     vector<string>cont;
    //     vector<vector<string>>dummy;
    //     int j=0;
    //     while(i<n){
    //         vector<string>temp;
    //         int cnt=words[j].length();
    //         i=j+1;
    //         int gaddha=0;
    //         while(i<n && words[i].length()+1+cnt+gaddha<=maxWidth){
    //             cnt+=(words[i].length());
    //             temp.push_back(words[i]);
    //             gaddha+=1;
    //             i++;
    //         }

    //         int remainingSlots=maxWidth-cnt;

    //         int eachGaddhaSpace=gaddha==0?0:remainingSlots/gaddha;
    //         int extraGaddhaSpace=gaddha==0?0:remainingSlots%gaddha;

    //         cout<<remainingSlots<<" "<<eachGaddhaSpace<<" "<<extraGaddhaSpace<<endl;

    //         if(i==n){
    //             eachGaddhaSpace=1;
    //             extraGaddhaSpace=0;
    //         }

    //         cont.push_back(findLine(j,i,eachGaddhaSpace,extraGaddhaSpace,words));

    //         j=i;
            
    //         cnt=0;
    //     }

    //     return cont;
    // }