// 函数: _Z23DrawImageTransformColorP6XAssetfffffRK11SpriteColor
// 地址: 0xfccb60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
sincosf(&sinp, &cosp, arg4)
float cosp_1 = cosp
float sinp_1 = sinp
int32_t var_48 = 0x3f800000
int128_t v2 = data_71ae80
int64_t var_50 = 0
float var_68 = cosp_1 * arg5
float var_64 = sinp_1 * arg6
float var_58 = cosp_1 * arg6
float var_54 = arg3
float var_60 = arg2
float var_5c = fneg(sinp_1) * arg5
int128_t var_80 = v2
return DrawImageMatrixParams(arg1, &var_68, &var_80, arg7, nullptr)
