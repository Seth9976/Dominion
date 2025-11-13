// 函数: _Z10DomCardExp11DomCardEnumRi
// 地址: 0x9e3cb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

if (arg1 s< 0)
    x9 = arg1 + 0xff
else
    x9 = arg1

*arg2 = arg1 - (x9 & 0xffffff00)
return zx.q(x9 s>> 8)
