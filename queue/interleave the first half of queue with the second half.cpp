#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int> second;
    int size = q.size();
    for(int i =0;i<size/2;i++)
    {
        int temp = q.front();
        q.pop();
        second.push(temp);
    }

    for(int i =0;i<size/2;i++)
    {
        int temp = second.front();
        second.pop();
        q.push(temp);
        temp = q.front();
        q.pop();
        q.push(temp);
    }
}

// input:- 10 20 30 40 50 60 70 80 90 100
// output:- 10 60 20 70 30 80 40 90 50 100
