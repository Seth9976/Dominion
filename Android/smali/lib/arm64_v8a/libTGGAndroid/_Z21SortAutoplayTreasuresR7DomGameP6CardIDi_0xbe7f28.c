// 函数: _Z21SortAutoplayTreasuresR7DomGameP6CardIDi
// 地址: 0xbe7f28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_1 = sx.q(arg3)
int32_t x25 = 0
int64_t i_2 = i_1

if (arg3 s>= 1)
    CardID* x20_1 = arg2
    int64_t i
    
    do
        uint64_t x21_1 = zx.q(*x20_1)
        
        if (x21_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            
            if (*(arg1 + x21_1 * 0x68 + 0x1a70) == 0x61b)
            label_be8004:
                int64_t x8_9 = zx.q(x25) << 0x20 s>> 0x1e
                int32_t x10_1 = *(arg2 + x8_9)
                x25 += 1
                *(arg2 + x8_9) = *x20_1
                *x20_1 = x10_1
        else if (*(arg1 + x21_1 * 0x68 + 0x1a70) == 0x61b)
            goto label_be8004
        
        i = i_1
        i_1 -= 1
        x20_1 += 4
    while (i != 1)

DomGame& var_68 = arg1
return std::__ndk1::__sort<SortCards&, CardID*>(arg2 + (sx.q(x25) << 2), arg2 + (i_2 << 2), &var_68)
