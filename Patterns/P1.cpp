#include<iostream>
using namespace std;

/*

1 2 3 4
1 2 3 4
1 2 3 4

*/
int main(){

    int r,c;
    cin>>r>>c;

    for(int i =0; i < r; i++){
        for(int j=0; j < c; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }



    return 0;
}


/*
Input:
3 4

Output:
1 2 3 4
1 2 3 4
1 2 3 4

*/