class Solution {
public:

int buyChoco(vector<int>& prices, int money) {
  
    sort(prices.begin(),prices.end());
    int leftmoney=prices[0]+prices[1];
    if(money>=leftmoney){
        int a=money-leftmoney;
    return a;
        }
    else{
        return money;
}
}


       
    };