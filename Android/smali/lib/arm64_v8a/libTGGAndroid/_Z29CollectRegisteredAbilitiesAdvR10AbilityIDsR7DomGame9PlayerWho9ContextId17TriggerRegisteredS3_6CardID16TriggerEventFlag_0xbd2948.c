// 函数: _Z29CollectRegisteredAbilitiesAdvR10AbilityIDsR7DomGame9PlayerWho9ContextId17TriggerRegisteredS3_6CardID16TriggerEventFlag
// 地址: 0xbd2948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x19c0) s< 1)
    return 

int64_t fp_1 = 0x3c208
int32_t x22_1 = arg5
AbilityIDs& x24_1 = arg1
int64_t i = 0
int64_t x21_1 = 0x3c238
int64_t x23_1 = 0x3c280

do
    void* x8_2 = arg2 + fp_1
    
    if (*(x8_2 + 0x4c) == 2 && *(x8_2 + 0x50) == x22_1 && *(arg2 + fp_1 + 0x14) == arg3)
        int32_t x8_6 = *(arg2 + fp_1)
        
        if (x8_6 - 3 u> 2)
        label_bd2a04:
            
            if ((x22_1 != 1 || *(arg2 + 0x19ec) != *(arg2 + fp_1 + 0x74))
                    && (arg4 & 0xffffffff) u> zx.q(*(arg2 + x23_1)))
                uint64_t x27_2 = (0x3ffff & zx.q((arg7 & 0xfff) << 6))
                    | zx.q((0x3fff & *(arg2 + fp_1 + 0x2c)) << 0x12)
                
                if ((TriggerAbilityTestValid(arg2, zx.q(arg3), x27_2, zx.q(arg7), zx.q(arg8), 
                        zx.q(arg6), nullptr).d & 1) != 0)
                    int64_t x8_11 = sx.q(*(x24_1 + 0x400))
                    *(x24_1 + 0x400) = x8_11.d + 1
                    *(x24_1 + (x8_11 << 2)) = x27_2.d
        else if (zx.d(*(arg2 + x21_1)) == 0)
            if (x8_6 != 5)
                goto label_bd2a04
            
            int64_t x8_13 = *(arg2 + x23_1 - 0x70)
            
            if (x8_13 == 0 || x8_13 == arg4)
                goto label_bd2a04
    
    i += 1
    x23_1 += 0xb8
    fp_1 += 0xb8
    x21_1 += 0xb8
while (i s< sx.q(*(arg2 + 0x19c0)))
