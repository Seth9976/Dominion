// 函数: _ZN5Botan17DataSource_MemoryC2ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xe00548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const& x19 = arg1
*arg1 = _vtable_for_Botan::DataSource_Memory + 0x10
int64_t* entry_x1
void* x23 = *entry_x1
void* x22 = entry_x1[1]
__builtin_memset(arg1 + 8, 0, 0x18)
uint64_t x20 = x22 - x23

if (x22 != x23)
    if ((x20 & 0xffffffff80000000) != 0)
        int64_t* x0_2 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_5 = *(arg1 + 8)
        
        if (x8_5 != 0)
            int64_t x9_2 = *(x19 + 0x18)
            *(x19 + 0x10) = x8_5
            Botan::deallocate_memory(x8_5, x9_2 - x8_5, 1)
        
        sub_1101e04(x0_2)
        noreturn
    
    int128_t v0_1
    int128_t v1_1
    arg1, v0_1, v1_1 = Botan::allocate_memory(x20, 1)
    *(x19 + 8) = arg1
    *(x19 + 0x10) = arg1
    *(x19 + 0x18) = arg1 + x20
    void* x8_4
    
    if (x23 == x22)
        x8_4 = arg1
    else if (x20 u< 0x20 || (arg1 u< x22 && x23 u< x22 + arg1 - x23))
    label_e00600:
        x8_4 = arg1
        
        do
            char x9_1 = *x23
            x23 += 1
            *x8_4 = x9_1
            x8_4 += 1
        while (x22 != x23)
    else
        int64_t i_2 = x20 & 0xffffffffffffffe0
        void* x10_1 = x23 + 0x10
        x8_4 = arg1 + i_2
        x23 += i_2
        void* __offset(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, 0x10) 
            x11_1 = arg1 + 0x10
        int64_t i_1 = i_2
        int64_t i
        
        do
            v0_1 = *(x10_1 - 0x10)
            v1_1 = *x10_1
            x10_1 += 0x20
            i = i_1
            i_1 -= 0x20
            *(x11_1 - 0x10) = v0_1
            *x11_1 = v1_1
            x11_1 += 0x20
        while (i != 0x20)
        arg1 = x8_4
        
        if (x20 != i_2)
            goto label_e00600
    
    *(x19 + 0x10) = x8_4

*(x19 + 0x20) = 0
