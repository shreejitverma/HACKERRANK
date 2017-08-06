#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    string res;
    if(year>1918){
        if(((year%100!=0)&&(year%4==0))||(year%400==0)){
            string s="12.09." ;
            res.append(s);
            res+=std::to_string(year);
        }

        else{
            string s="13.09." ;
            res.append(s);
            res+=std::to_string(year);

        }
    }
    else if(year<1918){
        if(((year%100!=0)&&(year%4==0))||(year%400==0)||year==1700||year==1800||year==1900){
            string s="12.09." ;
            res.append(s);
            res+=std::to_string(year);
        }

        else{
            string s="13.09." ;
            res.append(s);
            res+=std::to_string(year);

        }
    }
    else{
        string s="26.09." ;
            res.append(s);
            res+=std::to_string(year);

    }
    return res;
}
int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
