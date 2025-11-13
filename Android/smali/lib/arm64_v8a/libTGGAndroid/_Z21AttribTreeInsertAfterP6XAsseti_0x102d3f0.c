// 函数: _Z21AttribTreeInsertAfterP6XAsseti
// 地址: 0x102d3f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t* x19_2 = *x8
int64_t var_840[0x100]
memset(&var_840, 0, 0x800)
int32_t var_c40[0x100]
memset(&var_c40, 0, 0x400)
int64_t x21 = sx.q(x19_2[1].d)
int64_t x22

if (x21.d == 0)
    x22 = 0
else
    int64_t x10_1 = *x19_2
    int32_t x15_1 = 0
    int64_t x8_2 = 0
    int64_t x14_1 = 0
    int64_t x11_1
    
    x11_1 = x21 u> 1 ? x21 : 1
    
    while (true)
        int32_t x17_1 = x15_1 - 1
        var_c40[x14_1] = x17_1
        
        if (x8_2 == sx.q(arg2))
            void* x8_3 = var_840[x14_1]
            x22 = x21
            
            if (x8_3 == 0)
                break
            
            *(x8_3 + 0x10) += 1
            DefinitionVariableArrayAddItem(x19_2, DefFindField(*macro_ptr_AttribTree, 0), arg2 + 1)
            return *x19_2 + muls.dp.d(arg2 + 1, 0x18)
        
        void* x0_5 = x10_1 + x8_2 * 0x18
        x15_1 = *(x0_5 + 0x10)
        int64_t x16_1 = x14_1 + 1
        var_840[x16_1] = x0_5
        var_c40[x16_1] = x15_1
        
        if (x15_1 == 0 && x16_1 != 0)
            if (x17_1 != 0 || x14_1 == 0)
                x15_1 = x17_1
                x16_1 = x14_1
            else
                bool cond:3_1
                
                do
                    void var_c44
                    x15_1 = *(&var_c44 + (x14_1 << 2))
                    x16_1 = x14_1 - 1
                    
                    if (x15_1 != 0)
                        break
                    
                    cond:3_1 = x14_1 != 1
                    x14_1 = x16_1
                while (cond:3_1)
        
        x8_2 += 1
        x14_1 = x16_1
        
        if (x8_2 == x11_1)
            x22 = x21
            break

DefinitionVariableArrayAddItem(x19_2, DefFindField(*macro_ptr_AttribTree, 0), x21.d)
return *x19_2 + x22 * 0x18
