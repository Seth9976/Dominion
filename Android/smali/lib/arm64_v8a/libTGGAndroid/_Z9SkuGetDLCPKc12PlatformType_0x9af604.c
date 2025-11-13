// 函数: _Z9SkuGetDLCPKc12PlatformType
// 地址: 0x9af604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int64_t* var_38
int32_t x0 = GameSpecific_GetDlcs(3, &var_38)
void* x8_5
int64_t x21_1
int64_t* x22_1
int64_t x22_2

if (x0 s< 1)
label_9af724:
    int32_t x0_8 = GameSpecific_GetDlcs(0, &var_38)
    
    if (x0_8 s<= 0)
    label_9af820:
        int32_t x0_16 = GameSpecific_GetDlcs(2, &var_38)
        
        if (x0_16 s< 1)
            return 0
        
        if (x20 == 1)
            x22_2 = 0
            int64_t x23_8 = 8
            
            while (true)
                int32_t x0_19 = *(var_38 + x23_8)
                
                if (x0_19 != 0)
                    XStringFromInt(x0_19)
                    int32_t x0_21 = strcmp(XString::operator char const*(), arg1)
                    XString::~XString()
                    
                    if (x0_21 == 0)
                        break
                
                x22_2 += 1
                x23_8 += 0x80
                
                if (zx.q(x0_16) == x22_2)
                    return 0
            
            x8_5 = &var_38[(x22_2 & 0xffffffff) * 0x10]
        else
            if (x20 != 4)
                x22_1 = var_38
                x21_1 = 0
                int64_t x24_7 = 0x20
                
                while (true)
                    if (x20 != 3)
                        goto label_9af958
                    
                    int64_t x0_22 = *(x22_1 + x24_7)
                    
                    if (x0_22 != 0 && strcmp(x0_22, arg1) == 0)
                        break
                    
                    x21_1 += 1
                    x24_7 += 0x80
                    
                    if (zx.q(x0_16) == x21_1)
                        return 0
            else
                x22_1 = var_38
                x21_1 = 0
                int64_t x23_7 = 0x18
                
                while (true)
                    int64_t x0_17 = *(x22_1 + x23_7)
                    
                    if (x0_17 != 0 && strcmp(x0_17, arg1) == 0)
                        break
                    
                    x21_1 += 1
                    x23_7 += 0x80
                    
                    if (zx.q(x0_16) == x21_1)
                        return 0
            
            x8_5 = &x22_1[(x21_1 & 0xffffffff) * 0x10]
    else if (x20 == 1)
        x22_2 = 0
        int64_t x24_5 = 8
        
        while (true)
            int32_t x0_11 = *(var_38 + x24_5)
            
            if (x0_11 != 0)
                XStringFromInt(x0_11)
                int32_t x0_13 = strcmp(XString::operator char const*(), arg1)
                XString::~XString()
                
                if (x0_13 == 0)
                    break
            
            x22_2 += 1
            x24_5 += 0x80
            
            if (zx.q(x0_8) == x22_2)
                goto label_9af820
        
        x8_5 = &var_38[(x22_2 & 0xffffffff) * 0x10]
    else
        if (x20 != 4)
            x22_1 = var_38
            x21_1 = 0
            int64_t x24_6 = 0x20
            
            while (true)
                if (x20 != 3)
                    goto label_9af958
                
                int64_t x0_14 = *(x22_1 + x24_6)
                
                if (x0_14 != 0 && strcmp(x0_14, arg1) == 0)
                    break
                
                x21_1 += 1
                x24_6 += 0x80
                
                if (zx.q(x0_8) == x21_1)
                    goto label_9af820
        else
            x22_1 = var_38
            x21_1 = 0
            int64_t x24_4 = 0x18
            
            while (true)
                int64_t x0_9 = *(x22_1 + x24_4)
                
                if (x0_9 != 0 && strcmp(x0_9, arg1) == 0)
                    break
                
                x21_1 += 1
                x24_4 += 0x80
                
                if (zx.q(x0_8) == x21_1)
                    goto label_9af820
        
        x8_5 = &x22_1[(x21_1 & 0xffffffff) * 0x10]
else if (x20 == 1)
    x22_2 = 0
    int64_t x24_2 = 8
    
    while (true)
        int32_t x0_3 = *(var_38 + x24_2)
        
        if (x0_3 != 0)
            XStringFromInt(x0_3)
            int32_t x0_5 = strcmp(XString::operator char const*(), arg1)
            XString::~XString()
            
            if (x0_5 == 0)
                break
        
        x22_2 += 1
        x24_2 += 0x80
        
        if (zx.q(x0) == x22_2)
            goto label_9af724
    
    x8_5 = &var_38[(x22_2 & 0xffffffff) * 0x10]
else
    if (x20 != 4)
        x22_1 = var_38
        x21_1 = 0
        int64_t x24_3 = 0x20
        
        while (true)
            if (x20 != 3)
            label_9af958:
                XTraceAndLog("unknown source %s %d")
                pthread_kill(pthread_self(), 6)
                char* x0_26
                int64_t x1_13
                x0_26, x1_13 = XNoReturn()
                return SkuGetEntitlement(x0_26, x1_13) __tailcall
            
            int64_t x0_6 = *(x22_1 + x24_3)
            
            if (x0_6 != 0 && strcmp(x0_6, arg1) == 0)
                break
            
            x21_1 += 1
            x24_3 += 0x80
            
            if (zx.q(x0) == x21_1)
                goto label_9af724
    else
        x22_1 = var_38
        x21_1 = 0
        int64_t x24_1 = 0x18
        
        while (true)
            int64_t x0_1 = *(x22_1 + x24_1)
            
            if (x0_1 != 0 && strcmp(x0_1, arg1) == 0)
                break
            
            x21_1 += 1
            x24_1 += 0x80
            
            if (zx.q(x0) == x21_1)
                goto label_9af724
    
    x8_5 = &x22_1[(x21_1 & 0xffffffff) * 0x10]
return zx.q(*x8_5)
