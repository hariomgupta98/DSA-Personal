#include<bits/stdc++.h>
using namespace std;
class SegmentTree{
    vector<int> tree;
    int n;

    void buildTree(vector<int> &nums, int start, int end, int node){
        if(start == end){
            tree[node] = nums[start];
            return;
        }
        int mid = start + (end - start)/2;
        buildTree(nums, start, mid, 2*node+1);
        buildTree(nums, mid+1, end, 2*node+2);
        tree[node] = min(tree[2*node+1], tree[2*node+2]);
    }

    int minQuery(int qi, int qj, int si, int sj, int node){
        if(qi > sj || si > qj){ //no overlap
            return INT_MAX;
        }

        if(si >= qi && sj <= qj){ //complete overlap
            return tree[node];
        }

        int mid = si + (sj - si)/2;
        int leftMin = minQuery(qi, qj, si, mid, 2*node+1);
        int rightMin = minQuery(qi, qj, mid+1, sj, 2*node+2);
        
        return min(leftMin, rightMin);
    }
public:
    SegmentTree(vector<int> &nums){
        n = nums.size();
        tree.resize(4*n);
        buildTree(nums, 0, n-1, 0);
    }
    
    void printTree(){
        for(int el : tree){
            cout<<el<<" ";
        }
        cout<<endl;
    }

    int rangeQuery(int qi, int qj){
        return minQuery(qi, qj, 0, n-1, 0);
    }
};
int main(){
    vector<int> nums = {6, 8, -1, 2, 17, 1, 3, 2, 4};
    SegmentTree st(nums);
    st.printTree();
    cout<<"min value for the range: "<<st.rangeQuery(2, 5)<<endl;
    return 0;
}