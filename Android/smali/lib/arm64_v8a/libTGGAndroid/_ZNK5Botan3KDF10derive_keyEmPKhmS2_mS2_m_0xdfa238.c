// 函数: _ZNK5Botan3KDF10derive_keyEmPKhmS2_mS2_m
// 地址: 0xdfa238
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* const x27
void* fp

if (arg2 == 0)
    fp = nullptr
    x27 = nullptr
else
    if ((arg2 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_4 = *entry_x8
        
        if (x8_4 != 0)
            int64_t x9_3 = entry_x8[2]
            entry_x8[1] = x8_4
            Botan::deallocate_memory(x8_4, x9_3 - x8_4, 1)
        
        sub_1101e04(x0_5)
        noreturn
    
    void* x0_1 = Botan::allocate_memory(arg2, 1)
    fp = x0_1 + arg2
    x27 = x0_1
    *entry_x8 = x0_1
    entry_x8[2] = fp
    memset(x0_1, 0, arg2)
    entry_x8[1] = fp

int64_t entry_x7
int64_t result = (*(*arg1 + 0x18))(arg1, x27, fp - x27, arg3, arg4, arg5, arg6, arg7, entry_x7)
void* x8_2 = *entry_x8
void* x9_2 = entry_x8[1] - x8_2

if (result u> x9_2)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(entry_x8)

if (result u< x9_2)
    entry_x8[1] = x8_2 + result

return result
