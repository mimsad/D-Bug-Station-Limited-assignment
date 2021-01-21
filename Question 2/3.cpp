//Question 3
//C++

#include <bits/stdc++.h>
using namespace std;

string S;
vector<string>main_words;
vector<string>sorted_words;
bool visited[10005];


void input(){
getline(cin,S);
}


void separate_words(){
string temporary_string;
for(int i = 0; i < (int) S.size(); i++){
    if(S[i] == ' ' || i == (int) S.size()-1){
            if(i == (int) S.size()-1){
             temporary_string += S[i];
            }
        main_words.push_back(temporary_string);
        sorted_words.push_back(temporary_string);
        temporary_string.clear();
        continue;
    }
temporary_string += S[i];
}
}


void sorting_words(){
for(int i = 0; i < (int) main_words.size(); i++){
    sort(sorted_words[i].begin(),  sorted_words[i].end());
}
}


void check_anagram_and_output(){

memset(visited, false, sizeof(visited));

for(int i = 0; i < (int) main_words.size(); i++){
        if(visited[i] == true){
            continue;
        }
        visited[i] = true;
        printf("[");
        printf("%s ", main_words[i].c_str());
    for(int j = 0; j < (int) main_words.size(); j++){
        if(i == j || visited[j] == true){
            continue;
        }
        if(sorted_words[i] == sorted_words[j]){
        visited[j] = true;
        printf( "%s ", main_words[j].c_str());
        }
    }
    printf("] ");
}

}


int main(){

input();
separate_words();
sorting_words();
check_anagram_and_output();
return 0;

}



