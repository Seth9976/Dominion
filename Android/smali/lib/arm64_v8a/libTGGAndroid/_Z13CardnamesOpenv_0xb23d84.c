// 函数: _Z13CardnamesOpenv
// 地址: 0xb23d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gCardnamesGlobals + 0xc84) = 0
int32_t x0_1 = CardTypesInGame(gDomClient + 0x20728, gCardnamesGlobals)
*(gCardnamesGlobals + 0xc80) = x0_1
bool (* var_18)(DomCardEnum, DomCardEnum) = SortCardTypeAlpha
std::__ndk1::__sort<bool (*&)(DomCardEnum, DomCardEnum), DomCardEnum*>(gCardnamesGlobals, 
    gCardnamesGlobals + (sx.q(x0_1) << 2), &var_18)
uint64_t x8 = zx.q(*(gCardnamesGlobals + 0xc80))

if (x8.d s< 1)
    *(gCardnamesGlobals + 0xc80) = x8.d + 1
    *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x1300
else
    int32_t x9_1 = *gCardnamesGlobals
    
    if (x9_1 == 0x1300)
    label_b23e24:
        int64_t x11_2 = 1
        int64_t x10_1
        
        do
            x10_1 = x11_2
            
            if (x8 == x11_2)
                break
            
            x11_2 = x10_1 + 1
        while (*(gCardnamesGlobals + (x10_1 << 2)) != 0x21a)
        
        if (x10_1 u>= x8)
            *(gCardnamesGlobals + 0xc80) = x8.d + 1
            *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x21a
        else
            if (x9_1 != 0x601)
                goto label_b23e54
            
        label_b23e84:
            int64_t x11_6 = 1
            int64_t x10_3
            
            do
                x10_3 = x11_6
                
                if (x8 == x11_6)
                    break
                
                x11_6 = x10_3 + 1
            while (*(gCardnamesGlobals + (x10_3 << 2)) != 0x929)
            
            if (x10_3 u>= x8)
                *(gCardnamesGlobals + 0xc80) = x8.d + 1
                *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x929
            else
                if (x9_1 != 0x924)
                    goto label_b23eb4
                
            label_b23ee4:
                int64_t x11_10 = 1
                int64_t x10_5
                
                do
                    x10_5 = x11_10
                    
                    if (x8 == x11_10)
                        break
                    
                    x11_10 = x10_5 + 1
                while (*(gCardnamesGlobals + (x10_5 << 2)) != 0x500)
                
                if (x10_5 u>= x8)
                    *(gCardnamesGlobals + 0xc80) = x8.d + 1
                    *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x500
                else
                    if (x9_1 != 0x70e)
                        goto label_b23f14
                    
                label_b23f44:
                    int64_t x11_14 = 1
                    int64_t x10_7
                    
                    do
                        x10_7 = x11_14
                        
                        if (x8 == x11_14)
                            break
                        
                        x11_14 = x10_7 + 1
                    while (*(gCardnamesGlobals + (x10_7 << 2)) != 0x936)
                    
                    if (x10_7 u>= x8)
                        *(gCardnamesGlobals + 0xc80) = x8.d + 1
                        *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x936
                    else
                        if (x9_1 != 0x219)
                            goto label_b23f74
                        
                    label_b23fa4:
                        int64_t x11_18 = 1
                        int64_t x10_9
                        
                        do
                            x10_9 = x11_18
                            
                            if (x8 == x11_18)
                                break
                            
                            x11_18 = x10_9 + 1
                        while (*(gCardnamesGlobals + (x10_9 << 2)) != 0x416)
                        
                        if (x10_9 u>= x8)
                            *(gCardnamesGlobals + 0xc80) = x8.d + 1
                            *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x416
                        else
                            if (x9_1 != 0x50c)
                                goto label_b23fd4
                            
                        label_b24004:
                            int64_t x11_22 = 1
                            int64_t x10_11
                            
                            do
                                x10_11 = x11_22
                                
                                if (x8 == x11_22)
                                    break
                                
                                x11_22 = x10_11 + 1
                            while (*(gCardnamesGlobals + (x10_11 << 2)) != 0x61a)
                            
                            if (x10_11 u>= x8)
                                *(gCardnamesGlobals + 0xc80) = x8.d + 1
                                *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x61a
                            else
                                if (x9_1 != 0xc11)
                                    goto label_b24034
                                
                            label_b24064:
                                int64_t x10_13 = 1
                                int64_t x9_2
                                
                                do
                                    x9_2 = x10_13
                                    
                                    if (x8 == x10_13)
                                        break
                                    
                                    x10_13 = x9_2 + 1
                                while (*(gCardnamesGlobals + (x9_2 << 2)) != 0xf00)
                                
                                if (x9_2 u>= x8)
                                    *(gCardnamesGlobals + 0xc80) = x8.d + 1
                                    *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0xf00
    else
        int64_t x12_1 = 1
        int64_t x11_1
        
        do
            x11_1 = x12_1
            
            if (x8 == x12_1)
                break
            
            x12_1 = x11_1 + 1
        while (*(gCardnamesGlobals + (x11_1 << 2)) != 0x1300)
        
        if (x11_1 u>= x8)
            *(gCardnamesGlobals + 0xc80) = x8.d + 1
            *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x1300
        else
            if (x9_1 != 0x21a)
                goto label_b23e24
            
        label_b23e54:
            int64_t x11_4 = 1
            int64_t x10_2
            
            do
                x10_2 = x11_4
                
                if (x8 == x11_4)
                    break
                
                x11_4 = x10_2 + 1
            while (*(gCardnamesGlobals + (x10_2 << 2)) != 0x601)
            
            if (x10_2 u>= x8)
                *(gCardnamesGlobals + 0xc80) = x8.d + 1
                *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x601
            else
                if (x9_1 != 0x929)
                    goto label_b23e84
                
            label_b23eb4:
                int64_t x11_8 = 1
                int64_t x10_4
                
                do
                    x10_4 = x11_8
                    
                    if (x8 == x11_8)
                        break
                    
                    x11_8 = x10_4 + 1
                while (*(gCardnamesGlobals + (x10_4 << 2)) != 0x924)
                
                if (x10_4 u>= x8)
                    *(gCardnamesGlobals + 0xc80) = x8.d + 1
                    *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x924
                else
                    if (x9_1 != 0x500)
                        goto label_b23ee4
                    
                label_b23f14:
                    int64_t x11_12 = 1
                    int64_t x10_6
                    
                    do
                        x10_6 = x11_12
                        
                        if (x8 == x11_12)
                            break
                        
                        x11_12 = x10_6 + 1
                    while (*(gCardnamesGlobals + (x10_6 << 2)) != 0x70e)
                    
                    if (x10_6 u>= x8)
                        *(gCardnamesGlobals + 0xc80) = x8.d + 1
                        *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x70e
                    else
                        if (x9_1 != 0x936)
                            goto label_b23f44
                        
                    label_b23f74:
                        int64_t x11_16 = 1
                        int64_t x10_8
                        
                        do
                            x10_8 = x11_16
                            
                            if (x8 == x11_16)
                                break
                            
                            x11_16 = x10_8 + 1
                        while (*(gCardnamesGlobals + (x10_8 << 2)) != 0x219)
                        
                        if (x10_8 u>= x8)
                            *(gCardnamesGlobals + 0xc80) = x8.d + 1
                            *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x219
                        else
                            if (x9_1 != 0x416)
                                goto label_b23fa4
                            
                        label_b23fd4:
                            int64_t x11_20 = 1
                            int64_t x10_10
                            
                            do
                                x10_10 = x11_20
                                
                                if (x8 == x11_20)
                                    break
                                
                                x11_20 = x10_10 + 1
                            while (*(gCardnamesGlobals + (x10_10 << 2)) != 0x50c)
                            
                            if (x10_10 u>= x8)
                                *(gCardnamesGlobals + 0xc80) = x8.d + 1
                                *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0x50c
                            else
                                if (x9_1 != 0x61a)
                                    goto label_b24004
                                
                            label_b24034:
                                int64_t x11_24 = 1
                                int64_t x10_12
                                
                                do
                                    x10_12 = x11_24
                                    
                                    if (x8 == x11_24)
                                        break
                                    
                                    x11_24 = x10_12 + 1
                                while (*(gCardnamesGlobals + (x10_12 << 2)) != 0xc11)
                                
                                if (x10_12 u>= x8)
                                    *(gCardnamesGlobals + 0xc80) = x8.d + 1
                                    *(gCardnamesGlobals + (sx.q(x8.d) << 2)) = 0xc11
                                else if (x9_1 != 0xf00)
                                    goto label_b24064

return GameDlgManagerShow(0x3e8, 5)
