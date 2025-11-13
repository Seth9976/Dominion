// 函数: sub_9f45c0
// 地址: 0x9f45c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char s_1 = 0
uint64_t x8_1 = zx.q(*(arg2 + 0xbc) - 2)
int32_t x21_2

if (x8_1.d u> 7)
label_9f479c:
    uint64_t x8_12 = zx.q(*(arg2 + 0xc0) - 1)
    
    if (x8_12.d u> 0x32)
        x21_2 = 0x58
    else
        x21_2 = 0x41
        
        switch (x8_12)
            case 1
                x21_2 = 0x54
            case 2
                x21_2 = 0x42
            case 3, 5, 7, 9, 0xc, 0xd, 0xe, 0xf, 0x10, 0x12, 0x13, 0x14, 0x15, 0x16, 0x18, 0x19, 
                    0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                    0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31
                x21_2 = 0x58
            case 4
                x21_2 = 0x44
            case 6
                x21_2 = 0x48
            case 8
                x21_2 = 0x50
            case 0xa
                x21_2 = 0x59
            case 0xb
                x21_2 = 0x47
            case 0x11
                x21_2 = 0x53
            case 0x17
                x21_2 = 0x57
            case 0x32
                x21_2 = 0x45
    
    int32_t x27_1 = *(arg3 + 0x18)
    
    if (x27_1 == 0)
        int32_t var_445_2 = 0x29656e
        s_1.d = 0x6e6f6e28
    else if (x27_1 s>= 1)
        int64_t x22_2 = 0
        int64_t i = 0
        
        do
            uint64_t x0_23 = zx.q(*(*(arg3 + 0x10) + x22_2))
            char* x1_2
            
            if (x0_23.d == 0)
                x1_2 = "(none)"
            else
                void* x0_26 = strchr(*(DomDefGet(x0_23, 0x18) + 0xa0), 0x5f)
                x27_1 = *(arg3 + 0x18)
                x1_2 = x0_26 + 1
            
            strcat(&s_1, x1_2)
            
            if (i s< sx.q(x27_1 - 1))
                *(&s_1 + strlen(&s_1)) = 0x2c
            
            i += 1
            x22_2 += 0xc
        while (i s< sx.q(x27_1))
else
    switch (x8_1)
        case 0
            int32_t x26_1 = *(arg3 + 0x18)
            
            if (x26_1 s>= 1)
                int64_t x21_1 = 0
                int64_t i_1 = 0
                
                do
                    uint64_t x0 = zx.q(*(*(arg3 + 0x10) + x21_1))
                    char* x1
                    
                    if (x0.d == 0)
                        x1 = "(none)"
                    else
                        void* x0_3 = strchr(*(DomDefGet(x0, 0x18) + 0xa0), 0x5f)
                        x26_1 = *(arg3 + 0x18)
                        x1 = x0_3 + 1
                    
                    strcat(&s_1, x1)
                    
                    if (i_1 s< sx.q(x26_1 - 1))
                        *(&s_1 + strlen(&s_1)) = 0x2c
                    
                    i_1 += 1
                    x21_1 += 0xc
                while (i_1 s< sx.q(x26_1))
            
            x21_2 = 0x5a
        case 1
            int32_t* x8_4 = *(arg3 + 0x10)
            uint64_t x0_7 = zx.q(*x8_4)
            char const* const x3_1
            
            if (x0_7.d == 0)
                x3_1 = "(none)"
            else
                void* x0_10 = strchr(*(DomDefGet(x0_7, 0x18) + 0xa0), 0x5f)
                x8_4 = *(arg3 + 0x10)
                x3_1 = x0_10 + 1
            
            snprintf(&s_1, 0x3e8, "%s->%d", x3_1, zx.q(x8_4[2]))
            x21_2 = 0x52
        case 2
            if (*(arg3 + 0x18) s>= 1)
                int64_t x22_1 = 0
                int64_t x23_1 = 0
                int64_t x26_2
                
                do
                    char s[0x64]
                    snprintf(&s, 0x64, "%d", zx.q(*(*(arg3 + 0x10) + x22_1)))
                    strcat(&s_1, &s)
                    x26_2 = sx.q(*(arg3 + 0x18))
                    
                    if (x23_1 s< x26_2 - 1)
                        *(&s_1 + strlen(&s_1)) = 0x2c
                    
                    x23_1 += 1
                    x22_1 += 0xc
                while (x23_1 s< x26_2)
            
            x21_2 = 0x4f
        case 3
            snprintf(&s_1, 0x3e8, "%d", zx.q(**(arg3 + 0x10)))
            x21_2 = 0x4e
        case 4
            if (*(arg3 + 0x18) == 0)
                int32_t var_445_1 = 0x29656e
                s_1.d = 0x6e6f6e28
                x21_2 = 0x55
            else
                uint64_t x0_16 = zx.q(**(arg3 + 0x10))
                char const* const x3_4
                
                if (x0_16.d == 0)
                    x3_4 = "(none)"
                else
                    x3_4 = strchr(*(DomDefGet(x0_16, 0x18) + 0xa0), 0x5f) + 1
                
                snprintf(&s_1, 0x3e8, "%s", x3_4)
                x21_2 = 0x55
        case 5, 6
            goto label_9f479c
        case 7
            snprintf(&s_1, 0x3e8, "%d", zx.q(**(arg3 + 0x10)))
            x21_2 = 0x43

return snprintf(arg1, 0x400, "%c:%s", zx.q(x21_2), &s_1)
