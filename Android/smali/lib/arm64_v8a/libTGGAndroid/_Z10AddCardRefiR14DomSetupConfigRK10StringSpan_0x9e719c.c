// 函数: _Z10AddCardRefiR14DomSetupConfigRK10StringSpan
// 地址: 0x9e719c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *arg3
int128_t var_40_1

if (x0 == 0)
    __builtin_memset(&var_40_1, 0, 0x28)
else
    *(arg3 + 8)
    int32_t x2 = STokenize::STokenizeIter::ParseStr(x0)
    int96_t var_40
    char* x0_1 = var_40.q
    
    if (x0_1 != 0)
        return LookupCardByName(x0_1, var_40:8.d, x2, 1)
return 0
