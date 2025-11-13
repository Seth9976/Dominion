// 函数: _Z22Draw3DRenderBufferBindv
// 地址: 0xc928ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *gGraphicsInterface

if (((*(*x0 + 0x58))(x0, 
        zx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "woods")) << 2) + "_gallery_header_prizes_1e"))) & 1)
        == 0)
    int64_t* x0_2 = *gGraphicsInterface
    *(gDraw3DData + (sx.q(*(gDraw3DData + "woods")) << 2) + "_gallery_header_prizes_1e") =
        (*(*x0_2 + 0x50))(x0_2, 0, 0xc0000, 0xa, 1)

int64_t* x0_4 = *gGraphicsInterface
int64_t result = (*(*x0_4 + 0x70))(x0_4, zx.q(*(gDraw3DData + "m_ui_gallery_header_prizes_1e")))

if ((result.d & 1) != 0)
    return result

int16_t* x0_5
int128_t v0
int128_t v1
x0_5, v0, v1 = XMalloc(0xc000)
v0.q = 0x100000002
int64_t i = 0
int16_t* x9_1 = x0_5

do
    int32_t x10_1 = i.d << 2
    v1.d = x10_1
    v1:4.d = x10_1
    int128_t v1_2 = vuzp1_s16(vorr_s8(v1, v0), v0)
    int128_t v1_3 = vzip1_s16(v1_2, v1_2)
    int16_t x11_1 = 3 | ((0x3fffffff & i.d) << 2).w
    i += 1
    v1 = vext_s8(v1_3, v1_3, 2)
    *x9_1 = x10_1.w
    x9_1[5] = x11_1
    *(x9_1 + 2) = v1.q
    x9_1 = &x9_1[6]
while (i != 0x1000)

int64_t* x0_6 = *gGraphicsInterface
*(gDraw3DData + "m_ui_gallery_header_prizes_1e") = (*(*x0_6 + 0x68))(x0_6, x0_5, 0xc000, 0, 0, 
    zx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "woods")) << 2) + "_gallery_header_prizes_1e")))
return XFree(x0_5) __tailcall
