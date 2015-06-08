// 29.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int divide(int dividend, int divisor) {
		double res = 0;
		int count = 0;
		int dpos = 0;
		for (; dividend; dividend -= divisor){
			count++;
			if (dividend < divisor){
				dividend = 10;
				dpos++;
				res += (count*pow(10,-dpos));
				count = 0;
			}
		}
		return res;

		/*string s1 = to_string(dividend);
		string s2 = to_string(divisor);
		int pos = 0;
		string stmp = s1.substr(0,s2.size());
		pos += s2.size();
		if (stmp.compare(s2) > 0){
			stmp = s1.substr(0,s2.size()+1);
			pos++;
		}
		int t1 = atoi(stmp.c_str());
		int t2 = atoi(s2.c_str());
		int count = 0;
		for (; t1 >= t2; t1 -= t2){
			count++;
		}
		stmp = to_string(t1);
		int offset = s2.size() - stmp.size();
		stmp += s1.substr(pos, offset);
		pos += offset;*/
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	Solution ss;
	ss.divide(1,19);
	return 0;
}

