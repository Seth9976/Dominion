// 函数: _ZN5Botan10polyn_gf2m11set_to_zeroEv
// 地址: 0xda68e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
int64_t result = *(entry_x0 + 8)
int64_t x8 = *(entry_x0 + 0x10)

if (x8 != result)
    result = memset(result, 0, x8 - result)

*entry_x0 = 0xffffffff
return result
