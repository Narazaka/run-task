#include <string.h>
#include <stdlib.h>

const char* cmd = "C:\\Windows\\System32\\schtasks.exe /RUN /TN \"";

int main(int argc, char** argv) {
    size_t len = strlen(argv[0]);
    argv[0][len - 4] = '"';
    argv[0][len - 3] = '\0';
    char* execcmd = malloc(sizeof(char*) * (strlen(cmd) + len - 2));
    strcpy(execcmd, cmd);
    strcat(execcmd, argv[0]);
    int result = system(execcmd);
    free(execcmd);
    return result;
}
