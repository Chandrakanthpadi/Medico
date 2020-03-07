#include <bits/stdc++.h>
#include<conio.h>

using namespace std;

int main()
{
    fstream file;
    string word, t, q, filename,key;

    filename = "sample.txt";

    file.open(filename.c_str());

    map<string,pair<string,string>>m;
    while (file >> word)
    {
        string key = word;
        file >> word;
        string v1 = word;
        file >> word;
        string v2 = word;
        m[key] = make_pair(v1,v2);

    }

    while(1)
	{
    cout<<"Enter tablet name: ";
	cin>>key;
	if(key=="0")
	 break;
	auto it=m.find(key);
	if(it==m.end())
	  cout<<"NOT FOUND"<<endl;
	else
	  cout<<"Rack = "<<m[key].first<<"  column = "<<m[key].second<<endl;
    }

    return 0;
}
