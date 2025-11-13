// 函数: _Z20DefBinReadFixupArrayPvS_iPK8DefFieldP11AttribTablei
// 地址: 0xc84df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3
void* x24 = arg2
int32_t x0_1 = DefinitionGetSize(*(arg4 + 0x30))
int32_t x19 = 1

if (x23 s>= 1)
    while (true)
        DefMap* x0_2 = *(arg4 + 0x30)
        
        if (*(x0_2 + 0x18) != 0xf)
            int32_t x0_7 = DefTypeIsDeepStructure(x0_2)
            DefMap* x8_5 = *(arg4 + 0x30)
            int32_t x9_1 = *(x8_5 + 0x18)
            
            if ((x0_7 & 1) == 0)
                if (x9_1 u> 0x10 || (1 << x9_1 & 0x1441e) == 0)
                    pthread_kill(pthread_self(), 6)
                    void* x0_17
                    void* x1_2
                    DefMap* x2_1
                    AttribTable* x3_1
                    int32_t x4_1
                    x0_17, x1_2, x2_1, x3_1, x4_1 = XNoReturn()
                    return DefBinReadFixupBlock(x0_17, x1_2, x2_1, x3_1, x4_1) __tailcall
            else if (x9_1 != 8)
                DefTypeIsBuiltIn(x8_5)
                DefMap* x26_2 = *(arg4 + 0x30)
                
                if ((DefTypeIsBuiltIn(x26_2) & 1) == 0)
                    if (x24 + sx.q(*(x26_2 + 0x14)) u> arg1 + sx.q(arg6))
                        x19 = 0
                        break
                    
                    if ((DefBinReadFixupField(arg1, x24, x26_2, arg5, arg6) & 1) == 0)
                        x19 = 0
                        break
            else
                int64_t x21_2 = sx.q(*x24)
                
                if (x21_2.d == 0)
                    x19 = 0
                    break
                
                void* x0_8 = arg1 + x21_2
                *x24 = x0_8
                
                if (x21_2.d + strlen(x0_8) + 1 s> arg6)
                    x19 = 0
                    break
        else
            int32_t x21_1 = (*x24).d
            
            if (x21_1 == 0)
                *x24 = 0
            else
                if (x21_1 == 0)
                    x19 = 0
                    break
                
                int32_t x26_1 = *(arg4 + 0x40)
                void* x27_1 = arg1 + sx.q(x21_1)
                *x24 = x27_1
                
                if (x21_1 + strlen(x27_1) + 1 s> arg6)
                    x19 = 0
                    break
                
                *x24 = DefAssetPtrFromPath(x27_1, zx.q(x26_1))
        
        int32_t temp0_1 = x23
        x23 -= 1
        x24 += sx.q(x0_1)
        
        if (temp0_1 == 1)
            x19 = 1
            break

return zx.q(x19)
