// 函数: _Z15UI2TriggerClickR3UI2RK12UI2ClickInfobb
// 地址: 0x103c238
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg4.d
UI2& i_1 = arg1

if (*(arg1 + 0x15f8) != 0)
    int32_t x10_1 = *(i_1 + 0x160c)
    
    if (x10_1 != 2)
        int32_t i = *arg2
        
        if (i != 0)
            int32_t x15_1 = arg3.d
            
            do
                if ((x15_1 & 1) == 0 && *(gUI2 + 0x5c) == i)
                    goto label_103c270
                
                void* x13_3 = *(*gUI2 + mulu.dp.d(i & 0xffff, 0x19a8) + 0x17d0)
                
                if (x13_3 == 0)
                    break
                
                i = *(x13_3 + 0x19a0)
                x15_1 = 0
            while (i != 0)
        
        int32_t x11_3
        
        if (*(arg2 + 0x20) != 1)
            x11_3 = *(arg2 + 0x14)
        
        if (*(arg2 + 0x20) == 1 || (x10_1 == 1 && x11_3 == 0) || (x10_1 u<= 1 && x11_3 == 2))
            int32_t x10_2 = *(gUI2 + 0x5c)
            
            if (x10_2 != 0)
                uint64_t x11_4 = zx.q(x10_2.w)
                
                if (x11_4.d u< *(gUI2 + 8))
                    int64_t x12_3 = *gUI2
                    
                    if (*(x12_3 + x11_4 * 0x19a8 + 0x19a0) == x10_2)
                        *(x12_3 + x11_4 * 0x19a8 + 0x13f1) = 0
            
            *(arg1 + 0x13f1) = 1
            *(gUI2 + 0x5c) = *(i_1 + 0x19a0)
            return zx.q(1.d) & 1

label_103c270:

if ((x21 & 1) != 0)
    if (*(i_1 + 0x1990) != 0)
        return zx.q(nullptr.d) & 1
    
label_103c608:
    UI2* x0 = *(i_1 + 0x17d0)
    
    if (x0 != 0)
        x0 = UI2TriggerClick(x0, arg2, false, x21.b & 1)
    
    return zx.q(x0.d) & 1

if ((arg3.d & 1) == 0)
label_103c398:
    
    if (*(i_1 + 0x1530) == 0)
    label_103c5f4:
        int64_t x8_10 = *(i_1 + 0x1990)
        
        if (x8_10 == 0)
            goto label_103c608
        
        return zx.q(x8_10(arg2).d) & 1
    
    char* x22_1 = *(arg2 + 8)
    char var_28
    XString::XString(&var_28)
    int32_t x0_3 = operator==(x22_1, &var_28)
    XString::~XString()
    
    if ((x0_3 & 1) != 0)
        UI2TableScrollUp(i_1)
        return zx.q(1.d) & 1
    
    char* x22_3 = *(arg2 + 8)
    XString::XString(&var_28)
    int32_t x0_7 = operator==(x22_3, &var_28)
    XString::~XString()
    
    if ((x0_7 & 1) != 0)
        UI2TableScrollDown(i_1)
        return zx.q(1.d) & 1
    
    char* x22_5 = *(arg2 + 8)
    XString::XString(&var_28)
    int32_t x0_11 = operator==(x22_5, &var_28)
    XString::~XString()
    
    if ((x0_11 & 1) == 0)
        char* x22_7 = *(arg2 + 8)
        XString::XString(&var_28)
        int32_t x0_14 = operator==(x22_7, &var_28)
        XString::~XString()
        
        if ((x0_14 & 1) == 0)
            char* x22_9 = *(arg2 + 8)
            XString::XString(&var_28)
            
            if ((operator==(x22_9, &var_28) & 1) == 0)
                char* x22_10 = *(arg2 + 8)
                char var_38
                XString::XString(&var_38)
                int32_t x0_21 = operator==(x22_10, &var_38)
                XString::~XString()
                XString::~XString()
                
                if ((x0_21 & 1) == 0)
                    goto label_103c5f4
            else
                XString::~XString()
            
            UI2TableScroll(i_1, *gUI2 + zx.q(*arg2) * 0x19a8, arg2)
            return zx.q(1.d) & 1
        
        uint64_t x8_7 = zx.q(*(i_1 + 0x1528))
        
        if (x8_7.d u<= 3)
            float v0_2 = *(i_1 + 0x1760)
            
            switch (x8_7)
                case 1
                    *(i_1 + 0x13ac) = *(i_1 + 0x13ac) - v0_2
                case 2
                    *(i_1 + 0x13a8) = *(i_1 + 0x13a8) + 0f
                case 3
                    *(i_1 + 0x13ac) = v0_2 + *(i_1 + 0x13ac)
            
            UI2ClampScrollDelta(i_1, nullptr)
            
            do
                *(i_1 + 0x1378) = 2
                i_1 = *(i_1 + 0x17d0)
            while (i_1 != 0)
            
            return zx.q(1.d) & 1
    else
        uint64_t x8_5 = zx.q(*(i_1 + 0x1528))
        
        if (x8_5.d u<= 3)
            float v0_1 = *(i_1 + 0x1760)
            
            switch (x8_5)
                case 1
                    *(i_1 + 0x13ac) = v0_1 + *(i_1 + 0x13ac)
                case 2
                    *(i_1 + 0x13a8) = *(i_1 + 0x13a8) + 0f
                case 3
                    *(i_1 + 0x13ac) = *(i_1 + 0x13ac) - v0_1
            
            UI2ClampScrollDelta(i_1, nullptr)
            
            do
                *(i_1 + 0x1378) = 2
                i_1 = *(i_1 + 0x17d0)
            while (i_1 != 0)
            
            return zx.q(1.d) & 1
else
    int32_t x9_1 = *(i_1 + 0x15ec)
    
    if (x9_1 u<= 6)
        int32_t x9_2 = 1 << x9_1
        
        if ((x9_2 & 0x3a) != 0)
        label_103c2a8:
            int32_t x8_2 = *(arg2 + 0x20)
            
            if (x8_2 == 9 || x8_2 == 2)
                goto label_103c398
            
            return zx.q(nullptr.d) & 1
        
        if ((x9_2 & 0x44) != 0)
            goto label_103c398
        
        int32_t x9_3 = *(i_1 + 0x167c)
        
        if (x9_3 == 5)
            goto label_103c398
        
        if (x9_3 == 3)
            if (zx.d(*(arg1 + 0x15b4)) != 0)
                goto label_103c398
            
            goto label_103c2a8
        
        if (x9_3 != 2 || *(i_1 + 0x1528) == 0)
            goto label_103c2a8
        
        goto label_103c398

pthread_kill(pthread_self(), 6)
int64_t* x0_27 = XNoReturn()
XString::~XString()
XString::~XString()
sub_1101e04(x0_27)
noreturn
