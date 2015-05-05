//
//  main.c
//  3-D Box
//
//  Created by Oliver Andrews on 2015-05-05.
//  Copyright (c) 2015 Oliver Andrews. All rights reserved.
//

#include <stdio.h>


typedef struct {
    float length;
    float height;
    float width;
} Box;

// functions prototypes
float firstBoxFitsIntoSecondBox(Box, Box);
float volumeOfBox(Box);


int main(int argc, const char * argv[]) {

    Box firstBox = {1,2,5};
    volumeOfBox(firstBox);
    
    Box secondBox = {1,4,5};
    volumeOfBox(secondBox);
    
    firstBoxFitsIntoSecondBox(firstBox, secondBox);
    
    return 0;
    
}



// function definitions
float firstBoxFitsIntoSecondBox(Box firstBox, Box secondBox) {
    float fitsInto = volumeOfBox(firstBox)/volumeOfBox(secondBox);
    printf("%f\n", fitsInto);
    return fitsInto;
}

float volumeOfBox(Box boxOne) {
    float theBox = boxOne.length*boxOne.height*boxOne.width;
    printf("%f\n", theBox);
    return theBox;
}
