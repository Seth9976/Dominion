// 函数: _Z10CardRemoveR7DomGame6CardIDPb
// 地址: 0xbb8c40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2 & 0xffff
int32_t x21 = arg2

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x25 = arg1 + mulu.dp.d(x22, 0x68)
uint64_t x26 = zx.q(*(x25 + 0x1a74))

if (x26.d != 0x474)
    int32_t x8_10
    void* x22_1
    
    if (x26.d u<= 0x48)
        if (x26.d == 0x48)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_7 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_8 = *(x8_7 - 0x90)
            *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x22_1 = arg1 + (x26 << 4) + 0x1534
        x8_10 = *x22_1
        
        if (x8_10 != 0 && x8_10 != x21)
            goto label_bb8e18
        
        goto label_bb8efc
    
    x22_1 = arg1 + sx.q(*(arg1 + zx.q(x22) * 0x68 + 0x1a94)) * 0x5a30 + (sx.q(x26.d) << 2) + 0x16fc8
    x8_10 = *x22_1
    uint64_t x21_1
    
    if (x8_10 == 0 || x8_10 == x21)
    label_bb8efc:
        
        if (x8_10 == 0)
        label_bb90b0:
            pthread_kill(pthread_self(), 6)
            int64_t x0_17
            int64_t x1
            x0_17, x1 = XNoReturn()
            return ValidateWhere(x0_17, x1) __tailcall
        
        x21_1 = zx.q(x8_10.w)
        
        if (x21_1.d u>= 0x320)
            void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_33 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
            *(*(x8_33 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_34 = *(x8_33 - 0x90)
            *(x8_34 + 0x1a2c) = *(x8_34 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        *x22_1 = *(arg1 + x21_1 * 0x68 + 0x1ac8)
        
        if (x21_1.d u>= 0x320)
        label_bb8f7c:
            void* x0_13 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_39 = x0_13 + sx.q(*(x0_13 + 0x13000)) * 0x98
            *(*(x8_39 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_40 = *(x8_39 - 0x90)
            *(x8_40 + 0x1a2c) = *(x8_40 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
    else
    label_bb8e18:
        int16_t x27_1
        
        do
            int32_t x25_1 = x8_10 & 0xffff
            x27_1 = x8_10.w
            
            if (x25_1 u>= 0x320)
                void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_18 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
                *(*(x8_18 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_19 = *(x8_18 - 0x90)
                *(x8_19 + 0x1a2c) = *(x8_19 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            x8_10 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1ac8)
            
            if (x8_10 == 0)
                break
        while (x8_10 != x21)
        
        if (x8_10 == 0)
            goto label_bb90b0
        
        x21_1 = zx.q(x8_10.w)
        
        if (x21_1.d u>= 0x320)
            void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_23 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
            *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_24 = *(x8_23 - 0x90)
            *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x22_2 = *(arg1 + x21_1 * 0x68 + 0x1ac8)
        uint32_t x23_1 = zx.d(x27_1)
        
        if (x23_1 u>= 0x320)
            void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_28 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
            *(*(x8_28 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_29 = *(x8_28 - 0x90)
            *(x8_29 + 0x1a2c) = *(x8_29 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        *(arg1 + mulu.dp.d(x23_1, 0x68) + 0x1ac8) = x22_2
        
        if (x21_1.d u>= 0x320)
            goto label_bb8f7c
    
    *(arg1 + mulu.dp.d(x21_1.d, 0x68) + 0x1ac8) = 0
    
    if (arg3 != 0)
        if (x26.d - 7 u> 0x1a)
            *arg3 = false
        else
            uint64_t x19_1 = zx.q(*(x25 + 0x1a74))
            
            if (x19_1.d u<= 0x48)
                if (x19_1.d == 0x48)
                    void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_46 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
                    *(*(x8_46 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_47 = *(x8_46 - 0x90)
                    *(x8_47 + 0x1a2c) = *(x8_47 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                
                if (*(arg1 + (x19_1 << 4) + 0x1534) == 0)
                    *arg3 = true
                else
                    *arg3 = false
            else if (*(arg1 + (sx.q(x19_1.d) << 2) + 0x11598) != 0)
                *arg3 = false
            else
                *arg3 = true
else if (arg3 != 0)
    *arg3 = false
