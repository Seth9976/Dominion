// 函数: _Z15UI2GetClickInfo9UI2Handle
// 地址: 0x1041dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(arg1)
int64_t x21 = *gUI2
int32_t* entry_x8
__builtin_memset(entry_x8, 0, 0x28)
int64_t result = *(x21 + mulu.dp.d(x20.d, 0x19a8) + 0x15d8)

if (result == 0)
    result = XString::GetString()

void* x8_2 = x21 + x20 * 0x19a8
*(entry_x8 + 8) = result
*entry_x8 = *(x8_2 + 0x19a0)
entry_x8[4] = *(x8_2 + 0x1740)
return result
