// 函数: _ZNSt6__ndk16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE6assignEmRKS4_
// 地址: 0xf12758
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x10)
void* result = *arg1
void* x8_6
int128_t* entry_x2

if (((x8 - result) s>> 3) * -0x5555555555555555 u>= arg2)
    std::__ndk1::sub_match<char const*>* i_6 = ((*(arg1 + 8) - result) s>> 3) * -0x5555555555555555
    std::__ndk1::sub_match<char const*> const& i_5
    
    i_5 = i_6 u< arg2 ? i_6 : arg2
    
    if (i_5 != 0)
        std::__ndk1::sub_match<char const*> const& i
        
        do
            i = i_5
            i_5 -= 1
            *result = *entry_x2
            *(result + 8) = *(entry_x2 + 8)
            *(result + 0x10) = entry_x2[1].b
            result += 0x18
        while (i != 1)
    
    if (i_6 u< arg2)
        void* x9_2 = *(arg1 + 8)
        
        if (arg2 != i_6)
            void* x10_9 = x9_2 + (arg2 - i_6) * 0x18
            int64_t i_3 = neg.q(i_6 * 0x18) + arg2 * 0x18
            int64_t i_1
            
            do
                int128_t v0 = *entry_x2
                i_1 = i_3
                i_3 -= 0x18
                *(x9_2 + 0x10) = entry_x2[1].q
                *x9_2 = v0
                x9_2 += 0x18
            while (i_1 != 0x18)
            x9_2 = x10_9
        
        *(arg1 + 8) = x9_2
        return result
    
    x8_6 = *arg1 + arg2 * 0x18
else
    if (result != 0)
        *(arg1 + 8) = result
        operator delete(result)
        x8 = 0
        __builtin_memset(arg1, 0, 0x18)
    
    int64_t x8_3
    
    if (arg2 u<= 0xaaaaaaaaaaaaaaa)
        int64_t x8_2 = (x8 s>> 3) * -0x5555555555555555
        int64_t x10_2 = x8_2 << 1
        int64_t x10_3
        
        x10_3 = x10_2 u< arg2 ? arg2 : x10_2
        
        x8_3 = x8_2 u< 0x555555555555555 ? x10_3 : 0xaaaaaaaaaaaaaaa
    
    if (arg2 u> 0xaaaaaaaaaaaaaaa || x8_3 u> 0xaaaaaaaaaaaaaaa)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        noreturn sub_f128f8() __tailcall
    
    uint64_t x22_1 = x8_3 * 0x18
    int128_t v0_1
    result, v0_1 = operator new(x22_1)
    int64_t i_4 = arg2 * 0x18
    *(arg1 + 0x10) = result + x22_1
    x8_6 = result + i_4
    *arg1 = result
    *(arg1 + 8) = result
    int64_t i_2
    
    do
        v0_1 = *entry_x2
        i_2 = i_4
        i_4 -= 0x18
        *(result + 0x10) = entry_x2[1].q
        *result = v0_1
        result += 0x18
    while (i_2 != 0x18)
*(arg1 + 8) = x8_6
return result
