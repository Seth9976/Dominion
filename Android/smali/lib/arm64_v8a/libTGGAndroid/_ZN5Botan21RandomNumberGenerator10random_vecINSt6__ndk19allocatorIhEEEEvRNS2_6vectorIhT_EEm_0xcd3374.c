// 函数: _ZN5Botan21RandomNumberGenerator10random_vecINSt6__ndk19allocatorIhEEEEvRNS2_6vectorIhT_EEm
// 地址: 0xcd3374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg2
void* x22 = *(arg2 + 8)
size_t x23 = x22 - x21
int64_t entry_x2

if (x23 u< entry_x2)
    int64_t x8_1 = *(arg2 + 0x10)
    size_t x25_1 = entry_x2 - x23
    
    if (x8_1 - x22 u>= x25_1)
        if (x25_1 != 0)
            memset(x22, 0, x25_1)
            x22 += x25_1
        
        *(arg2 + 8) = x22
    else
        if ((entry_x2 & 0xffffffff80000000) != 0)
            int128_t* x0_8
            char* x1_2
            uint64_t* x2_4
            int16_t x3_1
            x0_8, x1_2, x2_4, x3_1 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            return sub_cd34a0(x0_8, x1_2, x2_4, x3_1, arg2, entry_x2) __tailcall
        
        void* x8_2 = x8_1 - x21
        int64_t x10_1 = x8_2 << 1
        int64_t x10_2
        
        x10_2 = x10_1 u< entry_x2 ? entry_x2 : x10_1
        
        int64_t x22_1
        
        x22_1 = x8_2 u< 0x3fffffffffffffff ? x10_2 : 0x7fffffffffffffff
        
        void* const x26_1
        
        if (x22_1 == 0)
            x26_1 = nullptr
        else
            x26_1 = operator new(x22_1)
        
        memset(x26_1 + x23, 0, x25_1)
        
        if (x23 s>= 1)
            memcpy(x26_1, x21, x23)
        
        *arg2 = x26_1
        *(arg2 + 8) = x26_1 + entry_x2
        *(arg2 + 0x10) = x26_1 + x22_1
        
        if (x21 != 0)
            operator delete(x21)
            *(arg2 + 8)
else if (x23 u> entry_x2)
    *(arg2 + 8) = x21 + entry_x2

*arg2
jump(*(*arg1 + 0x10))
