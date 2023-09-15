//! ------------------------ A --------------------------------------

/* // ? ei line dlt korle A code kaj korbe {comment}


#include<bits/stdc++.h>
using namespace std;

int main()
{
   double x;
   cin >> x;             // jodi x = 4.5 hoi

   int y = x;            // then int y = 4 hobe
   double c = x - y;     // eikane 4.5 - 4 = 0.5 boshbe

   if(c != 0.0)          //jeheto c = 0.5 tai fractional num
   {
    cout << "Fractional Number!\n";
   }
   else
   {
   cout << "Not Fractional Number!\n";
   }

    // jodi x= 5.0 hoito then y = 5,
    // ( c = 5.0 - 5 ) mani c = 0.0 tokon not fractional

   return 0;
}


*/ //? ei line o dlt A korle code kaj korbe {comment}

// ! ------------------------------ B ----------------------------------------


/* //? ei line  dlt korle B code kaj korbe {comment}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k , r , b;
    cin >> k >> r >> b;

    int x;

   if(k > r + b)                        //karim
   {
         x = k % 10;
        if(x == 1 || x == 3 || x == 5)
        {
            cout << "Karim\n";
        }
   }
    if(r > k + b)                       //rahim
   {
         x = r % 10;
        if(x == 1 || x == 3 || x == 5)
        {
            cout << "Rahim\n";   
        }
   }
    if(b > r + k)                       //Barkat
    {
         x = b % 10;
        if(x == 1 || x == 3 || x == 5)
        {
            cout << "Barkat\n";
        }
   }
   else 
   {
    cout << "Draw\n";
   }

   return 0;
}


*/ //? eitao dlt korte hobe B er jonno


//!  ----------------- C ---------------------------------------------

/* //? ei line dlt korle C kaj korbe {comment}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << ( arr[0] + arr[1] + arr[2] ) << " ";            // 1st 3 ta number

    cout << ( arr[n-1] + arr[n-2] + arr[n-3] ) << endl;     // last 3 ta number
  
   return 0;
}


*/ // ? ei line dlt korle C kaj korbe {comment}