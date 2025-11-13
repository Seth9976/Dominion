// 函数: _ZNK5Botan16PK_Key_Agreement10derive_keyEmPKhmS2_m
// 地址: 0xdfe234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = (***arg1)()
void* var_48
void* x20 = var_48
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_40
uint64_t x22 = var_40 - x20

if (var_40 != x20)
    if ((x22 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    result = Botan::allocate_memory(x22, 1)
    x20 = var_48
    int64_t result_1 = result
    *entry_x8 = result
    entry_x8[1] = result
    size_t x22_1 = var_40 - x20
    entry_x8[2] = result + x22
    
    if (x22_1 s>= 1)
        result = memcpy(result_1, x20, x22_1)
        result_1 += x22_1
    
    entry_x8[1] = result_1

if (x20 == 0)
    return result

void* var_40_1 = x20
int64_t var_38
return Botan::deallocate_memory(x20, var_38 - x20, 1)
