#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <stack>
#include <sstream>
#include <climits>
#include <deque>
#include <set>
#include <utility>
#include <queue>
#include <map>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <string>
#include <cassert>
#include <boost/algorithm/string.hpp>

using namespace std;

vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}
int main(){
    string files[] = { "./actor.csv", "./film.csv", "./theater.csv", "./show.csv", "./actin.csv" };
    string table_name[] = {"ACTOR", "FILM", "THEATER", "SHOW_FILM", "ACT_IN" };
    freopen("out.sql", "w", stdout);

    for (int i = 2; i < 5; ++i) {
        string file  =  files[i];
        freopen(file.c_str(), "r", stdin);
        string line;

        int line_num = 0;
        while(getline(cin, line)){
            line_num ++;
            boost::trim(line);
            vector<string> words = split(line,  ',');
            if(!isdigit(words[0][0])){
                if(line_num == 1)
                    continue;
                else
                    break;
            }
            cout << "insert into " << table_name[i] << " values " << "(";
            if(file == "./film.csv") words.pop_back();
            for (unsigned int i = 0; i < words.size(); ++i) {
                string t = words[i];
                if(!isdigit(t[0])) t = "'" + t + "'";
                if(t == "''") t = "null";
                cout << t;
                if(i != words.size() - 1)
                    cout << ", ";
            }

            cout << ");" << endl;
        }
    }
    return 0;
}
