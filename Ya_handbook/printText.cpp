#include <iostream>
#include <string>
#include <vector>
using std::string;

int main() {
   
   string s1 = "C++ is a general-purpose "
      "programming language with a bias "
         "towards systems programming that",
   s2 = "  - is a better C",
   s3 = "  - supports data abstraction",
   s4 = "  - supports object-oriented programming",
   s5 = "  - supports generic programming.";

   std::vector<string> text = {s1, s2, s3, s4, s5};

   for (const string& s : text)
      std::cout << s << "\n";

   return 0;
}
