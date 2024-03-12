#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cifram(int n){
    int mmi = 9;

    if(n==0)
    {
        return 0;
    }
    while(n>0){
        int digit = n%10;
        mmi = min(mmi,digit);
        n/=10;
    }
    return mmi;
}

int cifraM(int n){
    int mma = 0;
    while(n>0){
        int digit = n%10;
        mma = max(mma, digit);
        n/=10;
    }
    return mma;
}

bool regula(int n, int m){
    int micn = cifram(n);
    int micm = cifram(m);
    int maren = cifraM(n);
    int marem = cifraM(m);

 if(micn != micm){
        return micn < micm;
    }
    else if(maren != marem){
        return maren < marem;
    }
    else return n < m;
}

int main(){
    vector<int> num;
    int n;
    while(cin>>n){
        num.push_back(n);
    }
    sort(num.begin(),num.end(),regula);
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" ";
    }
    return 0;
}