#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "First element of vector1 is: " << vector1.at(0) << endl;
    cout << "Second element of vector1 is: " << vector1.at(1) << endl;
    cout << "vector1 contains: " << vector1.size() << " elements" << endl << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "First element of vector2 is: " << vector2.at(0) << endl;
    cout << "Second element of vector2 is: " << vector2.at(1) << endl;
    cout << "vector2 contains: " << vector2.size() <<  " elements" << endl << endl;

    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "The first element of the first row of vector_2d is " << vector_2d.at(0).at(0) << endl;
    cout << "The second element of the first row of vector_2d is " << vector_2d.at(0).at(1) << endl;
    cout << "The first element of the second row of vector_2d is " << vector_2d.at(1).at(0) << endl;
    cout << "The second element of the second row of vector_2d is " << vector_2d.at(1).at(1) << endl << endl;
    
    cout << "Changing first element of vector1" << endl << endl;
    vector1.at(0) = 1000;
    cout << "The first element of the first row of vector_2d is " << vector_2d.at(0).at(0) << endl;
    cout << "The second element of the first row of vector_2d is " << vector_2d.at(0).at(1) << endl;
    cout << "The first element of the second row of vector_2d is " << vector_2d.at(1).at(0) << endl;
    cout << "The second element of the second row of vector_2d is " << vector_2d.at(1).at(1) << endl << endl;
    
    cout << "First element of vector1 is: " << vector1.at(0) << endl;
    cout << "Second element of vector1 is: " << vector1.at(1) << endl;
    
    return 0;
}