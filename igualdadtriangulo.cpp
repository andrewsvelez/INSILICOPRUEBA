#ifdef JUDGE
#include <fstream>
std::ifstream cin("input.txt");
std::ofstream cout("output.txt");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif
#include <iomanip>

using namespace std;
  
int main() {
	ios::sync_with_stdio(false);
    double a, b,c;
    cin >> a >> b >> c;
    double ans=(a+b+c)/6.0;
    cout <<fixed<<setprecision(8) << ans<< std::endl;
    return 0;
}
