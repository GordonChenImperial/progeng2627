#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main(){
    std::string input_file_name, temp, checklist_file_name, output_file_name;
    temp = "";
    std::ifstream infile, checklist;
    std::ofstream outfile;
    std::vector <std::string> items;
    std::vector <int> items_count;
    std::cout<<"Enter checklist file name"<<std::endl;
    std::cin >> checklist_file_name;
    std::cout<<"Enter input file name"<<std::endl;
    std::cin >> input_file_name;
    checklist.open(checklist_file_name);
    while (checklist>>temp){
        items.push_back(temp);
        std::cout<<temp<<std::endl;
        items_count.push_back(0);
    }
    checklist.close();
    infile.open(input_file_name);
    while (infile>>temp){
        for (int i = 0; i<items.size(); i++){
            if (temp==items[i]){
                items_count[i] = items_count[i] + 1;
            }
        }
    }
    infile.close();
    std::cout<<"Enter output file name"<<std::endl;
    std::cin >> output_file_name;
    outfile.open(output_file_name);
    for (int i =0; i<items.size(); i++){
        outfile << items[i]<< ": " << items_count[i] << " times"<< std::endl;
    }
    outfile.close();


}