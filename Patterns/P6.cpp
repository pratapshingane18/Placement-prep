#include<iostream>
using namespace std;

/*

1
2 1
3 2 1
4 3 2 1


*/
int main(){

    int r,c;
    cin>>r>>c;

    for(int i =1; i <= r; i++){
        int cnt=i;
        for(int j=1; j <= c; j++){
            
           if(j <= i){
           std:: cout<<cnt<<" ";
           // formula i -j +1;
           cnt--;
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