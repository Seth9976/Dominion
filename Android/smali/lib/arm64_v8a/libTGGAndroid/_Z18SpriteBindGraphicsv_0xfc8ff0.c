// 函数: _Z18SpriteBindGraphicsv
// 地址: 0xfc8ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *gGraphicsInterface

if (((*(*x0 + 0x58))(x0, zx.q(**gpSpriteAppData)) & 1) == 0)
    int64_t* x0_2 = *gGraphicsInterface
    **gpSpriteAppData = (*(*x0_2 + 0x50))(x0_2, 0, 0x20000, 1, 1)

int64_t* x0_4 = *gGraphicsInterface

if (((*(*x0_4 + 0x58))(x0_4, zx.q(*(*gpSpriteAppData + 4))) & 1) == 0)
    int64_t* x0_6 = *gGraphicsInterface
    *(*gpSpriteAppData + 4) = (*(*x0_6 + 0x50))(x0_6, 0, 0x20000, 1, 1)

int64_t* x0_8 = *gGraphicsInterface
uint64_t x8_12

if (((*(*x0_8 + 0x58))(x0_8, zx.q(*(*gpSpriteAppData + 8))) & 1) == 0)
    int64_t* x0_10 = *gGraphicsInterface
    int32_t x0_11 = (*(*x0_10 + 0x50))(x0_10, 0, 0x20000, 1, 1)
    x8_12 = *gpSpriteAppData
    *(x8_12 + 8) = x0_11
else
    x8_12 = *gpSpriteAppData

int64_t* x0_12 = *gGraphicsInterface
uint64_t x8_16

if (((*(*x0_12 + 0x58))(x0_12, zx.q(*(x8_12 + 0xc))) & 1) == 0)
    int64_t* x0_14 = *gGraphicsInterface
    int32_t x0_15 = (*(*x0_14 + 0x50))(x0_14, 0, 0x20000, 1, 1)
    x8_16 = *gpSpriteAppData
    *(x8_16 + 0xc) = x0_15
else
    x8_16 = *gpSpriteAppData

int64_t* x0_16 = *gGraphicsInterface
int64_t result = (*(*x0_16 + 0x70))(x0_16, zx.q(*(x8_16 + 0x14)))

if ((result.d & 1) != 0)
    return result

int16_t* x0_17
int128_t v0
int128_t v1
x0_17, v0, v1 = XMalloc(0x3000)
v0.q = 0x200000001
int64_t i = 0
int16_t* x9_5 = x0_17

do
    int32_t x10_1 = i.d << 2
    v1.d = x10_1
    v1:4.d = x10_1
    int128_t v1_2 = vuzp1_s16(vorr_s8(v1, v0), v0)
    int128_t v1_3 = vzip1_s16(v1_2, v1_2)
    int16_t x11_1 = 3 | ((0x3fffffff & i.d) << 2).w
    i += 1
    v1 = vext_s8(v1_3, v1_3, 2)
    *x9_5 = x10_1.w
    x9_5[5] = x11_1
    *(x9_5 + 2) = v1.q
    x9_5 = &x9_5[6]
while (i != 0x400)

int64_t* x0_18 = *gGraphicsInterface
*(*gpSpriteAppData + 0x14) = (*(*x0_18 + 0x68))(x0_18, x0_17, 0x3000, 0, 0, 0)
return XFree(x0_17) __tailcall
