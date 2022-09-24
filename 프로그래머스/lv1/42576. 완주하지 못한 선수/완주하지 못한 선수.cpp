#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(),completion.end());
    
    for(int i = 0 ; i < participant.size(); i++)
    {
       if(participant[i] != completion[i]) 
       {
           return participant[i];
       }
    }
    cout << completion[participant.size() - 2];
    return answer;
}