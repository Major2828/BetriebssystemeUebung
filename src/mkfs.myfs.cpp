//
//  mk.myfs.cpp
//  myfs
//
//  Created by Oliver Waldhorst on 07.09.17.
//  Copyright © 2017 Oliver Waldhorst. All rights reserved.
//

#include "myfs.h"
#include "blockdevice.h"
#include "macros.h"

int main(int argc, char *argv[]) {
    int errorNumber = 0;
    int filecount = argc -1;
    // TODO: Implement file system generation & copying of files here
    if(argc > 0) {
        errorNumber = BlockDevice::create(argv[0]);
        if (errorNumber < 0) {
            error("mkfs.myfs containerdatei [input-datei...]\");");
            return errorNumber;
        }
    }
    
    if (filecount > 0) {
        while (filecount > 0) {
            //Datei erstekken
            //Datei lesen
            //Datein schreiben
            filecount--;
        }
    }
    return 0;
}
