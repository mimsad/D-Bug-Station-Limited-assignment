//Question 2
//C++

#include <bits/stdc++.h>
using namespace std;

int number_of_candidate;
int target;
int candidates[35];
vector<int>answer;



void input(){

printf("Enter the number of candidates : ");
scanf("%d", &number_of_candidate);
printf("Enter candidates : ");
for(int i = 0; i < number_of_candidate; i++){
    scanf("%d", &candidates[i]);
}
printf("Enter target value : ");
scanf("%d", &target);
printf("\n");

}





void process_and_output(int present_target,  int start_index){
if(present_target < 0){
    return;
}
if(present_target == 0){
        printf("[ ");
    for(int i = 0; i < (int) answer.size(); i++){
        printf("%d ", answer[i]);
    }
    printf("]  ");
    return;
}

for(int i = start_index; i < number_of_candidate; i++){
    if(candidates[i] > present_target){
        break;
    }
answer.push_back(candidates[i]);
process_and_output(present_target - candidates[i], i);
answer.erase(answer.begin() + (int) answer.size()-1);
}

}



int main(){

input();
sort(candidates, candidates + number_of_candidate);
process_and_output(target, 0);
printf("\n");
return 0;

}


