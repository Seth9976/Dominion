// 函数: _Z16XmlWriteOpenFileP9XmlWriterPKc
// 地址: 0x1063914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* x0_1 = fopen(arg2, "wb")
*arg1 = x0_1

if (x0_1 != 0)
    *(arg1 + 8) = 0

return zx.q(x0_1 != 0 ? 1 : 0)
