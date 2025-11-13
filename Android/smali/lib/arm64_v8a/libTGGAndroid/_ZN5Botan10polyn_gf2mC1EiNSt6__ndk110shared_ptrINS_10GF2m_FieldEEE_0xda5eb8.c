// 函数: _ZN5Botan10polyn_gf2mC1EiNSt6__ndk110shared_ptrINS_10GF2m_FieldEEE
// 地址: 0xda5eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
*arg1 = 0xffffffff
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0

if (arg2 u< 0xffffffff)
    if (arg2 s<= 0xfffffffe)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_4 = *(arg1 + 8)
        
        if (x8_4 != 0)
            int64_t x9_3 = *(x19 + 0x18)
            *(x19 + 0x10) = x8_4
            Botan::deallocate_memory(x8_4, (x9_3 - x8_4) s>> 1, 2)
        
        sub_1101e04(x0_3)
        noreturn
    
    int64_t x22_1 = sx.q(arg2 + 1)
    int64_t x0_1 = Botan::allocate_memory(x22_1, 2)
    int64_t x2 = x22_1 << 1
    int64_t x21_2 = x0_1 + x2
    *(x19 + 8) = x0_1
    *(x19 + 0x18) = x21_2
    memset(x0_1, 0, x2)
    *(x19 + 0x10) = x21_2

int64_t* entry_x2
*(x19 + 0x20) = *entry_x2
int64_t x8_2 = entry_x2[1]
*(x19 + 0x28) = x8_2

if (x8_2 == 0)
    return 

int32_t i

do
    i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
while (i != 0)
