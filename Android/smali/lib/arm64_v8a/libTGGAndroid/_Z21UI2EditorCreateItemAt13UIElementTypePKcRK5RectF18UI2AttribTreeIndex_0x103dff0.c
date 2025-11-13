// 函数: _Z21UI2EditorCreateItemAt13UIElementTypePKcRK5RectF18UI2AttribTreeIndex
// 地址: 0x103dff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4
int64_t* x23 = *(gUI2Editor + 0x6008)
int64_t* x8 = *x23

if (x8 == 0)
    if (x23[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x23, false, true)
    x8 = *x23

int64_t* x23_1 = *x8
void* x26 = *(UI2GetIndex(zx.q(x19)) + 0x17d0)

if (*(x26 + 0x17d0) != 0)
    int64_t* x24_1 = *(x26 + 0x1688)
    int64_t* x8_3 = *x24_1
    
    if (x8_3 == 0)
        if (x24_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x24_1, false, true)
        x8_3 = *x24_1
    
    void* x8_7 = **x8_3 + sx.q(*(x26 + 0x1690)) * 0x18
    *(x8_7 + 0x10) += 1

uint64_t x11 = zx.q(*(gUI2 + 8))

if (x11.d != 0)
    void* i_2 = *gUI2
    void* i = i_2
    
    do
        if (zx.d(*(i + 0x19a2)) != 0)
            if (i != 0xffffffff)
                int64_t x11_1 = i_2 + x11 * 0x19a8
                
                do
                    if (*(i + 0x1688) == *(gUI2Editor + 0x6008))
                        int32_t x13_3 = *(i + 0x1690)
                        
                        if (x13_3 s>= x19)
                            *(i + 0x1690) = x13_3 + 1
                    
                    if (i == 0)
                        i = i_2
                    else
                        i += 0x19a8
                    
                    if (i u>= x11_1)
                        break
                    
                    while (zx.d(*(i + 0x19a2)) == 0)
                        i += 0x19a8
                        
                        if (i u>= x11_1)
                            goto label_103e190
                while (i != 0xffffffff)
            
            break
        
        i += 0x19a8
    while (i u< i_2 + x11 * 0x19a8)

label_103e190:
int32_t x8_8 = *(gUI2Editor + 0x704c)

if (x8_8 s>= 1)
    int64_t i_1 = 0
    
    do
        void* x12_2 = gUI2Editor + (i_1 << 2)
        int32_t x13_7 = *(x12_2 + 0x604c)
        
        if (x13_7 s>= x19)
            *(x12_2 + 0x604c) = x13_7 + 1
            x8_8 = *(gUI2Editor + 0x704c)
        
        i_1 += 1
    while (i_1 s< sx.q(x8_8))

DefinitionVariableArrayInsertItems(x23_1, DefFindField(*macro_ptr_AttribTree, 0), x19, 1)
AttribMap* x23_2 = *x23_1 + muls.dp.d(x19, 0x18)
AttribMapSetString(*gUI2AttribTable, x23_2, 0x64, arg2)
AttribMapSetInt(*gUI2AttribTable, x23_2, 0x66, arg1)
AttribMapSetDef(*gUI2AttribTable, x23_2, 0x76, arg3)
AttribMapGetDef(*gUI2AttribTable, x23_2, *macro_ptr_RectF, 0x76)
uint64_t x23_3 = zx.q(*(gUI2Editor + 0x6010))
int64_t x25 = *gUI2
UI2* x21_1 = x25 + x23_3 * 0x19a8
void* result = UI2Alloc(x21_1)
int64_t x8_11 = zx.q(*(x21_1 + 0x1970))
int32_t x26_1 = *(result + 0x19a0)

if (x8_11.d s>= 0x40)
    int64_t x21_2 = 0
    
    do
        *(*gUI2 + zx.q(*(x25 + x23_3 * 0x19a8 + 0x1870 + (x21_2 << 2))) * 0x19a8 + 0x1658)
        XTrace("child i %d idx %d")
        x8_11 = sx.q(*(x21_1 + 0x1970))
        x21_2 += 1
    while (x21_2 s< x8_11)

*(x21_1 + 0x1970) = x8_11.d + 1
void* x9_7 = x25 + x23_3 * 0x19a8
*(x9_7 + (sx.q(x8_11.d) << 2) + 0x1870) = x26_1
int64_t x8_16 = *(x9_7 + 0x1688)
*(result + 0x1690) = x19
*(result + 0x1688) = x8_16
return result
