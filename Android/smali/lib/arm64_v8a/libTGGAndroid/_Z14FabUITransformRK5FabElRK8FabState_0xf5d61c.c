// 函数: _Z14FabUITransformRK5FabElRK8FabState
// 地址: 0xf5d61c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ElBox(arg1, arg2)
float v2 = fconvert.s(0.5f)
float var_2c
float v0 = var_2c * v2
float var_24
float v1 = var_24 * v2
float v3 = *V20
float v4 = *(V20 + 4)
float var_58 = v3 - v0
float var_54 = v4 - v1
float var_50 = v0 + v3
float var_4c = v1 + v4
XAsset* x8 = *(arg2 + 0x68)
XAsset* x0

if (x8 == 0)
    x0 = *(arg1 + 0x88)
else
    x0 = x8

int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0_1, v1_1, v2_1, v3_1 = UILayoutExtentsBG(x0)
int32_t var_68 = v0_1
int32_t var_64 = v1_1
int32_t var_60 = v2_1
int32_t var_5c = v3_1
return UIScreenTransformRel(&var_58, &var_68)
