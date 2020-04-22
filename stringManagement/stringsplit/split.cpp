#include <iostream>
#include <vector>
#include <sstream>	// for split2 only
using namespace std;

/**
* this sample code is based on:
* https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
*/

/** when delimiter is string */
vector<string> split(string s, string delim){
  vector<string> res;
  size_t start=0, end, len_delim = delim.size();
  while((end=s.find(delim, start))!=string::npos){
    res.push_back(s.substr(start, end-start));
    start = end+len_delim;    
  }
  res.push_back(s.substr(start));  
  return res;
}

/** when delimiter is char */
vector<string> split2(const string &s, char delim) {
  vector<string> res;
  stringstream ss(s);
  string buf;
  while (getline(ss, buf, delim))
      res.push_back(buf);
  return res;
}

int main() {
	cout << "<split1>" << endl;  
	string testString = "apple//orange// pineapple//banana //avo/cado";
  vector<string>res = split(testString, "//");
  for(auto str:res)
    cout << str << endl;
  
  cout << "\n<split2>" << endl;
  string testString2 = "apple orange  pineapple banana avo cado";
  vector<string>res2 = split2(testString2, ' ');
  for(auto str:res2)
    cout << str << endl;

  return 0;
}
