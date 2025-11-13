// 函数: _ZN5Botan9CryptoBox11decrypt_binERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd089fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_1 = zx.q(*arg1)
int32_t temp0 = x9_1.d & 1
uint8_t* x0

if (temp0 != 0)
    x0 = *(arg1 + 0x10)
else
    x0 = arg1 + 1

uint64_t x1

if (temp0 == 0)
    x1 = x9_1 u>> 1
else
    x1 = *(arg1 + 8)

return Botan::CryptoBox::decrypt_bin(x0, x1, arg2) __tailcall
