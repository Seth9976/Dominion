// 函数: _Z19GameSetupMinAILevelRK9GameSetup
// 地址: 0x9dac64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_8 = *(arg1 + 0x60)
int32_t x8
int32_t x9
int32_t x10

if (x8_8 == 0)
    x9 = 0
    x10 = -1
    x8 = *(arg1 + 0x28c)
    
    if (x8 == 0)
        goto label_9dad0c
else if (x8_8 != 3)
    x9 = 1
    x10 = -1
    x8 = *(arg1 + 0x28c)
    
    if (x8 == 0)
        goto label_9dad0c
else
    x10 = *(arg1 + 0x64)
    x9 = 0
    x8 = *(arg1 + 0x28c)
    
    if (x8 == 0)
        goto label_9dad0c

int32_t x8_1

if (x8 == 3)
    x8_1 = *(arg1 + 0x290)
    
    if (x10 == 0xffffffff)
        goto label_9dad10
    
    if (x8_1 == x10)
        goto label_9dad0c
    
    int32_t x11_1
    
    if (x8_1 == 0xffffffff)
        x11_1 = 0
    else if (x8_1 != 3)
        x11_1 = x8_1 + 2
    else
        x11_1 = 1
    
    int32_t x12_2
    
    if (x10 != 3)
        x12_2 = x10 + 2
    else
        x12_2 = 1
    
    if (x11_1 s< x12_2)
        goto label_9dad10
    
    goto label_9dad0c

int32_t x8_7

if ((x9 & 1) != 0)
    x8_7 = -1
else
    x9 = 1
label_9dad0c:
    x8_1 = x10
