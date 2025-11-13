// 函数: _Z17DrawCircleOutline4Vec2f10ColorRgbaIb
// 地址: 0xc1ca90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_60 = v15
int64_t v14
int64_t var_58 = v14
int64_t v11
int64_t var_40 = v11
int32_t var_14 = arg1
int64_t v12
v12.d = *TWO_PI
int32_t i = 1
int64_t v13
v13.d = fconvert.s(15f)
int64_t result

do
    v11.d = float.s(i) f/ v13.d f* v12.d
    float cosp
    float sinp
    sincosf(&sinp, &cosp, float.s(i - 1) f/ v13.d f* v12.d)
    v14.d = cosp
    v15.d = sinp
    float cosp_1
    float sinp_1
    sincosf(&sinp_1, &cosp_1, v11.d)
    float entry_v1
    float entry_v2
    float v0_1 = entry_v1 + cosp_1 * entry_v2
    float var_70 = arg2 + sinp_1 * entry_v2
    float var_6c_1 = v0_1
    float var_68 = arg2 + v15.d f* entry_v2
    float var_64_1 = entry_v1 + v14.d f* entry_v2
    result = Line2Draw(&var_68, &var_70, V20, &var_14, fconvert.s(1f))
    i += 1
while (i != 0x10)

return result
