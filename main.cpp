#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string s;
  while (true) {
    cin >> s;
    if (s == "TTYL") {
      cout << "talk to you later\n";
      break;
    }

    if (s == "CU") {
      cout << "see you\n";
    } else if (s == ":-)") {
      cout << "I¡¯m happy\n";
    } else if (s == ":-(") {
      cout << "I¡¯m unhappy\n";
    } else if (s == ";-)") {
      cout << "wink\n";
    } else if (s == ":-P") {
      cout << "stick out my tongue\n";
    } else if (s == "(~.~)") {
      cout << "sleepy\n";
    } else if (s == "TA") {
      cout << "totally awesome\n";
    } else if (s == "CCC") {
      cout << "Canadian Computing Competition\n";
    } else if (s == "CUZ") {
      cout << "because\n";
    } else if (s == "TY") {
      cout << "thank-you\n";
    } else if (s == "YW") {
      cout << "you¡¯re welcome\n";
    } else {
      cout << s << '\n';
    }
  }

  return 0;
}