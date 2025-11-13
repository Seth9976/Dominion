// 函数: _Z12LandscapeMod11DomCardEnum
// 地址: 0xa337d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg1.d
int64_t x8 = *(DomDefGet(arg1, 0x17) + 0xc8)
uint64_t i_5
int64_t result
int32_t i_2

if (x8 == 0x400)
    uint64_t x9_2 = zx.q(*(gCampaignData + 8))
    int64_t x8_2 = *gCampaignData
    int64_t* x10_6 = x8_2 + ((x9_2 & 0x13fe) << 3)
    int32_t* x12_2
    
    do
        x12_2 = *x10_6
        x10_6 = &x12_2[4]
    while (*x12_2 != 0x13ec)
    
    void* x10_8 = *(x12_2 + 8)
    int64_t x11_4
    
    if (*(x10_8 + 0x18) != 3)
        if (*(x10_8 + 0x288) == 3)
            x11_4 = 1
            goto label_a33d28
        
        if (*(x10_8 + 0x4f8) == 3)
            x11_4 = 2
            goto label_a33d28
        
        if (*(x10_8 + 0x768) == 3)
            x11_4 = 3
            goto label_a33d28
    else
        x11_4 = 0
    label_a33d28:
        void* x10_33 = x10_8 + x11_4 * 0x270
        uint64_t x22_2 = zx.q(*(x10_33 + 0x280))
        
        if (x22_2.d s>= 1)
            int64_t x23_2 = 0
            int32_t x9_35
            int32_t i
            
            while (true)
                i = *(x10_33 + 0x20 + (x23_2 << 2))
                int32_t x27_1 = i | i s>> 4
                x9_35 = x27_1 & x9_2.d
                int64_t* x10_34 = x8_2 + (zx.q(x9_35) << 3)
                int32_t* x11_16
                
                do
                    x11_16 = *x10_34
                    x10_34 = &x11_16[4]
                while (*x11_16 != i)
                
                void* x10_36 = *(x11_16 + 8)
                int32_t x11_17 = *(x10_36 + 0x18)
                int64_t x12_6
                
                if (x11_17 != 2)
                    if (*(x10_36 + 0x288) == 2)
                        x12_6 = *(x10_36 + 0x290)
                        
                        if (x12_6 != 0)
                            goto label_a33df0
                        
                        goto label_a33e20
                    
                    if (*(x10_36 + 0x4f8) == 2)
                        x12_6 = *(x10_36 + 0x500)
                        
                        if (x12_6 != 0)
                            goto label_a33df0
                        
                        goto label_a33e20
                    
                    if (*(x10_36 + 0x768) != 2)
                        goto label_a33e20
                    
                    x12_6 = *(x10_36 + 0x770)
                    
                    if (x12_6 == 0)
                        goto label_a33e20
                    
                    goto label_a33df0
                
                x12_6 = *(x10_36 + 0x20)
                
                if (x12_6 != 0)
                label_a33df0:
                    int32_t x8_24 = *(gCampaignSetup + 0x19ac)
                    *(gCampaignSetup + 0x19ac) = i_1
                    *(gCampaignSetup + 0x19b0) = x8_24
                    int32_t x0_4 = x12_6()
                    int32_t x8_25 = *(gCampaignSetup + 0x19b0)
                    *(gCampaignSetup + 0x19b0) = 0
                    *(gCampaignSetup + 0x19ac) = x8_25
                    
                    if ((x0_4 & 1) != 0)
                        x8_2 = *gCampaignData
                        x9_35 = *(gCampaignData + 8) & x27_1
                        break
                else
                label_a33e20:
                    uint64_t x10_37
                    void* x11_25
                    
                    if (x11_17 == 6 && *(x10_36 + 0x284) == 0)
                        x11_25 = x10_36
                        x10_37 = zx.q(*(x11_25 + 0x280))
                        
                        if (x10_37.d == 0)
                            break
                    else if (*(x10_36 + 0x288) == 6 && *(x10_36 + 0x4f4) == 0)
                        x11_25 = x10_36 + 0x270
                        x10_37 = zx.q(*(x11_25 + 0x280))
                        
                        if (x10_37.d == 0)
                            break
                    else if (*(x10_36 + 0x4f8) != 6 || *(x10_36 + 0x764) != 0)
                        if (*(x10_36 + 0x768) != 6)
                            break
                        
                        if (*(x10_36 + 0x9d4) != 0)
                            break
                        
                        x11_25 = x10_36 + 0x750
                        x10_37 = zx.q(*(x11_25 + 0x280))
                        
                        if (x10_37.d == 0)
                            break
                    else
                        x11_25 = x10_36 + 0x4e0
                        x10_37 = zx.q(*(x11_25 + 0x280))
                        
                        if (x10_37.d == 0)
                            break
                    
                    if (x10_37.d s>= 1)
                        int32_t* x11_26 = *(x11_25 + 0x20)
                        
                        if (*x11_26 == i_1)
                            break
                        
                        int64_t x13_4 = 1
                        int64_t x12_14
                        
                        do
                            x12_14 = x13_4
                            
                            if (x10_37 == x13_4)
                                break
                            
                            x13_4 = x12_14 + 1
                        while (x11_26[x12_14] != i_1)
                        
                        if (x12_14 u< x10_37)
                            break
                
                x23_2 += 1
                
                if (x23_2 == x22_2)
                    goto label_a34118
                
                x9_2 = zx.q(*(gCampaignData + 8))
                x8_2 = *gCampaignData
            
            int64_t* x8_26 = x8_2 + (zx.q(x9_35) << 3)
            int32_t* x9_37
            
            do
                x9_37 = *x8_26
                x8_26 = &x9_37[4]
            while (*x9_37 != i)
            
            void* x8_28 = *(x9_37 + 8)
            int64_t x9_39
            
            if (*(x8_28 + 0x18) == 5)
                x9_39 = 0
            label_a34064:
                void* x8_38 = x8_28 + x9_39 * 0x270
                i_5 = RollTable(gCampaignSetup, x8_38 + 0x20, *(x8_38 + 0x280))
                
                if (i_5.d == 0x1426)
                    i_5 = 0x1425
                    
                    if (i_1 s> 0x1145)
                        if (i_1 != 0x122c && i_1 != 0x1146)
                            i_5 = 0x1426
                    else if (i_1 - 0xf2e u>= 3 && i_1 != 0xc26)
                        i_5 = 0x1426
                else if (i_5.d == 0x1422)
                    if (i_1 == 0xb30)
                        i_5 = 0x141e
                    else
                        i_5 = 0x1422
                
                return CampaignAddExtra(i_5, zx.q(i_1), 0xffffffff, 0, 0) __tailcall
            
            if (*(x8_28 + 0x288) == 5)
                x9_39 = 1
                goto label_a34064
            
            if (*(x8_28 + 0x4f8) == 5)
                x9_39 = 2
                goto label_a34064
            
            if (*(x8_28 + 0x768) == 5)
                x9_39 = 3
                goto label_a34064
