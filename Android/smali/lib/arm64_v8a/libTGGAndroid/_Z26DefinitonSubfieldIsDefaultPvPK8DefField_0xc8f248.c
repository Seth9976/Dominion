// 函数: _Z26DefinitonSubfieldIsDefaultPvPK8DefField
// 地址: 0xc8f248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DefinitionGetFieldData(arg1, arg2)
DefMap* x8 = *(arg2 + 0x18)
uint64_t x9_1 = zx.q(*(x8 + 0x18) - 1)

if (x9_1.d u> 0x10)
label_c8f2b8:
    int64_t x21_1 = *(arg2 + 0x48)
    
    if (x0 == x21_1)
        return 1
    
    if (x21_1 != 0)
        return zx.q(memcmp(x0, x21_1, sx.q(DefinitionGetSize(x8))) == 0 ? 1 : 0)
    
    int32_t x0_15 = DefIterGetFirst(x8)
    int32_t var_24 = x0_15
    int32_t x0_19
    
    if (x0_15 == 0xffffffff)
        x0_19 = 1
    else
        do
            x0_19 = DefinitonSubfieldIsDefault(x0, DefIterGetNext(*(arg2 + 0x18), &var_24))
            
            if (var_24 == 0xffffffff)
                break
        while ((x0_19 & 1) != 0)
    
    return zx.q(x0_19) & 1

switch (x9_1)
    case 0, 1, 2, 3, 9, 0xd, 0xf
        if (memcmp(x0, arg2 + 0x48, sx.q(*(arg2 + 0x60))) == 0)
            return 1
        
        return 0
    case 4, 5, 8, 0xb, 0x10
        return 0
    case 6, 0xa, 0xc
        goto label_c8f2b8
    case 7
        int64_t x0_9 = *x0
        
        if (x0_9 == 0)
            return 1
        
        if (strcmp(x0_9, *(arg2 + 0x48)) != 0)
            return 0
        
        return 1
    case 0xe
        return zx.q(*x0 == DefinitionGetDefaultAssetPtr(*(arg2 + 0x48), zx.q(*(arg2 + 0x40))) ? 1
            : 0)
