// 函数: _ZmlRK10ColorRgbaIS1_
// 地址: 0xfcfa58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_4 = (zx.q(
    (mulu.dp.d(zx.d(0x80 + zx.w(*(arg2 + 1)) * zx.w(*(arg1 + 1))), 0x80808081) u>> 0x20).d << 1)
    & 0xff00) | zx.q(zx.d(0x80 + zx.w(*arg2) * zx.w(*arg1)) u/ 0xff)
int64_t result = (mulu.dp.d(zx.d(0x80 + zx.w(*(arg2 + 2)) * zx.w(*(arg1 + 2))), 0x80808081) u>> 0x17
    & 0x1ff0000) | x8_4 | zx.q((zx.d(0x80 + zx.w(*(arg2 + 3)) * zx.w(*(arg1 + 3))) u/ 0xff) << 0x18)
return result
