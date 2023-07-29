#include <bits/stdc++.h>
using namespace std;

/*
 * The function `explainPair` demonstrates the usage of pairs in C++.
 */

// pairs
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[2].second;
}

// vectors
void explainVector()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(5); // same as push_back but faster

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(7, 8); // in this we don't need to give pairs in {} curly brackets

    vector<int> v5(5, 100); // here 5 is size of vector(which can be expandable) and it is initialized by value 100 in each index.

    vector<int> v1(3, 21);
    vector<int> v2(v1); // copies v1 into v2

    // iterators
    vector<int>::iterator it = v.begin(); // it points to the address of the first element in the vector
    it++;                                 // move iterator to the next element address
    cout << *(it) << " ";                 // * is used to access the value of the element present in that address.

    it = it + 2; // move iterator to the next to next element address (jump of 2)
    cout << *(it) << " ";

    // another different type of iterators
    vector<int>::iterator itr = v5.end(); // it points to the address next to the last element in the vector eg. {1,2,3} so, v.end() points next addres to the element 3

    // 👉 // vector<int>::iterator it = v.rend(); // it is just reverse of end (never used or rearly used)

    // 👉 // vector<int>::iterator it = v.rbegin(); // it is just reverse of begin (never used or rearly used)

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    // deletion
    //  {12,13,14,15}
    v.erase(v.begin() + 1); // after deletion  {12,14,15}

    // {12,13,14,15,16,26}
    v.erase(v.begin() + 1, v.begin() + 4); // after deletion {12,16,26} includes start excludes end  [Start , End)

    // Insert Function

    vector<int> v6{2, 100};          // {100,100}
    v6.insert(v.begin(), 300);       // {300,100,100}
    v6.insert(v.begin() + 1, 2, 10); // {300, 10,10,100,100}

    vector<int> copy(2, 50);
    v6.insert(v6.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    cout << v6.size() << endl; // give size of vector
    v.pop_back();              // delete the last element in the vector

    // v1 -> {10,20}
    // v2 -> {40,90}
    v1.swap(v2); // v1->{40,90} and v2->{10,20}

    v.clear(); // clear the vector

    cout << v.empty(); // tells is vector is empty or not
}

void explainList()
{
    list<int> ls;
    ls.push_back(1);    // {1}
    ls.emplace_back(5); //{1,5}

    ls.push_front(5);    // {5,1,5}
    ls.emplace_front(8); // {8,5,1,5}

    // rest functions are same as vector
    //  begin, end, rbegin, rend,clear,insert,size,swap
}

void explainDeque()
{ // double-ended queue data structure
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    // rest functions are same as vector
    //  begin, end, rbegin, rend,clear,insert,size,swap
}

void explainStacks()
{ // LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);
    cout << st.top(); // st[2] is invaild
    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(3); // {1,2,3}

    q.back() += 5;
    cout << q.back(); // prints 8

    // q is {1,2,8}
    cout << q.front(); // prints 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

void explainPriorityQueue()
{
    // also called Max heap
    priority_queue<int> pq; // the greatest value is at the top for alphabets greater the lexicographical is at the top

    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.emplace(8);

    cout << pq.top() << endl; // prints 10

    // size swap empty same as stack

    // Minimum heap (Min Heap)

    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);

    cout << pq1.top() << endl; // prints 2
}

void explainSet()
{
    // set have 2 properties
    // 1. store in Sorted  order(increasing) 2. Unique value
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2,}
    st.emplace(4); // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // begin(), end(), rbegin(), rend(), size(), empty() and swap()  are same as those above
    auto it = st.find(3);  // returns iterator that points 3
    auto itr = st.find(6); // as 6 is not present in set
    // so it returns iterator that points at st.end()
    st.erase(2); // erase 2


    int cnt = st.count(1); // if 1 present then returns 1 as all elements are unique else returns 0
    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // (1,2,3,4,5)
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    // after erase {1, 4, 5} [first, last)
    // lower_bound() and upper_bound() function works in the same wayas in vector it does.

    // link to learn upper bound and lower bound
    // https://www.youtube.com/watch?v=edJ19qIL8WQ
    auto it = st.lower_bound(2); 
    auto it2 = st.upper_bound(3);
}

void explainMultiSet(){
    // Everything is same as Set
    // only stores duplicate elements also

    // meas it is sorted but not unique

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's are erased

    int cnt = ms.count(1);

    //only a single 1 erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    //rest functions are same as set

}

void explainUset(){
    unordered_set<int>s;
    /*
     lower_bound and upper_bound functions doesn't work, rest all
     the functions are same as above, it does not store in any 
     pariticular order it has a better complexity than set in most
      cases, except some when collision happens
    */
}

int main()
{
    // explainPair();
    explainVector();
    explainList();
    return 0;
}