#include<iostream>
#include<vector>

using namespace std;

const int N = 8;
vector<string> board(N);
int count = 0;
vector<bool> column(N,false),primary(2*N-1,false),secondary(2*N-1,false);

//ideally be starting from 0
void place(int row){
    if (row == N){
        count++;
        return;
    }

    for(int i = 0;i<N;i++){
        if(board[row][i] == '.' && !column[i] && !primary[row - i + N -1] && !secondary[row + i]){
            column[i] = primary[row - i +N -1] = secondary[row + i] = true ;//place a queen
            place(row+1);
            column[i] = primary[row - i +N -1] = secondary[row + i] = false ; //backtrack

        }
    }
}
