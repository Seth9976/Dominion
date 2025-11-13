// 函数: _Z17RendererDrawStatsv
// 地址: 0xfa2840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8

if ((zx.d(data_2421e78) & 1) == 0 && __cxa_guard_acquire(&data_2421e78) != 0)
    data_2421e70 = AssetPtrFromPath("sys/DebugFont.font", 0x12)
    __cxa_guard_release(&data_2421e78)

InVRMode()
XString::XString()
uint64_t x20 = *gpRenderAppData
*(x20 + 0x64)
*(x20 + 0x68)
*(x20 + 0x70)
*(x20 + 0x74)
*(x20 + 0x6c)
XFormatString("draw calls: %d, vb: %d, vao: %d, verts: %dK, tris: %dK\r")
XString::operator char const*()
char var_28
XString::operator+=(&var_28)
XString::~XString()
*(x20 + 0x88)
*(x20 + 0x8c)
*(x20 + 0x90)
XFormatString("sprite: draws %d, draws calls %d, texture swaps %d\r")
XString::operator char const*()
XString::operator+=(&var_28)
XString::~XString()
*(x20 + 0x78)
*(x20 + 0x7c)
XFormatString("draw3d: meshes %d (draws calls %d)\r")
XString::operator char const*()
XString::operator+=(&var_28)
XString::~XString()
*(x20 + 0x80)
*(x20 + 0x84)
XFormatString("draw3d: quads %d (draws calls %d)\r")
XString::operator char const*()
XString::operator+=(&var_28)
XString::~XString()

if (zx.d(*(*gAppInterface + 0x3c)) != 0)
    int64_t* x0_10 = *gGraphicsInterface
    int64_t v0_2 = (*(*x0_10 + 0x160))(x0_10, 0)
    int64_t* x0_11 = *gGraphicsInterface
    int32_t v0_3
    int128_t v1_2
    int128_t v2_2
    v0_3, v1_2, v2_2 = (*(*x0_11 + 0x160))(x0_11, 1)
    v2_2.q = fconvert.d(v0_2.d)
    v1_2.q = fconvert.d(v0_3)
    XFormatString("gpu eyes %0.2f ms, vr end %0.2f ms\r")
    XString::operator char const*()
    XString::operator+=(&var_28)
    XString::~XString()

*(gPhoneStats + 8)
*(gPhoneStats + 0xc)
*(gPhoneStats + 0x14)
*(gPhoneStats + 0x10)
*(gPhoneStats + 0x18)
XFormatString("temp %0.1f, cpu %0.0f%%, gpu %0.0f%%\r")
XString::operator char const*()
XString::operator+=(&var_28)
XString::~XString()
XAsset* x2_4 = data_2421e70
int128_t var_40 = data_71a980
DrawStringWrapped(&var_28, &var_40, x2_4, zx.q(*gRgbaIWhite), 1)
return XString::~XString()
