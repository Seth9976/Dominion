// 函数: _ZN5Botan13base32_decodeEPhRKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb
// 地址: 0xcd05bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_2 = zx.q(*arg2)
int32_t temp0 = x8_2.d & 1
uint64_t x8

if (temp0 == 0)
    x8 = x8_2 u>> 1
else
    x8 = *(arg2 + 8)

char* x1

if (temp0 != 0)
    x1 = *(arg2 + 0x10)
else
    x1 = arg2 + 1

return Botan::base32_decode(arg1, x1, x8, arg3 & 1) __tailcall
