// 函数: _Z15StructureCreateP6XAsset
// 地址: 0xfd3e1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = **gpGameData
uint64_t x23 = zx.q(x21[2].d)
int32_t x8_2
int64_t x24

if (x23.d != x21[1].d)
    x24 = *x21
    x8_2 = *(x24 + x23 * 0x98 + 0x90)
else
    x24 = *x21
    x8_2 = x23.d + 1
    x21[1].d = x8_2

x21[2].d = x8_2
XString* result = x24 + x23 * 0x98
__builtin_memset(result, 0, 0x90)
XString::XString()
__builtin_memset(result + 0x50, 0, 0x14)
*(result + 0x90) = x23.d | x21[3].d << 0x10
int32_t x8_6 = x21[3].d
int32_t x8_7

if (x8_6 == 0xffff)
    x8_7 = 1
else
    x8_7 = x8_6 + 1

*(x21 + 0x14) += 1
x21[3].d = x8_7
XAsset* x21_1 = arg1
int64_t* x8_8
int128_t v0

if (arg1 == 0)
    XAsset* x0_4
    x0_4, v0 = AssetPtrGetNull(2)
    x21_1 = x0_4
    x8_8 = *x21_1
    
    if (x8_8 == 0)
        AssetCatalogLoadAsset(x21_1, false, true)
        x8_8 = *x21_1
else
    x8_8 = *x21_1
    
    if (x8_8 == 0)
        AssetCatalogLoadAsset(x21_1, false, true)
        x8_8 = *x21_1

*(x21_1 + 0x24) += 1
void* x25 = x24 + x23 * 0x98
int64_t x10_1 = *V0
void* x8_9 = *x8_8
*(x25 + 0x18) = *(V0 + 8)
*(x25 + 0x10) = x10_1
*(x25 + 0x1c) = *QI
v0.d = *(x8_9 + 0x38)
*(x25 + 0x2c) = v0.d
*(x25 + 8) = arg1
AssetNameFromPath(XString::operator char const*())
XString::operator=(result)
XString::~XString()
void* x8_10 = x24 + x23 * 0x98
int128_t v0_1 = *gRgbaWhite
*(x8_10 + 0x84) = 1
*(x8_10 + 0x40) = 0
*(x8_10 + 0x48) = 0
*(x8_10 + 0x74) = v0_1
int64_t* x22_2 = *(x25 + 8)
int64_t* x8_11

if (x22_2 == 0)
    int64_t* x0_6
    x0_6, v0_1 = AssetPtrGetNull(2)
    x22_2 = x0_6
    x8_11 = *x22_2
    
    if (x8_11 == 0)
        AssetCatalogLoadAsset(x22_2, false, true)
        x8_11 = *x22_2
else
    x8_11 = *x22_2
    
    if (x8_11 == 0)
        AssetCatalogLoadAsset(x22_2, false, true)
        x8_11 = *x22_2

*(x22_2 + 0x24) += 1
int64_t* x8_12 = *x8_11
void* x9_7 = *x8_12

if (x9_7 == 0)
    *(x24 + x23 * 0x98 + 0x68) = 0x3f800000
    v0_1.d = fconvert.s(1f)
else
    v0_1.d = *(x25 + 0x2c)
    *(x24 + x23 * 0x98 + 0x68) = v0_1.d f* *(x9_7 + 0x58)
    v0_1.d = v0_1.d f* *(*x8_12 + 0x5c)

*(x24 + x23 * 0x98 + 0x6c) = v0_1.d
*(x22_2 + 0x24) -= 1
*(x24 + x23 * 0x98 + 0x38) = AnimationStructureAlloc(arg1)
*(x21_1 + 0x24) -= 1
return result
