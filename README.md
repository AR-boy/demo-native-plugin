# demo-native-plugin
A repository that shows my attempt at creating a native C++ plugin for unity

## To generate a DLL
run fallowing commands:
1. ```g++ -c -DBUILDING_TEST_DLL test_dll.cpp```
2. ```g++ -shared -o example_dll.dll test_dll.o "-Wl,--out-implib,libexample_dll.a```