label_9dad10:
    int32_t x10_1 = *(arg1 + 0x4b8)
    
    if (x10_1 == 0)
        goto label_9dad78
    
    int32_t x10_2
    
    if (x10_1 == 3)
        x10_2 = *(arg1 + 0x4bc)
        
        if (x8_1 == 0xffffffff)
            goto label_9dad7c
        
        if (x10_2 == x8_1)
            goto label_9dad78
        
        int32_t x11_2
        
        if (x10_2 == 0xffffffff)
            x11_2 = 0
        else if (x10_2 != 3)
            x11_2 = x10_2 + 2
        else
            x11_2 = 1
        
        int32_t x12_4
        
        if (x8_1 != 3)
            x12_4 = x8_1 + 2
        else
            x12_4 = 1
        
        if (x11_2 s< x12_4)
            goto label_9dad7c
        
        goto label_9dad78
    
    if ((x9 & 1) != 0)
        x8_7 = -1
    else
        x9 = 1
    label_9dad78:
        x10_2 = x8_1
    label_9dad7c:
        int32_t x8_2 = *(arg1 + 0x6e4)
        
        if (x8_2 == 0)
            goto label_9dade4
        
        int32_t x8_3
        
        if (x8_2 == 3)
            x8_3 = *(arg1 + 0x6e8)
            
            if (x10_2 == 0xffffffff)
                goto label_9dade8
            
            if (x8_3 == x10_2)
                goto label_9dade4
            
            int32_t x11_3
            
            if (x8_3 == 0xffffffff)
                x11_3 = 0
            else if (x8_3 != 3)
                x11_3 = x8_3 + 2
            else
                x11_3 = 1
            
            int32_t x12_6
            
            if (x10_2 != 3)
                x12_6 = x10_2 + 2
            else
                x12_6 = 1
            
            if (x11_3 s< x12_6)
                goto label_9dade8
            
            goto label_9dade4
        
        if ((x9 & 1) != 0)
            x8_7 = -1
        else
            x9 = 1
        label_9dade4:
            x8_3 = x10_2
        label_9dade8:
            int32_t x10_3 = *(arg1 + 0x910)
            
            if (x10_3 == 0)
                goto label_9dae50
            
            int32_t x10_4
            
            if (x10_3 == 3)
                x10_4 = *(arg1 + 0x914)
                
                if (x8_3 == 0xffffffff)
                    goto label_9dae54
                
                if (x10_4 == x8_3)
                    goto label_9dae50
                
                int32_t x11_4
                
                if (x10_4 == 0xffffffff)
                    x11_4 = 0
                else if (x10_4 != 3)
                    x11_4 = x10_4 + 2
                else
                    x11_4 = 1
                
                int32_t x12_8
                
                if (x8_3 != 3)
                    x12_8 = x8_3 + 2
                else
                    x12_8 = 1
                
                if (x11_4 s< x12_8)
                    goto label_9dae54
                
                goto label_9dae50
            
            if ((x9 & 1) != 0)
                x8_7 = -1
            else
                x9 = 1
            label_9dae50:
                x10_4 = x8_3
            label_9dae54:
                int32_t x8_4 = *(arg1 + 0xb3c)
                
                if (x8_4 == 0)
                    goto label_9daebc
                
                int32_t x11_5
                
                if (x8_4 == 3)
                    x11_5 = *(arg1 + 0xb40)
                    
                    if (x10_4 == 0xffffffff)
                        goto label_9daec0
                    
                    if (x11_5 == x10_4)
                        goto label_9daebc
                    
                    int32_t x8_5
                    
                    if (x11_5 == 0xffffffff)
                        x8_5 = 0
                    else if (x11_5 != 3)
                        x8_5 = x11_5 + 2
                    else
                        x8_5 = 1
                    
                    int32_t x12_10
                    
                    if (x10_4 != 3)
                        x12_10 = x10_4 + 2
                    else
                        x12_10 = 1
                    
                    if (x8_5 s< x12_10)
                        goto label_9daec0
                    
                    goto label_9daebc
                
                if ((x9 & 1) != 0)
                    x8_7 = -1
                else
                    x9 = 1
                label_9daebc:
                    x11_5 = x10_4
                label_9daec0:
                    int32_t x8_6 = *(arg1 + 0xd68)
                    
                    if (x8_6 == 0)
                        goto label_9daf28
                    
                    if (x8_6 == 3)
                        x8_7 = *(arg1 + 0xd6c)
                        
                        if (x11_5 == 0xffffffff)
                            goto label_9daf2c
                        
                        if (x8_7 == x11_5)
                            goto label_9daf28
                        
                        int32_t x10_5
                        
                        if (x8_7 == 0xffffffff)
                            x10_5 = 0
                        else if (x8_7 != 3)
                            x10_5 = x8_7 + 2
                        else
                            x10_5 = 1
                        
                        int32_t x12_12
                        
                        if (x11_5 != 3)
                            x12_12 = x11_5 + 2
                        else
                            x12_12 = 1
                        
                        if (x10_5 s< x12_12)
                            goto label_9daf2c
                        
                        goto label_9daf28
                    
                    if ((x9 & 1) != 0)
                        x8_7 = -1
                    else
                        x9 = 1
                    label_9daf28:
                        x8_7 = x11_5
                    label_9daf2c:
                        int32_t x10_6 = *(arg1 + 0xf94)
                        
                        if (x10_6 != 0)
                            if (x10_6 == 3)
                                int32_t x9_1 = *(arg1 + 0xf98)
                                
                                if (x8_7 == 0xffffffff)
                                    return zx.q(x9_1)
                                
                                if (x9_1 != x8_7)
                                    int32_t x10_7
                                    
                                    if (x9_1 == 0xffffffff)
                                        x10_7 = 0
                                    else if (x9_1 != 3)
                                        x10_7 = x9_1 + 2
                                    else
                                        x10_7 = 1
                                    
                                    int32_t x11_7
                                    
                                    if (x8_7 != 3)
                                        x11_7 = x8_7 + 2
                                    else
                                        x11_7 = 1
                                    
                                    if (x10_7 s< x11_7)
                                        return zx.q(x9_1)
                            else if ((x9 & 1) != 0)
                                x8_7 = -1

return zx.q(x8_7)
