#include <iostream>
#include <string>
#include <bitset>
using namespace std;
// recursive function to chain XOR on each bit
bool xorop(bitset<8> test, int i){
    if(i==test.size()-1)
        return test[i];
    return test[i]^xorop(test,i+1);
}
int main() {
    // let user input a string
    string myString;
    cout<<"\n    ----DEMO OF A BASIC INTEGRITY CHECK FUNCTION USED TO CHECKSUM----        ";
    cout << "\n\n     Enter in a string to see if it has an odd number of 1 bits:\n";
    getline (cin,myString);

    bool result= false;
    int count = 0;
    // convert string to bits
    cout<<"\n--"<<myString<<" CONVERTERTED TO BITS (8 per character)--\n";
    for (std::size_t i = 0; i < myString.size(); ++i){

        bitset<8> bits = bitset<8>(myString[i]);
        // output the bits
        cout<<"           char "<<i+1<<": "<<bits<<endl;
        result = result != xorop(bits,0);
        // find if string has even or odd # of 1's
        for(int j =0;j<bits.size();j++){
            if(bits[j]==1)
                count++;
        }
    }
    // display result of T or F
    cout<<"\n      ----Boolean logic result----         \n"<<"  "<<result;
    if(result==1)
        cout<<" (True, string has odd number of 1 bits)\n";
    if(result==0)
        cout<<" (False, string has even number of 1 bits)\n";

    // use the count of even bits to check if boolean function worked correctly
    cout<<"\n\n      ----VERIFICATION CHECK----         \n         Total number of 1's: "<<count<<endl;
    int check = count%2;
    cout<<"              "<< count <<" mod 2="<<result<<endl;
    if(check==result)
        cout<<"             CHECK PASSED\n";

    else
        cout<<"             CHECK FAILED\n";



    return 0;
}
