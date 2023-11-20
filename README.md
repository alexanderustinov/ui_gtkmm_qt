## ui_gtkmm
```shell
# добавить C:\msys64\mingw64\bin в PATH
# установить mingw-w64-x86_64-ninja mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-gtkmm-4.0 в MSYS2
git clone --recursive https://github.com/alexanderustinov/ui_gtkmm_qt.git
# если до этого собирали qt-вариант
# rm build -r
mkdir build ; cd build
cmake ../qt
ninja
```

## ui_qt
```shell
# добавить C:\msys64\mingw64\bin в PATH
# установить mingw-w64-x86_64-ninja mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-qt6-base в MSYS2
git clone --recursive https://github.com/alexanderustinov/ui_gtkmm_qt.git
# если до этого собирали gtkmm-вариант
# rm build -r
mkdir build ; cd build
cmake ../gtkmm
ninja
```
