// 函数: vorbis_book_decodevs_add
// 地址: 0x1090570
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t* x20 = arg2
uint64_t result

if (arg1[2] s>= 1)
    int64_t x8_2 = *arg1
    int32_t x24_1 = (sx.q(arg4) s/ x8_2).d
    void var_70
    void* x25_1 = &var_70 - (((zx.q(x24_1) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
    
    if (x24_1 s>= 1)
        int64_t i = 0
        
        do
            result = sub_10903f8(arg1, arg3)
            
            if (result == -1)
                goto label_10906a4
            
            x8_2 = *arg1
            *(x25_1 + (i << 3)) = arg1[4] + ((x8_2 * result) << 2)
            i += 1
        while (i s< sx.q(x24_1))
    
    if (x8_2 s>= 1)
        int64_t x9_7 = 0
        int64_t x10_2 = 0
        int64_t x11_1 = sx.q(x24_1)
        
        do
            if (x24_1 s>= 1 && x10_2.d s< arg4)
                int64_t x13_1 = 0
                bool cond:1_1
                
                do
                    x20[x13_1] = x20[x13_1] f+ *(*(x25_1 + (x13_1 << 3)) + (x9_7 << 2))
                    
                    if (x13_1 + 1 s>= x11_1)
                        break
                    
                    cond:1_1 = x10_2.d + x13_1.d + 1 s< arg4
                    x13_1 += 1
                while (cond:1_1)
            
            x9_7 += 1
            x10_2 += x11_1
            x20 += zx.q(x24_1) << 0x20 s>> 0x1e
        while (x8_2 s> x9_7)

result = 0
label_10906a4:

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
