// #include<bits/stdc++.h>
// using namespace std;

// class A{

//     public:
//     int count = 0;
//     void printName(){
//         if(count==4) return;
//         cout<<"som\n";
//         count++;
//         printName();
//     }
// };

// int main(){

//     A obj;
//     obj.printName();
//     return 0;

// }














// #include<bits/stdc++.h>
// using namespace std;

// class A{
//     public:

//     void printNum( int n){

//         if(n==0) return;
//         printNum(n-1);
//         cout<<n<<"\n";
//     }
// };
// int main(){ 
//     int n;
//     cin>>n;
//     A obj;
//     obj.printNum(n);
//     return 0;
// }

















#include<bits/stdc++.h>
using namespace std;

class A {
    public:

    void printNum( int i , int n){
        if(n==0) return;
        printNum(i+1 ,n-1);                    
        cout<<i<<" ";
    }
};

int main(){ 
    int n;
    cin>>n;
    A obj;
    obj.printNum(1,n);
    return 0;
}