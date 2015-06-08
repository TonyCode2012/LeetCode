// 166.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<unordered_map>
using namespace std;
class Solution {
public:
	string fractionToDecimal(int numerator, int denominator) {
		if (numerator == 0)
			return "0";
		string flag;
		if ((numerator>0 && denominator<0) || (numerator<0 && denominator>0))
			flag = "-";
		string sinteger;
		string sdecimal;
		long long resInteger = 0;
		if (numerator == INT_MIN) resInteger = -(INT_MAX + 1);
		else resInteger = numerator;
		return divide(resInteger, denominator);
	}
	string divide(long long t1, long long t2){
		if (t1 < 0) t1 = -t1;
		if (t2 < 0) t2 = -t2;
		unordered_map<int, int> mm;
		long long shang = 0;
		long long yu = 0;
		string res = to_string(t1/t2);
		if (t1%t2 == 0) return res;
		res += ".";
		for (yu = t1%t2; yu; yu%=t2){
			if (mm.count(yu) > 0){
				res.insert(mm[yu], 1, '(');
				res += ")";
				break;
			}
			mm[yu] = res.size();
			yu *= 10;
			res += to_string(yu / t2);
		}
		return res;
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	Solution ss;
	string res = ss.fractionToDecimal(1, -2147483647);
	return 0;
}

