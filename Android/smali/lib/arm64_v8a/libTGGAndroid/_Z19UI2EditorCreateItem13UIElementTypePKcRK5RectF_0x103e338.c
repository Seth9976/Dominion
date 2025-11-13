// 函数: _Z19UI2EditorCreateItem13UIElementTypePKcRK5RectF
// 地址: 0x103e338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(gUI2Editor + 0x6008)
int64_t* x8 = *x19

if (x8 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x8 = *x19

int64_t* x23 = *x8
int32_t x19_1 = x23[1].d
DefinitionVariableArrayInsertItems(x23, DefFindField(*macro_ptr_AttribTree, 0), x19_1, 1)
AttribMap* x23_1 = *x23 + muls.dp.d(x19_1, 0x18)
AttribMapSetString(*gUI2AttribTable, x23_1, 0x64, arg2)
AttribMapSetInt(*gUI2AttribTable, x23_1, 0x66, arg1)
AttribMapSetDef(*gUI2AttribTable, x23_1, 0x76, arg3)
AttribMapGetDef(*gUI2AttribTable, x23_1, *macro_ptr_RectF, 0x76)
uint64_t x23_2 = zx.q(*(gUI2Editor + 0x6010))
int64_t x26 = *gUI2
UI2* x21_1 = x26 + x23_2 * 0x19a8
void* result = UI2Alloc(x21_1)
uint64_t x8_3 = zx.q(*(x21_1 + 0x1970))
int32_t x28 = *(result + 0x19a0)

if (x8_3.d s>= 0x40)
    int64_t x21_2 = 0
    
    do
        *(*gUI2 + zx.q(*(x26 + x23_2 * 0x19a8 + 0x1870 + (x21_2 << 2))) * 0x19a8 + 0x1658)
        XTrace("child i %d idx %d")
        x8_3 = sx.q(*(x21_1 + 0x1970))
        x21_2 += 1
    while (x21_2 s< x8_3)

*(x21_1 + 0x1970) = x8_3.d + 1
void* x9_4 = x26 + x23_2 * 0x19a8
*(x9_4 + (sx.q(x8_3.d) << 2) + 0x1870) = x28
int64_t x8_8 = *(x9_4 + 0x1688)
*(result + 0x1690) = x19_1
*(result + 0x1688) = x8_8
void** x10 = gUI2Editor + sx.q(x19_1) * 0x18
*(gUI2Editor + 0x6000) += 1
*x10 = result
x10[2].d = 2
x10[1] = -0x100000000
return result
