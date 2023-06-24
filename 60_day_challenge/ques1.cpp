#include<iostream>
using namespace std;

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp(numRows);
        for(int i=0;i<numRows;i++)
        {
            temp[i].resize(i+1);
            temp[i][0]=temp[i][i]=1;
            for(int t=1;t<i;t++)
            {
                temp[i][t]=temp[i-1][t-1]+temp[i-1][t];
            }
        }
        return temp;
    }
int main(){
    generate(5);
}