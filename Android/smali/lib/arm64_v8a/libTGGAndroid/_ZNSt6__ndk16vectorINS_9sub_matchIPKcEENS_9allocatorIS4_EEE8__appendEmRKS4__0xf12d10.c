// 函数: _ZNSt6__ndk16vectorINS_9sub_matchIPKcEENS_9allocatorIS4_EEE8__appendEmRKS4_
// 地址: 0xf12d10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* x22 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x10)
uint64_t x19 = arg1
int128_t* entry_x2

if (((x9 - x22) s>> 3) * -0x5555555555555555 u>= arg2)
    if (arg2 != 0)
        int128_t* x8_4 = x22 + arg2 * 0x18
        int64_t i_2 = arg2 * 0x18
        int64_t i
        
        do
            i = i_2
            i_2 -= 0x18
            x22[1].q = entry_x2[1].q
            *x22 = *entry_x2
            x22 += 0x18
        while (i != 0x18)
        x22 = x8_4
    
    *(x19 + 8) = x22
    return 

int64_t x11_1 = *x19
void* x24_1 = ((x22 - x11_1) s>> 3) * -0x5555555555555555
void* x10_1 = x24_1 + arg2

if (x10_1 u> 0xaaaaaaaaaaaaaaa)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    sub_ef2a0c()
    noreturn

int64_t x9_3 = ((x9 - x11_1) s>> 3) * -0x5555555555555555
int64_t x11_2 = x9_3 << 1
int64_t x10_2

x10_2 = x11_2 u< x10_1 ? x10_1 : x11_2

int64_t x23_1

x23_1 = x9_3 u< 0x555555555555555 ? x10_2 : 0xaaaaaaaaaaaaaaa

if (x23_1 == 0)
    arg1 = 0
else
    if (x23_1 u> 0xaaaaaaaaaaaaaaa)
        sub_ef2a0c()
        noreturn
    
    int128_t v0
    arg1, v0 = operator new(x23_1 * 0x18)

int128_t* x8_5 = arg1 + x24_1 * 0x18
int64_t i_3 = arg2 * 0x18
void* x24_2 = x8_5 + i_3
int128_t* x10_4 = x8_5
int64_t i_1

do
    i_1 = i_3
    i_3 -= 0x18
    x10_4[1].q = entry_x2[1].q
    *x10_4 = *entry_x2
    x10_4 += 0x18
while (i_1 != 0x18)
void* x20_1 = *x19
size_t x2 = x22 - x20_1
void* x21_1 = x8_5 - x2

if (x2 s>= 1)
    memcpy(x21_1, x20_1, x2)

*x19 = x21_1
*(x19 + 8) = x24_2
*(x19 + 0x10) = arg1 + x23_1 * 0x18

if (x20_1 != 0)
    return operator delete(x20_1) __tailcall
