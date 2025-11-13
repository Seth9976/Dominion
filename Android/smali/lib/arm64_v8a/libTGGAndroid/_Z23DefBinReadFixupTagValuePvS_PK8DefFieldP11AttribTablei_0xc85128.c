// 函数: _Z23DefBinReadFixupTagValuePvS_PK8DefFieldP11AttribTablei
// 地址: 0xc85128
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0_1 = DefinitionGetFieldDataAux(arg2, arg3)
DefMap* x0_3 = AttribTagGetDefMap(arg4, *x0_1)

if (*(x0_3 + 0x18) != 0xf)
    int64_t* x21 = x0_3
    
    if ((DefTypeIsDeepStructure(x0_3) & 1) == 0)
        AttribTagGetField(arg4, *x0_1)
        DefinitionGetFieldData(arg2, arg3)
        int32_t x8_8 = x21[3].d - 1
        
        if (x8_8 u< 0x10 && (0xa20f u>> x8_8 & 1) != 0)
            return 1
        
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        *x21 = 0
        return 1
    
    if (x21[3].d != 8)
        DefTypeIsBuiltIn(x21)
        void** x0_20 = DefinitionGetFieldData(arg2, arg3)
        int64_t x24_2 = sx.q(*x0_20)
        
        if (DefinitionGetSize(x21) + x24_2.d s<= arg5 && x24_2 + arg1 s> arg2)
            void* x22_2 = arg1 + x24_2
            *x0_20 = x22_2
            
            if ((DefTypeIsBuiltIn(x21) & 1) != 0)
                return 1
            
            if (x22_2 + sx.q(*(x21 + 0x14)) u<= arg1 + sx.q(arg5)
                    && (DefBinReadFixupField(arg1, x22_2, x21, nullptr, arg5) & 1) != 0)
                return 1
    else
        void** x0_12 = DefinitionGetFieldData(arg2, arg3)
        int64_t x21_1 = sx.q(*x0_12)
        
        if (x21_1.d != 0)
            void* x8_4 = arg1 + x21_1
            *x0_12 = x8_4
            
            if (x21_1.d + strlen(x8_4) + 1 s<= arg5)
                return 1
else
    int64_t* x0_5 = DefinitionGetFieldData(arg2, arg3)
    int32_t x24_1 = (*x0_5).d
    
    if (x24_1 == 0)
        *x0_5 = 0
        return 1
    
    if (x24_1 != 0)
        int32_t x22_1 = *(arg3 + 0x40)
        void* x20_1 = arg1 + sx.q(x24_1)
        *x0_5 = x20_1
        
        if (x24_1 + strlen(x20_1) + 1 s<= arg5)
            *x0_5 = DefAssetPtrFromPath(x20_1, zx.q(x22_1))
            return 1

return 0
