// 函数: _Z29AssetShaderChangedInDirectory7XStringy
// 地址: 0xc8a014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString::XString()
XString::operator char const*()
char var_18
XString::Format(&var_18)
void var_30

if ((XFindFileFirst(XString::operator char const*(), &var_30) & 1) != 0)
    int32_t x0_9
    
    do
        if ((XFindFileIsDirectory(&var_30) & 1) == 0 && XFindFileGetFileWriteTime(&var_30) u> arg2)
            XString::~XString()
            return 1
        
        x0_9 = XFindFileNext(&var_30)
    while ((x0_9 & 1) != 0)
    XFindFileClose(&var_30)

XString::~XString()
return 0
