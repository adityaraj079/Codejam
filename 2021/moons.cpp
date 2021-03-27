#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int a=0;
    cin>>T;
    while (T--)
    {
        int X,Y, output =0;
        int caseNo = 0;
        caseNo += 1;
        cin>>X>>Y;
        string input_string;
        cin>>input_string;
        int N = input_string.length();
        for (int i=0; i<N-1; i++)
        {

            if (input_string.at(i) == 'C' && input_string.at(i+1) == '?' )
            {
                input_string[i+1] = 'C';
            }
            else if (input_string.at(i) == 'J' && input_string.at(i+1) == '?' )
            {
                input_string[i+1] = 'J';
            }
            else if (input_string.at(i) == '?' && input_string.at(i+1) == 'C' )
            {
                input_string[i] = 'C';
            }
            else if (input_string.at(i) == '?' && input_string.at(i+1) == 'J' )
            {
                input_string[i] = 'J';
            }


        }
        for (int i=0; i<N-1; i++)
        {

            if (input_string.at(i) == 'C' && input_string.at(i+1) == 'J' )
            {
                output += X;
            }
            else if (input_string.at(i) == 'J' && input_string.at(i+1) == 'C' )
            {
                output += Y;
            }

        }
        a++;
        cout << "Case #" << a << ':' << " " << output << endl;
    }
    return 0;
}