else if (x8 == 0x8000000)
    i_2 = 0x14b4
label_a33920:
    uint64_t i_6 = zx.q(i_2)
    int32_t x9_3 = *(gCampaignSetup + 0x19ac)
    uint64_t x10_9 = zx.q(*(gCampaignData + 8))
    int64_t x11_5 = *gCampaignData
    *(gCampaignSetup + 0x19ac) = i_1
    *(gCampaignSetup + 0x19b0) = x9_3
    int64_t* x8_5 = x11_5 + ((x10_9 & (i_6 | i_6 u>> 4)) << 3)
    int32_t* x9_4
    
    do
        x9_4 = *x8_5
        x8_5 = &x9_4[4]
    while (*x9_4 != i_2)
    
    void* x8_7 = *(x9_4 + 8)
    int64_t x9_6
    
    if (*(x8_7 + 0x18) != 5)
        if (*(x8_7 + 0x288) == 5)
            x9_6 = 1
            goto label_a33a34
        
        if (*(x8_7 + 0x4f8) == 5)
            x9_6 = 2
            goto label_a33a34
        
        if (*(x8_7 + 0x768) == 5)
            x9_6 = 3
            goto label_a33a34
    else
        x9_6 = 0
    label_a33a34:
        void* x8_13 = x8_7 + x9_6 * 0x270
        i_5 = RollTable(gCampaignSetup, x8_13 + 0x20, *(x8_13 + 0x280))
        int32_t x8_14 = *(gCampaignSetup + 0x19b0)
        *(gCampaignSetup + 0x19b0) = 0
        *(gCampaignSetup + 0x19ac) = x8_14
        
        if (i_5.d == 0)
            return XTrace("no valid landmod") __tailcall
        
        int64_t* x9_16 =
            *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(i_5.d) | zx.q(i_5.d s>> 4))) << 3)
        int32_t* x10_13
        
        do
            x10_13 = *x9_16
            x9_16 = &x10_13[4]
        while (*x10_13 != i_5.d)
        
        void* x9_18 = *(x10_13 + 8)
        
        if (*(x9_18 + 0x10) != i_2)
            return CampaignAddExtra(i_5, zx.q(i_1), 0xffffffff, 0, 0) __tailcall
        
        int64_t x10_16
        
        if (*(x9_18 + 0x18) == 1)
            x10_16 = 0
        label_a33b40:
            int64_t x9_22 = *(x9_18 + x10_16 * 0x270 + 0x20)
            *(gCampaignSetup + 0x19b0) = x8_14
            *(gCampaignSetup + 0x19ac) = i_1
            result = x9_22()
            goto label_a3402c
        
        if (*(x9_18 + 0x288) == 1)
            x10_16 = 1
            goto label_a33b40
        
        if (*(x9_18 + 0x4f8) == 1)
            x10_16 = 2
            goto label_a33b40
        
        if (*(x9_18 + 0x768) == 1)
            x10_16 = 3
            goto label_a33b40
