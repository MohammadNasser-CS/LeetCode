class Solution {
public:
    int romanToInt(string s) {
      map<char, int> m;
m['I'] = 1;
m['V'] = 5;
m['X'] = 10;
m['L'] = 50;
m['C'] = 100;
m['D'] = 500;
m['M'] = 1000;
int total = 0;
for (int i = 0; i < s.length(); i++) {
	if (m[s[i]] < m[s[i + 1]]) {
		/* 
		this because the roman numbers are typed from larger to smaller, so if the current is smaller thar the next one,
		then this mean that the current is part of the next, so we subtract the current then in the next iteration
		add the next.
		Ex:
		s = 'IV';
		current is 'I', its smaller than the next 'V', so we subrtact the 'I', and in the next iteration we add the 'V'.
		in this way --> we subtract 1 from the total, and the add 5 to the total, which mean that we add 4.
		*/
		total -= m[s[i]];
	}
	else {
		total += m[s[i]];
	}
}
return total;
    }
};