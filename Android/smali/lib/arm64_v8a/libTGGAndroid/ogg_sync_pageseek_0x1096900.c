// 函数: ogg_sync_pageseek
// 地址: 0x1096900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
void* result

if ((arg1[1].d & 0x80000000) != 0)
    result = nullptr
else
    void* x10_1 = *arg1
    int64_t x11_1 = arg1[2].d
    uint64_t x9_1 = zx.q(arg1[3].d)
    char* x21_1 = x10_1 + x11_1
    int64_t x8_3 = *(arg1 + 0xc) - x11_1
    
    if (x9_1.d == 0)
        result = nullptr
        
        if (x8_3.d s>= 0x1b)
            if (*x21_1 != 0x5367674f)
                goto label_1096a38
            
            uint64_t x12_3 = zx.q(x21_1[0x1a])
            result = nullptr
            x9_1 = x12_3 + 0x1b
            
            if (x8_3 s>= x9_1)
                if (x12_3.d != 0)
                    int32_t x13_3 = *(arg1 + 0x1c)
                    int64_t i = 0
                    
                    do
                        uint32_t x11_5 = zx.d(*(x10_1 + x11_1 + 0x1b + i))
                        i += 1
                        x13_3 += x11_5
                        *(arg1 + 0x1c) = x13_3
                    while (i u< zx.q(x21_1[0x1a]))
                
                arg1[3].d = x9_1.d
                goto label_1096948
    else
    label_1096948:
        result = nullptr
        
        if (x9_1.d + *(arg1 + 0x1c) s<= x8_3.d)
            int32_t x10_3 = *(x21_1 + 0x16)
            int32_t x11_2 = 0
            *(x21_1 + 0x16) = 0
            int64_t i_5 = arg1[3].d
            int64_t i_3 = *(arg1 + 0x1c)
            *(x21_1 + 0x16) = 0
            
            if (i_5.d s>= 1)
                char* x15_1 = x21_1
                int64_t i_4 = i_5
                int64_t i_1
                
                do
                    uint32_t x17_1 = zx.d(*x15_1)
                    x15_1 = &x15_1[1]
                    i_1 = i_4
                    i_4 -= 1
                    x11_2 =
                        *(&data_877d30 + ((zx.q(x17_1) ^ zx.q(x11_2 u>> 0x18)) << 2)) ^ x11_2 << 8
                while (i_1 != 1)
            
            if (i_3.d s>= 1)
                void* x13_1 = &x21_1[i_5]
                int64_t i_2
                
                do
                    uint32_t x15_2 = zx.d(*x13_1)
                    x13_1 += 1
                    i_2 = i_3
                    i_3 -= 1
                    x11_2 =
                        *(&data_877d30 + ((zx.q(x15_2) ^ zx.q(x11_2 u>> 0x18)) << 2)) ^ x11_2 << 8
                while (i_2 != 1)
            
            x21_1[0x16] = x11_2.b
            x21_1[0x17] = (x11_2 u>> 8).b
            x21_1[0x18] = (x11_2 u>> 0x10).b
            x21_1[0x19] = (x11_2 u>> 0x18).b
            
            if (x10_3 == *(x21_1 + 0x16))
                int64_t x8_5 = sx.q(arg1[2].d)
                int64_t x9_7
                int64_t x10_6
                
                if (arg2 == 0)
                    x9_7 = zx.q(arg1[3].d)
                    x10_6 = zx.q(*(arg1 + 0x1c))
                else
                    int64_t x10_4 = *arg1 + x8_5
                    *arg2 = x10_4
                    x9_7 = sx.q(arg1[3].d)
                    arg2[1] = x9_7
                    arg2[2] = x10_4 + x9_7
                    x10_6 = sx.q(*(arg1 + 0x1c))
                    arg2[3] = x10_6
                
                int32_t result_1 = x10_6.d + x9_7.d
                result = sx.q(result_1)
                arg1[2].d = result_1 + x8_5.d
                *(arg1 + 0x14) = 0
                arg1[3] = 0
            else
                *(x21_1 + 0x16) = x10_3
            label_1096a38:
                arg1[3] = 0
                int64_t x0_1 = memchr(&x21_1[1], 0x4f, x8_3 - 1)
                int64_t x8_4
                
                if (x0_1 == 0)
                    x8_4 = *arg1
                    x0_1 = x8_4 + sx.q(*(arg1 + 0xc))
                else
                    x8_4 = *arg1
                
                result = x21_1 - x0_1
                arg1[2].d = x0_1.d - x8_4.d

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
