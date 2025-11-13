// 函数: _ZNSt6__ndk18ios_base5imbueERKNS_6localeE
// 地址: 0x10b0128
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::locale* entry_x8
std::__ndk1::locale::locale(entry_x8)
int64_t result = std::__ndk1::locale::operator=(arg1 + 0x30)
int64_t x8 = *(arg1 + 0x48)

if (x8 != 0)
    int64_t __saved_x1_1 = x8 - 1
    
    do
        result = (*(*(arg1 + 0x38) + (__saved_x1_1 << 3)))(1, arg1, 
            zx.q(*(*(arg1 + 0x40) + (__saved_x1_1 << 2))))
        __saved_x1_1 -= 1
    while (__saved_x1_1 != -1)

return result
