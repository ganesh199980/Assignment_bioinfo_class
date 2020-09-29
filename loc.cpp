# include<iostream>
using namespace std;
# include<vector>
int blosc(char c, char b){
    if( c == 'A' &&  b == 'A') return 4;
    if(( c == 'A' &&  b == 'R') || (c == 'R' &&  b == 'A')) return -1;
    if( c == 'R' &&  b == 'R') return 5;
    if(( c == 'A' &&  b == 'N')|| (c == 'N' &&  b == 'A')) return -2;
    if(( c == 'N' &&  b == 'R')|| (c == 'R' &&  b == 'N')) return 0;
    if( c == 'N' &&  b == 'N') return 6;
    if(( c == 'D' &&  b == 'A')|| (c == 'A' &&  b == 'D')) return -2;
    if(( c == 'D' &&  b == 'R')|| (c == 'R' &&  b == 'D')) return -2;
    if(( c == 'D' &&  b == 'N')|| (c == 'N' &&  b == 'D')) return 1;
    if( c == 'D' &&  b == 'D') return 6;
    if(( c == 'C' &&  b == 'A')|| (c == 'A' &&  b == 'C')) return 0;
    if(( c == 'C' &&  b == 'R')|| (c == 'R' &&  b == 'C')) return -3;
    if(( c == 'C' &&  b == 'N')|| (c == 'N' &&  b == 'C')) return -3;
    if(( c == 'C' &&  b == 'D')|| (c == 'D' &&  b == 'C')) return -3;
    if( c == 'C' &&  b == 'C') return 9;
    if(( c == 'Q' &&  b == 'A')|| (c == 'A' &&  b == 'Q')) return -1;
    if(( c == 'Q' &&  b == 'R')|| (c == 'R' &&  b == 'Q')) return 1;
    if(( c == 'Q' &&  b == 'N')|| (c == 'N' &&  b == 'Q')) return 0;
    if(( c == 'Q' &&  b == 'D')|| (c == 'D' &&  b == 'Q')) return 0;
    if(( c == 'Q' &&  b == 'C')|| (c == 'C' &&  b == 'Q')) return -3;
    if( c == 'Q' &&  b == 'Q') return 5;
    if(( c == 'E' &&  b == 'A')|| (c == 'A' &&  b == 'E')) return -1;
    if(( c == 'E' &&  b == 'R')|| (c == 'R' &&  b == 'E')) return 0;
    if(( c == 'E' &&  b =='N') || (c == 'N' &&  b == 'E')) return 0;
    if(( c == 'E' &&  b == 'D')|| (c == 'D' &&  b == 'E')) return 2;
    if(( c == 'E' &&  b == 'C')|| (c == 'C' &&  b == 'E')) return -4;
    if(( c == 'E' &&  b == 'Q')|| (c == 'Q' &&  b == 'E')) return 2;
    if( c == 'E' &&  b == 'E') return 5;
    if(( c == 'G' &&  b == 'A')|| (c == 'A' &&  b == 'G')) return 0;
    if(( c == 'G' &&  b == 'R')|| (c == 'R' &&  b == 'G')) return -2;
    if(( c == 'G' &&  b =='N') || (c == 'N' &&  b == 'G')) return 0;
    if(( c == 'G' &&  b == 'D')|| (c == 'D' &&  b == 'G')) return -1;
    if(( c == 'G' &&  b == 'C')|| (c == 'C' &&  b == 'G')) return -3;
    if(( c == 'G' &&  b == 'Q')|| (c == 'Q' &&  b == 'G')) return -2;
    if(( c == 'G' &&  b == 'E')|| (c == 'E' &&  b == 'G')) return -2;
    if( c == 'G' &&  b == 'G') return 6;
    if(( c == 'H' &&  b == 'A')|| (c == 'A' &&  b == 'H')) return -2;
    if(( c == 'H' &&  b == 'R')|| (c == 'R' &&  b == 'H')) return 0;
    if(( c == 'H' &&  b =='N') || (c == 'N' &&  b == 'H')) return 1;
    if(( c == 'H' &&  b == 'D')|| (c == 'D' &&  b == 'H')) return -1;
    if(( c == 'H' &&  b == 'C')|| (c == 'C' &&  b == 'H')) return -3;
    if(( c == 'H' &&  b == 'Q')|| (c == 'Q' &&  b == 'H')) return 0;
    if(( c == 'H' &&  b == 'E')|| (c == 'E' &&  b == 'H')) return 0;
    if(( c == 'H' &&  b == 'G')|| (c == 'G' &&  b == 'H')) return -2;
    if( c == 'H' &&  b == 'H') return 8;
    if(( c == 'I' &&  b == 'A')|| (c == 'A' &&  b == 'I')) return -1;
    if(( c == 'I' &&  b == 'R')|| (c == 'R' &&  b == 'I')) return -3;
    if(( c == 'I' &&  b =='N') || (c == 'N' &&  b == 'I')) return -3;
    if(( c == 'I' &&  b == 'D')|| (c == 'D' &&  b == 'I')) return -3;
    if(( c == 'I' &&  b == 'C')|| (c == 'C' &&  b == 'I')) return -1;
    if(( c == 'I' &&  b == 'Q')|| (c == 'Q' &&  b == 'I')) return -3;
    if(( c == 'I' &&  b == 'E')|| (c == 'E' &&  b == 'I')) return -3;
    if(( c == 'I' &&  b == 'G')|| (c == 'G' &&  b == 'I')) return -4;
    if(( c == 'I' &&  b == 'H')|| (c == 'H' &&  b == 'I')) return -3;
    if( c == 'I' &&  b == 'I') return 4;
    if(( c == 'L' &&  b == 'A')|| (c == 'A' &&  b == 'L')) return -1;
    if(( c == 'L' &&  b == 'R')|| (c == 'R' &&  b == 'L')) return -2;
    if(( c == 'L' &&  b =='N') || (c == 'N' &&  b == 'L')) return -3;
    if(( c == 'L' &&  b == 'D')|| (c == 'D' &&  b == 'L')) return -4;
    if(( c == 'L' &&  b == 'C')|| (c == 'C' &&  b == 'L')) return -1;
    if(( c == 'L' &&  b == 'Q')|| (c == 'Q' &&  b == 'L')) return -2;
    if(( c == 'L' &&  b == 'E')|| (c == 'E' &&  b == 'L')) return -3;
    if(( c == 'L' &&  b == 'G')|| (c == 'G' &&  b == 'L')) return -4;
    if(( c == 'L' &&  b == 'H')|| (c == 'H' &&  b == 'L')) return -3;
    if(( c == 'L' &&  b == 'I')|| (c == 'I' &&  b == 'L')) return 2;
    if( c == 'L' &&  b == 'L') return 4;
    if(( c == 'K' &&  b == 'A')|| (c == 'A' &&  b == 'K')) return -1;
    if(( c == 'K' &&  b == 'R')|| (c == 'R' &&  b == 'K')) return 2;
    if(( c == 'K' &&  b =='N') || (c == 'N' &&  b == 'K')) return 0;
    if(( c == 'K' &&  b == 'D')|| (c == 'D' &&  b == 'K')) return -1;
    if(( c == 'K' &&  b == 'C')|| (c == 'C' &&  b == 'K')) return -3;
    if(( c == 'K' &&  b == 'Q')|| (c == 'Q' &&  b == 'K')) return 1;
    if(( c == 'K' &&  b == 'E')|| (c == 'E' &&  b == 'K')) return 1;
    if(( c == 'K' &&  b == 'G')|| (c == 'G' &&  b == 'K')) return -2;
    if(( c == 'K' &&  b == 'H')|| (c == 'H' &&  b == 'K')) return -1;
    if(( c == 'K' &&  b == 'I')|| (c == 'I' &&  b == 'K')) return -3;
    if(( c == 'K' &&  b == 'L')|| (c == 'L' &&  b == 'K')) return -2;
    if( c == 'K' &&  b == 'K') return 5;
    if(( c == 'M' &&  b == 'A')|| (c == 'A' &&  b == 'M')) return -1;
    if(( c == 'M' &&  b == 'R')|| (c == 'R' &&  b == 'M')) return -1;
    if(( c == 'M' &&  b =='N') || (c == 'N' &&  b == 'M')) return -2;
    if(( c == 'M' &&  b == 'D')|| (c == 'D' &&  b == 'M')) return -3;
    if(( c == 'M' &&  b == 'C')|| (c == 'C' &&  b == 'M')) return -1;
    if(( c == 'M' &&  b == 'Q')|| (c == 'Q' &&  b == 'M')) return 0;
    if(( c == 'M' &&  b == 'E')|| (c == 'E' &&  b == 'M')) return -2;
    if(( c == 'M' &&  b == 'G')|| (c == 'G' &&  b == 'M')) return -3;
    if(( c == 'M' &&  b == 'H')|| (c == 'H' &&  b == 'M')) return -2;
    if(( c == 'M' &&  b == 'I')|| (c == 'I' &&  b == 'M')) return 1;
    if(( c == 'M' &&  b == 'L')|| (c == 'L' &&  b == 'M')) return 2;
    if(( c == 'M' &&  b == 'K')|| (c =='K' &&  b == 'M')) return -1;
    if( c == 'M' &&  b == 'M') return 5;
    if(( c == 'F' &&  b == 'A')|| (c == 'A' &&  b == 'F')) return -2;
    if(( c == 'F' &&  b == 'R')|| (c == 'R' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b =='N') || (c == 'N' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b == 'D')|| (c == 'D' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b == 'C')|| (c == 'C' &&  b == 'F')) return -2;
    if(( c == 'F' &&  b == 'Q')|| (c == 'Q' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b == 'E')|| (c == 'E' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b == 'G')|| (c == 'G' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b == 'H')|| (c == 'H' &&  b == 'F')) return -1;
    if(( c == 'F' &&  b == 'I')|| (c == 'I' &&  b == 'F')) return 0;
    if(( c == 'F' &&  b == 'L')|| (c == 'L' &&  b == 'F')) return 0;
    if(( c == 'F' &&  b == 'K')|| (c =='K' &&  b == 'F')) return -3;
    if(( c == 'F' &&  b == 'M')|| (c =='M' &&  b == 'F')) return 0;
    if( c == 'F' &&  b == 'F') return 6;
    if(( c == 'P' &&  b == 'A')|| (c == 'A' &&  b == 'P')) return -1;
    if(( c == 'P' &&  b == 'R')|| (c == 'R' &&  b == 'P')) return -2;
    if(( c == 'P' &&  b =='N') || (c == 'N' &&  b == 'P')) return -2;
    if(( c == 'P' &&  b == 'D')|| (c == 'D' &&  b == 'P')) return -1;
    if(( c == 'P' &&  b == 'C')|| (c == 'C' &&  b == 'P')) return -3;
    if(( c == 'P' &&  b == 'Q')|| (c == 'Q' &&  b == 'P')) return -1;
    if(( c == 'P' &&  b == 'E')|| (c == 'E' &&  b == 'P')) return -1;
    if(( c == 'P' &&  b == 'G')|| (c == 'G' &&  b == 'P')) return -2;
    if(( c == 'P' &&  b == 'H')|| (c == 'H' &&  b == 'P')) return -2;
    if(( c == 'P' &&  b == 'I')|| (c == 'I' &&  b == 'P')) return -3;
    if(( c == 'P' &&  b == 'L')|| (c == 'L' &&  b == 'P')) return -3;
    if(( c == 'P' &&  b == 'K')|| (c =='K' &&  b == 'P')) return -1;
    if(( c == 'P' &&  b == 'M')|| (c =='M' &&  b == 'P')) return -2;
    if(( c == 'P' &&  b == 'F')|| (c =='F' &&  b == 'P')) return -4;
    if( c == 'P' &&  b == 'P') return 7;
    if(( c == 'S' &&  b == 'A')|| (c == 'A' &&  b == 'S')) return 1;
    if(( c == 'S' &&  b == 'R')|| (c == 'R' &&  b == 'S')) return -1;
    if(( c == 'S' &&  b =='N') || (c == 'N' &&  b == 'S')) return 1;
    if(( c == 'S' &&  b == 'D')|| (c == 'D' &&  b == 'S')) return 0;
    if(( c == 'S' &&  b == 'C')|| (c == 'C' &&  b == 'S')) return -1;
    if(( c == 'S' &&  b == 'Q')|| (c == 'Q' &&  b == 'S')) return 0;
    if(( c == 'S' &&  b == 'E')|| (c == 'E' &&  b == 'S')) return 0;
    if(( c == 'S' &&  b == 'G')|| (c == 'G' &&  b == 'S')) return 0;
    if(( c == 'S' &&  b == 'H')|| (c == 'H' &&  b == 'S')) return -1;
    if(( c == 'S' &&  b == 'I')|| (c == 'I' &&  b == 'S')) return -2;
    if(( c == 'S' &&  b == 'L')|| (c == 'L' &&  b == 'S')) return -2;
    if(( c == 'S' &&  b == 'K')|| (c =='K' &&  b == 'S')) return 0;
    if(( c == 'S' &&  b == 'M')|| (c =='M' &&  b == 'S')) return -1;
    if(( c == 'S' &&  b == 'F')|| (c =='F' &&  b == 'S')) return -2;
    if(( c == 'S' &&  b == 'P')|| (c =='P' &&  b == 'S')) return -1;
    if( c == 'S' &&  b == 'S') return 4;
    if(( c == 'T' &&  b == 'A')|| (c == 'A' &&  b == 'T')) return 0;
    if(( c == 'T' &&  b == 'R')|| (c == 'R' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b =='N') || (c == 'N' &&  b == 'T')) return 0;
    if(( c == 'T' &&  b == 'D')|| (c == 'D' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'C')|| (c == 'C' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'Q')|| (c == 'Q' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'E')|| (c == 'E' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'G')|| (c == 'G' &&  b == 'T')) return -2;
    if(( c == 'T' &&  b == 'H')|| (c == 'H' &&  b == 'T')) return -2;
    if(( c == 'T' &&  b == 'I')|| (c == 'I' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'L')|| (c == 'L' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'K')|| (c =='K' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'M')|| (c =='M' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'F')|| (c =='F' &&  b == 'T')) return -2;
    if(( c == 'T' &&  b == 'P')|| (c =='P' &&  b == 'T')) return -1;
    if(( c == 'T' &&  b == 'S')|| (c =='S' &&  b == 'T')) return 1;
    if( c == 'T' &&  b == 'T') return 5;
    if(( c == 'W' &&  b == 'A')|| (c == 'A' &&  b == 'W')) return -3;
    if(( c == 'W' &&  b == 'R')|| (c == 'R' &&  b == 'W')) return -3;
    if(( c == 'W' &&  b =='N') || (c == 'N' &&  b == 'W')) return -4;
    if(( c == 'W' &&  b == 'D')|| (c == 'D' &&  b == 'W')) return -4;
    if(( c == 'W' &&  b == 'C')|| (c == 'C' &&  b == 'W')) return -2;
    if(( c == 'W' &&  b == 'Q')|| (c == 'Q' &&  b == 'W')) return -2;
    if(( c == 'W' &&  b == 'E')|| (c == 'E' &&  b == 'W')) return -3;
    if(( c == 'W' &&  b == 'G')|| (c == 'G' &&  b == 'W')) return -2;
    if(( c == 'W' &&  b == 'H')|| (c == 'H' &&  b == 'W')) return -2;
    if(( c == 'W' &&  b == 'I')|| (c == 'I' &&  b == 'W')) return -3;
    if(( c == 'W' &&  b == 'L')|| (c == 'L' &&  b == 'W')) return -2;
    if(( c == 'W' &&  b == 'K')|| (c =='K' &&  b == 'W')) return -3;
    if(( c == 'W' &&  b == 'M')|| (c =='M' &&  b == 'W')) return -1;
    if(( c == 'W' &&  b == 'F')|| (c =='F' &&  b == 'W')) return 1;
    if(( c == 'W' &&  b == 'P')|| (c =='P' &&  b == 'W')) return -4;
    if(( c == 'W' &&  b == 'S')|| (c =='S' &&  b == 'W')) return -3;
    if(( c == 'W' &&  b == 'T')|| (c =='T' &&  b == 'W')) return -2;
    if( c == 'W' &&  b == 'W') return 11;
    if(( c == 'Y' &&  b == 'A')|| (c == 'A' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'R')|| (c == 'R' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b =='N') || (c == 'N' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'D')|| (c == 'D' &&  b == 'Y')) return -3;
    if(( c == 'Y' &&  b == 'C')|| (c == 'C' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'Q')|| (c == 'Q' &&  b == 'Y')) return -1;
    if(( c == 'Y' &&  b == 'E')|| (c == 'E' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'G')|| (c == 'G' &&  b == 'Y')) return -3;
    if(( c == 'Y' &&  b == 'H')|| (c == 'H' &&  b == 'Y')) return 2;
    if(( c == 'Y' &&  b == 'I')|| (c == 'I' &&  b == 'Y')) return -1;
    if(( c == 'Y' &&  b == 'L')|| (c == 'L' &&  b == 'Y')) return -1;
    if(( c == 'Y' &&  b == 'K')|| (c =='K' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'M')|| (c =='M' &&  b == 'Y')) return -1;
    if(( c == 'Y' &&  b == 'F')|| (c =='F' &&  b == 'Y')) return 3;
    if(( c == 'Y' &&  b == 'P')|| (c =='P' &&  b == 'Y')) return -3;
    if(( c == 'Y' &&  b == 'S')|| (c =='S' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'T')|| (c =='T' &&  b == 'Y')) return -2;
    if(( c == 'Y' &&  b == 'W')|| (c =='W' &&  b == 'Y')) return 2;
    if( c == 'Y' &&  b == 'Y') return 7;
    if(( c == 'V' &&  b == 'A')|| (c == 'A' &&  b == 'V')) return 0;
    if(( c == 'V' &&  b == 'R')|| (c == 'R' &&  b == 'V')) return -3;
    if(( c == 'V' &&  b =='N') || (c == 'N' &&  b == 'V')) return -3;
    if(( c == 'V' &&  b == 'D')|| (c == 'D' &&  b == 'V')) return -3;
    if(( c == 'V' &&  b == 'C')|| (c == 'C' &&  b == 'V')) return -1;
    if(( c == 'V' &&  b == 'Q')|| (c == 'Q' &&  b == 'V')) return -2;
    if(( c == 'V' &&  b == 'E')|| (c == 'E' &&  b == 'V')) return -2;
    if(( c == 'V' &&  b == 'G')|| (c == 'G' &&  b == 'V')) return -3;
    if(( c == 'V' &&  b == 'H')|| (c == 'H' &&  b == 'V')) return -3;
    if(( c == 'V' &&  b == 'I')|| (c == 'I' &&  b == 'V')) return 3;
    if(( c == 'V' &&  b == 'L')|| (c == 'L' &&  b == 'V')) return 1;
    if(( c == 'V' &&  b == 'K')|| (c =='K' &&  b == 'V')) return -2;
    if(( c == 'V' &&  b == 'M')|| (c =='M' &&  b == 'V')) return 1;
    if(( c == 'V' &&  b == 'F')|| (c =='F' &&  b == 'V')) return -1;
    if(( c == 'V' &&  b == 'P')|| (c =='P' &&  b == 'V')) return -2;
    if(( c == 'V' &&  b == 'S')|| (c =='S' &&  b == 'V')) return -2;
    if(( c == 'V' &&  b == 'T')|| (c =='T' &&  b == 'V')) return 0;
    if(( c == 'V' &&  b == 'W')|| (c =='W' &&  b == 'V')) return -3;
    if(( c == 'V' &&  b == 'Y')|| (c =='Y' &&  b == 'V')) return -1;
    if( c == 'V' &&  b == 'V') return 4;
    return 0;
}

