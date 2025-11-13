// 函数: _Z12LogItemClickRK12UI2ClickInfo
// 地址: 0xb35eb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)
int32_t x0_2 = operator==(&var_28, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    int32_t x8_1 = *(arg1 + 0x10)
    int32_t x8_2
    
    if (x8_1 != *(gLogData + 0xc08))
        x8_2 = x8_1
    else
        x8_2 = -1
    
    *(gLogData + 0xc08) = x8_2

XString::XString(&var_28)
int32_t x0_5 = operator==(&var_28, *(arg1 + 8))
int64_t result = XString::~XString()

if ((x0_5 & 1) == 0)
    return result

CanUndo()
GameDlgManagerDismiss(5, false)
void* x8_5 = gLogData + muls.dp.d(*(arg1 + 0x10) - *(gLogData + 0xc00), 0x18)
return DomGameUndoRequest(*(x8_5 + 0xc), zx.q(*(x8_5 + 8)))
