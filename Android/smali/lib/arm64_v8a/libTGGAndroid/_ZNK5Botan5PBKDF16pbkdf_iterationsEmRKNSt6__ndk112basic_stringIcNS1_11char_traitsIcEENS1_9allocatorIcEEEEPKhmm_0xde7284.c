// 函数: _ZNK5Botan5PBKDF16pbkdf_iterationsEmRKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKhmm
// 地址: 0xde7284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x26

if (arg2 == 0)
    x26 = 0
else
    if ((arg2 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8 = *entry_x8
        
        if (x8 != 0)
            int64_t x9_1 = entry_x8[2]
            entry_x8[1] = x8
            Botan::deallocate_memory(x8, x9_1 - x8, 1)
        
        sub_1101e04(x0_5)
        noreturn
    
    uint64_t x0_1 = Botan::allocate_memory(arg2, 1)
    void* x27_1 = x0_1 + arg2
    x26 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x27_1
    memset(x0_1, 0, arg2)
    entry_x8[1] = x27_1

return Botan::PBKDF::pbkdf_iterations(arg1, x26, arg2, arg3, arg4, arg5)
