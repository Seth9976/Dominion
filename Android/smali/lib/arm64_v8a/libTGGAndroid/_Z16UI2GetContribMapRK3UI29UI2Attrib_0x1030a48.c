// 函数: _Z16UI2GetContribMapRK3UI29UI2Attrib
// 地址: 0x1030a48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x1688)
uint32_t x19 = arg2
int64_t* x8 = *x21

if (x8 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8 = *x21

int64_t x22 = sx.q(*(arg1 + 0x1690))
int64_t x23 = **x8
void* x0_4 = TryGetEditorOverride(arg1)

if (x0_4 != 0)
    AttribMap* x21_1 = x0_4 + 0x18
    
    if ((AttribMapTagExists(x21_1, x19) & 1) != 0)
        return x21_1

AttribMap* x21_2 = x23 + x22 * 0x18
uint32_t x8_4

if (*(gUI2 + 0x60) != 0)
    x8_4 = zx.d(*XString::operator char const*())

AttribMap* x23_2

if (*(gUI2 + 0x60) == 0 || x8_4 == 0)
    x23_2 = nullptr
else
    x23_2 = UI2TryGetAttribsByName(*(gUI2 + 0x60), XString::operator char const*())

int32_t x8_5 = AttribMapTagExists(x21_2, x19) ^ 1
XAsset* x0_15 = *(gUI2 + 0x60)
AttribMap* x22_2 = nullptr
AttribMap* x21_3

if (((x19 != 0xd5 ? 1 : 0) & (x23_2 != 0 ? 1 : 0) & x8_5) != 0)
    x21_3 = x23_2
else
    x21_3 = x21_2

if (x0_15 != 0 && x0_15 != *(arg1 + 0x1688))
    int32_t x8_8 = *(arg1 + 0x167c)
    
    if (x8_8 == 3)
        x22_2 = UI2TryGetAttribsByName(x0_15, "Text")
    else if (x8_8 != 5)
        x22_2 = nullptr
    else
        x22_2 = UI2TryGetAttribsByName(x0_15, "Button")

if (((x19 != 0xd5 ? 1 : 0) & (x22_2 != 0 ? 1 : 0) & (AttribMapTagExists(x21_3, x19) ^ 1)) != 0)
    return x22_2

return x21_3
