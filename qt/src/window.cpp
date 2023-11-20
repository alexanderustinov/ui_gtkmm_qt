#include <uiwindows.h>

using namespace UiWindows;

UiWindow::UiWindow(QWidget *parent) : QWidget(parent) {}
UiWindow::~UiWindow() {}

void UiWindow::set_size() {
    resize(320, 240);
}