#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> pr1 = {2,8};
    // pair<int,int> pr1 = make_pair(2,8);
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair<int,char> pr2 = {8,'a'};
    cout<<pr2.first<<" "<<pr2.second<<endl;


    // store pair and an int 

    pair<pair<int,char>,int> pr3= {{2,'a'},10};
    cout<<pr3.first.second<<endl;
}


void explainVector(){
    // vector<int> vec(5,4);

    // vector<int> vec1 = {7, 8, 8, 6, 7};
    // vector<int> vec2 = {6,4};
    // swap(vec1,vec2);

    // // vector<int> temp;
    // // temp = vec1;
    // // vec1 = vec2;
    // // vec2 = temp;

    // for(auto i:vec2){
    //     cout<<i<<" ";
    // }

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.emplace_back(0);
    // vec.pop_back();

    // cout<<vec[2];
    // cout<<vec.at(2);

    // for(auto i:vec){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    // cout<<vec.front()<<endl;
    
    // vec.erase(vec.begin()+1,vec.end()-1);
    // vec.erase(vec.begin(),vec.end()-2);

    // vec.clear();
    // for(auto i:vec){
    //     cout<<i<<" ";
    // }
    // cout<<vec.back();




    

    // cout<<endl;

    // vector<int> dupVec(vec.begin()+1 ,vec.end()-1);
    // for(auto i:dupVec){
    //     cout<<i<<" ";
    // }

    // cout<<vec.size()<<endl;


    // printing elems 

    // 1 way - for loop
    // for(int i=0; i<vec.size(); i++){
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;


    // 2nd way 
    // vector<int>::iterator beginItr = vec.begin();
    // vector<int>::iterator endItr = vec.end();

    // auto beginItr = vec.begin();
    // auto endItr = vec.end();
    // for(auto i = beginItr;i<endItr;i++){
    //     cout<<*i<<" ";
    // }



    // 3rd way - for each loop

    // for(auto i:vec){
    //     cout<<i<<" ";
    // }
    // cout<<endl;





    // #reverse iterator 

    // auto reverseBegin = vec.rbegin();
    // auto reverseEnd = vec.rend();

    // for(auto i = reverseBegin; i<reverseEnd ;i++){
    //     cout<<*i<<" ";
    // }


    // vector<int> vec = {7, 8, 8, 6, 7};
    // cout<< &(*(vec.begin()));
    // vec.insert(vec.begin()+2,4);

    // for(auto i :vec){
    //     cout<<i<<" ";
    // }



}


void explainList(){
    list<int> ls = {6,7};
    ls.push_front(1);
    ls.emplace_front(3);
    for(auto i :ls){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<ls.front()<<endl;
    
    ls.front() = 5;
      for(auto i :ls){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<ls.front()<<endl;

}


void explainStack(){

    // LIFO
//     stack<int> st;
//     st.push(1);
//     st.push(7);
//     st.push(71);
//     st.push(73);
//     st.push(17);
//     st.push(27);

//     while(st.empty()==false){
//         cout<<st.top()<<endl;
//         st.pop();
//     }


    // cout<<st.size(); 
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top(); 
    // st.pop();
    // cout<<st.top(); 
    

}


void explainQueue(){
    // FIFO
    queue<int> q;
    q.push(2);
    q.push(22);
    q.push(23);
    q.push(24);

    while(q.empty()==false){
        cout<<q.front()<<endl;
        q.pop();
    }
}
 

void explainPQ(){
    // stores highest element at the top  

    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(10);
    // pq.push(8);
    // // cout<<pq.top()<<" ";
    // // pq.pop();
    // // cout<<pq.top();

    // while(pq.empty()==false){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }





    // stores smallest element at the top  

    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);
    // cout<<pq.top()<<" ";
    // pq.pop();
    // cout<<pq.top();

    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }



}


void explainSet(){
    // stores only unique elems - only in ascending order  

    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(12);
    st.insert(211);
    st.insert(213);

    // upper and lower bound 

    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;

    // lowb - returns an iterator that points to the first element 
    // >= to the given number ;

    // auto it = st.lower_bound(214);
    // if(it == st.end()){
    //     cout<<"end";
    // } 
    

    // lowb - returns an iterator that points to the first element 
    // > to the given number ;
    auto it = st.upper_bound(213 );
    if(it==st.end()) cout<<"end";
    else cout<<*it;





    // st.erase(21);
 
    
    
    // for(auto it:st){ 
    //     cout<<it<<" ";
    // } 
    // cout<<endl;

    // auto it1 = st.begin();
    // it1++;
    // auto it2 = st.end();
    // it2--;
    // st.erase(it1,it2); 
 
    // for(auto it:st){ 
    //     cout<<it<<" ";
    // } 
    // cout<<endl;
    


    // specific loctn delete
    // auto it = st.end();
    // it--;it--;it-- ;
    // st.erase(it);
    // for(auto it:st){ 
    //     cout<<it<<" ";
    // }

    // auto it = st.find(12);
    // if(it!= st.end()){
    //     cout<<*it;
    // }
    // cout<<endl;

    //  cout<<st.count(21);

    // if(st.count(12)== 1) cout<<"found elem";
} 



