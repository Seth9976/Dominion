// 函数: _Z12OtherPlayersNSt6__ndk18functionIFvvEEE
// 地址: 0xadc6bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1
int32_t* result = DomGetContext()
int32_t x8 = *result

if (x8 != 4)
    int32_t* result_1 = result
    int32_t var_38
    uint64_t x21_1
    
    if (x8 == 3)
        int32_t x0_1 = AbilitySourceCard(*(result_1 + 8), zx.q(result_1[7]))
        x21_1 = zx.q(x0_1)
        var_38 = x0_1
        int32_t var_34_1 = 0
    else
        if (x8 != 2)
            pthread_kill(pthread_self(), 6)
            DomGame* x0_12
            int64_t x1_6
            x0_12, x1_6 = XNoReturn()
            return AllPlayers(x0_12, x1_6) __tailcall
        
        x21_1 = *(result_1 + 0x1c)
        var_38.q = x21_1
    
    result = CardIs(*(DomGetContext() + 8), zx.q(x21_1.d), 0x20)
    DomGame* x8_1 = *(result_1 + 8)
    int32_t x9_1 = *(x8_1 + 0xd40)
    
    if (x9_1 s>= 1)
        if ((result.d & 1) == 0)
            int32_t x21_3 = 0
            
            while (true)
                uint64_t x1_5 = zx.q((x21_3 + *(x8_1 + 0x19d4)) s% x9_1)
                
                if (x1_5.d != result_1[6])
                    *(DomPushContext(x8_1, x1_5, &var_38) + 0x8c) = 1
                    int64_t* x0_10 = *(x19 + 0x20)
                    
                    if (x0_10 == 0)
                        break
                    
                    (*(*x0_10 + 0x30))()
                    result = DomPopContext()
                    x8_1 = *(result_1 + 8)
                
                x9_1 = *(x8_1 + 0xd40)
                x21_3 += 1
                
                if (x21_3 s>= x9_1)
                    return result
        else
            int32_t x22_1 = 0
            
            while (true)
                int32_t x21_2 = (x22_1 + *(x8_1 + 0x19d4)) s% x9_1
                
                if (x21_2 != result_1[6])
                    result = HasOngoing(x8_1, zx.q(x21_2), 0, 0, 0)
                    
                    if ((result.d & 1) == 0)
                        *(DomPushContext(*(result_1 + 8), zx.q(x21_2), &var_38) + 0x8c) = 1
                        int64_t* x0_7 = *(x19 + 0x20)
                        
                        if (x0_7 == 0)
                            break
                        
                        (*(*x0_7 + 0x30))()
                        result = DomPopContext()
                
                x8_1 = *(result_1 + 8)
                x22_1 += 1
                x9_1 = *(x8_1 + 0xd40)
                
                if (x22_1 s>= x9_1)
                    return result
        
        sub_a58ab4()
        noreturn

return result
