// 函数: sub_10852e0
// 地址: 0x10852e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void* x24 = arg1
int64_t* x27 = *arg2
int64_t x9 = x27[1]
int32_t x8_3 = *(arg1 + 0x48) s>> 1
int32_t x8_4

if (x9 s< sx.q(x8_3))
    x8_4 = x9.d
else
    x8_4 = x8_3

int32_t x8_5 = x8_4 - *x27

if (x8_5 s>= 1)
    int64_t x10_1 = sx.q(x27[2].d)
    int32_t x8_6 = x8_5 s/ x10_1.d
    int64_t x19_1 = *arg2[3]
    int64_t i_3 = sx.q(arg4)
    void var_d0
    void* x26_1 = &var_d0 - (((zx.q(arg4) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
    
    if (arg4 s>= 1)
        int64_t i_2 = i_3
        void* x22_1 = x26_1
        int64_t i
        
        do
            i = i_2
            i_2 -= 1
            *x22_1 =
                _vorbis_block_alloc(x24, zx.q((x19_1.d + x8_6 - 1) s/ x19_1.d) << 0x20 s>> 0x1d)
            x22_1 += 8
        while (i != 1)
    
    int32_t x8_14 = *(arg2 + 0xc)
    
    if (x8_14 s>= 1)
        int64_t i_1 = 0
        int64_t x9_3 = sx.q(x8_6)
        
        do
            if (x8_6 s>= 1)
                int64_t x12_1 = 0
                int64_t x19_2 = 0
                int32_t x8_17 = (i_1 != 0 ? 1 : 0) | (arg4 s< 1 ? 1 : 0)
                int32_t var_c4_1 = x8_17
                
                while (true)
                    int64_t x23_1 = x12_1
                    
                    if ((x8_17 & 1) == 0)
                        int64_t x20_2 = 0
                        
                        do
                            arg1 = vorbis_book_decode(arg2[3], x24 + 8)
                            
                            if (arg1.d == 0xffffffff)
                                goto label_1085580
                            
                            if (x27[3].d s<= arg1.d)
                                goto label_1085580
                            
                            int64_t x8_33 = *(arg2[6] + ((arg1 & 0xffffffff) << 0x20 s>> 0x1d))
                            *(*(x26_1 + (x20_2 << 3)) + (x19_2 << 3)) = x8_33
                            
                            if (x8_33 == 0)
                                goto label_1085580
                            
                            x20_2 += 1
                        while (x20_2 s< i_3)
                    
                    if (x19_1 << 0x20 s< 1)
                        x12_1 = x23_1
                    else
                        x12_1 = x23_1
                        
                        if (x23_1 s< x9_3)
                            int64_t x23_2 = 0
                            
                            while (true)
                                if (arg4 s>= 1)
                                    int64_t x20_1 = 0
                                    
                                    while (true)
                                        int64_t x8_24 = sx.q(*(
                                            *(*(x26_1 + (x20_1 << 3)) + (x19_2 << 3))
                                            + (x23_2 << 2)))
                                        
                                        if ((*(x27 + (x8_24 << 2) + 0x20)
                                                & 1 << (i_1.d & 0xffffffff)) != 0)
                                            arg1 = *(*(arg2[4] + (x8_24 << 3)) + (i_1 << 3))
                                            
                                            if (arg1 != 0 && arg5(arg1, 
                                                    *(arg3 + (x20_1 << 3))
                                                        + ((*x27 + x12_1 * x10_1) << 2), 
                                                    x24 + 8, x10_1) == -1)
                                                break
                                        
                                        x20_1 += 1
                                        
                                        if (x20_1 s>= i_3)
                                            goto label_10854e0
                                    
                                    break
                                
                            label_10854e0:
                                x23_2 += 1
                                x12_1 += 1
                                
                                if (x23_2 s>= sx.q(x19_1.d))
                                    goto label_1085554
                                
                                if (x12_1 s>= x9_3)
                                    goto label_1085554
                            
                            break
                    
                label_1085554:
                    x19_2 += 1
                    x8_17 = var_c4_1
                    
                    if (x12_1 s>= x9_3)
                        x8_14 = *(arg2 + 0xc)
                        goto label_1085568
                
                break
            
        label_1085568:
            i_1 += 1
        while (i_1 s< sx.q(x8_14))

label_1085580:

if (*(x8 + 0x28) == x8_1)
    return 

__stack_chk_fail()
noreturn
