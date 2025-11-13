// 函数: _Z12AbilityClickRK12UI2ClickInfo
// 地址: 0xb0e7a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*(arg1 + 0x24))
int64_t x23 = *(gDomClient + 0x205e0)
int64_t var_cc0

if (*(GetClient() + 0x5068) != 1)
label_b0e830:
    XString::XString(&var_cc0)
    int32_t x0_6 = operator==(&var_cc0, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_6 & 1) == 0)
        goto label_b0ea90
    
    if (*(arg1 + 0x20) == 1)
        int32_t x8_6 = *(x23 + x22 * 0x21d8 + 0x1f8)
        void* i_2
        
        if (x8_6 == 3)
            int32_t x0_12 =
                AbilitySourceCard(gDomClient + 0x20728, zx.q(*(x23 + x22 * 0x21d8 + 0x1fc)))
            
            if (x0_12 != 0)
                uint64_t x9_4 = zx.q(*(gDomClient + 0x205e8))
                
                if (x9_4.d == 0)
                label_b0ea78:
                    DomZoomCard(nullptr, false)
                else
                    void* i_5 = *(gDomClient + 0x205e0)
                    int64_t x9_5 = i_5 + x9_4 * 0x21d8
                    void* i_4 = i_5
                    
                    while (zx.d(*(i_4 + 0x21d2)) == 0)
                        i_4 += 0x21d8
                        
                        if (i_4 u>= x9_5)
                            goto label_b0ea78
                    
                    if (i_4 == 0xffffffff)
                        goto label_b0ea78
                    
                    while (true)
                        if (*(i_4 + 0x2c) == 0 && *(i_4 + 0x98) == x0_12
                                && zx.d(*(i_4 + 0x168)) == 0)
                            i_2 = i_4
                            break
                        
                        if (i_4 == 0)
                            i_4 = i_5
                        else
                            i_4 += 0x21d8
                        
                        if (i_4 u>= x9_5)
                            goto label_b0ea78
                        
                        while (zx.d(*(i_4 + 0x21d2)) == 0)
                            i_4 += 0x21d8
                            
                            if (i_4 u>= x9_5)
                                goto label_b0ea78
                        
                        if (i_4 == 0xffffffff)
                            i_2 = nullptr
                            break
                    
                    DomZoomCard(i_2, false)
        else
            if (x8_6 != 2)
                pthread_kill(pthread_self(), 6)
                DomGame* x0_26
                int64_t x1_14
                x0_26, x1_14 = XNoReturn()
                return AbilityCanMultiplay(x0_26, x1_14) __tailcall
            
            uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
            
            if (x10_1.d == 0)
                goto label_b0ea78
            
            void* i_3 = *(gDomClient + 0x205e0)
            int64_t x10_2 = i_3 + x10_1 * 0x21d8
            void* i = i_3
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_2)
                    goto label_b0ea78
            
            if (i == 0xffffffff)
                goto label_b0ea78
            
            do
                if (*(i + 0x2c) == 0 && *(i + 0x98) == *(x23 + x22 * 0x21d8 + 0x1fc)
                        && zx.d(*(i + 0x168)) == 0)
                    i_2 = i
                    break
                
                if (i == 0)
                    i = i_3
                else
                    i += 0x21d8
                
                if (i u>= x10_2)
                    goto label_b0ea78
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x10_2)
                        goto label_b0ea78
                
                i_2 = nullptr
            while (i != 0xffffffff)
            
            DomZoomCard(i_2, false)
        goto label_b0ea90
    
    if (*(GetClient() + 0xc) != *(GetClient() + 0x10))
        XTraceAndLog("failed to submit ability click, waiting")
    else
        *(gDomClient + 0x207c0) = *(x23 + x22 * 0x21d8 + 0x1f4)
        *(gDomClient + 0x207bc) = 1
        SubmitAction(LocalWho(), gDomClient + 0x20748)
    label_b0ea90:
        XString::XString(&var_cc0)
        int32_t x0_15 = operator==(&var_cc0, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_15 & 1) != 0)
            DomZoomCard(*(gDomClient + 0x205e0) + zx.q(*(x23 + x22 * 0x21d8 + 0x218)) * 0x21d8, 
                false)
        
        XString::XString(&var_cc0)
        int32_t x0_19 = operator==(&var_cc0, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_19 & 1) != 0)
            if (*(GetClient() + 0xc) != *(GetClient() + 0x10))
                XTraceAndLog("failed to submit ability all click, waiting")
            else
                int32_t i_1 = *(x23 + x22 * 0x21d8 + 0x21d0)
                
                if (i_1 != 0)
                    int64_t x10_6 = *(gDomClient + 0x205e0)
                    int64_t* x11_1 = &var_cc0
                    
                    do
                        void* x9_8 = x10_6 + mulu.dp.d(i_1 & 0xffff, 0x21d8)
                        *x11_1 = *(x9_8 + 0x1f4)
                        x11_1 += 4
                        i_1 = *(x9_8 + 0x214)
                    while (i_1 != 0)
                
                memcpy(gDomClient + 0x207c0, &var_cc0, sx.q(*(x23 + x22 * 0x21d8 + 0x21c)) << 2)
                *(gDomClient + 0x207bc) = *(x23 + x22 * 0x21d8 + 0x21c)
                SubmitAction(LocalWho(), gDomClient + 0x20748)
else
    int32_t x0_3 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_cc0)
    int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_1.d s>= x0_3)
        goto label_b0e830
    
    int64_t x9_1 = var_cc0
    
    if (x9_1 == 0 || *(x9_1 + x8_1 * 0xb0 + 0x1c) == 0x17)
        goto label_b0e830
return 0
