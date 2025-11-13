// 函数: _ZN5Botan12ISO_9796_DS35cloneEv
// 地址: 0xd90d5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** result = operator new(0x30)
void* entry_x0
int64_t* x8 = *(entry_x0 + 8)
int64_t x0_1 = (*(*x8 + 0x28))(x8)
char x8_1 = *(entry_x0 + 0x10)
__builtin_memset(&result[3], 0, 0x18)
result[2].b = x8_1
*result = _vtable_for_Botan::ISO_9796_DS3 + 0x10
result[1] = x0_1
return result
