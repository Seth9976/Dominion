// 函数: _Z20AttribTreeDeleteItemR10AttribTreei
// 地址: 0x102d678
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_830[0x100]
memset(&var_830, 0, 0x800)
int32_t var_c30[0x100]
memset(&var_c30, 0, 0x400)
int64_t x11 = sx.q(*(arg1 + 8))

if (x11.d != 0)
    int64_t x10_1 = *arg1
    int32_t x15_1 = 0
    int64_t x8_1 = 0
    int64_t x14_1 = 0
    int64_t x11_1
    
    x11_1 = x11 u> 1 ? x11 : 1
    
    do
        int32_t x17_1 = x15_1 - 1
        var_c30[x14_1] = x17_1
        
        if (x8_1 == sx.q(arg2))
            void* x8_2 = var_830[x14_1]
            
            if (x8_2 != 0)
                *(x8_2 + 0x10) -= 1
            
            break
        
        void* x0_2 = x10_1 + x8_1 * 0x18
        x15_1 = *(x0_2 + 0x10)
        int64_t x16_1 = x14_1 + 1
        var_830[x16_1] = x0_2
        var_c30[x16_1] = x15_1
        
        if (x15_1 == 0 && x16_1 != 0)
            if (x17_1 != 0 || x14_1 == 0)
                x15_1 = x17_1
                x16_1 = x14_1
            else
                bool cond:3_1
                
                do
                    void var_c34
                    x15_1 = *(&var_c34 + (x14_1 << 2))
                    x16_1 = x14_1 - 1
                    
                    if (x15_1 != 0)
                        break
                    
                    cond:3_1 = x14_1 != 1
                    x14_1 = x16_1
                while (cond:3_1)
        
        x8_1 += 1
        x14_1 = x16_1
    while (x8_1 != x11_1)

return DefinitionVariableArrayDeleteItem(arg1, DefFindField(*macro_ptr_AttribTree, 0), arg2, 
    *gUI2AttribTable) __tailcall
