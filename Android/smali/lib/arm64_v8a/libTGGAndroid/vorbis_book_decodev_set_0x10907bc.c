// 函数: vorbis_book_decodev_set
// 地址: 0x10907bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1[2] s<= 0)
    if (arg4 s>= 1)
        memset(arg2, 0, zx.q(arg4) << 2)
else if (arg4 s>= 1)
    int32_t x23_1 = 0
    
    do
    label_1090804:
        int32_t x0_1 = sub_10903f8(arg1, arg3)
        
        if (x0_1 == 0xffffffff)
            return -1
        
        if (x23_1 s< arg4)
            int64_t x9_1 = *arg1
            int64_t x8_1 = 0
            int32_t* x11_2 = arg1[4] + ((x9_1 * sx.q(x0_1)) << 2)
            int64_t x13_1
            
            do
                if (x9_1 s<= x8_1)
                    x23_1 += x8_1.d
                    
                    if (x23_1 s< arg4)
                        goto label_1090804
                    
                    goto label_109089c
                
                x13_1 = x8_1 + 1
                x8_1 = x13_1
                (arg2 + (sx.q(x23_1) << 2))[x8_1] = x11_2[x8_1]
            while (sx.q(x23_1) + x13_1 s< sx.q(arg4))
            
            x23_1 += x13_1.d
    while (x23_1 s< arg4)

label_109089c:
return 0
