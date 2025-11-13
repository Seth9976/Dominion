// 函数: _ZN5Botan13base32_decodeERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEb
// 地址: 0xcd0840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9_2 = zx.q(*arg1)
int32_t temp0 = x9_2.d & 1
uint64_t x9

if (temp0 == 0)
    x9 = x9_2 u>> 1
else
    x9 = *(arg1 + 8)

char* x0

if (temp0 != 0)
    x0 = *(arg1 + 0x10)
else
    x0 = arg1 + 1

return Botan::base32_decode(x0, x9, arg2 & 1) __tailcall
