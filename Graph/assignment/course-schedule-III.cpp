#include<bits/stdc++.h>
using namespace std;

int scheduleCourse(vector<vector<int>> &courses){
    sort(courses.begin(), courses.end());
    priority_queue<int> pq;
    int curr_time = 0;

    for(auto course : courses){

        int duration = course[0];
        int deadline = course[1];
        curr_time += duration;
        pq.push(duration);

        if(curr_time > deadline){
            curr_time -= pq.top();
            pq.pop();
        }
    }
    return pq.size();
}
int main(){
    vector<vector<int>> courses = {{100, 200}, {200, 1300}, {1000, 1250}, {2000, 3200}};
    cout<<scheduleCourse(courses);
    return 0;
}