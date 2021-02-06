#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    size_t len = strlen(argv[0]);
    argv[0][len - 4] = '"';
    argv[0][len - 3] = '\0';
    char* cmd = "C:\\Windows\\System32\\schtasks.exe /RUN /TN \"";
    strcat(cmd, argv[0]);
    return system(cmd);
}
