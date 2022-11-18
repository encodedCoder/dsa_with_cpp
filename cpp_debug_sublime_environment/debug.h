#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
    #define debug(x) cerr<< #x << " "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(int a){
    cerr << a;
}

void _print(long long a){
    cerr << a;
}

void _print(float a){
    cerr << a;
}

void _print(double a){
    cerr << a;
}

void _print(string s){
    cerr << s;
}

void _print(bool a){
    cerr << a;
}

void _print(char a){
    cerr << a;
}

template<class T> void _print(vector<T> v){
    cerr << "[ ";
    for(auto a: v){
        _print(a);
        cerr << " ";
    }
    cerr << "]";
}


template<class T> void _print(set<T> s){
    cerr << "{";
    for(auto a: s){
        _print(a);
        cerr << " ";
    }
    cerr << "}";
}

template<class T> void _print(unordered_set<T> s){
    cerr << "{ ";
    for(auto a: s){
        _print(a);
        cerr << " ";
    }
    cerr << "}";
}
