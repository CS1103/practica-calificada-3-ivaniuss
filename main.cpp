#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
using namespace std;

    int number,in;
    string s,alias,st;
    map<string,int>data1;
    vector<int>numeros;
    vector<string>aliados;
    ifstream file;



void valores(){

    vector<pair<string,int>> data;



    while(true){

        numeros.clear();aliados.clear();
//        getline(file,s);

//        if (s[0]>='A' && s[0] <='Z')




        while(getline(file,s)){

            stringstream ss(s);

            if (ss>>st){
                if (st[0] <='A' or st[0]>='Z')
                    aliados.push_back(st);
                else{
                    for(int i=0; i < aliados.size(); i++)
                        data.push_back(make_pair(aliados.at(i),numeros.at(i)));
                   // sort(begin(data),end(data));

                    for(auto &item:data)
                        cout << item.first<<" "<<item.second<< endl;
                    valores();
                }

            }
            if(ss>>number)
                numeros.push_back(number);

        }
        for(int i=0; i < aliados.size(); i++)
            data.push_back(make_pair(aliados.at(i),numeros.at(i)));

        break;

    }


}
int main() {

    file.open("bid_example.txt");

    valores();


//    data.insert(pair<string,int>(alias,number));









    return 0;
}