// 函数: _Z16TriggerAbilityFnR7DomGame9PlayerWho9AbilityID
// 地址: 0xbcc0dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg3 & 0xffffffff

if ((arg3 & 0x30) == 0)
    void* x0_17 = AbilityGetRegistered(arg1, x21)
    
    if (*(x0_17 + 0x4c) != 2)
        void* x0_19 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_32 = x0_19 + sx.q(*(x0_19 + 0x13000)) * 0x98
        *(*(x8_32 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_33 = *(x8_32 - 0x90)
        *(x8_33 + 0x1a2c) = *(x8_33 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    jump(*(x0_17 + 0x58))

int32_t x20 = arg2
int32_t* x0_1 = AbilityGetStatic(arg1, x21)

if (*x0_1 != 6)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x0_5 = AbilitySourceCardRef(arg1, x21)
int32_t var_54 = x0_5
void* x0_7 = AbilitySource(arg1, x21)
int32_t x21_1 = x0_7.d
int32_t x25_3

if (x0_1[1] == 0)
    int32_t x8_34 = *(arg1 + 0x150c)
    
    if (x8_34 - 3 u>= 4)
        int64_t var_68_3 = 0
        int32_t var_70_6 = 0
        int32_t var_78_6 = 0
        int32_t var_80_6 = 0
        x0_7 = DomNotifyEffect(zx.q(x8_34 == 2 ? 1 : 0), 0x23, zx.q(x20), zx.q(x0_5), 0, 0, 0, 0)
        x25_3 = 0
        
        if (*x0_1 != 6)
        label_bcc6f8:
            pthread_kill(pthread_self(), 6)
            DomGame* x0_31
            int64_t x1_11
            x0_31, x1_11 = XNoReturn()
            return AbilitySource(x0_31, x1_11) __tailcall
    else
    label_bcc474:
        x25_3 = 0
        
        if (*x0_1 != 6)
            goto label_bcc6f8
else if (x0_5 == 0)
    x25_3 = 0
label_bcc490:
    
    if (*x0_1 != 6)
        goto label_bcc6f8
else
    int32_t x25_1 = x0_5 & 0xffff
    
    if (x25_1 u>= 0x320)
        void* x0_9 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_8 = x0_9 + sx.q(*(x0_9 + 0x13000)) * 0x98
        *(*(x8_8 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_9 = *(x8_8 - 0x90)
        *(x8_9 + 0x1a2c) = *(x8_9 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t x24_1 = *(arg1 + 0xd50)
    int32_t x25_2 = *(arg1 + mulu.dp.d(x25_1, 0x68) + 0x1a70)
    int32_t x8_15 = (x25_2 + (x24_1 << 0x10)) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_15) << 3))
    
    if (x9_5 != 0)
        while (*x9_5 != x25_2 || x9_5[1] != x24_1)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_bcc258
        
        x0_7 = *(x9_5 + 8)
        
        if ((zx.d(*(x0_7 + 0xcc)) & 0x40) == 0)
            goto label_bcc474
    else
    label_bcc258:
        DomDefGetSlow(zx.q(x25_2), zx.q(x24_1))
        int32_t* x0_11 = malloc(0x18)
        int64_t x8_16 = sx.q(x8_15) << 3
        int64_t x9_6 = *(&data_1838a20 + x8_16)
        *x0_11 = x25_2
        x0_11[1] = x24_1
        *(&data_1838a20 + x8_16) = x0_11
        *(x0_11 + 0x10) = x9_6
        x0_7 = DomDefGetSlow(zx.q(x25_2), zx.q(x24_1))
        *(x0_11 + 8) = x0_7
        
        if ((zx.d(*(x0_7 + 0xcc)) & 0x40) == 0)
            goto label_bcc474
    
    int32_t x8_19 = *(arg1 + 0x150c)
    
    if (x8_19 - 3 u>= 4)
        int64_t var_68_1 = 0
        int32_t var_70_1 = 0
        int32_t var_78_1 = 0
        int32_t var_80_1 = 0
        x0_7 = DomNotifyEffect(zx.q(x8_19 == 2 ? 1 : 0), 0x25, zx.q(x20), zx.q(x0_5), zx.q(x21_1), 
            0, 0, 0)
        
        if (*(arg1 + 0x150c) - 3 u< 4)
            goto label_bcc3c0
        
        if (zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x2_1
            
            if (*(arg1 + 0x19d4) == x20)
                x2_1 = zx.q(*(arg1 + 0x19d8))
            else
                x2_1 = zx.q(x20)
            
            int32_t var_70_2 = 0
            int32_t var_78_2 = 0
            int32_t var_80_2 = 0
            x25_3 = 1
            x0_7 = DomAddLogEvent(arg1, zx.q(x20), x2_1, 0x1b, 0, &var_54, 1, zx.q(x21_1))
        
        if (zx.d(*(arg1 + 0x1508)) == 0 && *(arg1 + 0x150c) - 3 u< 4)
            goto label_bcc490
        
        if (zx.d(*(arg1 + 0x1508)) != 0)
            goto label_bcc3c0
        
        uint64_t x2_2
        
        if (*(arg1 + 0x19d4) == x20)
            x2_2 = zx.q(*(arg1 + 0x19d8))
        else
            x2_2 = zx.q(x20)
        
        int32_t var_70_3 = 0
        int32_t var_78_3 = 0
        int32_t var_80_3 = 0
        x0_7 = DomAddLogEvent(arg1, zx.q(x20), x2_2, 0x1f, 0, nullptr, 0, 0)
        goto label_bcc3c0
    
label_bcc3c0:
    x25_3 = 1
    
    if (*x0_1 != 6)
        goto label_bcc6f8

(*(x0_1 + 0x18))(x0_7)
void* result = __emutls_get_address(__emutls_v.gContextStack_tl)
int64_t x22_1 = sx.q(*(result + 0x13000)) - 1

if (*(result + x22_1 * 0x98 + 0x4c) == 0)
    int32_t x8_42 = var_54
    
    if (x8_42 != 0)
        uint64_t x23_1 = zx.q(x8_42.w)
        
        if (x23_1.d u>= 0x320)
            void* x8_43 = __emutls_get_address(__emutls_v.gContextStack_tl) + x22_1 * 0x98
            *(*(x8_43 + 8) + 0x1a28) = 0xffffffff
            void* x8_44 = *(x8_43 + 8)
            *(x8_44 + 0x1a2c) = *(x8_44 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x22_2 = *(arg1 + 0xd50)
        int32_t x23_2 = *(arg1 + x23_1 * 0x68 + 0x1a70)
        int32_t x8_50 = (x23_2 + (x22_2 << 0x10)) s% 0x3e5
        int32_t* x9_15 = *(&data_1838a20 + (sx.q(x8_50) << 3))
        
        if (x9_15 != 0)
            while (*x9_15 != x23_2 || x9_15[1] != x22_2)
                x9_15 = *(x9_15 + 0x10)
                
                if (x9_15 == 0)
                    goto label_bcc578
            
            result = *(x9_15 + 8)
            
            if ((zx.d(*(result + 0xcc)) & 0x40) != 0)
                goto label_bcc5e4
        else
        label_bcc578:
            DomDefGetSlow(zx.q(x23_2), zx.q(x22_2))
            int32_t* x0_25 = malloc(0x18)
            int64_t x8_51 = sx.q(x8_50) << 3
            int64_t x9_16 = *(&data_1838a20 + x8_51)
            *x0_25 = x23_2
            x0_25[1] = x22_2
            *(&data_1838a20 + x8_51) = x0_25
            *(x0_25 + 0x10) = x9_16
            result = DomDefGetSlow(zx.q(x23_2), zx.q(x22_2))
            *(x0_25 + 8) = result
            
            if ((zx.d(*(result + 0xcc)) & 0x40) != 0)
            label_bcc5e4:
                int32_t x8_54 = *(arg1 + 0x150c)
                
                if (x8_54 - 3 u>= 4)
                    int64_t var_68_2 = 0
                    int32_t var_70_4 = 0
                    int32_t var_78_4 = 0
                    int32_t var_80_4 = 0
                    result = DomNotifyEffect(zx.q(x8_54 == 2 ? 1 : 0), 0x25, zx.q(x20), 
                        zx.q(var_54), zx.q(x21_1), 1, 0, 0)

if (x25_3 == 0 || *(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    return result

uint64_t x2_4

if (*(arg1 + 0x19d4) == x20)
    x2_4 = zx.q(*(arg1 + 0x19d8))
else
    x2_4 = zx.q(x20)

int32_t var_70_5 = 0
int32_t var_78_5 = 0
int32_t var_80_5 = 0
return DomAddLogEvent(arg1, zx.q(x20), x2_4, 0x20, 0, nullptr, 0, 0)
