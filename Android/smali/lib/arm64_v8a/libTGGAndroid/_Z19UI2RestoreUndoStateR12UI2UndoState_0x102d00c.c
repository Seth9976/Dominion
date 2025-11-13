// 函数: _Z19UI2RestoreUndoStateR12UI2UndoState
// 地址: 0x102d00c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memcpy(gUI2Editor + 0x6048, arg1, 0x1018)
DefinitionDeleteBlock(***(gUI2Editor + 0x6008), *macro_ptr_UI2Def)
int64_t result = DefinitionNewDeepCopyBlock(**(arg1 + 0x1018), *macro_ptr_UI2Def)
***(gUI2Editor + 0x6008) = result
int64_t* x19_1 = *(gUI2Editor + 0x6008)
int64_t* x8_5 = *x19_1
int32_t x9
int64_t* x19_2

if (x8_5 == 0)
    if (x19_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result = AssetCatalogLoadAsset(x19_1, false, true)
    x19_2 = **x19_1
    x9 = x19_2[1].d
    
    if (x9 s>= 1)
        goto label_102d0f0
else
    x19_2 = *x8_5
    x9 = x19_2[1].d
    
    if (x9 s>= 1)
    label_102d0f0:
        int32_t* x8_8 = *x19_2
        int64_t i = 0
        
        do
            if (x8_8[i * 6] s>= 1)
                int64_t x26_1 = 0
                int64_t j = 0
                
                do
                    uint32_t* x28_1 = *(x8_8 + i * 0x18 + 8)
                    result = AttribTagGetDefMap(*gUI2AttribTable, *(x28_1 + x26_1))
                    
                    if (result == *macro_ptr_UI2ExprTreeDef)
                        void* x28_2 = *(x28_1 + x26_1 + 8)
                        int32_t x8_12 = *(x28_2 + 8)
                        
                        if (x8_12 != 0)
                            uint64_t x9_3 = zx.q(x8_12.w)
                            
                            if (x9_3.d u< *(gUI2 + 0x30))
                                int64_t x10_4 = *(gUI2 + 0x28)
                                
                                if (*(x10_4 + x9_3 * 0x438 + 0x430) == x8_12)
                                    void* fp_1 = x10_4 + x9_3 * 0x438
                                    XString::~XString()
                                    XString::~XString()
                                    XString::~XString()
                                    result = XString::~XString()
                                    int32_t x9_4 = *(gUI2 + 0x38)
                                    *(gUI2 + 0x38) = zx.d(*(fp_1 + 0x430))
                                    *(fp_1 + 0x430) = x9_4
                                    *(gUI2 + 0x3c) -= 1
                        
                        *(x28_2 + 8) = 0
                    
                    x8_8 = *x19_2
                    j += 1
                    x26_1 += 0x10
                while (j s< sx.q(x8_8[i * 6]))
                
                x9 = x19_2[1].d
            
            i += 1
        while (i s< sx.q(x9))
return result
