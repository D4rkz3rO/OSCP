C code to spawn shell 
compile with -w flag

int main(void) {
setgid(0); setuid(0);
execl("/bin/sh", "sh", 0);
}
