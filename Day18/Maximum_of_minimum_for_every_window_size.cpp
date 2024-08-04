//       vector <int> maxOfMin(int arr[], int n)
//       {
//        vector<int> vec(n,-1);
//        stack<int> s; 
//        int ps[n]; 
//        for(int i=0;i<n;i++)
//        {
//            while(!s.empty()&&arr[s.top()]>=arr[i])
//            s.pop();
//            if(s.empty())
//            ps[i]=-1;
//            else
//            ps[i]=s.top();
//            s.push(i);
//        }
       
//        while(!s.empty()) 
//        s.pop();
       
//        int ns[n]; 
//        for(int i=n-1;i>=0;i--) 
//        {
//            while(!s.empty()&&arr[s.top()]>=arr[i])
//            s.pop();
//            if(s.empty())
//            ns[i]=n;
//            else
//            ns[i]=s.top();
//            s.push(i);
//        }
   
//        for(int i=0;i<n;i++)
//        {
//            int num = ns[i]-ps[i]-2; 
//            cout<<arr[i]<<" "<<num<<endl;
//            vec[num]=max(vec[num],arr[i]); 
//        }
       
//        for(int i=n-2;i>=0;i--)vec[i]=max(vec[i],vec[i+1]);
//        return vec; 
//    }