// 函数: _Z15UI2DrawQuadloopRK3UI2
// 地址: 0x10292cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8

if (*(arg1 + 0x1460) == 0)
    return 

UI2 const& x19_1 = arg1

if (not(*(arg1 + 0x1710) f!= 0f))
    return 

v8 = GameGetTimeSimulation()
int64_t v0_1
v0_1.d = *(x19_1 + 0x704)
float v1_1 = v8.d f- v0_1.d
v0_1.d = *(x19_1 + 0x6f4) f+ *(x19_1 + 0x6f0)
int32_t x0_1

if (v1_1 f< v0_1.d || *(x19_1 + 0x6e4) s> 1)
    v0_1.d = *(x19_1 + 0x700)
    v0_1.d = v8.d f- v0_1.d
    x0_1 = PropEval<ColorRgbaI>(x19_1 + 0x678, x19_1 + 0x6b4, x19_1 + 0x6f0, v0_1.d, v1_1, v1_1)
else
    x0_1 = *(x19_1 + 0x6b4)

int32_t var_34 = x0_1

if ((ColorMult(&var_34, x19_1 + 0x1704) & 0xff000000) == 0)
    return 

float v1_2 = v8.d f- *(x19_1 + 0x9d4)

if (v1_2 < *(x19_1 + 0x9c4) + *(x19_1 + 0x9c0) || *(x19_1 + 0x9b4) s>= 2)
    PropEval<ColorRgbaI>(x19_1 + 0x948, x19_1 + 0x984, x19_1 + 0x9c0, v8.d f- *(x19_1 + 0x9d0), 
        v1_2, v1_2)

arg1 = *(x19_1 + 0x14f0)

if (arg1 == 0)
label_10293f4:
    
    if (*(*gpRenderAppData + 0x3b8) == 0 && (zx.d(data_24b4918) & 1) == 0
            && __cxa_guard_acquire(&data_24b4918).d != 0)
        data_24b4910 = AssetPtrFromPath("sys/sprite_3d.material", 5)
        __cxa_guard_release(&data_24b4918)
else if (*(arg1 + 8) == 0x1d && MaterialFn_EmitMaterial(arg1) == 0)
    goto label_10293f4

int32_t x20_2 = *(x19_1 + 0x1470)
int32_t x21_1 = *(x19_1 + 0x1474)
int32_t x22_1 = x21_1 * x20_2

if (x22_1 s< 2)
    return 

v1_2 = *(x19_1 + 0x1478)
float v0_2 = 0f

if (not(v1_2 == 0f))
    v0_2 = CalcFlipAnimT(zx.q(*(x19_1 + 0x147c)), v8.d, v1_2)

float temp0 = vrndm_f32(v0_2 * float.s(x22_1))

if (temp0 < 0f)
    v1_2 = fconvert.s(-0.5f)
else
    v1_2 = fconvert.s(0.5f)

uint32_t temp0_1 = vcvts_s32_f32(temp0 + v1_2)
return SpriteUVFromStrip(temp0_1 - (x22_1 == temp0_1 ? 1 : 0), x20_2, x21_1) __tailcall
