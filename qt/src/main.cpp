#include "uiwindows.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    UiWindows::UiWindow window;
    
    window.show();
    window.setWindowTitle(
        QApplication::translate("toplevel", "Название окна"));

    return app.exec();
}