#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations)
      {

        stack<int> sum;
       // sum.push(0);
        for(int i = 0; i < (int)operations.size(); i++)
        {
            if(operations[i] != "D" || operations[i] != "+" || operations[i] != "C")
            {
            //       stringstream ss; 
            //          string str = operations[i];
            //           int x;
            //             ss << str;
            //             ss >> x;
               // int x = stoi(operations[i]);
               
                sum.push(stoi(operations[i]));
            }
            else if(sum.empty())continue;
            else if(operations[i] == "D")
            {
                sum.push((2 * sum.top()));
            }
            else if(operations[i] == "C") sum.pop();
            else if(operations[i] == "+")
            {
                int k = sum.top();
                sum.pop();
                int r = sum.top();
                sum.push(k);
                sum.push(r+k);
            }
        }
        int a = 0;
        while((!sum.empty()))
        {
            a = a + sum.top();
            sum.pop();
        }
        return (a);
        
    }
};

int main()
{

    return 0;
}