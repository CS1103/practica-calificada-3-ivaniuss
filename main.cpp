#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
using namespace std;

    int number,max,min;
    float prom;
    string s,alias,st,marca;
    map<string,int>data1;
    vector<int>numeros;
    vector<string>aliados;
    ifstream file;



void valores(){

    vector<pair<int,string>> data;


        while(true){

            numeros.clear();aliados.clear();



            while(getline(file,s)){


                stringstream ss(s);

                if (ss>>st){
                    if (st[0] <='A' or st[0]>='Z')
                        aliados.push_back(st);
                    else{

                        for(int i=0; i < numeros.size(); i++)
                            data.push_back(make_pair(numeros.at(i),aliados.at(i)));

                        sort(begin(data),end(data));

                        sort(begin(numeros),end(numeros));
                        //cout<<numeros.end();
                        //for (const auto& item:numeros) {
                        //    contador+=item;

                        //}
                        //cout<<contador/numeros.end();

                        for (const auto&item:data)
                            cout<<item.first<<" "<<item.second<<endl;


                    }

                }
                if(ss>>number)
                    numeros.push_back(number);

            }
            for(int i=0; i < aliados.size(); i++)
                data.push_back(make_pair(numeros.at(i),aliados.at(i)));

            break;

        }
    }



int main() {

    file.open("bid_example.txt");

    valores();


//    data.insert(pair<string,int>(alias,number));









    return 0;
}