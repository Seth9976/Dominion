// 函数: _Z23UI2EditorChangeStyleIdxi
// 地址: 0x103c6e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gUI2Editor + 0x704c) == 0 || *(gUI2Editor + 0x6000) == 0)
    return 

int32_t x19_1 = arg1
void* x0_1 = UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
int64_t* x20_1 = *(x0_1 + 0x1688)
int64_t* x8_1 = *x20_1

if (x8_1 == 0)
    if (x20_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x8_1 = *x20_1

int64_t x9_2 = sx.q(*(x0_1 + 0x1690))
int64_t x8_4 = **x8_1
*(x0_1 + 0x1370) = 0
AttribMap* x20_2 = x8_4 + x9_2 * 0x18
char* x0_6 = AttribMapGetString(*gUI2AttribTable, x20_2, 0x67)
char* var_440
char** x23_1 = &var_440
MakeStyles(*(gUI2 + 0x60), zx.q(*(x0_1 + 0x167c)), &var_440)
int32_t x9_3 = -1
int64_t x8_6 = -0x200000000
char* i

do
    i = *x23_1
    x23_1 = &x23_1[1]
    x9_3 += 1
    x8_6 += 0x100000000
while (i != 0)

if (x0_6 != 0 && x9_3 == 0 && zx.d(*x0_6) != 0)
labelid_1:
    AttribMapRemoveTag(*gUI2AttribTable, x20_2, 0x67)
else
    char* x3_1
    
    if (x0_6 == 0 || zx.d(*x0_6) == 0)
        char* var_438
        
        if (x19_1 == 1)
            if (var_438 != 0)
                AttribMapSetString(*gUI2AttribTable, x20_2, 0x67, var_438)
            else
            labelid_1:
                AttribMapRemoveTag(*gUI2AttribTable, x20_2, 0x67)
        else
            if (x19_1 != 0xffffffff)
                pthread_kill(pthread_self(), 6)
                XNoReturn()
                return UI2EditorPrevStyle() __tailcall
            
            x3_1 = (&var_440)[x8_6 s>> 0x20]
            
            if (x3_1 != 0)
                AttribMapSetString(*gUI2AttribTable, x20_2, 0x67, x3_1)
            else
            labelid_1:
                AttribMapRemoveTag(*gUI2AttribTable, x20_2, 0x67)
    else if (x9_3 == 0)
    label_103c89c:
        AttribMapRemoveTag(*gUI2AttribTable, x20_2, 0x67)
    else
        uint64_t x23_2 = zx.q(x9_3)
        char** x24_1 = &var_440
        
        while (strcmp(*x24_1, x0_6) != 0)
            x19_1 += 1
            uint64_t temp0_1 = x23_2
            x23_2 -= 1
            x24_1 = &x24_1[1]
            
            if (temp0_1 == 1)
                goto label_103c89c_2
        
        if ((x19_1 & 0x80000000) != 0)
        label_103c89c_1:
            AttribMapRemoveTag(*gUI2AttribTable, x20_2, 0x67)
        else
            x3_1 = (&var_440)[zx.q(x19_1)]
            
            if (x3_1 == 0)
            label_103c89c_2:
                AttribMapRemoveTag(*gUI2AttribTable, x20_2, 0x67)
            else
                AttribMapSetString(*gUI2AttribTable, x20_2, 0x67, x3_1)
