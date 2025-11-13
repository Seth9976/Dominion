// 函数: _ZN5Botan3TLS26Certificate_Status_RequestC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERKNS3_IS6_NS4_IS6_EEEE
// 地址: 0xe6e358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Certificate_Status_Request + 0x10
*(arg1 + 8) = 0
int64_t x9 = *arg2
int64_t x8_1 = *(arg2 + 8)
uint64_t x24 = x8_1 - x9

if (x8_1 != x9)
    if ((x24 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_4 = *(arg1 + 8)
        
        if (x8_4 != 0)
            *(arg1 + 0x10) = x8_4
            operator delete(x8_4)
        
        sub_1101e04(x0_5)
        noreturn
    
    int64_t x0_1 = operator new(x24)
    *(arg1 + 8) = x0_1
    *(arg1 + 0x10) = x0_1
    *(arg1 + 0x18) = x0_1 + x24
    int64_t x1 = *arg2
    int64_t x23_1 = x0_1
    size_t x22_2 = *(arg2 + 8) - x1
    
    if (x22_2 s>= 1)
        memcpy(x23_1, x1, x22_2)
        x23_1 += x22_2
    
    *(arg1 + 0x10) = x23_1

int64_t result = std::__ndk1::vector<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > >::vector(
    arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x18)
return result
