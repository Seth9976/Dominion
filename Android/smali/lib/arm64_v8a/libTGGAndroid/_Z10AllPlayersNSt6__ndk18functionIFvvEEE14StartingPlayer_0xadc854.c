// 函数: _Z10AllPlayersNSt6__ndk18functionIFvvEEE14StartingPlayer
// 地址: 0xadc854
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
int32_t* x0 = DomGetContext()
uint64_t x8_1 = zx.q(*x0 - 2)

if (x8_1.d u> 3)
label_adcb38:
    pthread_kill(pthread_self(), 6)
    return RemoveAbilityByIdentifier(XNoReturn()) __tailcall

int32_t x8_2 = 0
DomGame* result
int32_t x22_1

switch (x8_1)
    case 0
        x22_1 = x0[7]
        int32_t x10_2
        
        if (x22_1 == 0)
        label_adc908:
            x8_2 = 0
            x10_2 = x0[6]
            
            if (x10_2 != 0xffffffff)
                goto label_adc8d0
            
            goto label_adc918
        
    label_adc8c0:
        x8_2 = CardIs(*(DomGetContext() + 8), zx.q(x22_1), 0x20)
    label_adc8c4:
        x10_2 = x0[6]
        int32_t x9_1
        int32_t x23_1
        
        if (x10_2 == 0xffffffff)
        label_adc918:
            result = *(x0 + 8)
            x23_1 = 0
            x9_1 = *(result + 0xd40)
            
            if (x9_1 s>= 1)
            label_adc930:
                int64_t var_48
                
                if ((x8_2 & 1) == 0)
                    int32_t x22_3 = 0
                    
                    while (true)
                        uint64_t x8_13 = zx.q(*x0 - 1)
                        
                        if (x8_13.d u> 3)
                            goto label_adcb38
                        
                        uint64_t x3_3 = zx.q((x23_1 + x22_3) s% x9_1)
                        
                        switch (x8_13)
                            case 0
                                var_48 = 0
                                DomPushContext(result, zx.q(x3_3.d), &var_48)
                            case 1
                                DomPushContext(result, zx.q(x3_3.d), &x0[7])
                            case 2
                                DomPushAbilityContext(result, zx.q(x3_3.d), zx.q(x0[7]))
                            case 3
                                DomPushSetupContext(result, zx.q(x0[7]), *(x0 + 0x90), x3_3, 0)
                        
                        int64_t* x0_12 = *(x19 + 0x20)
                        
                        if (x0_12 == 0)
                            break
                        
                        (*(*x0_12 + 0x30))()
                        DomPopContext()
                        result = *(x0 + 8)
                        x22_3 += 1
                        x9_1 = *(result + 0xd40)
                        
                        if (x22_3 s>= x9_1)
                            return result
                    
                    sub_a58ab4()
                    noreturn
                
                int32_t x24_1 = 0
                
                while (true)
                    int32_t x22_2 = (x23_1 + x24_1) s% x9_1
                    int32_t x0_6 = HasOngoing(result, zx.q(x22_2), 0, 0, 0)
                    
                    if (x22_2 == x0[6] || (x0_6 & 1) == 0)
                        uint64_t x8_6 = zx.q(*x0 - 1)
                        
                        if (x8_6.d u> 3)
                            goto label_adcb38
                        
                        switch (x8_6)
                            case 0
                                DomGame* x0_7 = *(x0 + 8)
                                var_48 = 0
                                DomPushContext(x0_7, zx.q(x22_2), &var_48)
                            case 1
                                DomPushContext(*(x0 + 8), zx.q(x22_2), &x0[7])
                            case 2
                                DomPushAbilityContext(*(x0 + 8), zx.q(x22_2), zx.q(x0[7]))
                            case 3
                                DomPushSetupContext(*(x0 + 8), zx.q(x0[7]), *(x0 + 0x90), 
                                    zx.q(x22_2), 0)
                        
                        int64_t* x0_10 = *(x19 + 0x20)
                        
                        if (x0_10 == 0)
                            break
                        
                        (*(*x0_10 + 0x30))()
                        DomPopContext()
                    
                    result = *(x0 + 8)
                    x24_1 += 1
                    x9_1 = *(result + 0xd40)
                    
                    if (x24_1 s>= x9_1)
                        return result
                
                sub_a58ab4()
                noreturn
        else
        label_adc8d0:
            result = *(x0 + 8)
            int32_t x10_3
            
            if (arg2 == 1)
                x10_3 = x10_2 + 1
            else
                x10_3 = x10_2
            
            x9_1 = *(result + 0xd40)
            x23_1 = x10_3 s% x9_1
            
            if (x9_1 s>= 1)
                goto label_adc930
    case 1
        x22_1 = AbilitySourceCard(*(x0 + 8), zx.q(x0[7]))
        
        if (x22_1 != 0)
            goto label_adc8c0
        
        goto label_adc908
    case 2
        goto label_adc8c4
    case 3
        result = *(x0 + 8)
        int32_t x8_9 = *(result + 0xd40)
        
        if (x8_9 s>= 1)
            int32_t x21_2 = 0
            
            while (true)
                DomPushAchievementContext(result, zx.q(x21_2 s% x8_9), zx.q(x0[7]), *(x0 + 0x28))
                int64_t* x0_11 = *(x19 + 0x20)
                
                if (x0_11 == 0)
                    break
                
                (*(*x0_11 + 0x30))()
                DomPopContext()
                result = *(x0 + 8)
                x21_2 += 1
                x8_9 = *(result + 0xd40)
                
                if (x21_2 s>= x8_9)
                    return result
            
            sub_a58ab4()
            noreturn

return result
