// 函数: _ZNK5Botan7CBC_MAC5cloneEv
// 地址: 0xcf1a94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** result = operator new(0x38)
void* entry_x0
int64_t* x8 = *(entry_x0 + 0x10)
int64_t x0_1 = (*(*x8 + 0x68))(x8)
__builtin_memset(&result[3], 0, 0x20)
*result = _vtable_for_Botan::CBC_MAC + 0x10
result[1] = _vtable_for_Botan::CBC_MAC + 0x98
result[2] = x0_1
return result
