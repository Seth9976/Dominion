// 函数: _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE
// 地址: 0x10a7a84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = arg1 + *(*arg1 - 0x18)
int32_t x22 = *(x8_2 + 0x20) & 0xfffffffd
int32_t x9_2 = x22 | (*(x8_2 + 0x28) == 0 ? 1 : 0)
bool cond:1 = (x9_2 & *(x8_2 + 0x24)) != 0
*(x8_2 + 0x20) = x9_2

if (not(cond:1))
    int64_t x8_4 = *(*arg1 - 0x18)
    void* x9_3 = arg1 + x8_4
    int32_t x10_1 = *(x9_3 + 0x20)
    
    if (x10_1 == 0)
        if (*(x9_3 + 0x88) != 0)
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
            x8_4 = *(*arg1 - 0x18)
        
        if (*(x9_3 + 0x88) != 0 && *(arg1 + x8_4 + 0x20) != 0)
            return arg1
        
        int64_t* x0_1 = *(arg1 + x8_4 + 0x28)
        int32_t entry_x2
        int32_t x20_2
        
        if ((*(*x0_1 + 0x20))(x0_1, arg2, zx.q(entry_x2), 8) == -1)
            x20_2 = x22 | 4
        else
            x20_2 = x22
        
        void* x8_14 = arg1 + *(*arg1 - 0x18)
        int32_t x9_8 = *(x8_14 + 0x20) | x20_2 | (*(x8_14 + 0x28) == 0 ? 1 : 0)
        bool cond:5_1 = (x9_8 & *(x8_14 + 0x24)) != 0
        *(x8_14 + 0x20) = x9_8
        
        if (not(cond:5_1))
            return arg1
    else
        int32_t x10_3 = x10_1 | (*(x9_3 + 0x28) == 0 ? 1 : 0) | 4
        bool cond:3_1 = (x10_3 & *(x9_3 + 0x24)) == 0
        *(x9_3 + 0x20) = x10_3
        
        if (cond:3_1)
            return arg1

sub_10b053c()
noreturn
