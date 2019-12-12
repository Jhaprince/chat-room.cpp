#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,k,l,m;
    string s;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s.at(i)=='h')
        {
            for(j=i;j<s.size();j++)
            {
                if(s.at(j)=='e')
                {
                    for(k=j;k<s.size();k++)
                    {
                        if(s.at(k)=='l')
                        {
                            for(l=k+1;l<s.size();l++)
                            {
                                if(s.at(l)=='l')
                                {
                                    for(m=l;m<s.size();m++)
                                    {
                                        if(s.at(m)=='o')
                                        {
                                            cout<<"YES";

                                            return 0;
                                        }



                                    }
                                    cout<<"NO";
                                    return 0;
                                }

                            }
                            cout<<"NO";
                            return 0;
                        }

                    }
                    cout<<"NO";
                    return 0;
                }

            }
            cout<<"NO";
            return 0;

        }

    }
    cout<<"NO";

}
