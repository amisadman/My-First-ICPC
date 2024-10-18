#include<bits/stdc++.h>
using namespace std;
namespace sadman {
int val = 50;
}

struct AmarDataType {
    string name;
    int age;
    double cgpa;
    char gpa;

    AmarDataType(string name_ , int age_, double cgpa_, char gpa_) {
        name = name_;
        age = age_;
        cgpa = cgpa_;
        gpa = gpa_;
    }

};
int main() {

    double val  = 10.5;

    cout << val << endl;
    cout << sadman :: val << endl;

    // dont do this


    // DO THIS

    AmarDataType *sadman = new AmarDataType("sadman", 19, 3.55, 'a');
    AmarDataType sadman2 = AmarDataType("sadman2", 19, 3.71, 'b');

    set<int>st;
    int n ; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x); // LogN time -> N is the size of the set
    }

    // accessing the elements
    for (auto it = st.begin(); it != st.end(); it ++) {
        cout << *it << " ";
    }
    cout << endl;

    //best way for each loop
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    //erase
    st.erase(st.begin()); // st.erase(iterator)

    st.erase(st.begin(), next(st.begin(), 2)); //[) exclusive-inclusive
    //st.erase(startIterator,endIterator)
    st.insert(7);
    st.emplace(10);// faster

    st.erase(7); // st.erase(key)


    set<int>st2 = {1 , 2 , 3 , 4, 5}; //another way of declaring

    auto it2 = st2.find(3); // -> pointer to 3
    auto it3 = st2.find(7); // return st.end()

    // delete entire set

    st.erase(st.begin(), st.end());
    st2.erase(st.begin(), st.end());


    //unordered_set
    /*
    properties : stores unique values but not in ascending
    stores value randomly
    average time o(1) better than set
    worst time O(n) worst than set

    If you dont have to maintain order than it is better.
    */
    unordered_set<int> uset;
    uset.insert(100);
    uset.emplace(50);
    uset.emplace(2);
    uset.emplace(2);

    for (auto it : uset) {
        cout << it << " ";
    }
    cout << endl;

    //multiset
    //everything is same to set but stores duplicate also

    multiset<int> mset;

    mset.insert(2);
    mset.emplace(2);
    mset.emplace(3);
    mset.emplace(3);

    for (auto it : mset) {
        cout << it << " ";
    }
    cout << endl;

    mset.erase(2); // clear all the instances of 2
    auto it4 = mset.find(3); // return the first instance of 3

    mset.count(2); // how many times 2 occurs

    for (auto it : mset) {
        cout << it << " ";
    }
    cout << endl;

    //map
    //key value indexing
    // sadman -> 12
    //tahmid -> 33
    //isfak - > 125
    // map only stores unique keys
    //everything of map is logn

    map<string, int>mpp;

    mpp["sadman"] = 12;
    mpp.emplace("tahmid", 33);
    mpp.emplace("isfak", 125);

    //mpp.erase("tahmid"); // erase(key)
    mpp.find("sadman"); // returns the first occurance if the key

    for (auto it : mpp) {
        cout << it.first <<  " " << it.second << endl;
        // map is storing a pair of string, int values so we are using first & second
    }
    //another way of printing

    for (auto it = mpp.begin(); it != mpp.end(); it ++) {
        cout << it -> first << " " << it-> second << endl;
    }

    //.clear() function
    mpp.clear();

    //undordered_map
    // doesnot store key in ordered manner
    // O(1) in almost all operation
    //functions are same as map

    unordered_map<int, int>umpp;

    //unordered_map<pair<int,int>,int> mpp is not possible
    //it cannot store nested pair


    multimap<int, int> mmap; // can store multiple keys

    //pair class
    pair<int, int>pr = {1, 2};
    pair<int, int>pr2;
    //another way of defining
    pr2.first = 3;
    pr2.second = 5;

    pair<pair<int, int>, int>nested_pair = {{1, 2}, 5};
    //printing value
    cout << nested_pair.first.first << " " << nested_pair.first.second << " " << nested_pair.second << endl;

    //Pair with containers
    vector<pair<int, int>>vec;
    set<pair<int, int>>st5;
    map<pair<int, int>, int> mapp;



    //stack Lifo data structure
    //push() ans emplace()
    //pop()
    //empty()
    //top()
    //size()
    //every operations are o(1) except delete entire stack

    stack<int>s;
    s.push(1);
    s.emplace(2);
    s.emplace(3);
    s.emplace(4);
    s.emplace(5);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    /*
    REALLY REALLY IMPORTANT

    If you are using pop() always make sure that it is a non empty
    stack.If its empty it will throw a runtime error.
    */

    if (!s.empty()) {
        s.pop();
    }

    //Queue fifo data structure
    //push ans emplace
    //pop
    //front
    //size
    //empty
    queue<int>q;
    q.emplace(3);
    q.emplace(15);
    q.emplace(180);
    q.emplace(10);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;





    return 0;
}