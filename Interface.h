// The MIT License (MIT)

// Copyright (c) 2019 David Johnson 

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

/* code */

#ifndef Interface_Header
#define Interface_Header

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

const char MAX(10); //or MAX = 10;

class RNG{
    private:
        struct Data1
	{char f_name[MAX]; //character array's
		char l_name[MAX];};
    
    int node_Counter;// counter if needed in the future..  

    public:
    Data1 Value[MAX]; //array of structures, saves session information for future features if needed..  
    void dMenu(); //display menu 
    void create_Rng(); //create rndom numbers
    void great(); //great user
    void cLs(); //custom clear screen
    void rngCheck(int check); // check-print number out 
};
#endif