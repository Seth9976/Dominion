// 函数: _Z16PNGCubemapExportiPP6XAsset7XString
// 地址: 0xf71ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1 << 2
int32_t x1 = arg1 * 3
int32_t x0_1 = TextureFormatLinearImageSize(x20, x1, 1)
uint32_t x0_3 = TextureFormatPitch(x20, 1)
int32_t* x0_5
int128_t v0
x0_5, v0 = XMalloc(x0_1)

if (x0_1 s>= 1)
    uint64_t x8_1 = zx.q(x0_1)
    int64_t x9_2
    
    if (x8_1 - 1 u>= 0x1c)
        int64_t i_3 = (((x8_1 - 1) u>> 2) + 1) & 0x7ffffffffffffff8
        void* x12_1 = &x0_5[4]
        x9_2 = i_3 << 2
        v0.q = -0xffffff01000000
        v0:8.q = -0xffffff01000000
        int64_t i_2 = i_3
        int64_t i
        
        do
            *(x12_1 - 0x10) = v0
            *x12_1 = v0
            i = i_2
            i_2 -= 8
            x12_1 += 0x20
        while (i != 8)
        
        if (((x8_1 - 1) u>> 2) + 1 != i_3)
            goto label_f71f70
    else
        x9_2 = 0
    label_f71f70:
        
        do
            *(x0_5 + x9_2) = 0xff000000
            x9_2 += 4
        while (x9_2 u< x8_1)

int32_t var_70 = arg1
int32_t var_6c = arg1
uint32_t var_68 = x0_3
int32_t var_64 = 1
int64_t i_1 = 0
int64_t x20_2 = sx.q(TextureFormatPitch(arg1, 1))
void* var_b0
void* var_90

do
    if (i_1.d u>= 6)
        pthread_kill(pthread_self(), 6)
        int64_t* x0_56 = XNoReturn()
        XString::~XString()
        sub_1101e04(x0_56)
        noreturn
    
    int64_t x8_3 = i_1 << 2
    int32_t x26_1 = *(&data_86575c + x8_3)
    uint64_t x1_1 = zx.q(var_64)
    int64_t x23_1 = sx.q(*(&data_865774 + x8_3))
    int64_t x28_1 = sx.q(*(&data_86578c + x8_3))
    int32_t var_7c_1 = x1_1.d
    int32_t var_80_1 = TextureFormatPitch(arg1, x1_1)
    var_90 = XMalloc(TextureFormatLinearImageSize(arg1, arg1, zx.q(var_7c_1)))
    TextureGetRenderData(arg2[i_1], &var_90)
    uint64_t x1_4 = zx.q(var_64)
    int32_t var_9c_1 = x1_4.d
    int32_t var_a0_1 = TextureFormatPitch(arg1, x1_4)
    var_b0 = XMalloc(TextureFormatLinearImageSize(arg1, arg1, zx.q(var_9c_1)))
    ImageBufferRotateCopy(&var_90, &var_b0, zx.q(x26_1))
    int64_t var_78 = x0_5 + x28_1 * x20_2 + sx.q(x0_3 * arg1) * x23_1
    ImageBufferCopyToNewFormat(&var_b0, &var_78)
    XFree(var_90)
    XFree(var_b0)
    AssetCatalogPurgeAsset(arg2[i_1])
    i_1 += 1
while (i_1 != 6)

XString::operator char const*()
XTrace("Saving environment probe %s")

if ((PNGExportTexture(XString::operator char const*(), 4, x0_5, x0_3, x20, x1) & 1) == 0)
    XString::operator char const*()
    XTrace("PNGExportTexture failed to png write %s")

XFree(x0_5)
SourceFilePathToAssetPath(XString::operator char const*())
XAsset* x0_35 = AssetPtrFromPath(XString::operator char const*(), 3)
AssetCatalogPurgeAsset(x0_35)
void var_c0
XString::XString(&var_c0)
AssetCatalogNewSourceAsset(&var_c0, 3, nullptr)
XString::~XString()
XAsset* x0_38 = TextureCreateForRendering(0x1000, 0x800, 1, 3, nullptr)
RendererPushRT(x0_38, nullptr)
int64_t* x0_39 = *gGraphicsInterface
int128_t v0_1
int128_t v1
v0_1, v1 = (*(*x0_39 + 0x120))(x0_39, zx.q(*(gDraw3DData + 0x38)), 0)
var_b0.o = data_71ae80
int128_t var_d0 = data_71bec0
DrawImageParams(x0_35, &var_d0, &var_b0, gSpriteWhite, 
    AssetPtrFromPath("sys/editor/equirectangular.material", 5))
RendererPopRT()
int32_t x0_42 = TextureFormatLinearImageSize(0x1000, 0x800, 1)
uint32_t x0_43 = TextureFormatPitch(0x1000, 1)
uint32_t var_80_2 = x0_43
int32_t var_7c_2 = 1
int32_t var_88_1
var_88_1.q = 0x80000001000
var_90 = XMalloc(x0_42)
TextureGetRenderData(x0_38, &var_90)
AssetCatalogPurgeAsset(x0_38)
AppGetResPath()
XFormatString("%s/equirectangular_probe.png")
XString::operator char const*()
XTrace("Saving equirectangular probe %s")

if ((PNGExportTexture(XString::operator char const*(), 4, var_90, x0_43, 0x1000, 0x800) & 1) == 0)
    XString::operator char const*()
    XTrace("PNGExportTexture failed to png write %s")

XFree(var_90)
XString::~XString()
return XString::~XString()
