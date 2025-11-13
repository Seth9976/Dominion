// 函数: _ZN5Botan17DataSource_MemoryC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe8b708
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::DataSource_Memory + 0x10
char* entry_x1
uint64_t x8_1 = zx.q(*entry_x1)
size_t x10 = *(entry_x1 + 8)
void* x9 = *(entry_x1 + 0x10)
__builtin_memset(arg1 + 8, 0, 0x18)
int32_t temp0 = x8_1.d & 1
void* x22

if (temp0 != 0)
    x22 = x9
else
    x22 = &entry_x1[1]

size_t x21

if (temp0 == 0)
    x21 = x8_1 u>> 1
else
    x21 = x10

if (x21 != 0)
    if ((x21 & 0xffffffff80000000) != 0)
        int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_2 = *(arg1 + 8)
        
        if (x8_2 != 0)
            int64_t x9_1 = *(arg1 + 0x18)
            *(arg1 + 0x10) = x8_2
            Botan::deallocate_memory(x8_2, x9_1 - x8_2, 1)
        
        sub_1101e04(x0_3)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(x21, 1)
    int64_t x20_2 = x0_1 + x21
    *(arg1 + 8) = x0_1
    *(arg1 + 0x10) = x0_1
    *(arg1 + 0x18) = x20_2
    memcpy(x0_1, x22, x21)
    *(arg1 + 0x10) = x20_2

*(arg1 + 0x20) = 0
