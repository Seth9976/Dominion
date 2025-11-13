// 函数: _Z10UpdatePodsv
// 地址: 0xb1f998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_2070

if (*(ActiveGame() + 0x11b4) s>= 1)
    int64_t x19_1 = 0
    int64_t (* x24_1)() = gDomClient + 0x4d8c
    int64_t x8_4
    
    do
        int32_t x0_2 = LocalWho()
        uint64_t x8_6
        
        if (x19_1 == zx.q(x0_2))
            int32_t x8_5 = *(gDomClient + 0x38)
            
            if (x8_5 == 0xffffffff)
                x8_6 = 0
            else
                x8_6 = zx.q(x8_5)
        
        int32_t x0_3
        uint64_t x8_10
        int32_t x20_1
        
        if (x19_1 != zx.q(x0_2) || x19_1 == x8_6)
            x20_1 = *(gDomClient + 0x207a0)
            x0_3 = LocalWho()
            
            if (x20_1 == x0_3 && *(gDomClient + 0x207a0) != *(gDomClient + 0x2079c))
                int32_t x8_9 = *(gDomClient + 0x38)
                
                if (x8_9 == 0xffffffff)
                    x8_10 = 0
                else
                    x8_10 = zx.q(x8_9)
        
        if ((x19_1 != zx.q(x0_2) || x19_1 == x8_6) && (x20_1 != x0_3
                || *(gDomClient + 0x207a0) == *(gDomClient + 0x2079c)
                || zx.d(*(gDomClient + 0x22134)) != 0 || x19_1 == x8_10))
            int32_t x8_8 = *x24_1
            
            if (x8_8 != 0)
                uint64_t x28_1 = zx.q(x8_8.w)
                
                if (x28_1.d u< *(gDomClient + 0x205e8))
                    int64_t fp_1 = *(gDomClient + 0x205e0)
                    DomGfx* x20_2 = fp_1 + x28_1 * 0x21d8
                    
                    if (*(x20_2 + 0x21d0) == x8_8)
                        PlayerAreaRemove(x20_2)
                        void* x28_2 = fp_1 + x28_1 * 0x21d8
                        UI2Free(x28_2 + 0x2148)
                        UI2Free(x28_2 + 0x214c)
                        UI2Free(x28_2 + 0x2150)
                        UI2Free(x28_2 + 0x2154)
                        uint32_t x0_9 = *(x28_2 + 0x1f90)
                        
                        if (x0_9 != 0)
                            SpineDestroy(x0_9)
                        
                        int32_t x9_1 = *(gDomClient + 0x205f0)
                        *(gDomClient + 0x205f0) = zx.d(*(x20_2 + 0x21d0))
                        *(x20_2 + 0x21d0) = x9_1
                        *(gDomClient + 0x205f4) -= 1
                
                *x24_1 = 0
        else if (*x24_1 == 0)
            var_2070 = 0
            int32_t var_206c_1 = x19_1.d
            DomGfx* x0_11 = DomCreateArrow(&var_2070, 0, 3)
            PlayerAreaAdd(x0_11, zx.q(x19_1.d), 0)
            *x24_1 = *(x0_11 + 0x21d0)
        
        x19_1 += 1
        x8_4 = sx.q(*(ActiveGame() + 0x11b4))
        x24_1 += 0x4d48
    while (x19_1 s< x8_4)

int64_t result = ComputePodIconInfo(&var_2070)
int32_t var_1070

if (var_1070 s>= 1)
    int64_t i = 0
    int32_t* x19_2 = &var_2070
    
    do
        int64_t x1_3
        result, x1_3 = CalcPodIconWhere(*(&var_2070 + (sx.q(*x19_2) << 3) + 0x1008))
        
        if (result.d u> 3)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return ZoomDeckClose() __tailcall
        
        uint64_t x2_1 = result u>> 0x20
        
        switch (result & 0xffffffff)
            case 1
                result = UpdatePlayerArrows(&var_2070, x19_2, x2_1)
            case 3
                result = UpdatePilePods(&var_2070, x19_2, x2_1, x1_3)
        
        i += 1
        x19_2 = &x19_2[2]
    while (i s< sx.q(var_1070))

return result
