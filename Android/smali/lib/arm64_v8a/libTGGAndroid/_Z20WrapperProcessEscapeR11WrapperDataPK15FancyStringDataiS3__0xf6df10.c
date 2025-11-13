// 函数: _Z20WrapperProcessEscapeR11WrapperDataPK15FancyStringDataiS3_
// 地址: 0xf6df10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FancyStringData* x2
float v0
x2, v0 = WrapperEscapeGetWidth(arg1, arg2)
float v3 = *(arg1 + 0x10)
int32_t v1 = *(arg1 + 0x1c)
float v2 = v0 + v3
int32_t x21 = v2 f> v1 ? 1 : 0

if (v3 == 0f || v2 f<= v1)
    WrapperDoEscape(arg1, arg2, x2, v0)
    *(arg1 + 0xc) += arg3
else
    x21 = 1

return zx.q(x21)
