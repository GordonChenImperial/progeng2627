#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main(){
    std::ifstream advert, dictionary;
    std::ofstream output;
    std::string ad_input_filename, dict_input_filename, output_filename, dict_temp, ad_temp;
    std::vector<std::string> original_word, translation;
    std::cout<<"Enter advert file name"<<std::endl;
    std::cin >> ad_input_filename;
    std::cout<<"Enter dictionary file name"<<std::endl;
    std::cin >> dict_input_filename;
    std::cout<<"Enter output file name"<<std::endl;
    std::cin >> output_filename;
    advert.open(ad_input_filename);
    dictionary.open(dict_input_filename);
    output.open(output_filename);
    while (dictionary>>dict_temp){
        original_word.push_back(dict_temp);
        dictionary>>dict_temp;
        translation.push_back(dict_temp);
    }
    while (advert>>ad_temp){
        for (int i=0; i<original_word.size(); i++){
            if (ad_temp==original_word[i]){
                output<<translation[i]<<" ";
                break;
            }else{
                if (i ==original_word.size()-1){
                    output<<ad_temp<<" ";
                    break;
                }
            }
        }
        
            
    }
    advert.close();
    dictionary.close();
    output.close();
}