#include <iostream>
#include <map>
#include <string>


int main()
{
    std::multimap <int, std::string> mp;
    int n = 0;
    std::string str;

   while (std::cin >> n >> str) {
     mp.insert(std::make_pair(n, str));
   }
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        std::cout << it->first << " " << it->second << '\n';
    }

    return 0;
}

