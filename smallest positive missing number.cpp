/*SMALLEST POSITIVE MISSING NUMBER:-*/
/*STEPS TO SOLVE:
1.BUILD THE Check[] ARRAY INITIALIZED WITH FALSE AT ALL INDICES..
2.BY ITERATING OVER AN ARRAY AND MARKING a[i] AS TRUE..
i.e.
if(a[i]>=0){
    check[a[i]]=TRUE;
}
3.ITERATE IN THE Check[] FROM i=1,BREAK THE LOOP WHEN YOU FIND check[i]=FALSE AND STORE THAT i A VARIABLE NAMED ans..
4.OUTPUT THE ans..
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
   //BUILD THE CHECK[] ARRAY INITIALIZED WITH FALSE AT ALL INDICES..
    const int N=1e6+2;//1000002
    bool check[N];
    for(int i=0;i<N;i++){
      check[i]=false;
    }
    //BY ITERATING OVER AN ARRAY AND MARKING a[i] AS TRUE..
    for(int i=0;i<n;i++){
      if(a[i]>=0){
        check[a[i]]=true;
      }
    }
	//ITERATE IN THE Check[] FROM i=1,BREAK THE LOOP WHEN YOU FIND check[i]=FALSE AND STORE THAT i A VARIABLE NAMED ans..
    int ans=-1;
    for(int i=1;i<N;i++){
      if(check[i]==false){
        ans=i;
        break;
      }
    }
	//OUTPUT THE ans..
    cout << ans << endl;
    return 0;
}

/*
I/O:-
Input:[0.-9,1,3,-4,5]
Output:2
*/

/*
I/O:-
Input:[0.-9,1,3,-4,5]
Output:2

TIME COMPLEXITY:O(NlogN)
SPACE COMPLEXITY:O(1)
*/










