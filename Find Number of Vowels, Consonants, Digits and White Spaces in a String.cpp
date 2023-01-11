///Find Number of Vowels, Consonants, Digits and White Spaces in a String

/**
*
*   author :: 101rror
*
**/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;                               //101rror
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL))

#define T while(t--)
#define for2(i,a,b) for(i=a;i>=b;i--)
#define for3(i,a,b) for(i=a;i<=b;i=i+2)
#define for1(i,a,b) for(i=a;i<=b;i=i+1)
#define for4(i,a,b) for(i=a;i>=b;i=i-2)

#define fi first
#define se second
#define pb push_back
#define eb emplace_back

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fastread();

    char line[200];
    printf("Enter a line : ");
    cin.getline(line, 200);

    int vowel = 0, consonant = 0, digit = 0, space = 0;

    for(int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
        {
            vowel++;
        }
        else if(line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z')
        {
            consonant++;
        }
        else if(line[i] >= '0' && line[i] <= '9')
        {
            digit++;
        }
        else if(line[i] >= ' ')
        {
            space++;
        }
    }

    cout << endl;
    cout << "Vowel : " << vowel;
    cout << endl;
    cout << "Consonant : " << consonant;
    cout << endl;
    cout << "Digits : " << digit;
    cout << endl;
    cout << "White Spaces : " << space;
    cout << endl;

    return 0;
}
