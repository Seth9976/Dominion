// 函数: _Z18DrawImageTransformP6XAssetfffff
// 地址: 0xfccac0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
sincosf(&sinp, &cosp, arg4)
float cosp_1 = cosp
float sinp_1 = sinp
int32_t var_38 = 0x3f800000
int128_t v2 = data_71ae80
int64_t var_40 = 0
float var_58 = cosp_1 * arg5
float var_54 = sinp_1 * arg6
float var_48 = cosp_1 * arg6
float var_44 = arg3
float var_50 = arg2
float var_4c = fneg(sinp_1) * arg5
int128_t var_70 = v2
return DrawImageMatrixParams(arg1, &var_58, &var_70, gSpriteWhite, nullptr)
