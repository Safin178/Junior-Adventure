#include<bits/stdc++.h>
using namespace std;

FILE *fp;
int main()
{
   map<string,string>response;
            //    response["hello"] = "Hello there!";
            //    response["how are you?"] = "I'm just a computer program.";
            //    response["what's your name?"] = "I'm a chatbot.";
            //    response["if you had three wishes, what would you wish for?"] = "Best programmer , success in life , world tour.";
            //    response["what would you rather throw away:love or money?"] = "Money.";
            //    response["what's the most beautiful place you have ever seen?"] = "I think its macca ,i never seen this but i want in sha allah one day i can .";
            //    response["if you could erase one event from your history which one would you erase?"] = "Every bad thing which happened with me in past.";
            //    response["if your food is bad at a restaurant, would you say something?"] = "I suggest chef try to do better next time .";
            //    response["if You Could interview a famous Person, who would You choose?"] = "Its only our prime minister.";
            //    response["what have you learned from your life?"] = "Don't hear anyone only focus in your life";
            //    response["what's the stupidest thing you've ever done?"] = "Easily trust anyone.";
            //    response["do they like to take a stand or just let things go?"] = "Yes i like.";
            //    response["what is your favourite drink?"] = "It's drinko.";
            //    response["have you lived in more than one country?"] = "no";
            //    response["what's your worst habit?"] = "I'm so talkative.";
            //    response["who created you?"] = "I was created by a programmer.";
            //    response["bye"] = "Goodbye!";
            //    cout << response.size()<<endl;
            fp= fopen("questionproject2.txt","r");
        int n;

        fscanf(fp, "%d ", &n);
        string key,value;
        while(n--)
        {


            fscanf(fp,"%[^\n]", key);
            fscanf(fp,"%[^\n]", value);
            cout << key << endl << value <<endl<<endl;
            response[key] = value;
            fclose(fp);


        }
            for(auto u : response)
            {
                cout << u.first<<endl<<u.second<<endl<<endl;
            }

            return 0;



}
