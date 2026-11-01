#include <iostream>
#include <vector>

double sum_vector(const std::vector<double> vin){
    double sum = 0;
    for (int i = 0; i < vin.size(); i++){
        sum += vin[i];
    }
    return sum;
}
int min_vector_element(const std::vector<double>& vin){
    int pos = 0, value;
    if (vin.size()!=0){
        value = vin[0];
        for (int i =0; i<vin.size(); i++){
            if (vin[i]<value){
                pos = i;
                value = vin[i];
            }
        } 
        return(pos);
    }else{
        return(-1);
    }
}
int search_vector(int n, const std::vector<int>&vin){
    for (int i =0; i<vin.size(); i++){
        if (vin[i]==n){
            return (i);
        }
    } 
    return(-1);
}
std::vector<int> from_1_to_n(int n){

    std::vector<int> vout;

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }
    return vout;
}
void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}
void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for (int i = 0; i<vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}
int main(){
    std::vector<int> v{1,2,3,4,5};
    std::vector<int> q{10,20,30,40,50};
    std::vector<int> s;
    append_vectors(v,q,s);
    for (int i = 0; i < s.size(); i++){
        std::cout << s[i] << std::endl;
    }

    from_1_to_n(5, v);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

    v = from_1_to_n(5);

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

    std::vector<int>test1{5, 6, 3, 1};
    std::vector<double>test2{};
    std::cout<<(search_vector(5, test1)==0)<<std::endl;
    std::cout<<(search_vector(2, test1)==-1);


    /*
    std::vector<int> indecies;
    int temp = 1, n,t,q,count = 0;
    std::vector<double> v2;

    std::vector<double> v{3, 0.5, -1};
    double expected_sum = 2.5;
    std::cout<<(std::abs(sum_vector(v)) - expected_sum) << std::endl;
    v = {2, -1.1, 7, -1.5};
    expected_sum = 6.4;
    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

    std::cout << "please enter a sequence terminated by 0" << std::endl;
    while (temp !=0){
        std::cin >> temp;
        sequence.push_back(temp);
    }
    std::cout << "you entered the following sequence" << std::endl;
    for (int i = 0; i < sequence.size(); i++){
        std::cout<<sequence[i]<<std::endl;
    }
    for (int i = sequence.size()-1; i>=0; i--){
        std::cout<<sequence[i]<<std::endl;
    }
    sequence[5] = 19239;
    std::cout<<sequence[5]<<std::endl;
    
    std::cout << "Please enter the number of values to be entered" << std::endl;
    std::cin >> n;
    for (int i=0; i < n; i++){
        std::cin >> q;
        v2.push_back(q);
    }

    std::cout << "Please enter the value of the target" << std::endl;
    std::cin >> t;
    for (int i=0; i < v.size(); i++){
        if (v[i]==t){
            // std::cout << v[i] << std::endl;
            count+=1;
            indecies.push_back(i);
        }
    }
    std::cout<<count <<" occurancies at indicies:"<<std::endl;
    for (int i = 0; i<indecies.size();i++){
        std::cout<<indecies[i]<<std::endl;
    }
    
   int z = 0;
    for(int i = 1; i < 6; i++){
        z = z + i;
        i++;
        std::cout << i << z << std::endl;

    }
    std::cout << z << std::endl;
    */
    





    
}