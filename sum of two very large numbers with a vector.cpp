#include <iostream.h>
#include <conio.h>
#include <vector.h>

int main()
{
    vector <char> num1,num2,result;
    cout<<"Enter tow huge integer numbers to get the sum of them.\n";
     cout<<"Enter number one and press enter key.\n\n";
     char ch;
     while((ch=getch())!=13)
      {
          if(ch>='0'&& ch<='9')
            {
                cout.put(ch);
                ch-=48;
                num1.push_back(ch);
            }
      }
     cout<<"\n+"<<endl;
     while((ch=getch())!=13)
      {
          if(ch>='0'&& ch<='9')
            {
                cout.put(ch);
                ch-=48;
                num2.push_back(ch);
            }
      }
    cout<<"\n="<<endl;
    int min_size;
    min_size = num1.size() < num2.size() ?
               num1.size() : num2.size();
    bool carry=0;
    while(min_size>0)
     {
       if(num1.back()+num2.back()+carry<10)
        {
         result.push_back(num1.back()+num2.back()+carry);
         num1.pop_back();
         num2.pop_back();
         carry=0;
        }
       else
        {
    result.push_back((num1.back()+num2.back()+carry)%10);
         num1.pop_back();
         num2.pop_back();
         carry=1;
        }
      min_size--;
     }
   while(num1.size()!=0)
    {
      if(num1.back()+carry<10)
       {
           result.push_back(num1.back()+carry);
           num1.pop_back();
           carry=0;
        }
      else
        {
           result.push_back((num1.back()+carry)%10);
           num1.pop_back();
           carry=1;
        } 
    }
  while(num2.size()!=0)
    {
      if(num2.back()+carry<10)
        {
           result.push_back(num2.back()+carry);
           num2.pop_back();
           carry=0;
        }
      else
        {
           result.push_back((num2.back()+carry)%10);
           num2.pop_back();
           carry=1;
        }  
     }
   if(carry==1)
      result.push_back(1);
   while(result.size()>0)
    {
        cout.put(result.back()+48);
        result.pop_back();
    }
   cout<<endl;
  return 0;
} 
//end




Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com