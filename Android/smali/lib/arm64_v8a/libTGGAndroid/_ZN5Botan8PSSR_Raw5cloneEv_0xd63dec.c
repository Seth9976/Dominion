// 函数: _ZN5Botan8PSSR_Raw5cloneEv
// 地址: 0xd63dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** result = operator new(0x38)
void* entry_x0
int64_t* x8 = *(entry_x0 + 8)
int64_t x0_1 = (*(*x8 + 0x28))(x8)
int64_t x8_1 = *(entry_x0 + 0x28)
__builtin_memset(&result[2], 0, 0x18)
result[5] = x8_1
*result = _vtable_for_Botan::PSSR_Raw + 0x10
result[1] = x0_1
result[6].b = 1
return result
