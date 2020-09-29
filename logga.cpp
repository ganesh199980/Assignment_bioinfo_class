# include<iostream>
using namespace std;
# include<math.h>

int main(){
    double pri;
    cout <<"input pi" <<endl;
    cin >> pri;
    double prj;
    cout <<"input pj" <<endl;
    cin >> prj;
     double rpp= pri*prj;
     double pij;
     cout <<"input pij" <<endl;
     cin >> pij;
     double res = 2*(log2(pij/(pri *prj)));
     cout << res << endl;
     return 0;

}