// 函数: _ZN5Botan3TLS8FinishedC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe4e5cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Finished + 0x10
*(arg1 + 8) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8_1 = entry_x1[1]
uint64_t x23 = x8_1 - x9

if (x8_1 == x9)
    return 

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const& x19_1 = arg1

if ((x23 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8_4 = *(arg1 + 8)
    
    if (x8_4 != 0)
        *(x19_1 + 0x10) = x8_4
        operator delete(x8_4)
    
    sub_1101e04(x0_3)
    noreturn

arg1 = operator new(x23)
*(x19_1 + 8) = arg1
*(x19_1 + 0x10) = arg1
*(x19_1 + 0x18) = arg1 + x23
int64_t x1 = *entry_x1
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const& x22_1 = arg1
size_t x20_2 = entry_x1[1] - x1

if (x20_2 s>= 1)
    memcpy(x22_1, x1, x20_2)
    x22_1 += x20_2

*(x19_1 + 0x10) = x22_1
