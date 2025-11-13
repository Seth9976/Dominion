// 函数: _ZNSt6__ndk16vectorIN5Botan12XMSS_AddressENS_9allocatorIS2_EEEC2EmRKS2_
// 地址: 0xecf254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)

if (arg2 == 0)
    return 

if (arg2 u>= 0xaaaaaaaaaaaaaab)
    int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x21_1 = *arg1
    
    if (x21_1 != 0)
        int64_t* x8_2 = *(arg1 + 8)
        void* x0_5 = x21_1
        
        if (x8_2 != x21_1)
            int64_t* x22_2 = x8_2
            
            do
                x22_2 = &x22_2[-3]
                void* x0_6 = *x22_2
                
                if (x0_6 != 0)
                    int64_t x9_1 = x8_2[-1]
                    x8_2[-2] = x0_6
                    Botan::deallocate_memory(x0_6, x9_1 - x0_6, 1)
                
                x8_2 = x22_2
            while (x21_1 != x22_2)
            
            x0_5 = *arg1
        
        *(arg1 + 8) = x21_1
        operator delete(x0_5)
    
    sub_1101e04(x0_4)
    noreturn

int64_t i_1 = arg2 * 0x18
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_1 = operator new(i_1)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x22_1 = x0_1
void* x23_1 = x0_1 + i_1
*arg1 = x0_1
*(arg1 + 8) = x0_1
*(arg1 + 0x10) = x23_1
int64_t i

do
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(x22_1)
    i = i_1
    i_1 -= 0x18
    x22_1 += 0x18
while (i != 0x18)
*(arg1 + 8) = x23_1
