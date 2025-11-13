// 函数: _Z30ImageBufferRowCopy24BitTo32BitPhS_i
// 地址: 0xf73b64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

int32_t i

do
    uint16_t x8_1 = zx.w(arg1[2])
    int16_t x9_1 = *arg1
    arg1 = &arg1[3]
    i = arg3
    arg3 -= 1
    *arg2 = zx.d(x9_1) | zx.d(x8_1) << 0x10 | 0xff000000
    arg2 = &arg2[4]
while (i != 1)
