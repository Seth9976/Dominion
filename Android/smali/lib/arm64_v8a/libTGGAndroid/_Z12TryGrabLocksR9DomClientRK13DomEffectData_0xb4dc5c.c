// 函数: _Z12TryGrabLocksR9DomClientRK13DomEffectData
// 地址: 0xb4dc5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x24) != 3)
    if (zx.d(*(arg2 + 0x30)) != 0)
        return 1
    
    int32_t var_34
    int32_t x0_4 =
        WaitDurationAmount(zx.q(WaitDuration(arg2, &var_34)), zx.q(*(GetLocalSettings() + 8)))
    uint64_t x20_2 = zx.q(var_34)
    int32_t x23_1 = *arg2
    int64_t x22_1 = *(&data_1817328 + (x20_2 << 3))
    int64_t x0_5 = Now()
    
    if (x23_1 == 7)
        if (x22_1 s<= x0_5)
            goto label_b4dcf0
        
        *(&data_1817328 + (x20_2 << 3)) += sx.q(x0_4)
        return 1
    
    if (x22_1 s<= x0_5)
    label_b4dcf0:
        *(&data_1817328 + (x20_2 << 3)) = Now() + sx.q(x0_4)
        return 1

return 0
