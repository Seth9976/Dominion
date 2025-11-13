// 函数: _Z14GetAbilityNameR7DomGame9AbilityID
// 地址: 0xbdf1a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.q(not.d(arg2.d)) & 0x30) == 0)
    int32_t x8_2 = *(arg1 + ((arg2 u>> 0x12 & 0x3fff) << 5) + 0x15f68)
    int64_t var_38 = 0
    int32_t x9_2
    
    if (x8_2 s< 0)
        x9_2 = x8_2 + 0xff
    else
        x9_2 = x8_2
    
    DomExpGetTokens(zx.q(x9_2 s>> 8), &var_38)
    return DomTokenDefName(var_38 + muls.dp.d(x8_2 - (x9_2 & 0xffffff00), 0x638), 0) __tailcall

int32_t x0_4 = AbilitySource(arg1, arg2 & 0xffffffff)
int32_t x21_1 = *(arg1 + 0xd50)
int32_t x8_9 = (x0_4 + (x21_1 << 0x10)) s% 0x3e5
int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_9) << 3))
DomCardDef* x0_8

if (x9_5 != 0)
    while (*x9_5 != x0_4 || x9_5[1] != x21_1)
        x9_5 = *(x9_5 + 0x10)
        
        if (x9_5 == 0)
            goto label_bdf280
    
    x0_8 = *(x9_5 + 8)
else
label_bdf280:
    DomDefGetSlow(zx.q(x0_4), zx.q(x21_1))
    int32_t* x0_6 = malloc(0x18)
    int64_t x8_10 = sx.q(x8_9) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_10)
    *x0_6 = x0_4
    x0_6[1] = x21_1
    *(&data_1838a20 + x8_10) = x0_6
    *(x0_6 + 0x10) = x9_6
    x0_8 = DomDefGetSlow(zx.q(x0_4), zx.q(x21_1))
    *(x0_6 + 8) = x0_8

return DomDefName(x0_8, 0, nullptr, false) __tailcall
