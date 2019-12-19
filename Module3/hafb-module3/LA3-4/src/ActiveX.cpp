#include <iostream>
#include <objbase.h>
#include <unknwn.h>
#include <Propvarutil.h>
#import "wshom.ocx" no_namespace, raw_interfaces_only  
 
using namespace std;
 
int main() {
    HRESULT hr;
    CLSID clsid;
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);  
    CLSIDFromProgID(OLESTR("WScript.Shell"), &clsid);   
    IWshShell *pApp = nullptr;
    //REFIID IID_IUnknown = { 0x00000000, 0x0000, 0x0000,{ 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };
    hr = CoCreateInstance(clsid, nullptr, CLSCTX_INPROC_SERVER, __uuidof(IWshShell), reinterpret_cast<LPVOID *>(&pApp));
    if (FAILED(hr) || pApp == nullptr) {
        throw "Cannot Create COM Object";
    }
    int out;
    VARIANT s;
    InitVariantFromInt32(0, &s);
    VARIANT title;
    InitVariantFromString(PCWSTR(L"title"), &title);
    VARIANT type;
    InitVariantFromInt32(4096, &type);
    BSTR msg = ::SysAllocString(L"Hello from https://helloacm.com");
    pApp->Popup(msg, &s, &title, &type, &out);
    CoUninitialize();
    cout << "Out = " << out;
    return 0;
}