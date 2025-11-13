// 函数: _Z23GetOwnedExpansionSetupsP11DomExpSetup
// 地址: 0x9b21e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* var_38
int32_t x0_1 = DomGetExpansions(&var_38)
int32_t x20

if (x0_1 s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        uint64_t x0_2 = zx.q(*(var_38 + i))
        
        if (x0_2.d != 0x13)
            if ((ProfileHasEntitlementForExpansion(x0_2, nullptr) & 1) != 0)
                void* x8_3 = arg1 + (sx.q(x20) << 4)
                *x8_3 = 0
                *(x8_3 + 8) = 0
                x20 += 1
                *x8_3 = *(var_38 + i)
                *(x8_3 + 4) = 0xffffffff
        else if ((ProfileHasAnyPromos() & 1) != 0)
            void* x8_2 = arg1 + (sx.q(x20) << 4)
            *x8_2 = 0
            *(x8_2 + 8) = 0
            *x8_2 = *(var_38 + i)
            
            if ((ProfileHasEntitlementForCard(0x1300) & 1) == 0)
                if ((ProfileHasEntitlementForCard(0x1304) & 1) != 0)
                    goto label_9b22d8
                
                goto label_9b2274
            
            *(x8_2 + 4) |= 1
            
            if ((ProfileHasEntitlementForCard(0x1304) & 1) != 0)
            label_9b22d8:
                *(x8_2 + 4) |= 2
                
                if ((ProfileHasEntitlementForCard(0x1305) & 1) == 0)
                    goto label_9b2280
                
                goto label_9b22f0
            
        label_9b2274:
            
            if ((ProfileHasEntitlementForCard(0x1305) & 1) != 0)
            label_9b22f0:
                *(x8_2 + 4) |= 4
                x20 += 1
                
                if ((ProfileHasEntitlementForCard(0x130e) & 1) != 0)
                    *(x8_2 + 4) |= 8
            else
            label_9b2280:
                x20 += 1
                
                if ((ProfileHasEntitlementForCard(0x130e) & 1) != 0)
                    *(x8_2 + 4) |= 8
        
        i += 0x28
    while (mulu.dp.d(x0_1, 0x28) != i)

return zx.q(x20)
