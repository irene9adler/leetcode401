/*A binary watch has 4 LEDs on the top which represent the hours (0-11), and the 6 LEDs on the bottom represent the minutes (0-59).
Each LED represents a zero or one, with the least significant bit on the right.
Example:

Input: n = 1
Return: ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]
Note:
The order of output does not matter.
The hour must not contain a leading zero, for example "01:00" is not valid, it should be "1:00".
The minute must be consist of two digits and may contain a leading zero, for example "10:2" is not valid, it should be "10:02".*/

class Solution {
public:
        void DFS(int len,int k,int curIndex,int val,vector<int> vec)
        {
            if(len == 4 && val < 12) vec.push_back(val);
            if(len == 6 && val < 60) vec.push_back(val);
            if(k == 0 || curIndex == len) return;
            DFS(len,k,curIndex + 1,val,vec);
            val += pow(2,curIndex);
            k--;
            curIndex++;
            DFS(len,k,curIndex,val,vec);
        }

        vector<string> readBinaryWatch(int num) {
            vector <string> res;
            vector <int> vec1,vec2;
            int i,j;
            for(i = max(0,num - 6);i <= min(4,num);i++)
            {
                DFS(4,i,0,0,vec1);
                DFS(6,num - i,0,0,vec2);
                for(i = 0;i < vec1.size();i++)
                {
                    for(j = 0;j < vec2.size();j++)
                    {
                        string str;
                        if(vec2[j] < 10)
                        {
                            str = "0" + to_string
                        }
                    }
                }
            }
    }
};
//我靠完全不能理解这个DFS啊
