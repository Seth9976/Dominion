// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_am_pmERiRS4_S4_RjRKNS_5ctypeIcEE
// 地址: 0x10bddb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = (*(*(arg1 + 0x10) + 0x10))()
uint64_t x8_2 = zx.q(*result)
char* result_1 = result
uint64_t x8_3
uint64_t x9

if ((x8_2.d & 1) == 0)
    x8_3 = x8_2 u>> 1
    x9 = zx.q(result_1[0x18])
    
    if ((x9.d & 1) == 0)
        goto label_10bde5c
    
    goto label_10bde08

x8_3 = *(result_1 + 8)
x9 = zx.q(result_1[0x18])

if ((x9.d & 1) != 0)
label_10bde08:
    
    if (x8_3 == neg.q(*(result_1 + 0x20)))
        *arg5 |= 4
    else
    label_10bde2c:
        int64_t* entry_x5
        result = sub_10b0e88(arg3, arg4, result_1, &result_1[0x30], entry_x5, arg5, 0)
        int32_t x8_4 = *arg2
        int64_t x9_2 = result - result_1
        
        if (x8_4 == 0xc && x9_2 == 0)
            *arg2 = 0
        else if (x8_4 s<= 0xb && x9_2 == 0x18)
            *arg2 = x8_4 + 0xc
else
label_10bde5c:
    
    if (x8_3 != neg.q(x9 u>> 1))
        goto label_10bde2c
    
    *arg5 |= 4

return result
