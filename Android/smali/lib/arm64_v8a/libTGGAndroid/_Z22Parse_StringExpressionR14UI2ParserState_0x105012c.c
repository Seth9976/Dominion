// 函数: _Z22Parse_StringExpressionR14UI2ParserState
// 地址: 0x105012c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
int64_t x0_1
int128_t v0
x0_1, v0 = strchr(x20, 0x5b)
int32_t* entry_x8

if (x0_1 == 0)
    *entry_x8 = data_24b6268
    return XString::XString(&entry_x8[4]) __tailcall

void* x21_1 = *arg1
size_t x0_3 = strlen(x20)
int64_t x8 = sx.q(*(x21_1 + 0x428))
*(x21_1 + 0x428) = x8.d + 1
*(x21_1 + x8 * 0x38 + 0xa8) = 6
*(x21_1 + x8 * 0x38 + 0xb0) = x20
*(x21_1 + x8 * 0x38 + 0xb8) = x0_3
int64_t result = XString::XString()
*entry_x8 = 3
*(entry_x8 + 8) = x21_1 + x8 * 0x38 + 0xa8
return result
