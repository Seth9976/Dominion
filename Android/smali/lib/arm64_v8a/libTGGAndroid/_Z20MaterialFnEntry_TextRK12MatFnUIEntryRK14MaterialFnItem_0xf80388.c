// 函数: _Z20MaterialFnEntry_TextRK12MatFnUIEntryRK14MaterialFnItem
// 地址: 0xf80388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1
char* entry_x8

if (x9 == 1)
    if (*(*(arg2 + 0x20) + (sx.q(*(arg1 + 8)) << 2)) == 0)
        return XString::XString(entry_x8) __tailcall
else if (x9 == 2)
    int32_t x9_1 = *(arg1 + 0xc)
    
    if (x9_1 == 5)
        return XString::XString(entry_x8) __tailcall
    
    if (x9_1 == 4)
        return XString::XString(entry_x8) __tailcall
pthread_kill(pthread_self(), 6)
UITransform* x0_7
RectF* x1_6
XAsset* x2_3
x0_7, x1_6, x2_3 = XNoReturn()
return MaterialFn_TableDraw(x0_7, x1_6, x2_3) __tailcall
