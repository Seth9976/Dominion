// 函数: _ZN5Botan10polyn_gf2mC1EmRNS_21RandomNumberGeneratorENSt6__ndk110shared_ptrINS_10GF2m_FieldEEE
// 地址: 0xda9d80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = arg1
int64_t x24 = 0
*arg1 = arg2.d
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0

if (arg2 u< -1)
    if (((arg2 + 1) & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        int64_t* x22_1 = *(x19 + 0x28)
        
        if (x22_1 != 0)
            int64_t x9_3
            int32_t i
            
            do
                x9_3 = __ldaxr(&x22_1[1])
                i = __stlxr(x9_3 - 1, &x22_1[1])
            while (i != 0)
            
            if (x9_3 == 0)
                (*(*x22_1 + 0x10))(x22_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        void* x0_8 = *(arg1 + 8)
        
        if (x0_8 != 0)
            int64_t x8_10 = *(x19 + 0x18)
            *(x19 + 0x10) = x0_8
            Botan::deallocate_memory(x0_8, (x8_10 - x0_8) s>> 1, 2)
        
        sub_1101e04(x0_5)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(arg2 + 1, 2)
    int64_t x2 = (arg2 + 1) << 1
    int64_t x25_1 = x0_1 + x2
    x24 = x0_1
    *(x19 + 8) = x0_1
    *(x19 + 0x18) = x25_1
    arg1 = memset(x0_1, 0, x2)
    *(x19 + 0x10) = x25_1

int64_t* entry_x3
*(x19 + 0x20) = *entry_x3
int64_t x8_2 = entry_x3[1]
*(x19 + 0x28) = x8_2

if (x8_2 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i_1 != 0)
    x24 = *(x19 + 8)

*(x24 + (arg2 << 1)) = 1

if (arg2 == 0)
    return Botan::polyn_gf2m::degppf(arg1)

int64_t x24_1 = 0
int64_t result

while (true)
    Botan::polyn_gf2m* x0_3 = Botan::random_code_element((1 << **entry_x3).w, arg3)
    *(*(x19 + 8) + (x24_1 << 1)) = (x0_3.d).w
    x24_1 += 1
    
    if (x24_1 == arg2)
        result = Botan::polyn_gf2m::degppf(x0_3)
        x24_1 = 0
        
        if (result u>= arg2)
            break

return result
