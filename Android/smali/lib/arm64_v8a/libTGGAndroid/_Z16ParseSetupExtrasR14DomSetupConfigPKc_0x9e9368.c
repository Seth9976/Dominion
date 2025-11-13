// 函数: _Z16ParseSetupExtrasR14DomSetupConfigPKc
// 地址: 0x9e9368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_220
__builtin_memset(&var_220, 0, 0x200)
char var_230
XString::XString(&var_230)
Trim(&var_230)
XString::~XString()
XString var_228
FromExtrasStr(arg1 + 0x1710, 0x20, &var_220, &var_228)
int64_t i = 0
void* __offset(DomSetupConfig, 0x1d4) x9 = arg1 + 0x1d4

do
    void* x12_1 = &var_220 + i
    int32_t x11_1 = *x12_1
    
    if (x11_1 != 0)
        *(x9 - 0x14) = 1
    
    int32_t x12_2 = *(x12_1 + 4)
    
    if (x12_2 != 0)
        *(x9 - 4) = 1
    
    if (x11_1 != 0)
        *(x9 - 0x10) = x11_1
    
    if (x12_2 != 0)
        *x9 = x12_2
    
    i += 8
    x9 += 0x20
while (i != 0x200)

return XString::~XString()