int main(){
    int m;
    int gap_penalty;
    cout << "input the size of seq" << endl;
    cin >> m;
    vector<char> first_seq;
    cout << "first seq" <<endl;
    for(int i=0; i<m; i++){
        char w;
        cin >> w;
        first_seq.push_back(w);
    }
    cout << "second seq" <<endl;
    vector<char> sec_seq;
    for(int i=0; i<m; i++){
        char w;
        cin >> w;
        sec_seq.push_back(w);
    }
    cout << "gap_penalty" << endl;
    cin>> gap_penalty;
    int dpr[m+1][m+1] ;

    
    dpr[0][0]=0;
    for(int i=0; i<m+1;i++){
        for(int j=0;j<m+1; j++){
            dpr[i][j]=0;

        }
    }
    /*
    int um=1;
    for(int i=1; i<m+1; i++){
        dpr[0][i] = -7*um;
        dpr[i][0] = -7*um;
        um++;
      //  cout << dpr[i][0] << endl;
    }
    */
    //cout << gap_penalty <<endl;
    for(int i=1; i<m+1; i++){
        char u= sec_seq[i-1];
        for(int j=1; j<m+1; j++){
            char v = first_seq[j-1];

            int blos = blosc(u,v);
            //cout <<"input from the given blosum matrix" << endl;
            //cin>> blos;
            dpr[i][j] = max(0,(max(max((dpr[i-1][j-1]+blos),(dpr[i-1][j]+gap_penalty)),(dpr[i][j-1]+gap_penalty))));
            //cout << "alignment_score" <<endl;
            //cout << dpr[i][j] <<endl;

        }
    }
    cout <<"LOCAL ALIGNMENT MATRIX IS AS FOLLOWS :" <<endl;
       for(int i=0; i<m+1; i++){
        for(int j=0; j<m+1; j++){
             cout << dpr[i][j] << "," ;

        }
        cout <<"\n";
    }
    
    
    return 0;
}