// class DisjointSet{
//     vector<int>parent,rank,size;
    
//     public:
    
    
    
//     DisjointSet(int n){
//         rank.resize(n+1,0);
//         size.resize(n+1,1);
//         parent.resize(n+1);
        
//         for(int i = 0;i<=n;i++) {
//             parent[i] = i; 
//         }
//     }
    
//     int findParent(int k){
//         if(parent[k]==k){
//             return k;
//         }
        
//         return parent[k]=findParent(parent[k]);
//     }
    
//     void UnionByRank(int u,int v){
//         int UPu=findParent(u);
//         int UPv=findParent(v);
        
//         if(UPu==UPv) return ;
        
//         if(rank[UPu]<rank[UPv]){
//            parent[UPu]=UPv;
//         }else if(rank[UPu]>rank[UPv]){
//             parent[UPv]=UPu;
//         }else{
//             parent[UPv]=parent[UPu];
//             rank[UPu]++;
//         }
//     }
    
//     void UnionBySize(int u,int v){
//         int UPu=findParent(u);
//         int UPv=findParent(v);
        
//         if(UPu==UPv) return ;
        
//         if(size[UPu]<size[UPv]){
//            parent[UPu]=UPv;
//            size[UPv]+=size[UPu];
//         }else{
//             parent[UPv]=parent[UPu];
//             size[UPu]+=size[UPv];
//         }
//     }
// };
//     int makeConnected(int n, vector<vector<int>>& connections) {
//         DisjointSet ds(n);
//         int extra=0;
//         for(int i=0;i<connections.size();i++){
//             int u=connections[i][0];
//             int v=connections[i][1];

//             if(ds.findParent(u)==ds.findParent(v))extra++;
//             else{
//                 ds.UnionBySize(u,v);
//             }
//         }
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             if(ds.findParent(i)==i)cnt++;
//         }
//         if(extra>=cnt-1)return cnt-1;
//         return -1;
//     }