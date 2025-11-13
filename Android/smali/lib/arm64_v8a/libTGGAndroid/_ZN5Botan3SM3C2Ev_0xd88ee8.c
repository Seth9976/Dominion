// 函数: _ZN5Botan3SM3C2Ev
// 地址: 0xd88ee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x0
Botan::MDx_HashFunction::MDx_HashFunction(entry_x0, true, true, 1)
*(entry_x0 + 0x40) = 0
*(entry_x0 + 0x48) = 0
*entry_x0 = _vtable_for_Botan::SM3 + 0x10
*(entry_x0 + 0x38) = 0
int64_t result = Botan::allocate_memory(0x20, 4)
*(entry_x0 + 0x48) = result + 0x80
__builtin_memset(result, 0, 0x80)
int64_t x8_1 = *(entry_x0 + 0x18)
int64_t x10 = *(entry_x0 + 0x20)
*(entry_x0 + 0x38) = result
*(entry_x0 + 0x40) = result + 0x80

if (x10 != x8_1)
    memset(x8_1, 0, x10 - x8_1)
    result = *(entry_x0 + 0x38)

*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
__builtin_memcpy(result, 
    "\x6f\x16\x80\x73\xb9\xb2\x14\x49\xd7\x42\x24\x17\x00\x06\x8a\xda\xbc\x30\x6f\xa9\xaa\x38\x31\x16\x"
"4d\xee\x8d\xe3\x4e\x0e\xfb\xb0", 
    0x20)
return result
