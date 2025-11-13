// 函数: _Z14CardsetHitTestR7CardsetRK4Vec2
// 地址: 0x9aa6ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Cardset& x0_4

if (zx.d(*(arg1 + 0x1560)) == 0)
    x0_4 = nullptr
else if (*(arg1 + 0x258) == 0)
    int32_t v0 = *arg2
    
    if (*(arg1 + 0x1528) f> v0)
        x0_4 = nullptr
    else
        x0_4 = nullptr
        
        if (not(*(arg1 + 0x1530) f< v0))
            v0 = *(arg2 + 4)
            
            if (not(*(arg1 + 0x152c) f> v0))
                if (*(arg1 + 0x1534) f>= v0 && *(arg1 + 0x1520) s>= 1)
                    goto label_9aa728
                
                x0_4 = nullptr
else
    if (*(arg1 + 0x1520) s>= 1)
    label_9aa728:
        int64_t i = 0
        
        do
            int32_t x23_1 = *(arg1 + (i << 2))
            
            if (x23_1 != 0)
                int32_t v0_1
                int32_t v1_1
                int32_t v2_1
                int32_t v3_1
                v0_1, v1_1, v2_1, v3_1 = UI2GetRect(zx.q(x23_1))
                
                if (*(arg1 + 0x258) == 1)
                    v0_1, v1_1, v2_1, v3_1 = UI2GetRect(zx.q(x23_1), "itemCard", 0)
                
                int32_t v4_1 = *arg2
                
                if (not(v0_1 f> v4_1))
                    v0_1 = *(arg2 + 4)
                    
                    if (not(v3_1 f< v0_1) && not(v2_1 f< v4_1) && not(v1_1 f> v0_1))
                        UI2GetLayer(zx.q(x23_1))
                        return arg1
            
            i += 1
        while (i s< sx.q(*(arg1 + 0x1520)))
        
        return nullptr
    
    x0_4 = nullptr

return x0_4
