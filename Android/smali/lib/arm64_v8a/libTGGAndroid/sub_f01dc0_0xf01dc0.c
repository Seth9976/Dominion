// 函数: sub_f01dc0
// 地址: 0xf01dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg2, 0, 0x18)
uint8_t* x0
int128_t v0
x0, v0 = Botan::allocate_memory(0x40, 1)
v0.q = 0
v0:8.q = 0
arg2[1] = &x0[0x40]
arg2[2] = &x0[0x40]
__builtin_memset(x0, 0, 0x40)
*arg2 = x0
uint64_t x0_2 = (***(arg1 + 8))(v0)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_50_1
void* result_4

if (x0_2 == 0)
    result_4 = nullptr
else
    if ((x0_2 & 0xffffffff80000000) != 0)
        int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        arg2[1] = x0
        Botan::deallocate_memory(x0, 0x40, 1)
        sub_1101e04(x0_6)
        noreturn
    
    void* result_2 = operator new(x0_2)
    void* x24_1 = result_2 + x0_2
    result_4 = result_2
    result_1 = result_2
    void* var_48_1 = x24_1
    memset(result_2, 0, x0_2)
    var_50_1 = x24_1

int64_t* x0_4 = *(arg1 + 8)
(*(*x0_4 + 0x20))(x0_4, result_4)
uint8_t* x4 = *(arg1 + 0x18)
uint8_t* result_3 = result_1
Botan::ed25519_sign(x0, result_3, var_50_1 - result_3, *(*(arg1 + 0x10) + 0x20), x4, 
    *(arg1 + 0x20) - x4)
void* result = result_1

if (result == 0)
    return result

return operator delete(result)
