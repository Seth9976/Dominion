// 函数: _Z16UI2IsOverAnyItemR9UI2Handle
// 地址: 0x1038cf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8

if (*(gUI2Editor + 0x6010) != 0)
    int32_t var_38
    GetCursorPosition(&var_38)
    uint64_t x22_1 = zx.q(*(gUI2Editor + 0x6000))
    
    if (x22_1.d s>= 1)
        v8.d = var_38
        int32_t var_34
        v9.d = var_34
        bool cond:0_1
        
        do
            UI2* x20_1 = *(gUI2Editor + (x22_1 - 1) * 0x18)
            
            if (zx.d(*(x20_1 + 0x15)) == 0 && zx.d(*(x20_1 + 0x16)) == 0)
                UI2* x8_4 = x20_1
                
                while (zx.d(*(x8_4 + 5)) == 0)
                    x8_4 = *(x8_4 + 0x17d0)
                    
                    if (x8_4 == 0)
                        UI2* x8_5 = x20_1
                        
                        while (zx.d(*(x8_5 + 0x16)) == 0)
                            x8_5 = *(x8_5 + 0x17d0)
                            
                            if (x8_5 == 0)
                                int32_t v0_1
                                int32_t v1_1
                                int32_t v2_1
                                int32_t v3_1
                                v0_1, v1_1, v2_1, v3_1 = UI2WorldRectCropped(x20_1)
                                
                                if (v0_1 f> v8.d || v3_1 f< v9.d || v2_1 f< v8.d || v1_1 f> v9.d
                                        || *(x20_1 + 0x1710) f== 0f)
                                    break
                                
                                *arg1 = *(x20_1 + 0x19a0)
                                return 1
                            
                            if (zx.d(*(x8_5 + 0x15)) != 0)
                                break
                        
                        break
            
            cond:0_1 = x22_1 s<= 1
            x22_1 -= 1
        while (not(cond:0_1))

return 0
