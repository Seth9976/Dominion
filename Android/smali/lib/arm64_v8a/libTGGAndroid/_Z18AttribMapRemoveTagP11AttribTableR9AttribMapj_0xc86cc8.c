// 函数: _Z18AttribMapRemoveTagP11AttribTableR9AttribMapj
// 地址: 0xc86cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*arg2)

if (i_1.d s>= 1)
    void* x9_1 = *(arg2 + 8)
    int64_t* x23_1 = x9_1 + 8
    void* x24_1 = x9_1 + 0x10
    uint64_t i
    
    do
        if (x23_1[-1].d == arg3)
            void* x8_1 = *(*(arg1 + 0x18) + (zx.q(arg3) << 3))
            DefMap* x22_1 = *(x8_1 + 0x18)
            
            if (*(x22_1 + 0x18) != 8)
                if ((DefTypeIsBuiltIn(x22_1) & 1) == 0)
                    void* x0_4 = *x23_1
                    
                    if (x0_4 != *(*(*(arg1 + 0x18) + (zx.q(arg3) << 3)) + 0x48))
                        DefinitionDeleteBlock(x0_4, x22_1)
                        *x23_1 = 0
            else
                void* x0_1 = *x23_1
                
                if (x0_1 != *(x8_1 + 0x48))
                    XFree(x0_1)
                    *x23_1 = 0
            
            int32_t x8_6 = *arg2
            size_t x2 = *(arg2 + 8) + sx.q(x8_6 << 4) - x24_1
            
            if (x2 s>= 1)
                memcpy(x23_1 - 8, &x23_1[1], x2)
                x8_6 = *arg2
            
            *arg2 = x8_6 - 1
            
            if (x8_6 == 1)
                XFree(*(arg2 + 8))
                *(arg2 + 8) = 0
            
            return 1
        
        x23_1 = &x23_1[2]
        i = i_1
        i_1 -= 1
        x24_1 += 0x10
    while (i != 1)

return 0
