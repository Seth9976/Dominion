// 函数: _ZN5Botan6BigInt14ct_cond_assignEbRKS0_
// 地址: 0xce1044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x2
int64_t x8 = *entry_x2
int64_t x9 = entry_x2[1]
int64_t* x19 = arg1
int64_t x10_2 = (*(arg1 + 8) - *arg1) s>> 2
int64_t x11_2 = (x9 - x8) s>> 2
int64_t x10_3

x10_3 = x10_2 u< x11_2 ? x11_2 : x10_2

int32_t x21 = arg2.d

if (x10_3 == 0)
label_ce11bc:
    int32_t x8_14 = x19[4].d
    int32_t x8_16 = (x8_14 & 0xff) ^ ((x8_14 != entry_x2[4].d ? 1 : 0) & x21)
    
    if (x8_16 == 0)
        int64_t x8_17 = x19[3]
        
        if (x8_17 == -1)
            int64_t x9_9 = *x19
            int64_t x11_5 = x19[1]
            int64_t x10_9 = x11_5 - x9_9
            
            if (x11_5 == x9_9)
                x8_17 = 0
            else
                int64_t x12_5
                
                x12_5 = x10_9 s>= 0 ? x10_9 : -1
                
                int64_t x11_6 = x9_9 - x11_5
                int64_t x12_6
                
                x12_6 = x12_5 s< 1 ? x12_5 : 1
                
                x8_17 = x10_9 s>> 2
                int64_t x10_10
                
                x10_10 = x11_6 s> x10_9 ? x11_6 : x10_9
                
                int64_t i_2 = x12_6 * (x10_10 u>> 2)
                uint64_t x11_7 = 1
                int64_t i
                
                do
                    int32_t x12_7 = *(x9_9 - 4 + (i_2 << 2))
                    i = i_2
                    i_2 -= 1
                    x11_7 = zx.q(x11_7.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
                    x8_17 -= x11_7
                while (i != 1)
            
            x19[3] = x8_17
        
        x8_16 = x8_17 == 0 ? 1 : 0
    
    x19[4].d = x8_16
    return 

int64_t i_1 = 0
int32_t x23_1 = (x21 & 1) << 0x1f s>> 0x1f
uint64_t x25_1 = 1
int64_t x26_1 = 0x24
int32_t x12_1

if (0 u< (x9 - x8) s>> 2)
    do
        x12_1 = *(x8 + (i_1 << 2))
    label_ce10c0:
        int64_t x8_1 = *x19
        int64_t x11_3 = (x19[1] - x8_1) s>> 2
        
        if (x11_3 u<= i_1)
            int32_t fp_1 = x12_1 & x23_1
            x19[3] = -1
            
            if (fp_1 != 0)
                if (i_1 u>= (x19[2] - x8_1) s>> 2)
                    int64_t x13_1 = x25_1 & 7
                    int64_t x14_1 = i_1 + 9 - x13_1
                    
                    if (x14_1 u> x11_3)
                        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                            x19)
                    else if (x14_1 u< x11_3)
                        x19[1] = x8_1 + x26_1 - (x13_1 << 2)
                else
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x19)
                
                *(*x19 + (i_1 << 2)) = fp_1
        else
            int32_t x8_2 = *(x8_1 + (i_1 << 2))
            x19[3] = -1
            *(*x19 + (i_1 << 2)) = (x12_1 & x23_1) | (x8_2 & not.d(x23_1))
        
        if (x10_3 - 1 == i_1)
            goto label_ce11bc
        
        x8 = *entry_x2
        i_1 += 1
        x25_1 = zx.q(x25_1.d + 1)
        x26_1 += 4
    while (i_1 u< (entry_x2[1] - x8) s>> 2)

x12_1 = 0
goto label_ce10c0
