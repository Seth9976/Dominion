// 函数: _Z31DomCreateKindomExpansionsUpdate9UI2Handle
// 地址: 0xb31504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DomCreateKindomExpansionsClick)
uint32_t x8 = *gKingdomExpansionStyle
uint64_t x1_1
int32_t x2
int32_t x8_2

if (x8 - 1 u> 1)
    x2 = x8 == 3 ? 1 : 0
    x8_2 = x8 - 1
    
    if (x8_2 u> 2)
        x1_1 = 0
    else
        x1_1 = zx.q(*(&data_801c44 + (sx.q(x8_2) << 2)))
else
    if (*(GetActiveProfile() + 0x7560) != 0)
        x2 = 4
    else
        x2 = 1
    
    x8_2 = *gKingdomExpansionStyle - 1
    
    if (x8_2 u<= 2)
        x1_1 = zx.q(*(&data_801c44 + (sx.q(x8_2) << 2)))
    else
        x1_1 = 0
int64_t result = GameSpecific_UpdateExpansionButtons(zx.q(x19), x1_1, x2)

if ((result.d & 1) == 0)
    *(gCreateDlg + 0x2c) = 1
    return UI2SetState(zx.q(x19), &data_182e848, 0xffffffff, 0) __tailcall

*(gCreateDlg + 0x2c) = 0
return result
