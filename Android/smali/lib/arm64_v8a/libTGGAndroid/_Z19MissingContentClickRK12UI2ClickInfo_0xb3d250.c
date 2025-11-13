// 函数: _Z19MissingContentClickRK12UI2ClickInfo
// 地址: 0xb3d250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_18
XString::XString(&var_18)

if ((operator==(&var_18, *(arg1 + 8)) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        goto label_b3d2b8
else
    XString::~XString()
label_b3d2b8:
    int64_t x0_3
    
    if (*(gMissingContent + 8) == 0)
        x0_3 = 0x29
    else
        x0_3 = 0x7ea
    
    GameDlgManagerShow(x0_3, 5)

XString::XString(&var_18)
int32_t x0_6 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_6 & 1) != 0)
    StoreItemDlgOpen(MissingContentIndexToDlc(*(arg1 + 0x10)), 0x7f5, 0)

XString::XString(&var_18)
int32_t x0_11 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_11 & 1) != 0)
    var_18 = MissingContentIndexToDlc(*(arg1 + 0x10))
    StoreItemAction(&var_18)

return 0
