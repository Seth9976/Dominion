// 函数: sub_f32504
// 地址: 0xf32504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = *(arg1 + 8)
*(x19 + 0x10)
int32_t x0_1
int64_t x1_1
x0_1, x1_1 = Botan::HOTP::verify_hotp((**(arg1 + 0x10)).d, zx.q(*x19), *(x19 + 8))
int64_t* x8_1 = *(x19 + 0x18)

if (x8_1 != 0)
    *x8_1 = x1_1

return zx.q(not.d(x0_1)) & 1
