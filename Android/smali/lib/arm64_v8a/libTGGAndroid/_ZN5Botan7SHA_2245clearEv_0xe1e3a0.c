// 函数: _ZN5Botan7SHA_2245clearEv
// 地址: 0xe1e3a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t result = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)

if (x8 != result)
    result = memset(result, 0, x8 - result)

int32_t* x8_1 = *(entry_x0 + 0x38)
*(entry_x0 + 0x30) = 0
*(entry_x0 + 0x10) = 0
*x8_1 = 0xc1059ed8
*(*(entry_x0 + 0x38) + 4) = 0x367cd507
*(*(entry_x0 + 0x38) + 8) = 0x3070dd17
*(*(entry_x0 + 0x38) + 0xc) = 0xf70e5939
*(*(entry_x0 + 0x38) + 0x10) = 0xffc00b31
*(*(entry_x0 + 0x38) + 0x14) = 0x68581511
*(*(entry_x0 + 0x38) + 0x18) = 0x64f98fa7
*(*(entry_x0 + 0x38) + 0x1c) = 0xbefa4fa4
return result
