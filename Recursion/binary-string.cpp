#include<iostream>
#include<string>
using namespace std;

// void binaryString(int lastPlace, int n, string ans) {
//     if(n == 0) {
//         cout<<ans<<endl;
//         return;
//     }
//     if(lastPlace != 1){
//         binaryString(n-1, 0, ans+'0');
//         binaryString(n-1, 1, ans+'1');
//     }else{
//         binaryString(n-1, 0, ans+'0');
//     }
// }

//---without lastPlace
void binaryString(int n, string ans) {
    if(n==0) {
        cout<<ans<<endl;
        return;
    }
    if(ans[ans.size()-1] != '1') {
        binaryString(n-1, ans+'0');
        binaryString(n-1, ans+'1');
    }else{
        binaryString(n-1, ans+'0');
    }
}
int main(){
    string ans = "";
    binaryString(2, ans);
    return 0;
}