class Solution {
public:
    string largestPalindrome(int n, int k) {
       
       
        int flag = 0;
        if(n%2!=0) flag = 1;
        string num ;

        if(k==1)
        {
            for(int i=1;i<=n;i++)
            {
                num += "9";
            }
        }


        else if(k==2)
        {
            if (n==1) num = "8";
            else
            {
                num = "8";
                for (int i=1;i<n-1;i++)  num +=  "9";
                num = num + "8";   
            } 
        }


        else if(k==3)
        {
            for(int i=1;i<=n;i++)
            {
                num += "9";
            }
        }

        else if(k==4)
        {
            if (n==1) num = "8";
            else if (n==2) num = "88";
            else if (n==3) num = "888";
            else
            {
                num = "88";
                for (int i=2;i<n-2;i++)  num += "9";
                num += "88"; 
            }
        }

        
        else if(k==5)
        {
            if (n==1) num = "5";
            else
            {
                num = "5";
                for (int i=1;i<n-1;i++)  num += "9";
                num += "5";
            }
        }
        

        else if(k==6)
        {
            if (flag==1)
            {
                if(n==1) num = "6";
                else
                {
                    num = "8";
                    for(int i=1;i<n/2;i++) num += '9';
                    num = num + '8';
                    for(int i=1;i<n/2;i++) num += '9';
                    num += '8';
                }
            }
            else
            {
                if (n==2) num = "66";
                else if (n==4) num = "8778";
                else
                {
                    num = '8';
                    for(int i=1;i<n/2-2;i++) num += '9';
                    num += '9';
                    num += '7';
                    num += '7';
                    num += '9';
                    for(int i=1;i<n/2-2;i++) num += '9';
                    num += '8';
                }
            }
        }

        else if(k==7)
        {
           string check;
           if(n==1) num = '7';
           else if(n==2) num = "77";
           else if(n==3) num = "959";

           else if (flag==1)
           {
            for(int i=0;i<n/2;i++) num += '9';
            check = num;
            for (char i = '9'; i>='0' ; i--)
            {
                check = check + i;
                for(int i=0;i<n/2;i++) check += '9';

                int sum=0;
                int fl=0;
                string st;
                if (check.size()%3==1) check = "00"+ check;
                else if (check.size()%3==2) check = "0"+check;
                for(int i=check.size()-1;i>=2;i=i-3)
                {
                    st = st + check[i-2] + check[i-1] + check[i];
                    if (fl==0) 
                    {
                        sum += stoi(st);
                        fl=1;
                    }
                    else 
                    {
                        sum -= stoi(st);
                        fl=0;
                    }
                    st="";
                }
                
                if(sum%7 == 0) break;
                check = num;
            }
            num = check;
           }
           else
           {
            for(int i=0;i<(n/2-1);i++) num += '9';
            check = num;
            for (char i = '9'; i>='0' ; i--)
            {
                check += i;
                check += i;
                for(int i=0;i<(n/2-1);i++) check += '9';


                int sum=0;
                int fl=0;
                string st;
                if (check.size()%3==1) check = "00"+ check;
                else if (check.size()%3==2) check = "0"+check;
                for(int i=check.size()-1;i>=2;i=i-3)
                {
                    st = st + check[i-2] + check[i-1] + check[i];
                    if (fl==0) 
                    {
                        sum += stoi(st);
                        fl=1;
                    }
                    else 
                    {
                        sum -= stoi(st);
                        fl=0;
                    }
                    st="";
                }
                
                if(sum%7 == 0) break;
                check = num;
            }
            num = check;
           }
        if(num[0]=='0' && num[1]=='0')
        num.erase(num.begin(),num.begin()+2);
        else if(num[0]=='0') 
        num.erase(num.begin());
        }


        else if(k==8)
        {
            if (n==1) num = '8';
            else if (n==2) num = "88";
            else if (n==3) num = "888";
            else if (n==4) num = "8888";
            else if (n==5) num = "88888";

            else
            {
                num = "888";
                for (int i=3;i<n-3;i++)  num += '9';
                num += "888"; 
            }

        }


        else if(k==9)
        {
            for(int i=1;i<=n;i++)
            {
                num += '9';
            }
        }
        return num;
    }
};