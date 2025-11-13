// 函数: _ZN5Botan3TLS15TLS_Data_Reader8get_elemItNSt6__ndk16vectorItNS3_9allocatorItEEEEEET0_m
// 地址: 0xf4b9a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int64_t x22 = entry_x1 << 1
int64_t result = Botan::TLS::TLS_Data_Reader::assert_at_least(arg1)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (entry_x1 != 0)
    if ((entry_x1 & 0xffffffff80000000) != 0)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_9 = *entry_x8
        
        if (x8_9 != 0)
            entry_x8[1] = x8_9
            operator delete(x8_9)
        
        sub_1101e04(x0_3)
        noreturn
    
    uint16_t* x0_1 = operator new(x22)
    *entry_x8 = x0_1
    entry_x8[2] = &x0_1[entry_x1]
    result = memset(x0_1, 0, x22)
    entry_x8[1] = &x0_1[entry_x1]
    *x0_1 = (_byteswap(zx.d(*(**(arg1 + 8) + *(arg1 + 0x10)))) u>> 0x10).w
    
    if (entry_x1 != 1)
        int64_t x8_6 = 1
        
        do
            int64_t x11_1 = x8_6 << 1
            x8_6 += 1
            (*entry_x8)[x8_6] =
                (_byteswap(zx.d(*(**(arg1 + 8) + *(arg1 + 0x10) + x11_1))) u>> 0x10).w
        while (entry_x1 != x8_6)

*(arg1 + 0x10) += x22
return result
