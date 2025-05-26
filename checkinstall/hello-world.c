#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <time.h>

void mostrar_sistema() {
    struct utsname info;
    uname(&info);
    printf("Sistema: %s %s\n", info.sysname, info.release);
    printf("Host: %s\n", info.nodename);
}

void mostrar_proceso() {
    printf("PID: %d\n", getpid());
    printf("Directorio: %s\n", getcwd(NULL, 0));
}

int main() {
    printf("=== HELLO WORLD SISTEMA ===\n");

    time_t now = time(NULL);
    printf("🕐 %s", ctime(&now));

    mostrar_sistema();
    mostrar_proceso();

    printf("✅ CheckInstall funcionando!\n");
    return 0;
}
