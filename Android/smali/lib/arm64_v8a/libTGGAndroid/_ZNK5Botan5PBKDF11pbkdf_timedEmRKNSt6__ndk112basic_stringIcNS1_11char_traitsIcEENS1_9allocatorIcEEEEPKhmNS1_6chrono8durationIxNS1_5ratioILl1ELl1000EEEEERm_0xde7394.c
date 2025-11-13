// 函数: _ZNK5Botan5PBKDF11pbkdf_timedEmRKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKhmNS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEERm
// 地址: 0xde7394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* const x27

if (arg2 == 0)
    x27 = nullptr
else
    if ((arg2 & 0xffffffff80000000) != 0)
        int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_2 = *entry_x8
        
        if (x8_2 != 0)
            int64_t x9_1 = entry_x8[2]
            entry_x8[1] = x8_2
            Botan::deallocate_memory(x8_2, x9_1 - x8_2, 1)
        
        sub_1101e04(x0_4)
        noreturn
    
    void* x0_1 = Botan::allocate_memory(arg2, 1)
    void* x28_1 = x0_1 + arg2
    x27 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = x28_1
    memset(x0_1, 0, arg2)
    entry_x8[1] = x28_1

int64_t lr
int64_t result = (*(*arg1 + 0x20))(arg1, x27, arg2, arg3, arg4, arg5, 0, arg6, lr)
int64_t* entry_x6
*entry_x6 = result
return result
