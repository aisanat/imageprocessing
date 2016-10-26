//
// Created by aizat on 10/26/16.
//

#include <iostream>

#include <string.h>

#include<cv.h>

#include <opencv2/opencv.hpp>

#include <highgui.h>

using namespace cv;
using namespace std;

string imgPath_1 ="/home/aizat/first.jpg";
string imgPath_2 = "/home/aizat/neznakomka.jpg";
Mat mat1 = imread(imgPath_1), mat2 = imread(imgPath_2), res;

void bitwise ();

int main() {
    bitwise();
    return 0;
}

void helloWorld(){
    cout<<"Hello";
}

void bitwise (){
    cvNamedWindow("First image");
    cvNamedWindow("Second image");

    imshow("Fisrt image", mat1);
    imshow("Second image", mat2);

    cvNamedWindow("bit_And",1);

    cvNamedWindow("bit_Or",1);

    cvNamedWindow("bit_Xor",1);
    bitwise_and(mat1,mat2,res);
    bitwise_and, mat1, mat2 ;
    imshow("bit_And", res);

    bitwise_or(mat1,mat2,res);
    imshow("bit_Or", res);

    bitwise_xor(mat1,mat2,res);
    imshow("bit_Xor", res);

    waitKey(0);
}