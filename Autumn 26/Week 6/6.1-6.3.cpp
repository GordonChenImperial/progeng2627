#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int size1 = v1.size();
    int size2 = v2.size();
    int index1 = 0, index2 = 0;
    while (index1<size1&&index2<size2){
        if (v1[index1]<=v2[index2]){
            merged.push_back(v1[index1]);
            index1++;
        }else{
            merged.push_back(v2[index2]);
            index2++;
        }
    }
    if(index1==size1){
        for (int d = index2; d<v2.size(); d++){
            merged.push_back(v2[d]);
        }
    }else{
        for (int d = index1; d<v1.size(); d++){
            merged.push_back(v1[d]);
        }
    }
}
int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    
    /*        
    std::string input_file_name = "", output_file_name = "";
    std::ifstream infile;
    std::cout<<"Please enter name of file to be opened."<<std::endl;
    std::cin>> input_file_name;
    std::cout<<"Please enter name of file to be written to."<<std::endl;
    std::cin>> output_file_name;
    infile.open(input_file_name);
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::string temp;
    std::vector<std::string> reversed;
    
    while(infile>>temp){
        reversed.push_back(temp);
        
    }
    infile.close();
    std::ofstream outfile;
    outfile.open(output_file_name);

    if (!outfile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }

    for (int i = reversed.size()-1; i>=0; i--){
        outfile<<reversed[i]<<std::endl;
    }
    outfile.close();
    */
           

}