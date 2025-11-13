// 函数: _ZNK5Botan3TLS23Supported_Point_Formats9serializeENS0_15Connection_SideE
// 地址: 0xe6d084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = zx.d(*(arg1 + 8))
void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int16_t* result
void* x8_1
int16_t x9

if (x8 == 0)
    result = operator new(2)
    x8_1 = &result[1]
    x9 = 1
else
    result = operator new(3)
    x8_1 = result + 3
    x9 = 0x102
    result[1].b = 0

entry_x8[1] = x8_1
entry_x8[2] = x8_1
*result = x9
*entry_x8 = result
return result
