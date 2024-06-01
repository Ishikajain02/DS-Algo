class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int glass = 0, metal = 0, paper = 0;
        for (int i = 0; i <garbage.size(); i++) {
            if (garbage[i].find('M') != string::npos) {
                metal = i;
            }  if (garbage[i].find('P') != string::npos) {
                paper = i;
            }  if (garbage[i].find('G') != string::npos) {
                glass = i;
            }
        }
        cout<<metal<<" "<<glass<<" "<<paper<<endl;
        int time = 0;
        int j = 0;
        for (int i = 0; i <= metal; i++) {
            int cnt = 0;
            if (i != 0) {
                time += travel[j];
                j++;
            }
            for (int k = 0; k < garbage[i].size(); k++) {

                if (garbage[i][k] == 'M')
                    cnt++;
            }
            // time+=travel[j];
            time += cnt;
            // j++;
        }
        j = 0;
        for (int i = 0; i < paper + 1; i++) {
            if (i != 0) {
                time += travel[j];
                j++;
            }
            int cnt = 0;
            for (int k = 0; k < garbage[i].size(); k++) {
                if (garbage[i][k] == 'P')
                    cnt++;
            }
            // time+=travel[j];
            time += cnt;
            // j++;
        }
        j = 0;
        for (int i = 0; i < glass + 1; i++) {
            int cnt = 0;
            if (i != 0) {
                time += travel[j];
                j++;
            }
            for (int k = 0; k < garbage[i].size(); k++) {
                if (garbage[i][k] == 'G')
                    cnt++;
            }
            //  time+=travel[j];
            time += cnt;
            //   j++;
        }
        return time;
    }
};