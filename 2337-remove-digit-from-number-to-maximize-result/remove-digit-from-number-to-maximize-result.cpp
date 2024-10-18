class Solution {
public:
    string removeDigit(string number, char digit) {
      //consider all occurence;
      string maxi="";
      for(int i=0;i<number.size();i++){
        if(number[i]==digit){
            string fnew="";
            if(i+1<number.size()){
             fnew=number.substr(0,i)+number.substr(i+1,number.size()-(i+1));
            }
            else{
                if(number[number.size()-1]==digit){
                    fnew=number.substr(0,number.size()-1);
                }
            }
           maxi=max(maxi,(fnew));
         //  cout<<stoi(fnew)<<endl;
        }
      }
      
      return (maxi);
    }
};