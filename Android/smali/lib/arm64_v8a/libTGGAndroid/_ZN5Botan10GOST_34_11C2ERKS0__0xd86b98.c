// 函数: _ZN5Botan10GOST_34_11C2ERKS0_
// 地址: 0xd86b98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x22
int64_t* var_20 = entry_x22
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::GOST_34_11 + 0x10
*(arg1 + 8) = _vtable_for_Botan::GOST_28147_89 + 0x10
*(arg1 + 0x10) = 0
void* entry_x1
int64_t x9_1 = *(entry_x1 + 0x10)
int64_t x8_1 = *(entry_x1 + 0x18)
uint64_t x23 = x8_1 - x9_1

if (x8_1 != x9_1)
    if ((x23 & 0xffffffff80000000) != 0)
        int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_5 = *entry_x22
        
        if (x8_5 != 0)
            int64_t x9_2 = *(arg1 + 0x68)
            *(arg1 + 0x60) = x8_5
            Botan::deallocate_memory(x8_5, x9_2 - x8_5, 1)
        
        void* x0_10 = *(arg1 + 0x10)
        
        if (x0_10 != 0)
            int64_t x8_6 = *(arg1 + 0x50)
            *(arg1 + 0x48) = x0_10
            Botan::deallocate_memory(x0_10, x8_6 - x0_10, 1)
        
        void* x0_11 = *(arg1 + 0x28)
        *(arg1 + 8) = _vtable_for_Botan::GOST_28147_89 + 0x10
        
        if (x0_11 != 0)
            int64_t x8_8 = *(arg1 + 0x38)
            *(arg1 + 0x30) = x0_11
            Botan::deallocate_memory(x0_11, (x8_8 - x0_11) s>> 2, 4)
        
        void* x0_12 = *(arg1 + 0x10)
        
        if (x0_12 != 0)
            *(arg1 + 0x18) = x0_12
            operator delete(x0_12)
        
        sub_1101e04(x0_8)
        noreturn
    
    int64_t x0_1 = operator new(x23)
    *(arg1 + 0x10) = x0_1
    *(arg1 + 0x18) = x0_1
    *(arg1 + 0x20) = x0_1 + (x23 s>> 2 << 2)
    int64_t x1 = *(entry_x1 + 0x10)
    int64_t x22 = x0_1
    size_t x23_1 = *(entry_x1 + 0x18) - x1
    
    if (x23_1 s>= 1)
        memcpy(x22, x1, x23_1)
        x22 += x23_1
    
    *(arg1 + 0x18) = x22

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x28)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1 + 0x40)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1 + 0x58)
int64_t result
int128_t v0
result, v0 = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(arg1 + 0x70)
*(arg1 + 0x88) = *(entry_x1 + 0x88)
return result
