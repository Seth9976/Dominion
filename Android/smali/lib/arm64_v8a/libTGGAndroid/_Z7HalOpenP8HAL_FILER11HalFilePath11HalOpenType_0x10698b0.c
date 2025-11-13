// 函数: _Z7HalOpenP8HAL_FILER11HalFilePath11HalOpenType
// 地址: 0x10698b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3
XString::operator char const*()
__builtin_memset(arg1, 0, 0x14)
int64_t x0_4

if (*arg2 - 1 u<= 1)
    x0_4 = AAssetManager_open(*gAndroidGlobals, XString::operator char const*(), 0)
    *(arg1 + 8) = x0_4

int32_t x19_1

if (*arg2 - 1 u> 1 || x0_4 == 0)
    XString::XString()
    int32_t x8_2 = *arg2
    
    if (x8_2 u>= 3)
        if (x8_2 == 3)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        label_10699f0:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        
        pthread_kill(pthread_self(), 6)
        int64_t* x0_15 = XNoReturn()
        XString::~XString()
        sub_1101e04(x0_15)
        noreturn
    
    XGetSaveGameFolder(false)
    XString::operator char const*()
    XFormatString("%s%s")
    void var_38
    XString::operator=(&var_38)
    XString::~XString()
    void* const mode
    
    if (x20 == 0)
        mode = &data_7547eb
    else
        if (x20 != 1)
            goto label_10699f0
        
        mode = &data_7921a1
    
    FILE* x0_10 = fopen(XString::operator char const*(), mode)
    *arg1 = x0_10
    x19_1 = x0_10 != 0 ? 1 : 0
    XString::~XString()
else
    x19_1 = 1

return zx.q(x19_1)