void explainMultiSet() {
    // stores duplicates - asc order
     
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);
    
    
    for(auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl;

    // auto it = ms.erase(1);
    // for(auto it:ms){
    //     cout<<it<<" "; 
    // }

    auto it = ms.erase(ms.find(1));
    for(auto it:ms){
        cout<<it<<" "; 
    }
    

    cout<<endl<<ms.count(1);


}


void explainUnorderedSet(){
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(11);
    st.insert(11);
    st.insert(12);
    st.insert(12);
    st.insert(12);

    for(auto it:st){
        cout<<it<<" ";
    }

    auto it = st.find(11) ; //O(1) O(N) (rare scenarios )
}


void explainMap(){
    // uniq keys
    map<int,string> mpp; 
    mpp.insert({4,"Som"});
    mpp[1] = "abc";
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp[3] = "dog";
     

    //follows asc order of keys 
    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    auto it = mpp.find(7);
    if(it== mpp.end()) cout<<"not found  ";
    else cout<<(*it).first<<"->"<<(*it).second;
 
}




void explainUnorderedMap(){
    unordered_map <int,string> mpp; 
    mpp.insert({4,"Som"});
    mpp[1] = "abc";
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp[3] = "dog";


    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    // auto it = mpp.find(7);
    // if(it== mpp.end()) cout<<"not found  ";
    // else cout<<(*it).first<<"->"<<(*it).second;
}
    

void explainMultimap(){
    multimap<int,char> mpp;
    mpp.insert({3,'b'});
    mpp.insert({1,'a'});
    mpp.insert({1,'b'});
    mpp.insert({1,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'b'}); 

    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    auto it = mpp.equal_range(2);
    for(auto i= it.first ;i!= it.second; i++){
        cout<<(*i).first<<" -> "<<(*i).second<<endl;
    }
}


void explainSort(){
    // int arr[] ={6,2,7,1,8}; 
    // sort(arr+1,arr+4);
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    vector<int> vec = {5,7,1,0,1};
    sort(vec.begin()+1,vec.begin()+4);
 
    for(auto it:vec){
        cout<<it<<" ";
    }
}


void explainAccumulate(){
    int arr[] ={6,2,7,1,0}; 
    cout<<accumulate(arr+4,arr+5,0);
}


void explainCount(){
    int arr[] ={6,2,1,1,0}; 
    int num = 1;
    cout<<count(arr,arr+5,num);
    
}


void explainFind(){
    int arr[] ={6,2,1,1,0}; 
    auto it = find(arr,arr+5,8);
    if(it== arr+5) cout<<"not found";
    else  cout<<*it;
} 


void explainNextPermutation(){
    string str = "abc";
     do{ 
        cout<<str<<endl;
     }while(next_permutation(str.begin(),str.begin()+3));

     cout<<endl;
}


void explainPrevPermutation(){
    string str = "bac ";
     do{ 
        cout<<str<<endl;
     }while(prev_permutation(str.begin(),str.begin()+3));
}


void explainMaxElement(){
    int arr[] = {7,6,5,10,9};
    auto it =   max_element(arr,arr+5);
    cout<<"max = "<<*it<<endl;  
    auto it2 = min_element(arr,arr+5);
    cout<<"min = "<<*it2;  
}


void explainReverse(){
    int arr[] = {7,6,5,10,9};
    reverse(arr,arr+5);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}


bool internalComparator(pair<int,int>el1 , pair<int,int> el2){
    // if(el1<el2) return false;
    //  return  true;

    if(el1.second >el2 .second) return true;
    if(el1.second <el2 . second) return false ;
    if(el1.first <el2 .first) return true;
    return false; 
}
 

void explainComparator(){
    // int arr[] = {5, 6, 1, 2};
    // sort(arr,arr+4,internalComparator);
    // for(auto i:arr){ 
    //  cout<<i<<" ";
    // }


    pair<int,int> arr[] = {{1,6},{1,5},{2,6 },{2,9},{3,9 }};
    // sort acc to sec elem

    sort(arr,arr+5,internalComparator);
    for(int i = 0; i<5 ; i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}"<<endl;
    }
}  



int main(){ 
    // explainPair(); 
    // explainVector();   
    // explainList();
    // explainStack();
    // explainQueue(); 
    // explainPQ(); 
    explainSet();
    // explainMultiSet();
    // explainUnorderedSet(); 
    // explainMap();
    // explainUnorderedMap();
    // explainMultimap();
    // explainSort();
    // explainAccumulate();
    // explainCount();
    // explainFind();
    // explainNextPermutation();
    // explainPrevPermutation();
    // explainMaxElement();
    // explainReverse(); 
    // explainComparator();


    return 0;
}