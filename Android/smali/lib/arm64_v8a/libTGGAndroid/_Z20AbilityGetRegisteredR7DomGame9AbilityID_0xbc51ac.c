// 函数: _Z20AbilityGetRegisteredR7DomGame9AbilityID
// 地址: 0xbc51ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg2 & 0x30) != 0)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint32_t i_2 = arg2.d u>> 0x12
uint32_t i_3 = *(arg1 + 0x19c0) - 1
uint32_t i_1

i_1 = i_2 s< i_3 ? i_2 : i_3

if ((i_1 & 0x80000000) == 0)
    void* result = arg1 + mulu.dp.d(i_1, 0xb8) + 0x3c208
    uint32_t i
    
    do
        if (*(arg1 + mulu.dp.d(i_1, 0xb8) + 0x3c234) == i_2)
            return result
        
        i = i_1
        i_1 -= 1
        result -= 0xb8
    while (i s>= 1)

pthread_kill(pthread_self(), 6)
return XNoReturn()
