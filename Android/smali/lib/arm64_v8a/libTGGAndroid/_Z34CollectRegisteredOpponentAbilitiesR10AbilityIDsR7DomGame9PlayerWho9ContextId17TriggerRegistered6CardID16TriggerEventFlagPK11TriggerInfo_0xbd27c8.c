// 函数: _Z34CollectRegisteredOpponentAbilitiesR10AbilityIDsR7DomGame9PlayerWho9ContextId17TriggerRegistered6CardID16TriggerEventFlagPK11TriggerInfo
// 地址: 0xbd27c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_78 = arg4

if (*(arg2 + 0x19c0) s< 1)
    return 

int64_t fp_1 = 0x3c210
int32_t x24_1 = arg3
AbilityIDs& x26_1 = arg1
int64_t i = 0
int64_t x23_1 = 0x3c234
int64_t x19_1 = 0x3c238

do
    void* x8_4 = arg2 + x23_1
    
    if (*(x8_4 + 0x20) == 2 && *(x8_4 + 0x24) == arg5)
        void* x8_6 = arg2 + x23_1
        int32_t x9_3 = *(x8_6 - 0x14)
        
        if (x9_3 == 0xffffffff)
            if (*(x8_6 - 0x18) != x24_1)
            label_bd28a8:
                void* x20_1 = arg2 + x23_1
                int32_t x8_8 = *(x20_1 - 0x2c)
                
                if (x8_8 - 3 u> 1)
                    if (x8_8 != 5)
                    label_bd28f8:
                        uint64_t x27_2 = (0x3ffff & zx.q((arg6 & 0xfff) << 6))
                            | zx.q((0x3fff & *(arg2 + x23_1)) << 0x12)
                        
                        if ((TriggerAbilityTestValid(arg2, zx.q(x24_1), x27_2, zx.q(arg6), 
                                zx.q(arg7), 0xffffffff, arg8).d & 1) != 0)
                            if (*(x20_1 - 0x2c) == 5)
                                *(arg2 + fp_1) = var_78
                            
                            int64_t x8_2 = sx.q(*(x26_1 + 0x400))
                            *(x26_1 + 0x400) = x8_2.d + 1
                            *(x26_1 + (x8_2 << 2)) = x27_2.d
                    else
                        int64_t x8_10 = *(arg2 + fp_1)
                        
                        if (x8_10 == 0 || x8_10 == var_78)
                            goto label_bd28f8
                else if (zx.d(*(arg2 + x19_1)) == 0)
                    goto label_bd28f8
        else if (x9_3 == x24_1)
            goto label_bd28a8
    
    i += 1
    x19_1 += 0xb8
    x23_1 += 0xb8
    fp_1 += 0xb8
while (i s< sx.q(*(arg2 + 0x19c0)))
