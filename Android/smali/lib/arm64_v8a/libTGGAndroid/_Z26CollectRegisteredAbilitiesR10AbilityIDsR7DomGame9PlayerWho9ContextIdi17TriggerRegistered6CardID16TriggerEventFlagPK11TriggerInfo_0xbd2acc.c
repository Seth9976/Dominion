// 函数: _Z26CollectRegisteredAbilitiesR10AbilityIDsR7DomGame9PlayerWho9ContextIdi17TriggerRegistered6CardID16TriggerEventFlagPK11TriggerInfo
// 地址: 0xbd2acc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_64 = arg7
int64_t var_70 = arg4

if (*(arg2 + 0x19c0) s< 1)
    return 

int32_t x27_1 = arg6
int32_t x23_1 = arg3
uint64_t x12_1 = zx.q(var_70.d)
AbilityIDs& x11_1 = arg1
int32_t x13_1 = (var_64 & 0xfff) << 6

if (arg6 != 0xa)
    int64_t x21_2 = 0x3c208
    int64_t i = 0
    int64_t x26_2 = 0x3c238
    int64_t fp_2 = 0x3c280
    
    do
        void* x8_18 = arg2 + x21_2
        
        if (*(x8_18 + 0x4c) == 2 && *(x8_18 + 0x50) == x27_1)
            void* x8_20 = arg2 + x21_2
            
            if ((*(x8_20 + 0x14) == x23_1 || (zx.d(*(x8_20 + 0x72)) & 1) != 0)
                    && *(x8_20 + 0x18) == 0xffffffff)
                int32_t x8_21 = *(arg2 + x21_2)
                
                if (x8_21 - 3 u> 2)
                label_bd2d48:
                    
                    if ((x27_1 != 1 || *(arg2 + 0x19ec) != *(arg2 + x21_2 + 0x74))
                            && x12_1 u> zx.q(*(arg2 + fp_2)))
                        uint64_t x28_2 = (0x3ffff & zx.q(x13_1))
                            | zx.q((0x3fff & *(arg2 + x21_2 + 0x2c)) << 0x12)
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x23_1), x28_2, zx.q(var_64), 
                                zx.q(arg8), 0xffffffff, arg9).d & 1) != 0)
                            int64_t x8_30 = sx.q(*(x11_1 + 0x400))
                            *(x11_1 + 0x400) = x8_30.d + 1
                            *(x11_1 + (x8_30 << 2)) = x28_2.d
                else if (zx.d(*(arg2 + x26_2)) == 0)
                    if (x8_21 != 5)
                        goto label_bd2d48
                    
                    int64_t x8_23 = *(arg2 + fp_2 - 0x70)
                    
                    if (x8_23 == 0 || x8_23 == var_70)
                        int32_t x8_25 = *(arg2 + x21_2 + 0x10)
                        
                        if (x8_25 != arg5 || x8_25 == 0)
                            goto label_bd2d48
        
        i += 1
        x21_2 += 0xb8
        fp_2 += 0xb8
        x26_2 += 0xb8
    while (i s< sx.q(*(arg2 + 0x19c0)))
else
    int64_t x21_1 = 0x3c208
    int64_t i_1 = 0
    int64_t x19_1 = 0x3c238
    int64_t x26_1 = 0x3c280
    
    do
        void* x8_5 = arg2 + x21_1
        
        if (*(x8_5 + 0x4c) == 2 && *(x8_5 + 0x50) == 0xa)
            void* x8_7 = arg2 + x21_1
            
            if ((*(x8_7 + 0x14) == x23_1 || (zx.d(*(x8_7 + 0x72)) & 1) != 0)
                    && *(x8_7 + 0x18) == 0xffffffff)
                int32_t x8_8 = *(arg2 + x21_1)
                
                if (x8_8 - 3 u> 2)
                label_bd2bf4:
                    uint64_t x8_13 = zx.q(*(arg2 + x26_1))
                    
                    if (x12_1 u> x8_13)
                        void* x9_8 = arg2 + x21_1
                        
                        if (arg9 == 0 || (*(x9_8 + 4) & 1) == 0
                                || zx.q(*(arg9 + 0x10)) u> zx.q((x8_13.d).w))
                            uint64_t x27_3 =
                                (0x3ffff & zx.q(x13_1)) | zx.q((0x3fff & *(x9_8 + 0x2c)) << 0x12)
                            
                            if ((TriggerAbilityTestValid(arg2, zx.q(x23_1), x27_3, zx.q(var_64), 
                                    zx.q(arg8), 0xffffffff, arg9).d & 1) != 0)
                                int64_t x8_15 = sx.q(*(x11_1 + 0x400))
                                *(x11_1 + 0x400) = x8_15.d + 1
                                *(x11_1 + (x8_15 << 2)) = x27_3.d
                else if (zx.d(*(arg2 + x19_1)) == 0)
                    if (x8_8 != 5)
                        goto label_bd2bf4
                    
                    int64_t x8_10 = *(arg2 + x26_1 - 0x70)
                    
                    if (x8_10 == 0 || x8_10 == var_70)
                        int32_t x8_12 = *(arg2 + x21_1 + 0x10)
                        
                        if (x8_12 != arg5 || x8_12 == 0)
                            goto label_bd2bf4
        
        i_1 += 1
        x26_1 += 0xb8
        x19_1 += 0xb8
        x21_1 += 0xb8
    while (i_1 s< sx.q(*(arg2 + 0x19c0)))
