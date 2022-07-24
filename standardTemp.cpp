/*  
             ____     __                       __
     /\     |  __>   /    |   |    /\    |    /
    /  \    |  \    <     |---|   /  \   |   <
   /    \   |   \    \__  |   |  /    \  |    \__

         _   __             ____    ___
        | \_/ |    /\     /        |
        |     |   /  \   <  <-->   |---
        |     |  /    \   \__\ |   |___

  Author::::::::: Archaic_Mage :::::::::Author

     _____    __________  _________     ___ ___      _____    .___  _________  
   /  _  \   \______   \ \_   ___ \   /   |   \    /  _  \   |   | \_   ___ \ 
  /  /_\  \   |       _/ /    \  \/  /    ~    \  /  /_\  \  |   | /    \  \/ 
 /    |    \  |    |   \ \     \____ \    Y    / /    |    \ |   | \     \____
 \____|__  /  |____|_  /  \______  /  \___|_  /  \____|__  / |___|  \______  /
         \/          \/          \/         \/           \/                \/ 
               _____       _____      ________  ___________                  
              /     \     /  _  \    /  _____/  \_   _____/                  
             /  \ /  \   /  /_\  \  /   \  ___   |    __)_                   
            /    Y    \ /    |    \ \    \_\  \  |        \                  
            \____|__  / \____|__  /  \______  / /_______  /                  
                    \/          \/          \/          \/                   


*/

#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

#define f(i, a, b) for (ll i= a; i < b; i++)
#define fd(i, a, b) for(ll i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pss pair<string, string>
#define vi vector<int>
#define vll vector<ll>
#define vec vector
#define endl "\n"

using namespace std;

/** DSU - Disjoint Set Union **/

// class DSU {
//     int* parent;
//     int* rank;
  
// public:
//     DSU(int n)
//     {
//         parent = new int[n];
//         rank = new int[n];
  
//         for (int i = 0; i < n; i++) {
//             parent[i] = -1;
//             rank[i] = 1;
//         }
//     }
  
//     // Find function
//     int find(int i)
//     {
//         if (parent[i] == -1)
//             return i;
  
//         return parent[i] = find(parent[i]);
//     }
//     // union function
//     void unite(int x, int y)
//     {
//         int s1 = find(x);
//         int s2 = find(y);
  
//         if (s1 != s2) {
//             if (rank[s1] < rank[s2]) {
//                 parent[s1] = s2;
//                 rank[s2] += rank[s1];
//             }
//             else {
//                 parent[s2] = s1;
//                 rank[s1] += rank[s2];
//             }
//         }
//     }
// };
  

void solve() {
	
	// type code here
	
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int t; cin >> t;
	
	while(t--) solve(), cout << endl;
    
    return 0;
}
