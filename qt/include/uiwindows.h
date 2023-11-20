#include <QtWidgets>
#ifndef UI_WINDOWS_H
#define UI_WINDOWS_H

namespace UiWindows {
class UiWindow : public QWidget {
  Q_OBJECT
public:
  UiWindow(QWidget *parent = 0);
  virtual ~UiWindow();

  void set_size();
};
} // namespace UiWindows

#endif