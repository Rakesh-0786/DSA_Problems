// #include<bits/stdc++.h>
// using namespace std;
// int printCount(int n){
//     int count=(int)(log10(n)+1);
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=printCount(n);
//     count<<ans;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int printCount(int n) {
    if (n == 0) return 1;  // Special case for 0
    int count = (int)(log10(abs(n)) + 1);  // Handle negative numbers with abs()
    return count;
}

int main() {
    int n;
    cin >> n;
    int ans = printCount(n);
    cout << ans;
    return 0;
}
