// 函数: _Z14CardnamesClickRK12UI2ClickInfo
// 地址: 0xba0a3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        CardnamesClose()
else
    XString::~XString()
    CardnamesClose()

XString::XString(&var_18)
int32_t x0_5 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_5 & 1) != 0)
    *(gCardnamesGlobals + 0xc84) -= 1

XString::XString(&var_18)
int32_t x0_8 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_8 & 1) != 0)
    *(gCardnamesGlobals + 0xc84) += 1

XString::XString(&var_18)
int32_t x0_11 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    if (*(GetClient() + 0xc) != *(GetClient() + 0x10))
        XTraceAndLog("failed to submit cardnames click, waiting")
        return 0
    
    *(gDomClient + 0x207c0) =
        *(gCardnamesGlobals + (sx.q(*(arg1 + 0x10) + *(gCardnamesGlobals + 0xc84) * 0x14) << 2))
    *(gDomClient + 0x207bc) = 1
    SubmitAction(LocalWho(), gDomClient + 0x20748)
    CardnamesClose()

return 0
