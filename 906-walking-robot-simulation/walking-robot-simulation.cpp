class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x=0,y=0,maxd=0;
        set<string>s;
        for(int i=0;i<obstacles.size();i++){
            string key=to_string(obstacles[i][0])+"_"+to_string(obstacles[i][1]);
          s.insert(key);
        }
        pair<int,int>dir={0,1};
        for(int i=0;i<commands.size();i++){
            if(commands[i]==-2){
                dir={-dir.second,dir.first};
            }
            if(commands[i]==-1){
                dir={dir.second,-dir.first};
            }
            else{
                for(int steps=0;steps<commands[i];steps++){
                    int newx=x+dir.first;
                    int newy=y+dir.second;
                    string nexxt=to_string(newx)+"_"+to_string(newy);
                    if(s.find(nexxt)!=s.end())break;
                    x=newx;
                    y=newy;
                }
            }
            maxd=max(maxd,x*x+y*y);
        }
        return maxd;
    }
};