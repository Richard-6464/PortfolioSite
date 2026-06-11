#include <iostream>

using namespace std;

bool ok(int q[], int c) {
    for(int i = 0; i < c; i++) {
        if((q[i] == q[c]) || (c-i) == abs(q[c] - q[i])) {
            return false;
        }
    }
    return true;
}

void print(int q[]) {
    int i, j, k, l;
    typedef char box[5][7];
    box bb, wb, *board[8][8];
    
    for(i = 0; i<5; i++)
        for(j = 0; j < 7; j++) {
            bb[i][j] = ' ';
            wb[i][j] = char(219);
        }
    static box bq = { {char(219), char(219), char(219), char(219), char(219), char(219), char(219)},
                     {char(219), ' ', char(219), ' ', char(219), ' ', char(219)},
                     {char(219), ' ', ' ', ' ', ' ', ' ', char(219)},
                     {char(219), ' ', ' ', ' ', ' ', ' ', char(219)},
                     {char(219), char(219), char(219), char(219), char(219), char(219), char(219)} 
    };
                     
    static box wq = { {' ', ' ', ' ', ' ', ' ', ' ', ' ' },
                     {' ', char(219), ' ', char(219), ' ', char(219), ' ' },
                     {' ', char(219), char(219), char(219), char(219), char(219),' ' },
                     {' ', char(219), char(219), char(219), char(219), char(219), ' ' },
                     {' ', ' ', ' ', ' ', ' ', ' ', ' ' } 
    };
   
    
    for(i =0; i<8; i++)
        for(j = 0; j < 8; j++)
            if((i+j) % 2 == 0)
                board[i][j] = &wb;
            else
                board[i][j] = &bb;
    cout << " ";
    
    for(i = 0; i< 8; i++)
        if((i +q[i]) % 2 == 0)
            board[q[i]][i] = &bq;
        else
            board[q[i]][i] = &wq;
    
    for(i =0; i < 7*8; i++)
        cout << '_';
    cout << endl;
    
    for(i=0; i< 8; i++)
        for(k=0; k < 5; k++){
            cout << " " << char(179);
            for(j=0; j< 8; j++)
                for(l =0; l < 7; l++)
                    cout << (*board[i][j])[k][l];
            cout << char(179) << endl;
        }
        
        cout << " ";
        for(i = 0; i < 7*8; i++)
            cout << char(196);
        cout << endl<< endl;
        }


int main()
{
    int sol = 1;
    int q[8] = {0};
    int c = 0;
    q[0] = 0;
    while(c >= 0) {
        if(c > 7) {
            cout << "Solution #" << sol << endl;
            print(q);
            sol++;
            c--;
            q[c]++;
        }
        if(q[c] > 7) {
            q[c] = 0;
            c--;
            if(c !=-1) {
                q[c]++;
            }
        }
        else if(ok(q,c)) {
            c++;
        }
        else {
            q[c]++;
        }
    }
    return 0;
}
