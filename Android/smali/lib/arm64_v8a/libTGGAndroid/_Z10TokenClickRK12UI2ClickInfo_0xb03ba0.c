// 函数: _Z10TokenClickRK12UI2ClickInfo
// 地址: 0xb03ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*(arg1 + 0x24))
int64_t x23 = *(gDomClient + 0x205e0)
int32_t x8 = *(x23 + x22 * 0x21d8 + 0x2c)

if (x8 != 7)
    goto label_b03c60

char var_38
XString::XString(&var_38)
int32_t x0_2 = operator==(&var_38, *(arg1 + 8))
XString::~XString()
int32_t x19_1

if ((x0_2 & 1) == 0)
    x8 = *(x23 + x22 * 0x21d8 + 0x2c)
label_b03c60:
    int32_t x0_6
    
    if (x8 == 8)
        XString::XString(&var_38)
        x0_6 = operator==(&var_38, *(arg1 + 8))
        XString::~XString()
    
    if (x8 != 8 || (x0_6 & 1) == 0)
        if (*(arg1 + 0x20) u<= 1)
            XString::XString(&var_38)
            int32_t x0_10 = operator==(&var_38, *(arg1 + 8))
            XString::~XString()
            
            if ((x0_10 & 1) != 0)
                SubmitSpendCoffers()
        
        x19_1 = 0
    else
        x19_1 = 1
        DomGfxActivate(*(gDomClient + 0x205e0) + zx.q(*(x23 + x22 * 0x21d8 + 0x240)) * 0x21d8, V20, 
            true, false, true)
else
    int32_t x8_2 = *(x23 + x22 * 0x21d8 + 0x220)
    
    if (x8_2 == 0)
        x19_1 = 1
    else
        if (x8_2 != 3)
            pthread_kill(pthread_self(), 6)
            return SetDisplayWho(XNoReturn()) __tailcall
        
        SetDisplayWho(zx.q(*(x23 + x22 * 0x21d8 + 0x228)))
        int32_t x8_4 = *(gDomClient + 0x24)
        
        if (x8_4 == 3)
            *(gDomClient + 0x24) = 0
            x19_1 = 1
        else if (x8_4 != 1)
            x19_1 = 1
        else
            *(gDomClient + 0x24) = 2
            x19_1 = 1

return zx.q(x19_1)
