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
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

typedef struct{
std::string name;
off_t size;
uid_t userID;
gid_t groupID;
time_t last_time;
time_t modi_time;
time_t change_time;
}fileStats;

int main(int argc, char *argv[]) {
if(argc >=3){
getStats((argc-2), (argv+2))
}else{
return -1;
}
	return 0;
}
void getStats(int length,char *filenames){
struct stat sb;
for(int i = 0; i < length;i++){
stat(filenames[i],&sb);
fileStats status;
status.name( Path::GetFileName(filenames[i]));
status.size = sb.st_size;
status.userID = geteuid(); 
status.groupID = getegid();
status.modi_time = sb.st_mtime;
status.last_time = time();
status.change_time = time();
}



  
}