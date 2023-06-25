#include<iostream>
using namespace std;

/*

1
2 3
3 4 5
4 5 6 7  


*/
int main(){

    int r,c;
    cin>>r>>c;

    for(int i =0; i < r; i++){
        for(int j=0; j < c; j++){
           if(j <= i){
           std:: cout<<i+j+1<<" ";
           }
        }
       std:: cout<<endl;
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