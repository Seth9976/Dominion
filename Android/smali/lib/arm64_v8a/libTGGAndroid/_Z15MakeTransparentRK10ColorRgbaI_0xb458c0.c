// 函数: _Z15MakeTransparentRK10ColorRgbaI
// 地址: 0xb458c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_5 = *arg1
int64_t result = (mulu.dp.d(0x80 + (x8_5 u>> 0x10 & 0xff) * 0x56, 0x80808081) u>> 0x17 & 0x1ff0000)
    | (zx.q(((mulu.dp.d(0x80 + (x8_5 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w)
    & 0xff00) | zx.q(((0x80 + (x8_5 & 0xff) * 0x70) u/ 0xff).w)
return result
