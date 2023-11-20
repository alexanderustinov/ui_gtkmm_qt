#include <gtkmm.h>

class MyWindow : public Gtk::Window
{
public:
  MyWindow();
};

MyWindow::MyWindow()
{
  set_title("Приложение");
  set_default_size(400, 300);
}

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.example");

  return app->make_window_and_run<MyWindow>(argc, argv);
}