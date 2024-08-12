    // bool isSafe(vector<int>&color,int node,bool graph[101][101],int n,int c){
    //     for(int i=0;i<n;i++){
    //         if(graph[node][i] && color[i]==c)return false;
    //     }
        
    //     return true;
    // }
    // bool fn(int node,vector<int>&color,bool graph[101][101],int n,int m){
    //     if(node==n)return true;
    //     for(int i=1;i<=m;i++){
    //         if(isSafe(color,node,graph,n,i)){
    //             color[node]=i;
    //             if(fn(node+1,color,graph,n,m)==true)return true;
    //             color[node]=0;
    //         }
    //     }
        
    //     return false;
    // }
    // bool graphColoring(bool graph[101][101], int m, int n) {
    //     vector<int>color(n+1,0);
    //     return fn(0,color,graph,n,m);
    // }