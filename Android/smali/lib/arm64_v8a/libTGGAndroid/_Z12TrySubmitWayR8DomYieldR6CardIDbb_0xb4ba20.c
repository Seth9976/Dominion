// 函数: _Z12TrySubmitWayR8DomYieldR6CardIDbb
// 地址: 0xb4ba20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3.d
int64_t result = GetFirstWayCard()
DomYield var_d50
int32_t x8_1

if (result.d == 0)
label_b4ba70:
    
    if ((x21 & 1) == 0)
        return result
    
    YldCopy(&var_d50, arg1)
    x8_1 = 1
    int32_t var_cd8_1 = GetFirstWayCard()
else
    result = IsPlayEffect(arg1, arg4 & 1)
    
    if ((result.d & 1) == 0)
        goto label_b4ba70
    
    YldCopy(&var_d50, arg1)
    int32_t var_cd8_2
    
    if ((x21 & 1) == 0)
        int32_t x0_2 = *arg2
        
        if (x0_2 == 0)
            x8_1 = 0
        else
            var_cd8_2 = x0_2
            x8_1 = 1
    else
        var_cd8_2 = GetFirstWayCard()
        x8_1 = 1

int32_t var_cdc_1 = x8_1
*arg2 = 0
int32_t x0_5 = LocalWho()
int64_t (* x8_3)()

if (x0_5 == 0xffffffff)
    x8_3 = gDomClient + 0x48
else
    x8_3 = gDomClient + 0x48 + muls.dp.d(x0_5, 0x4d48)

int64_t x9_2 = sx.q(*(x8_3 + 0x4098))
*(x8_3 + 0x4098) = x9_2.d + 1
return memcpy(x8_3 + x9_2 * 0xd20 + 0x1938, &var_d50, 0xd20)
