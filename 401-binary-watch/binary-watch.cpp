class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>vc;
        for(int hh=0;hh<=11;hh++){
            for(int mm=0;mm<=59;mm++){
              if(__builtin_popcount(hh)+__builtin_popcount(mm)==turnedOn){
                string minu;
                if(mm<10)minu+='0';
                minu+=to_string(mm);
                vc.push_back(to_string(hh)+":"+(minu));
              }
            }
        }
        return vc;
    }
};