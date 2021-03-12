#include <fstream>
#include <iostream>
#include <string>

// using std::cin, std::cout, std::endl, std::string;
using namespace std;

int main() {
    //take input for filename
    string input_file, output_file;
    cout << "Enter input file name:" << endl;
    cin >> input_file;
    cout << "Enter output file name:" << endl;
    cin >> output_file;

    //read file's contents and write them to the output file
    ifstream fin(input_file);
    ofstream fout(output_file);

    cout << "........................" << endl;
    if (fin.is_open() && fout.is_open()) {
        //use files
        while (!fin.eof()) {
            string word;
            fin >> word;
            cout << word << endl;
            fout << word; 
        }
    }
    cout << "........................" << endl;

    cout << "Output file generated." << endl;
}