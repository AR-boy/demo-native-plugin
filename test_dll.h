#ifndef TEST_DLL_H
#define TEST_DLL_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_TEST_DLL
#define TEST_DLL __declspec(dllexport)
#else
#define TEST_DLL __declspec(dllimport)
#endif

void __stdcall TEST_DLL hello(const char *s);

int TEST_DLL Double(int x);

#ifdef __cplusplus
}
#endif

// NOTE: this function is not declared extern "C"
void TEST_DLL CppFunc(void);

// NOTE: this class must not be declared extern "C"
class TEST_DLL MyClass
{
public:
        MyClass() {};
        virtual ~MyClass() {};
        void func(void);
};

#endif  // TEST_DLL_H