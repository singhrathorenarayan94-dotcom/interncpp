#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("student.txt");

    file << "Narayan Singh Rathore" << endl;
    file << "CSE Student" << endl;

    file.close();

    cout << "Data written successfully";

    return 0;
}
