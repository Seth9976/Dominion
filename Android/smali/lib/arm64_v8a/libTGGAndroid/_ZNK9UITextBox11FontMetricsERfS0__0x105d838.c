// 函数: _ZNK9UITextBox11FontMetricsERfS0_
// 地址: 0x105d838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x0 = *(arg1 + 0x48)
float* result
float v0_2
float v1_1

if (x0 == 0)
    result = FontGetDef(*(arg1 + 0x40))
    *arg2 = arg1[0x16] * float.s(*result)
    v0_2 = arg1[0x16]
    v1_1 = float.s(result[1])
else
    *arg2 = TTFontAscent(x0, arg1[0x14]) * arg1[0x16]
    result, v0_2 = TTFontGetHeight(*(arg1 + 0x48), arg1[0x14])
    v1_1 = arg1[0x16]

float* entry_x2
*entry_x2 = v0_2 * v1_1
return result
