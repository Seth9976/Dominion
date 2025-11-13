// 函数: _spAtlasPage_createTexture
// 地址: 0xfaa98c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

strrchr(arg2, 0x2e)
char var_18
XString::XString(&var_18, arg2)
AssetPathFromName(XString::operator char const*(), 3)
int64_t* x0_5
int128_t v0
x0_5, v0 = AssetPtrFromPath(XString::operator char const*(), 3)
*(arg1 + 0x28) = x0_5
int64_t* x8 = *x0_5

if (x8 == 0)
    if (x0_5[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x0_5, false, true)
    x8 = *x0_5

int64_t* x8_3 = **x8
v0.q = *x8_3
float v1 = *(x8_3 + 0xc) f* x8_3[1].d
int128_t v0_1
v0_1.d = vcvt_f32_u32(v0).d f* v1
v0_1:4.d = v0_1:4.d f* v1
*(arg1 + 0x30) = vcvt_s32_f32(v0_1)
XString::~XString()
return XString::~XString()
