#include<bits/stdc++.h>
using namespace std;

map<string, int> blood;
map<int, int> birth;

struct node {
    string id, bloodGroup;
    string birthDay;
    string timeStamp;
};

bool cmp(node a, node b) {
    return a.timeStamp < b.timeStamp;
}

int main() {
    int n;
    cin >> n;
    vector<node> vec;
    for (int i = 0; i < n; i++) {
        string t1, t2, email, birth, bg;
        cin >> t1 >> email >> birth >> bg;
        int flag = 0;
        for (int j = 0; j < vec.size(); j++) {
            if (vec[j].id == email) {
                vec[j].timeStamp = t1;
                vec[j].bloodGroup = bg;
                vec[j].birthDay = birth;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            node temp;
            temp.id = email;
            temp.timeStamp = t1;
            temp.bloodGroup = bg;
            temp.birthDay = birth;
            vec.push_back(temp);
        }
    }

    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < vec.size(); i++) {
        string bg = vec[i].bloodGroup;
        int year = stoi(vec[i].birthDay.substr(vec[i].birthDay.length() - 4));
        blood[bg]++;
        birth[year]++;
    }

    vector<string> bloodGroup = {"A+", "A-", "AB+", "AB-", "B+", "B-", "O+", "O-"};
    for (int i = 0; i < bloodGroup.size(); i++) {
        cout << bloodGroup[i] << " " << blood[bloodGroup[i]] << endl;
    }

    map<int, int> ::iterator itr;
    for (itr = birth.begin(); itr != birth.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}
