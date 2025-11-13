// 函数: _ZNK5Botan7EME_Raw3padEPKhmmRNS_21RandomNumberGeneratorE
// 地址: 0xd5f7d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)

if (arg3 == 0)
    return 

if ((arg3 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    void* x8 = *entry_x8
    
    if (x8 != 0)
        int64_t x9_1 = entry_x8[2]
        entry_x8[1] = x8
        Botan::deallocate_memory(x8, x9_1 - x8, 1)
    
    sub_1101e04(x0_3)
    noreturn

int64_t x0_1 = Botan::allocate_memory(arg3, 1)
int64_t x22_1 = x0_1 + arg3
*entry_x8 = x0_1
entry_x8[2] = x22_1
memcpy(x0_1, arg2, arg3)
entry_x8[1] = x22_1
