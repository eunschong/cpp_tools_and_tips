/**
* this sample code is based on:
* https://stackoverflow.com/questions/11635/case-insensitive-string-comparison-in-c
*/

/** With algorithm (c++14)*/
#include <algorithm>
bool str_iequal(const string& a, const string& b){
	size_t sz = a.size();
  if (b.size() != sz)
	  return false;
	return equal(a.begin(), a.end(), c.begin(),
	  [](const char& lhs, const char& rhs){
  	  return tolower(lhs)==tolower(rhs);
    });
}

/** Otherwise*/
bool str_iequal(const string& a, const string& b){
    size_t sz = a.size();
    if (b.size() != sz)
        return false;
    for (size_t i = 0; i < sz; ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}
