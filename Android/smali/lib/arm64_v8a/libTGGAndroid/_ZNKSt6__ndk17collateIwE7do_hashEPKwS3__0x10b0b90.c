// 函数: _ZNKSt6__ndk17collateIwE7do_hashEPKwS3_
// 地址: 0x10b0b90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t entry_x2

if (arg2 == entry_x2)
    return 0

int64_t result = 0

do
    uint64_t x8_1 = zx.q(*arg2)
    arg2 = &arg2[1]
    int64_t x8_2 = x8_1 + (result << 4)
    int64_t x9_1 = x8_2 & 0xf000000000000000
    result = ((x9_1 & 0xffffffffffffff00) | (x9_1 & 0xff00000000000000) u>> 0x38) ^ x8_2
while (entry_x2 != arg2)

return result
