#include <stdio.h>
#include <stdlib.h>
#include <fcgiapp.h>

int main() {
    if (FCGX_Init()) {
        return 1;
    }
    FCGX_Request req;
    FCGX_InitRequest(&req, 0, 0);
    while (FCGX_Accept_r(&req) >= 0) {
        FCGX_FPrintF(req.out, "Content-Type: text/html\n\n");
        FCGX_FPrintF(req.out, "<html>\n");
        FCGX_FPrintF(req.out, "<head>\n");
        FCGX_FPrintF(req.out, "<title>Hello world!</title>\n");
        FCGX_FPrintF(req.out, "</head><body>\n");
        FCGX_FPrintF(req.out, "<h1>Hello world! by Tmicaela</h1>");
        FCGX_FPrintF(req.out, "<body>");
        FCGX_FPrintF(req.out, "</html>");

        FCGX_Finish_r(&req);
    }
}