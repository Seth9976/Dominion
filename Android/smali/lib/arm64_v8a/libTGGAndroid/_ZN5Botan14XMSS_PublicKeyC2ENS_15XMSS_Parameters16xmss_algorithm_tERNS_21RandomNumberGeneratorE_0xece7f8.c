// 函数: _ZN5Botan14XMSS_PublicKeyC2ENS_15XMSS_Parameters16xmss_algorithm_tERNS_21RandomNumberGeneratorE
// 地址: 0xece7f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
void* x19 = arg1
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
__builtin_memset(arg1 + 8, 0, 0x18)
Botan::XMSS_Parameters::XMSS_Parameters(arg1 + 0x20)
*(x19 + 0x24)
Botan::XMSS_WOTS_Parameters::XMSS_WOTS_Parameters(x19 + 0x80)
__builtin_memset(x19 + 0xf0, 0, 0x18)
uint64_t x22 = *(x19 + 0x58)
int64_t x1_2
int64_t x8_2

if (x22 == 0)
    x1_2 = 0
    x8_2 = 0
    __builtin_memset(x19 + 0x108, 0, 0x18)
else
    if ((x22 & 0xffffffff80000000) != 0)
        int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(*(x19 + 0x40)) & 1) != 0)
            operator delete(*(x19 + 0x50))
            
            if ((zx.d(*(x19 + 0x28)) & 1) == 0)
                goto label_ece9b0
            
            goto label_ece9fc
        
        void* x0_9
        
        if ((zx.d(*(x19 + 0x28)) & 1) != 0)
        label_ece9fc:
            operator delete(*(x19 + 0x38))
            x0_9 = *(arg1 + 8)
            
            if (x0_9 != 0)
                *(x19 + 0x10) = x0_9
                operator delete(x0_9)
        else
        label_ece9b0:
            x0_9 = *(arg1 + 8)
            
            if (x0_9 != 0)
                *(x19 + 0x10) = x0_9
                operator delete(x0_9)
        sub_1101e04(x0_8)
        noreturn
    
    int64_t x0_3 = Botan::allocate_memory(x22, 1)
    int64_t x24 = x0_3 + x22
    *(x19 + 0xf0) = x0_3
    *(x19 + 0x100) = x24
    memset(x0_3, 0, x22)
    x1_2 = *(x19 + 0x58)
    *(x19 + 0xf8) = x24
    __builtin_memset(x19 + 0x108, 0, 0x18)
    
    if (x1_2 == 0)
        x8_2 = 0
    else
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x19 + 0x108)
        x1_2 = *(x19 + 0x108)
        x8_2 = *(x19 + 0x110)

int64_t* entry_x3
return (*(*entry_x3 + 0x10))(entry_x3, x1_2, x8_2 - x1_2)
