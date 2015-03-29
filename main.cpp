//
//  main.cpp
//  pascalTriangle
//
//  Created by hambarkh on 29/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>


using namespace std;

bool validateRC(int row,int col);
int calculateVal(int r,int c);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int row,col;
    cout << "Enter Row no. : " ;
    cin >> row;
    cout << endl << "Enter Col no.: ";
    cin >> col;
    if(!validateRC(row,col))
    {
        cout << "Bad Rows and Columns." << endl;
        return 0;
    }
    cout << "Vlue is " << calculateVal(row,col) << endl;
    return 0;
}

bool validateRC(int r,int c)
{
    if (c > r) {
        return false;
    }
    return true;
}

int calculateVal(int row, int col)
{
    if (col>row) {
        return 0;
    }
    if (row == 0 || col == 0 ) {
        return 1;
    }
    return calculateVal(row-1, col-1) + calculateVal(row-1, col);
}
