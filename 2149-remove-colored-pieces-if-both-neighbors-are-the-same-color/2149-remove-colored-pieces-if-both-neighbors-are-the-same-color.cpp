class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.length()<=2)return false;
        int count =0;
        int count1=0;
        /*for(int i=0;i<colors.length()-2;i++){
            if(colors[i]=='A' && colors[i+1] =='A'   && colors[i+2]=='A'){
              count++;
              i++;
            }
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B'){
                count1++;
                i++;
            }
            
        }
        cout<<count<<count1;
        if(count>=count1 && count!=0)return true;
        return false;*/
         int n=colors.size(),counta=0,countb=0; //Declare variables
        for(int i=1;i<n-1;i++)
        {
            if(colors[i-1]=='A' && colors[i]=='A' && colors[i+1]=='A')
            {
                counta+=1;
            }
            if(colors[i-1]=='B' && colors[i]=='B' && colors[i+1]=='B')
            {
                countb+=1;
            }
        }
        return counta>countb; 
    }
};