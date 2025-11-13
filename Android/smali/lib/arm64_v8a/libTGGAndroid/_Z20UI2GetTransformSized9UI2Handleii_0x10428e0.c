// 函数: _Z20UI2GetTransformSized9UI2Handleii
// 地址: 0x10428e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2* x20 = *gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8)
RectF var_40
void var_30
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = UI2TableTransform(x20, arg2, &var_30, &var_40, false)
v0.q = *(x20 + 0x13a8)
void* entry_x8
v1.q = *(entry_x8 + 0x14)
int32_t v2 = *(entry_x8 + 0x1c)
double v0_1 = vadd_f32(v0, v1)
v1.d = v2 f+ 0f
*(entry_x8 + 0x14) = v0_1
*(entry_x8 + 0x1c) = v1.d
return result
