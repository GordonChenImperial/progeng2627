#include <iostream>
#include <vector>
#include <string>
#include <fstream>

bool search_vector(std::string s, const std::vector<std::string>& vin){
    for (int t =0; t<vin.size(); t++){
        if (vin[t]==s){
            return true;
        }
    }return false;
}

void intersection_vector(
    const std::vector<std::string>& vin1, 
    const std::vector<std::string>& vin2, 
    std::vector<std::string>& vout)
    {
    for (int i = 0; i<vin1.size();i++){
        for (int q = 0; q<vin2.size();q++){
            if (vin1[i]==vin2[q]){
                vout.push_back(vin1[i]);
            }
        }
    }
}
void union_vector(
    const std::vector<std::string>& vin1, 
    const std::vector<std::string>& vin2, 
    std::vector<std::string>& vout)
    {
    for (int i =0; i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for (int i =0; i<vin2.size();i++){
        if (!search_vector(vin2[i],vin1)){
            vout.push_back(vin2[i]);

        }

    }
}

// int search_vector(std::string s, const std::vector<std::string>& vin){}
int main(){
    std::ifstream house1;
    std::ifstream house2;
    std::ofstream intersection1;
    std::ofstream union1;
    house1.open("warehouse1.txt");
    std::string temp;
    std::vector<std::string> house1vector, house2vector,intersection_vector_output,union_vector_output;
    while(house1>>temp){
        house1vector.push_back(temp);        
    }
    house1.close();
    house2.open("warehouse2.txt");
    while(house2>>temp){
        house2vector.push_back(temp);        
    }
    intersection_vector(house1vector, house2vector, intersection_vector_output);
    union_vector(house1vector, house2vector, union_vector_output);
    std::ofstream outfile;
    outfile.open("intersection.txt");
    for (int i = 0; i<intersection_vector_output.size(); i++){
        outfile<<intersection_vector_output[i]<<std::endl;
    }
    outfile.close();
    outfile.open("union.txt");
    for (int i = 0; i<union_vector_output.size(); i++){
        outfile<<union_vector_output[i]<<std::endl;
    }
    outfile.close();

}