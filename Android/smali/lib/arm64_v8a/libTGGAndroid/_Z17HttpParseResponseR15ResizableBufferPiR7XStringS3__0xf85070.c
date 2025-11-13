// 函数: _Z17HttpParseResponseR15ResizableBufferPiR7XStringS3_
// 地址: 0xf85070
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
XString::operator=(arg3)
XString::operator=(arg4)
void* x23 = *arg1
XString::XString()
char var_58
XString::operator=(&var_58)
int64_t x24 = 0

while (true)
    uint32_t x8_2 = zx.d(*(x23 + x24))
    int32_t x19_1
    void* x23_1
    
    if (x8_2 == 0xd)
        void* x25_1 = x23 + x24
        
        if (zx.d(*(x25_1 + 1)) == 0xa)
            XString::AppendLength(&var_58, x23.d)
            x23_1 = x25_1 + 2
        label_f85160:
            int32_t x0_7 = sscanf(XString::operator char const*(), "HTTP/1.1 %d", arg2)
            int32_t x0_9
            
            if (x0_7 != 1)
                x0_9 = sscanf(XString::operator char const*(), "HTTP/1.0 %d", arg2)
            
            if (x0_7 != 1 && x0_9 != 1)
                goto label_f85294
            
            if (*arg2 != 0xc8)
                XString::operator char const*()
                XTrace("http response line: %s")
            label_f85274:
                x19_1 = 0
                goto label_f8529c
            
            void* x22_1 = x23_1
            int32_t var_5c = 0xffffffff
        label_f851b8:
            XString::XString()
            char var_68
            XString::operator=(&var_68)
            int64_t x26_1 = 0
            
            while (true)
                uint32_t x8_6 = zx.d(*(x22_1 + x26_1))
                
                if (x8_6 == 0xd)
                    void* x27_1 = x22_1 + x26_1
                    
                    if (zx.d(*(x27_1 + 1)) == 0xa)
                        XString::AppendLength(&var_68, x22_1.d)
                        x22_1 = x27_1 + 2
                    else
                        x26_1 += 1
                        continue
                else if (x8_6 == 0xa)
                    XString::AppendLength(&var_68, x22_1.d)
                    x22_1 = x22_1 + x26_1 + 1
                else
                    if (x8_6 != 0)
                        x26_1 += 1
                        continue
                    
                    XString::AppendLength(&var_68, x22_1.d)
                    XString::~XString()
                    break
                
                if (XString::Length() != 0)
                    sscanf(XString::operator char const*(), "Content-Length: %d", &var_5c)
                    XString::~XString()
                    goto label_f851b8
                
                XString::AppendLength(arg3, x23_1.d)
                XString::~XString()
                int32_t x2_10 = var_5c
                
                if ((x2_10 & 0x80000000) == 0)
                    if (x2_10 == 0)
                        goto label_f85274
                    
                    int32_t x8_9 = x22_1.d - *arg1
                    int32_t x9_2 = *(arg1 + 8) - x8_9
                    
                    if (x9_2 s>= x2_10)
                        if (x9_2 s> x2_10)
                            XTrace("extra data after http response")
                        
                        XString::AppendLength(arg4, x22_1.d)
                        goto label_f85274
                    
                    int32_t x9_3 = *(arg1 + 0xc)
                    int32_t x8_10 = x2_10 + x8_9
                    
                    if (x9_3 s<= x8_10)
                        if (x9_3 == 0)
                            *arg1 = XPooledCalloc(x8_10 + 1)
                        else
                            int64_t x0_20 = XPooledCalloc(x8_10 + 1)
                            uint64_t x2_11 = zx.q(*(arg1 + 8))
                            
                            if (x2_11.d s>= 1)
                                memcpy(x0_20, *arg1, x2_11)
                            
                            XPooledFree(*arg1, *(arg1 + 0xc))
                            *arg1 = x0_20
                        
                        *(arg1 + 0xc) = x8_10 + 1
                    
                    goto label_f85294
                
                XString::XString()
                XString::operator=(&var_68)
                int64_t x20_1 = 0
                
                while (true)
                    uint32_t x8_12 = zx.d(*(x22_1 + x20_1))
                    void* x20_2
                    
                    if (x8_12 == 0xd)
                        void* x21_2 = x22_1 + x20_1
                        
                        if (zx.d(*(x21_2 + 1)) == 0xa)
                            XString::AppendLength(&var_68, x22_1.d)
                            x20_2 = x21_2 + 2
                        else
                            x20_1 += 1
                            continue
                    else if (x8_12 == 0xa)
                        XString::AppendLength(&var_68, x22_1.d)
                        x20_2 = x22_1 + x20_1 + 1
                    else
                        if (x8_12 != 0)
                            x20_1 += 1
                            continue
                        
                        XString::AppendLength(&var_68, x22_1.d)
                        x19_1 = 2
                        break
                    
                    var_5c = 0xffffffff
                    sscanf(XString::operator char const*(), "%x", &var_5c)
                    int32_t x0_30 = strlen(x20_2)
                    
                    if (var_5c s<= x0_30)
                        XString::AppendLength(arg4, x20_2.d)
                        x19_1 = 0
                    else
                        x19_1 = 1
                    
                    break
                
                XString::~XString()
                goto label_f8529c
            
            goto label_f85294
    else
        if (x8_2 == 0xa)
            XString::AppendLength(&var_58, x23.d)
            x23_1 = x23 + x24 + 1
            goto label_f85160
        
        if (x8_2 == 0)
            XString::AppendLength(&var_58, x23.d)
        label_f85294:
            x19_1 = 2
        label_f8529c:
            XString::~XString()
            return zx.q(x19_1)
    x24 += 1
