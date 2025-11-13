// 函数: _Z12SortTypeDefsPK10DomTypeDefS1_
// 地址: 0xb0df04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *arg1
int32_t x9_1
int32_t x10_2
int32_t x12_2
int32_t x13_3
int64_t x11

if (x8_1 s> 0x3f)
    if (x8_1 s>= 0x40000)
        if (x8_1 == 0x40000)
            x9_1 = 0
            x10_2 = 4
        label_b0e014:
            x11 = *arg2
            
            if (x11 s> 0x3f)
                goto label_b0e0c0
            
            goto label_b0e024
        
        if (x8_1 != 0x400000000000)
            goto label_b0e0ac
        
        x9_1 = 0
        x10_2 = 8
        x11 = *arg2
        
        if (x11 s<= 0x3f)
            goto label_b0e024
        
        goto label_b0e0c0
    
    if (x8_1 != 0x40)
        if (x8_1 != 0x80)
            goto label_b0e0ac
        
        x9_1 = 0
        x10_2 = 5
        x11 = *arg2
        
        if (x11 s<= 0x3f)
            goto label_b0e024
        
        goto label_b0e0c0
    
    x9_1 = 0
    x10_2 = 6
    x11 = *arg2
    
    if (x11 s<= 0x3f)
    label_b0e024:
        
        if (x11 - 2 u> 0x1e)
        label_b0e160:
            x13_3 = -1
            x12_2 = 1
            
            if ((0xffffffff & x10_2) == 0xffffffff)
                return zx.q(x8_1 u< x11 ? 1 : 0)
        else
            x12_2 = 0
            x13_3 = 0
            
            switch (&jump_table_7ee951[0x1d + x11])
                case &jump_table_7ee970
                    x12_2 = 0
                    x13_3 = 1
                    
                    if ((1 & x10_2) == 0xffffffff)
                        return zx.q(x8_1 u< x11 ? 1 : 0)
                case &jump_table_7ee970[1], &jump_table_7ee970[3], &jump_table_7ee970[4], 
                        &jump_table_7ee970[5], &jump_table_7ee970[7], &jump_table_7ee970[8], 
                        &jump_table_7ee970[9], &jump_table_7ee970[0xa], &jump_table_7ee970[0xb], 
                        &jump_table_7ee970[0xc], &jump_table_7ee970[0xd], &jump_table_7ee970[0xf], 
                        &jump_table_7ee970[0x10], &jump_table_7ee970[0x11], 
                        &jump_table_7ee970[0x12], &jump_table_7ee970[0x13], 
                        &jump_table_7ee970[0x14], &jump_table_7ee970[0x15], 
                        &jump_table_7ee970[0x16], &jump_table_7ee970[0x17], 
                        &jump_table_7ee970[0x18], &jump_table_7ee970[0x19], 
                        &jump_table_7ee970[0x1a], &jump_table_7ee970[0x1b], 
                        &jump_table_7ee970[0x1c], &jump_table_7ee970[0x1d]
                    goto label_b0e160
                case &jump_table_7ee970[2]
                    goto label_b0e13c
                case &jump_table_7ee970[6]
                    x12_2 = 0
                    x13_3 = 2
                    
                    if ((2 & x10_2) == 0xffffffff)
                        return zx.q(x8_1 u< x11 ? 1 : 0)
                case &jump_table_7ee970[0xe]
                    x12_2 = 0
                    x13_3 = 3
                    
                    if ((3 & x10_2) == 0xffffffff)
                        return zx.q(x8_1 u< x11 ? 1 : 0)
                case &jump_table_7ee970[0x1e]
                    x12_2 = 0
                    x13_3 = 7
                    
                    if ((7 & x10_2) == 0xffffffff)
                        return zx.q(x8_1 u< x11 ? 1 : 0)
    else
    label_b0e0c0:
        
        if (x11 s>= 0x40000)
            if (x11 == 0x40000)
                x12_2 = 0
                x13_3 = 4
            label_b0e13c:
                
                if ((x13_3 & x10_2) == 0xffffffff)
                    return zx.q(x8_1 u< x11 ? 1 : 0)
            else
                if (x11 != 0x400000000000)
                    goto label_b0e160
                
                x12_2 = 0
                x13_3 = 8
                
                if ((8 & x10_2) == 0xffffffff)
                    return zx.q(x8_1 u< x11 ? 1 : 0)
        else if (x11 == 0x40)
            x12_2 = 0
            x13_3 = 6
            
            if ((6 & x10_2) == 0xffffffff)
                return zx.q(x8_1 u< x11 ? 1 : 0)
        else
            if (x11 != 0x80)
                goto label_b0e160
            
            x12_2 = 0
            x13_3 = 5
            
            if ((5 & x10_2) == 0xffffffff)
                return zx.q(x8_1 u< x11 ? 1 : 0)
else
    if (x8_1 - 2 u> 0x1e)
    label_b0e0ac:
        x10_2 = -1
        x9_1 = 1
        x11 = *arg2
        
        if (x11 s<= 0x3f)
            goto label_b0e024
        
        goto label_b0e0c0
    
    x9_1 = 0
    x10_2 = 0
    
    switch (&jump_table_7ee93c[0x13 + x8_1])
        case &jump_table_7ee951
            x9_1 = 0
            x10_2 = 1
            x11 = *arg2
            
            if (x11 s<= 0x3f)
                goto label_b0e024
            
            goto label_b0e0c0
        case &jump_table_7ee951[1], &jump_table_7ee951[3], &jump_table_7ee951[4], 
                &jump_table_7ee951[5], "\\\\\\\"\\\\\\\\\\\\\\\(", "\\\\\\"\\\\\\\\\\\\\\\(", 
                "\\\\\"\\\\\\\\\\\\\\\(", "\\\\"\\\\\\\\\\\\\\\(", "\\\"\\\\\\\\\\\\\\\(", 
                "\\"\\\\\\\\\\\\\\\(", "\"\\\\\\\\\\\\\\\(", "\\\\\\\\\\\\\\\(", "\\\\\\\\\\\\\\(", 
                "\\\\\\\\\\\\\(", "\\\\\\\\\\\\(", "\\\\\\\\\\\(", "\\\\\\\\\\(", "\\\\\\\\\(", 
                "\\\\\\\\(", "\\\\\\\(", "\\\\\\(", "\\\\\(", "\\\\(", "\\\(", 
                &jump_table_7ee951[0x1c], &jump_table_7ee951[0x1d]
            goto label_b0e0ac
        case &jump_table_7ee951[2]
            goto label_b0e014
        case &jump_table_7ee951[6]
            x9_1 = 0
            x10_2 = 2
            x11 = *arg2
            
            if (x11 s<= 0x3f)
                goto label_b0e024
            
            goto label_b0e0c0
        case ""\\\\\\\\\\\\\\\("
            x9_1 = 0
            x10_2 = 3
            x11 = *arg2
            
            if (x11 s<= 0x3f)
                goto label_b0e024
            
            goto label_b0e0c0
        case &jump_table_7ee951[0x1e]
            x9_1 = 0
            x10_2 = 7
            x11 = *arg2
            
            if (x11 s<= 0x3f)
                goto label_b0e024
            
            goto label_b0e0c0

if ((x9_1 & 1) == 0)
    return zx.q(x12_2) | zx.q(x10_2 s< x13_3 ? 1 : 0)

return 0
