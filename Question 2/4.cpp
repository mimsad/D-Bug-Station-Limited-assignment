//Question 4
//C++

#include <bits/stdc++.h>
using namespace std;
string S;


void input(){
getline(cin, S);
}

vector<int>process(string s) {
    vector<int>answer;
        for(int i = 0; i < (int) s.size(); i++) {
            char c = s[i];
            if(c == '+' || c == '-' || c == '*') {
                vector<int> leftside = process(s.substr(0, i));
                vector<int> rightside = process(s.substr(i+1));
                for (auto i : leftside) {
                    for (auto j : rightside) {
                        if(c == '+'){
                            answer.push_back(i + j);
                        }
                         if(c == '-'){
                            answer.push_back(i - j);
                         }
                        if(c == '*'){
                            answer.push_back(i * j);
                        }
                    }
                }
            }
        }
        if ((int)answer.size() == 0){
            answer.push_back(atoi(s.c_str()));
        }
        sort(answer.begin(), answer.end());
        return answer;
    }



 void output(vector<int>final_answer){

 printf("[ ");
 for(int i = 0; i < (int)final_answer.size(); i++){
    printf("%d ", final_answer[i]);
 }
 printf("]\n");

 }


int main()
{

    input();
    vector<int>final_answer = process(S);
    if(final_answer.size() == 0){
        printf("%s\n", S.c_str());
        return 0;
    }
output(final_answer);
return 0;

}

