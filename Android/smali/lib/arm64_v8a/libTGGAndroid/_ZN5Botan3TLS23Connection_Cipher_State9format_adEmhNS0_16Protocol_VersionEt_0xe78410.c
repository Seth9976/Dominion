// 函数: _ZN5Botan3TLS23Connection_Cipher_State9format_adEmhNS0_16Protocol_VersionEt
// 地址: 0xe78410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg4
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t* result = operator new(0xd)
uint64_t x9 = _byteswap(arg2)
result[1].b = arg3
*(result + 0xa) = (x20.d).b
int32_t entry_x4
*(result + 0xc) = entry_x4.b
entry_x8[1] = result + 0xd
entry_x8[2] = result + 0xd
*entry_x8 = result
*result = x9
*(result + 9) = (x20 u>> 8).b
*(result + 0xb) = (entry_x4 u>> 8).b
return result
