#include<iostream>
using namespace std;

/*

1 2 3 4
5 6 7 8 
9 10 11 12

*/
int main(){

    int r,c;
    cin>>r>>c;

    for(int i =0; i < r; i++){
        for(int j=1; j <= c; j++){
            cout<<i*c + j<<" ";
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
5 6 7 8
9 10 11 12

*/