// 函数: _Z26CollectWhileOwnedAbilitiesR10AbilityIDsR7DomGame9PlayerWho17TriggerWhileOwned6CardID16TriggerEventFlagPK11TriggerInfo
// 地址: 0xbd2f40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x23 = *(arg2 + muls.dp.d(arg3, 0x5a30) + 0x17f8c)
int32_t x25 = arg5
int32_t x22 = arg4
int32_t x8_1 = (arg5 & 0xfff) << 6
int32_t var_d14 = arg6
AbilityIDs& var_cf8 = arg1
int32_t var_cf0 = arg3

if (x23 != 0)
    uint64_t x20_1 = zx.q(x23.w)
    
    if (x20_1.d u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    uint64_t x21_2 = zx.q(x23) | zx.q(*(arg2 + x20_1 * 0x68 + 0x1ac8)) << 0x20
    
    while (true)
        int32_t x8_10 = 0
        int32_t* x9_6 = *(arg2 + (x21_2 & 0xffffffff) * 0x68 + 0x1a68) + 0xec
        uint64_t fp_1
        
        while (true)
            int32_t x10_1 = x9_6[-3]
            
            if (x10_1 != 6)
                if (x10_1 == 0)
                    fp_1 = 0xffffffff
                    break
            else if (x9_6[-2] == 4 && *x9_6 == x22)
                fp_1 = (0x3ffff & zx.q(x8_1)) | zx.q((0x3fff & x23) << 0x12) | (zx.q(x8_10) & 0xf)
                    | 0x10
                break
            
            x8_10 += 1
            x9_6 = &x9_6[0x30]
        
        if ((TriggerAbilityTestValid(arg2, zx.q(var_cf0), fp_1, zx.q(x25), zx.q(var_d14), 
                0xffffffff, arg7).d & 1) != 0)
            int64_t x8_13 = sx.q(*(var_cf8 + 0x400))
            *(var_cf8 + 0x400) = x8_13.d + 1
            *(var_cf8 + (x8_13 << 2)) = fp_1.d
        
        x23 = (x21_2 u>> 0x20).d
        
        if (x23 == 0)
            break
        
        int32_t x21_4 = x23 & 0xffff
        
        if (x21_4 u>= 0x320)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_16 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_16 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_17 = *(x8_16 - 0x90)
            *(x8_17 + 0x1a2c) = *(x8_17 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        x21_2 = zx.q(x23) | zx.q(*(arg2 + mulu.dp.d(x21_4, 0x68) + 0x1ac8)) << 0x20

int32_t x8_18 = *(arg2 + 0x1754)
int32_t var_ce8[0x320]

if (x8_18 != 0)
    var_ce8[0] = x8_18
    x8_18 = 1

int32_t x9_12 = *(arg2 + 0x1764)

if (x9_12 != 0)
    uint64_t x10_5 = zx.q(x8_18)
    x8_18 += 1
    *((-5 & &var_ce8) | (1 & x10_5) << 2) = x9_12

int32_t x9_13 = *(arg2 + 0x1774)

if (x9_13 != 0)
    var_ce8[zx.q(x8_18)] = x9_13
    x8_18 += 1

int32_t x9_14 = *(arg2 + 0x1784)

if (x9_14 == 0)
    int32_t var_68_1 = x8_18
    
    if (x8_18 != 0)
        goto label_bd3194
    
    return 

var_ce8[zx.q(x8_18)] = x9_14
x8_18 += 1
int32_t var_68 = x8_18
label_bd3194:
int32_t (* i)[0x320] = &var_ce8

do
    int32_t x20_2 = *i
    uint64_t x21_5 = zx.q(x20_2.w)
    
    if (x21_5.d u>= 0x320)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_23 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_24 = *(x8_23 - 0x90)
        *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    void* x23_1 = arg2 + x21_5 * 0x68
    int32_t fp_2 = *(x23_1 + 0x1a70)
    int32_t x26_1 = *(arg2 + 0xd50)
    int32_t x8_26 = (fp_2 + (x26_1 << 0x10)) s% 0x3e5
    int32_t* x9_21 = *(&data_1838a20 + (sx.q(x8_26) << 3))
    int32_t x25_2
    
    if (x9_21 != 0)
        while (*x9_21 != fp_2 || x9_21[1] != x26_1)
            x9_21 = *(x9_21 + 0x10)
            
            if (x9_21 == 0)
                goto label_bd326c
        
        x25_2 = x25
        
        if ((zx.d(*(*(x9_21 + 8) + 0xcb)) & 8) != 0)
            goto label_bd32ec
    else
    label_bd326c:
        DomDefGetSlow(zx.q(fp_2), zx.q(x26_1))
        int32_t* x0_8 = malloc(0x18)
        int64_t x8_27 = sx.q(x8_26) << 3
        int64_t x9_22 = *(&data_1838a20 + x8_27)
        *x0_8 = fp_2
        x0_8[1] = x26_1
        *(&data_1838a20 + x8_27) = x0_8
        *(x0_8 + 0x10) = x9_22
        arg1 = DomDefGetSlow(zx.q(fp_2), zx.q(x26_1))
        *(x0_8 + 8) = arg1
        x25_2 = x25
        
        if ((zx.d(*(arg1 + 0xcb)) & 8) != 0)
        label_bd32ec:
            int32_t var_cec = 0
            
            if (x21_5.d u>= 0x320)
                void* x0_11 = __emutls_get_address(__emutls_v.gContextStack_tl)
                void* x8_32 = x0_11 + sx.q(*(x0_11 + 0x13000)) * 0x98
                *(*(x8_32 - 0x90) + 0x1a28) = 0xffffffff
                void* x8_33 = *(x8_32 - 0x90)
                *(x8_33 + 0x1a2c) = *(x8_33 + 0x1a24)
                XTrace("game thread yield (error)")
                xco_yield()
                XTrace("game thread resume (error)")
            
            if ((ProjectIsOwned(arg2, zx.q(var_cf0), zx.q(*(x23_1 + 0x1a70)), &var_cec).d & 1) != 0)
                int32_t x27_2 = var_cec
                
                if (x27_2 s>= 1)
                    int32_t fp_3 = 0
                    
                    do
                        int32_t x8_36 = 0
                        int32_t* x9_27 = *(arg2 + mulu.dp.d(x20_2, 0x68) + 0x1a68) + 0xec
                        uint64_t x26_2
                        
                        while (true)
                            int32_t x10_10 = x9_27[-3]
                            
                            if (x10_10 != 6)
                                if (x10_10 == 0)
                                    x26_2 = 0xffffffff
                                    break
                            else if (x9_27[-2] == 4 && *x9_27 == x22)
                                x26_2 = (0x3ffff & zx.q(x8_1)) | zx.q((0x3fff & x20_2) << 0x12)
                                    | (zx.q(x8_36) & 0xf) | 0x10
                                break
                            
                            x8_36 += 1
                            x9_27 = &x9_27[0x30]
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(var_cf0), x26_2, zx.q(x25_2), 
                                zx.q(var_d14), 0xffffffff, arg7).d & 1) != 0)
                            int64_t x8_39 = sx.q(*(var_cf8 + 0x400))
                            *(var_cf8 + 0x400) = x8_39.d + 1
                            *(var_cf8 + (x8_39 << 2)) = x26_2.d
                        
                        int32_t x20_3 = x20_2 & 0xffff
                        
                        if (x20_3 u>= 0x320)
                            void* x0_15 = __emutls_get_address(__emutls_v.gContextStack_tl)
                            void* x8_42 = x0_15 + sx.q(*(x0_15 + 0x13000)) * 0x98
                            *(*(x8_42 - 0x90) + 0x1a28) = 0xffffffff
                            void* x8_43 = *(x8_42 - 0x90)
                            *(x8_43 + 0x1a2c) = *(x8_43 + 0x1a24)
                            XTrace("game thread yield (error)")
                            xco_yield()
                            XTrace("game thread resume (error)")
                        
                        x20_2 = *(arg2 + mulu.dp.d(x20_3, 0x68) + 0x1ac8)
                        fp_3 += 1
                    while (fp_3 != x27_2)
    i = &(*i)[1]
while (i != &var_ce8[zx.q(x8_18)])
