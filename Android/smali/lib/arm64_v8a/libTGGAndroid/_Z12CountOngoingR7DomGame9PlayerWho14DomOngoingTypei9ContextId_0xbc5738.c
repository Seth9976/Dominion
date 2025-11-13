// 函数: _Z12CountOngoingR7DomGame9PlayerWho14DomOngoingTypei9ContextId
// 地址: 0xbc5738
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = arg5
CollectOngoing(arg1, arg2, arg3, 0)
int32_t i_3
uint64_t i_2 = zx.q(i_3)
int32_t x21

if (i_2.d s< 1)
    x21 = 0
else
    x21 = 0
    void var_468
    
    if (x22 == 0)
        void* x26_3 = &var_468
        uint64_t i
        
        do
            uint64_t x1_3 = zx.q(*x26_3)
            int32_t* x8_10
            
            if ((x1_3 & 0x30) == 0)
                void* x0_10 = AbilityGetRegistered(arg1, x1_3)
                
                if (*(x0_10 + 0x4c) != 3)
                    void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_14 = x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98
                    *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_15 = *(x8_14 - 0x90)
                    *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x8_10 = x0_10 + 0x54
            else
                x8_10 = AbilityGetStatic(arg1, x1_3) + 0xa0
            
            x26_3 += 4
            
            if (*x8_10 == arg4)
                x21 += 1
            
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        void* x28_1 = &var_468
        uint64_t i_1
        
        do
            uint64_t x26_1 = zx.q(*x28_1)
            void* x8_1
            
            if ((x26_1 & 0x30) != 0)
                x8_1 = AbilityGetStatic(arg1, x26_1) + 0xa0
            label_bc57b4:
                
                if (*x8_1 == arg4)
                    x21 += 1
            else if (*(AbilityGetRegistered(arg1, x26_1) + 8) == x22)
                void* x0_4 = AbilityGetRegistered(arg1, x26_1)
                
                if (*(x0_4 + 0x4c) != 3)
                    void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_7 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                    *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_8 = *(x8_7 - 0x90)
                    *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                x8_1 = x0_4 + 0x54
                goto label_bc57b4
            i_1 = i_2
            i_2 -= 1
            x28_1 += 4
        while (i_1 != 1)

return zx.q(x21)
