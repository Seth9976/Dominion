// 函数: _ZN15OpenGLInterface10SetScissorE5RectI
// 地址: 0xf8dbe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int32_t x19 = entry_x1.d
int64_t var_30 = entry_x1
int64_t x2
int64_t var_28 = x2
uint32_t x21 = (entry_x1 u>> 0x20).d
int32_t x0_1 = RectIWidth(&var_30)
int64_t result = RectIHeight(&var_30)
int32_t* x8_1 = *gOpenGLInterface + 0x41a0

if (*x8_1 == x19 && x8_1[1] == x21 && x8_1[2] == x0_1 && x8_1[3] == result.d)
    return result

*x8_1 = x19
x8_1[1] = x21
x8_1[2] = x0_1
x8_1[3] = result.d
return glScissor(zx.q(var_30.d), zx.q(var_30:4.d), zx.q(RectIWidth(&var_30)), 
    zx.q(RectIHeight(&var_30)))
