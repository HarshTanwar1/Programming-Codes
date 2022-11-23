// REVERSE AN ARRAY USING VECTORS 


#include<iostream>
#include<vector>

using namespace std;



vector<int>reverse(vector<int>v){
        int s = 0;
        int e = v.size() - 1;
        while(s<=e)
        {
            swap(v[s],v[e]);
            s++;
            e--;
        }
        return v;

}

vector<int>print(vector<int>ans){
    for(int i = 0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}


int main(){
    vector<int>v;
    v.push_back(45);
    v.push_back(7);
    v.push_back(56);
    v.push_back(21);
    v.push_back(76);
    v.push_back(66);
    cout<<"Before reversing the array : ";
    print(v);
    vector<int>ans = reverse(v);
    cout<<"\nAfter reversing the array : ";
    print(ans);
    return 0;
}


