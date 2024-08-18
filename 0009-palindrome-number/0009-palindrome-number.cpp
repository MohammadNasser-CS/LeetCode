class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0)return false;
       int y = 0,temp=x;
while (temp > 0)
{
    y+= temp % 10;
    temp /= 10;
    if(temp != 0)
        y *= 10;
}
if(x==y) return true;
return false;
    }
};