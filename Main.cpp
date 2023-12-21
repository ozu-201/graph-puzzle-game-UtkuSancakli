//
// Created by us029467 on 12/21/2023.
//

#include <fstream>
#include <iostream>
#include <vector>
#include "Graph.h"

using namespace std;

int get_index(std::vector<string> v, string s){
    for(int i=0; i<v.size()-1; i++){
        if (v[i] == s){
            return i;
        }
    }
    return -1;
}

int main(){

    std::fstream newFile;
    newFile.open("C:\\Users\\TEMP\\CLionProjects\\graph-puzzle-game-UtkuSancakli\\dic", std::ios::in);


    std::vector <std::string> v3;
    std::vector <std::string> v4;
    std::vector <std::string> v5;

    if(newFile.is_open()){
        std::string word;
        while(getline(newFile, word)){
            if(word.size()==5){
                v5.push_back(word);
            }
            else if(word.size()==4){
                v4.push_back(word);
            }
            else if(word.size()==3){
                v3.push_back(word);
            }
            //std::cout << word << "\n";
        }
        newFile.close();
    }

    array::Graph graph3(v3.size());
    array::Graph graph4(v4.size());
    array::Graph graph5(v5.size());

    for(int i=0; i<v3.size()-1; i++){
        for(int j=i+1; j<v3.size(); j++){
            if(graph3.check(v3.at(i),v3.at(j))){
                graph3.addEdge(i, j);
                graph3.addEdge(j, i);
            }
        }
    }
    for(int i=0; i<v4.size()-1; i++){
        for(int j=i+1; j<v4.size(); j++){
            if(graph4.check(v4.at(i),v4.at(j))){
                graph4.addEdge(i, j);
                graph4.addEdge(j, i);
            }
        }
    }
    for(int i=0; i<v5.size()-1; i++){
        for(int j=i+1; j<v5.size(); j++){
            if(graph5.check(v5.at(i),v5.at(j))){
                graph5.addEdge(i, j);
                graph5.addEdge(j, i);
            }
        }
    }

    int idx = get_index(v3, "ayı");
    bool *visitedList = new bool[v3.size()];
    if (idx != -1)
        graph3.breadthFirstSearch(visitedList, idx);


    std::cout << "" << "\n";


    return 0;
}

