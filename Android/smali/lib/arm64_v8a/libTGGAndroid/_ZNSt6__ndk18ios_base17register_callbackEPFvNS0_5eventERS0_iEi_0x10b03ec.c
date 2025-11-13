// 函数: _ZNSt6__ndk18ios_base17register_callbackEPFvNS0_5eventERS0_iEi
// 地址: 0x10b03ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x48)
int64_t x10 = *(arg1 + 0x50)
void (* x20)(std::__ndk1::ios_base::event, std::__ndk1::ios_base&, int32_t) = arg1
int64_t x8 = x9 + 1

if (x8 u> x10)
    int64_t x9_1 = x10 << 1
    int64_t x9_2
    
    x9_2 = x9_1 u< x8 ? x8 : x9_1
    
    int64_t x22_1
    
    x22_1 = x8 u< 0xfffffffffffffff ? x9_2 : 0x1fffffffffffffff
    
    int64_t x0_1 = realloc(*(x20 + 0x38), x22_1 << 3)
    bool cond:1_1
    
    if (x0_1 == 0)
        int32_t x8_2 = *(x20 + 0x20) | 1
        cond:1_1 = (*(x20 + 0x24) & x8_2) != 0
        *(x20 + 0x20) = x8_2
    
    if (x0_1 == 0 && cond:1_1)
        sub_10b053c()
        noreturn
    
    int64_t oldmem = *(x20 + 0x40)
    *(x20 + 0x38) = x0_1
    arg1 = realloc(oldmem, x22_1 << 2)
    
    if (arg1 == 0)
        int32_t x8_4 = *(x20 + 0x20) | 1
        bool cond:2_1 = (*(x20 + 0x24) & x8_4) != 0
        *(x20 + 0x20) = x8_4
        
        if (cond:2_1)
            sub_10b053c()
            noreturn
    
    x9 = *(x20 + 0x48)
    *(x20 + 0x40) = arg1
    *(x20 + 0x50) = x22_1
    x8 = x9 + 1

*(*(x20 + 0x38) + (x9 << 3)) = arg2
int32_t entry_x2
*(*(x20 + 0x40) + (x9 << 2)) = entry_x2
*(x20 + 0x48) = x8
