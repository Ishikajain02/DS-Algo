class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        set<char>s;
        for(int i=0;i<password.size();i++){
            cout<<password[i]<<endl;
            cout<<int(password[i])<<endl;

        if(password[i]>=48 && password[i]<=57 ){
           if(s.find(password[i])==s.end())ans+=3;
           s.insert(password[i]);

          

        }
        else if(password[i]>=65 && password[i]<=90 ){
            if(s.find(password[i])==s.end())ans+=2;
              s.insert(password[i]);

            
        }
        else if(password[i]>=97 && password[i]<=122 ){
            if(s.find(password[i])==s.end())ans+=1;
              s.insert(password[i]);
           
        }
        else {
           if(s.find(password[i])==s.end())ans+=5;
              s.insert(password[i]);
        }
        }
       
//return   occurdigit+occuralphabet+occurbigger+diff;
        return ans;
    }
};