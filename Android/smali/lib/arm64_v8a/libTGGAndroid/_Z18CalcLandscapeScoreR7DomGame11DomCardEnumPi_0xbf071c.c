// 函数: _Z18CalcLandscapeScoreR7DomGame11DomCardEnumPi
// 地址: 0xbf071c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = CardHasWhenScoring(arg1, arg2)

if (result != 0 && *(arg1 + 0xd40) s>= 1)
    void* result_1 = result
    int64_t i = 0
    
    do
        int32_t x26_1
        
        if (CountOngoing(arg1, zx.q(i.d), 0x2d, arg2.d, 0) s>= 1)
            x26_1 = 2
        else
            x26_1 = 1
        
        int64_t var_48 = 0
        DomPushContext(arg1, zx.q(i.d), &var_48)
        int32_t x0_3 = result_1()
        arg3[i] += x0_3 * x26_1
        result = __emutls_get_address(__emutls_v.gContextStack_tl)
        i += 1
        *(result + 0x13000) -= 1
    while (i s< sx.q(*(arg1 + 0xd40)))

return result
