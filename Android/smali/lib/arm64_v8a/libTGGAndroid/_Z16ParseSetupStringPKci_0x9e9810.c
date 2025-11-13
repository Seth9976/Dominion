// 函数: _Z16ParseSetupStringPKci
// 地址: 0x9e9810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfig* entry_x8
memcpy(entry_x8, DEFAULT_SETUP, 0x1990)
int32_t x0_3 = strlen(arg1) + 1
void* x0_4 = XPooledMalloc(x0_3)
void* x0_5 = strcpy(x0_4, arg1)
int32_t x8 = 0
char* x9 = x0_5 + 1
int64_t var_470[0x40]

while (true)
    uint32_t x11_1 = zx.d(x9[-1])
    
    if (x11_1 != 0x2d)
    label_9e987c:
        
        if (x11_1 == 0)
            break
    else
        if (zx.d(*x9) == 0)
            break
        
        x11_1 = zx.d(x9[1])
        
        if (x11_1 != 0x20)
            goto label_9e987c
        
        x9[-1] = 0
        var_470[sx.q(x8)] = x9
        x8 += 1
    
    x9 = &x9[1]

if (x8 s>= 1)
    int64_t x24_1 = 0
    
    while (true)
        char* x8_1 = var_470[x24_1]
        uint64_t x9_2 = zx.q(zx.d(*x8_1) - 0x62)
        
        if (x9_2.d u<= 0x16)
            switch (x9_2)
                case 0
                    x0_5 = ParseSetupBans(x0_5.d, entry_x8, &x8_1[1])
                    goto label_9e98fc
                case 3
                    x0_5 = ParseSetupExpansions(entry_x8, &x8_1[1], arg2)
                label_9e98fc:
                    x24_1 += 1
                    
                    if (x24_1 == zx.q(x8))
                        break
                    
                    continue
                case 9
                    x0_5 = ParseSetupKingdom(arg2, entry_x8, &x8_1[1])
                    goto label_9e98fc
                case 0xb
                    x0_5 = ParseSetupModifiers(entry_x8, &x8_1[1])
                    goto label_9e98fc
                case 0x10
                    x0_5 = ParseSetupRules(entry_x8, &x8_1[1])
                    goto label_9e98fc
                case 0x11
                    x0_5 = atoi(&x8_1[1])
                    *(entry_x8 + 0x170c) = x0_5.d
                    goto label_9e98fc
                case 0x16
                    int128_t var_260
                    __builtin_memset(&var_260, 0, 0x200)
                    char var_270
                    XString::XString(&var_270)
                    Trim(&var_270)
                    XString::~XString()
                    XString var_268
                    FromExtrasStr(entry_x8 + 0x1710, 0x20, &var_260, &var_268)
                    int64_t i = 0
                    void* x9_3 = entry_x8 + 0x1d4
                    
                    do
                        void* x10_2 = &var_260 + i
                        int32_t x11_5 = *x10_2
                        int32_t x10_3 = *(x10_2 + 4)
                        
                        if (x11_5 != 0)
                            *(x9_3 - 0x14) = 1
                        
                        if (x10_3 != 0)
                            *(x9_3 - 4) = 1
                        
                        if (x11_5 != 0)
                            *(x9_3 - 0x10) = x11_5
                        
                        if (x10_3 != 0)
                            *x9_3 = x10_3
                        
                        i += 8
                        x9_3 += 0x20
                    while (i != 0x200)
                    
                    x0_5 = XString::~XString()
                    goto label_9e98fc
        
        pthread_kill(pthread_self(), 6)
        DomExpSetup* x0_17
        int32_t x1_9
        int64_t x2_5
        x0_17, x1_9, x2_5 = XNoReturn()
        return FindExpSetup(x0_17, x1_9, x2_5) __tailcall

return XPooledFree(x0_4, x0_3)