else if (x8 == 0x10000000)
    i_2 = 0x1518
    goto label_a33920

if (x8 == 0x10000000000)
    int64_t* x8_10 = *gCampaignData + ((zx.q(*(gCampaignData + 8)) & 0x157f) << 3)
    int32_t* x10_11
    
    do
        x10_11 = *x8_10
        x8_10 = &x10_11[4]
    while (*x10_11 != 0x157c)
    
    void* x8_12 = *(x10_11 + 8)
    int64_t x9_10
    
    if (*(x8_12 + 0x18) != 5)
        if (*(x8_12 + 0x288) == 5)
            x9_10 = 1
            goto label_a33f7c
        
        if (*(x8_12 + 0x4f8) == 5)
            x9_10 = 2
            goto label_a33f7c
        
        if (*(x8_12 + 0x768) == 5)
            x9_10 = 3
            goto label_a33f7c
    else
        x9_10 = 0
    label_a33f7c:
        void* x8_29 = x8_12 + x9_10 * 0x270
        int32_t i_3 = RollTable(gCampaignSetup, x8_29 + 0x20, *(x8_29 + 0x280))
        int64_t* x8_32 =
            *gCampaignData + (((zx.q(i_3) | zx.q(i_3 s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
        int32_t* x9_44
        
        do
            x9_44 = *x8_32
            x8_32 = &x9_44[4]
        while (*x9_44 != i_3)
        
        void* x8_34 = *(x9_44 + 8)
        int64_t x9_46
        
        if (*(x8_34 + 0x18) == 1)
            x9_46 = 0
        label_a34018:
            int32_t x11_27 = *(gCampaignSetup + 0x19ac)
            int64_t x8_36 = *(x8_34 + x9_46 * 0x270 + 0x20)
            *(gCampaignSetup + 0x19ac) = i_1
            *(gCampaignSetup + 0x19b0) = x11_27
            result = x8_36()
        label_a3402c:
            int32_t x8_37 = *(gCampaignSetup + 0x19b0)
            *(gCampaignSetup + 0x19b0) = 0
            *(gCampaignSetup + 0x19ac) = x8_37
            return result
        
        if (*(x8_34 + 0x288) == 1)
            x9_46 = 1
            goto label_a34018
        
        if (*(x8_34 + 0x4f8) == 1)
            x9_46 = 2
            goto label_a34018
        
        if (*(x8_34 + 0x768) == 1)
            x9_46 = 3
            goto label_a34018
else if (x8 == 0x80000000000)
    i_2 = 0x1644
    goto label_a33920

if (x8 == 0x20000000)
    uint64_t x8_1 = zx.q(*(gCampaignData + 8))
    int64_t x9_1 = *gCampaignData
    int64_t* x10_2 = x9_1 + ((x8_1 & 0x1555) << 3)
    int32_t* x12_1
    
    do
        x12_1 = *x10_2
        x10_2 = &x12_1[4]
    while (*x12_1 != 0x1450)
    
    void* x10_4 = *(x12_1 + 8)
    int64_t x11_2
    
    if (*(x10_4 + 0x18) != 3)
        if (*(x10_4 + 0x288) == 3)
            x11_2 = 1
            goto label_a33b68
        
        if (*(x10_4 + 0x4f8) == 3)
            x11_2 = 2
            goto label_a33b68
        
        if (*(x10_4 + 0x768) == 3)
            x11_2 = 3
            goto label_a33b68
    else
        x11_2 = 0
    label_a33b68:
        void* x10_21 = x10_4 + x11_2 * 0x270
        uint64_t x22_1 = zx.q(*(x10_21 + 0x280))
        
        if (x22_1.d s>= 1)
            int64_t x23_1 = 0
            
            while (true)
                int32_t i_4 = *(x10_21 + 0x20 + (x23_1 << 2))
                int64_t* x8_18 = x9_1 + (((zx.q(i_4) | zx.q(i_4 s>> 4)) & zx.q(x8_1.d)) << 3)
                int32_t* x9_23
                
                do
                    x9_23 = *x8_18
                    x8_18 = &x9_23[4]
                while (*x9_23 != i_4)
                
                void* x8_20 = *(x9_23 + 8)
                int32_t x9_24 = *(x8_20 + 0x18)
                int64_t x10_25
                
                if (x9_24 != 2)
                    if (*(x8_20 + 0x288) == 2)
                        x10_25 = *(x8_20 + 0x290)
                        
                        if (x10_25 != 0)
                            goto label_a33c34
                        
                        goto label_a33c64
                    
                    if (*(x8_20 + 0x4f8) == 2)
                        x10_25 = *(x8_20 + 0x500)
                        
                        if (x10_25 != 0)
                            goto label_a33c34
                        
                        goto label_a33c64
                    
                    if (*(x8_20 + 0x768) != 2)
                        goto label_a33c64
                    
                    x10_25 = *(x8_20 + 0x770)
                    
                    if (x10_25 == 0)
                        goto label_a33c64
                    
                    goto label_a33c34
                
                x10_25 = *(x8_20 + 0x20)
                
                if (x10_25 != 0)
                label_a33c34:
                    int32_t x8_21 = *(gCampaignSetup + 0x19ac)
                    *(gCampaignSetup + 0x19ac) = i_1
                    *(gCampaignSetup + 0x19b0) = x8_21
                    int32_t x0_3 = x10_25()
                    int32_t x8_22 = *(gCampaignSetup + 0x19b0)
                    *(gCampaignSetup + 0x19b0) = 0
                    *(gCampaignSetup + 0x19ac) = x8_22
                    
                    if ((x0_3 & 1) != 0)
                        i_5 = zx.q(i_4)
                        break
                else
                label_a33c64:
                    int64_t x9_32
                    
                    if (x9_24 == 6 && *(x8_20 + 0x284) == 0)
                        x9_32 = 0
                    else if (*(x8_20 + 0x288) == 6 && *(x8_20 + 0x4f4) == 0)
                        x9_32 = 1
                    else if (*(x8_20 + 0x4f8) != 6 || *(x8_20 + 0x764) != 0)
                        if (*(x8_20 + 0x768) != 6 || *(x8_20 + 0x9d4) != 0)
                            i_5 = zx.q(i_4)
                            break
                            break
                        
                        x9_32 = 3
                    else
                        x9_32 = 2
                    
                    void* x9_33 = x8_20 + x9_32 * 0x270
                    uint64_t x8_23 = zx.q(*(x9_33 + 0x280))
                    
                    if (x8_23.d == 0)
                        i_5 = zx.q(i_4)
                        break
                    
                    if (x8_23.d s>= 1)
                        int32_t* x9_34 = *(x9_33 + 0x20)
                        
                        while (*x9_34 != i_1)
                            uint64_t temp0_1 = x8_23
                            x8_23 -= 1
                            x9_34 = &x9_34[1]
                            
                            if (temp0_1 == 1)
                                goto label_a33cf0
                        
                        i_5 = zx.q(i_4)
                        break
                
            label_a33cf0:
                x23_1 += 1
                
                if (x23_1 == x22_1)
                    goto label_a34118
                
                x8_1 = zx.q(*(gCampaignData + 8))
                x9_1 = *gCampaignData
            
            return CampaignAddExtra(i_5, zx.q(i_1), 0xffffffff, 0, 0) __tailcall
else if (x8 == 0x4000000000)
    i_2 = 0x15e0
    goto label_a33920

label_a34118:
pthread_kill(pthread_self(), 6)
XNoReturn()
return Bell_LandscapeMod() __tailcall
