// 函数: _ZN15OpenGLInterface11SetViewPortE5RectI
// 地址: 0xf8dc9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int64_t var_40 = entry_x1
int64_t entry_x2
int64_t var_38 = entry_x2
int32_t x19 = entry_x1.d
uint32_t x21 = (entry_x1 u>> 0x20).d

if (zx.d(*(arg1 + 0x4274)) == 0)
    int128_t v0
    v0.d = float.s(x19)
    int128_t v1
    v1.d = float.s(x21)
    int64_t x0
    int128_t v0_1
    int128_t v1_1
    x0, v0_1, v1_1 = SurfaceToWindowCoords(arg1)
    v0_1.d = float.s(entry_x2.d)
    v1_1.d = float.s((entry_x2 u>> 0x20).d)
    int32_t x21_1 = x0.d
    uint32_t x23_1 = (x0 u>> 0x20).d
    int64_t x0_1 = SurfaceToWindowCoords(x0)
    uint32_t x8_1 = (x0_1 u>> 0x20).d
    
    if (x21_1 s< x0_1.d)
        x19 = x21_1
    else
        x19 = x0_1.d
    
    int32_t x9_1
    
    if (x21_1 s> x0_1.d)
        x9_1 = x21_1
    else
        x9_1 = x0_1.d
    
    x21 = x23_1 s< x8_1 ? x23_1 : x8_1
    
    uint32_t x8_2
    
    x8_2 = x23_1 s> x8_1 ? x23_1 : x8_1
    
    var_40.d = x19
    var_40:4.d = x21
    var_38.d = x9_1
    var_38:4.d = x8_2

int32_t x0_3 = RectIWidth(&var_40)
int64_t result = RectIHeight(&var_40)
int32_t* x8_4 = *gOpenGLInterface + 0x4190

if (*x8_4 == x19 && x8_4[1] == x21 && x8_4[2] == x0_3 && x8_4[3] == result.d)
    return result

*x8_4 = x19
x8_4[1] = x21
x8_4[2] = x0_3
x8_4[3] = result.d
return glViewport(zx.q(var_40.d), zx.q(var_40:4.d), zx.q(RectIWidth(&var_40)), 
    zx.q(RectIHeight(&var_40)))
