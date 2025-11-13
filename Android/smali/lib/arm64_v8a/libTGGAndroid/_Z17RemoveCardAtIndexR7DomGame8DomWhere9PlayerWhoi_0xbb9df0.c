// 函数: _Z17RemoveCardAtIndexR7DomGame8DomWhere9PlayerWhoi
// 地址: 0xbb9df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg4
int32_t x21 = arg2
uint64_t result
void* x24

if (arg2 u> 0x48)
    x24 = arg1 + muls.dp.d(arg3, 0x5a30) + (sx.q(x21) << 2) + 0x16fc8
    result = zx.q(*x24)
    
    if (i_1 != 0)
    label_bb9f70:
        int32_t i
        
        do
            uint32_t x24_1
            
            if (result.d != 0)
                x24_1 = result.d & 0xffff
                
                if (x24_1 u>= 0x320)
                    goto label_bb9f20
                
                goto label_bb9ebc
            
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_8 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_9 = *(x8_8 - 0x90)
            *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x24_1 = zx.d(*x24)
            void* x8_14
            
            if (x24_1 u< 0x320)
            label_bb9ebc:
                x8_14 = arg1 + mulu.dp.d(x24_1, 0x68)
                result = zx.q(*(x8_14 + 0x1ac8))
                
                if (result.d == 0)
                label_bba094:
                    pthread_kill(pthread_self(), 6)
                    DomGame* x0_12
                    int64_t x1
                    int64_t x2
                    int64_t x3
                    x0_12, x1, x2, x3 = XNoReturn()
                    return AddCardTail(x0_12, x1, x2, x3) __tailcall
            else
            label_bb9f20:
                void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_12 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
                *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_13 = *(x8_12 - 0x90)
                *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
                x8_14 = arg1 + mulu.dp.d(x24_1, 0x68)
                result = zx.q(*(x8_14 + 0x1ac8))
                
                if (result.d == 0)
                    goto label_bba094
            
            i = i_1
            i_1 -= 1
            x24 = x8_14 + 0x1ac8
        while (i != 1)
        goto label_bb9f9c
else
    if (arg2 == 0x48)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x24 = arg1 + (zx.q(x21) << 4) + 0x1534
    result = zx.q(*x24)
    
    if (i_1 != 0)
        goto label_bb9f70

int32_t x20

if (result.d == 0)
    void* x0_10 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_25 = x0_10 + sx.q(*(x0_10 + 0x13000)) * 0x98
    *(*(x8_25 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_26 = *(x8_25 - 0x90)
    *(x8_26 + 0x1a2c) = *(x8_26 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    result = zx.q(*x24)
    x20 = result.d & 0xffff
    
    if (x20 u>= 0x320)
    label_bb9fb0:
        void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_19 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
        *(*(x8_19 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_20 = *(x8_19 - 0x90)
        *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        result = zx.q(*x24)
else
label_bb9f9c:
    x20 = result.d & 0xffff
    
    if (x20 u>= 0x320)
        goto label_bb9fb0

*x24 = *(arg1 + mulu.dp.d(x20, 0x68) + 0x1ac8)
return result
