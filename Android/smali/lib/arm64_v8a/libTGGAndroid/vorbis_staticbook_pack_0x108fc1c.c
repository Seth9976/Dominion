// 函数: vorbis_staticbook_pack
// 地址: 0x108fc1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

oggpack_write(arg2, 
    "rtificate_Store_In_SQL11revoke_certERKNS_16X509_CertificateENS_8CRL_CodeERKNS_9ASN1_TimeE", 
    0x18)
oggpack_write(arg2, *arg1, 0x10)
oggpack_write(arg2, arg1[1], 0x18)
int64_t x8 = arg1[1]

if (x8 s>= 2)
    char* x10_1 = arg1[2]
    int64_t x9_1 = 1
    char x11_1 = *x10_1
    
    while (zx.d(x11_1) != 0)
        int32_t x12_1 = sx.d(x10_1[x9_1])
        
        if (x12_1 s< sx.d(x11_1))
            break
        
        x9_1 += 1
        x11_1 = x12_1.b
        
        if (x9_1 s>= x8)
            break
    
    if (x9_1 != x8)
        goto label_108fd94
    
    goto label_108fcbc

if (1 == x8)
label_108fcbc:
    int64_t x22_1 = 1
    oggpack_write(arg2, 1, 1)
    oggpack_write(arg2, sx.q(*arg1[2]) - 1, 5)
    int64_t x8_3 = arg1[1]
    int64_t x9_2
    
    if (x8_3 s< 2)
        x9_2 = 0
    else
        x9_2 = 0
        x22_1 = 1
        
        do
            char* x10_3 = arg1[2] + x22_1
            int32_t x11_2 = sx.d(*x10_3)
            int32_t x10_4 = sx.d(x10_3[-1])
            
            if (x11_2 s> x10_4)
                int64_t x23_1 = sx.q(x11_2.b)
                int64_t x24_1 = sx.q(x10_4.b)
                oggpack_write(arg2, x22_1 - x9_2, zx.q(ov_ilog(zx.q(x8_3.d - x9_2.d))))
                
                if (x24_1 + 1 != x23_1)
                    int64_t i_4 = x23_1 - 1 - x24_1
                    int64_t i
                    
                    do
                        oggpack_write(arg2, 0, zx.q(ov_ilog(zx.q(arg1[1].d - x22_1.d))))
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
                
                x8_3 = arg1[1]
                x9_2 = x22_1
            
            x22_1 += 1
        while (x22_1 s< x8_3)
    
    oggpack_write(arg2, x22_1 - x9_2, zx.q(ov_ilog(zx.q(x8_3.d - x9_2.d))))
else
label_108fd94:
    oggpack_write(arg2, 0, 1)
    int64_t x8_7 = arg1[1]
    
    if (x8_7 s>= 1)
        int64_t x9_3 = 0
        
        while (zx.d(*(arg1[2] + x9_3)) != 0)
            x9_3 += 1
            
            if (x9_3 s>= x8_7)
                break
        
        if (x9_3 != x8_7)
            goto label_108fe50
        
        goto label_108fdd4
    
    if (0 == x8_7)
    label_108fdd4:
        oggpack_write(arg2, 0, 1)
        
        if (arg1[1] s>= 1)
            int64_t i_1 = 0
            
            do
                oggpack_write(arg2, sx.q(*(arg1[2] + i_1)) - 1, 5)
                i_1 += 1
            while (i_1 s< arg1[1])
    else
    label_108fe50:
        oggpack_write(arg2, 1, 1)
        
        if (arg1[1] s>= 1)
            int64_t i_2 = 0
            
            do
                int64_t x0_19
                int64_t x1_6
                int64_t x2_4
                
                if (zx.d(*(arg1[2] + i_2)) == 0)
                    x2_4 = 1
                    x0_19 = arg2
                    x1_6 = 0
                else
                    oggpack_write(arg2, 1, 1)
                    x2_4 = 5
                    x0_19 = arg2
                    x1_6 = sx.q(*(arg1[2] + i_2)) - 1
                
                oggpack_write(x0_19, x1_6, x2_4)
                i_2 += 1
            while (i_2 s< arg1[1])

oggpack_write(arg2, sx.q(arg1[3].d), 4)
int32_t x8_18 = arg1[3].d

if (x8_18 - 1 u< 2)
    if (arg1[7] == 0)
        return 0xffffffff
    
    oggpack_write(arg2, arg1[4], 0x20)
    oggpack_write(arg2, arg1[5], 0x20)
    oggpack_write(arg2, sx.q(arg1[6].d) - 1, 4)
    oggpack_write(arg2, sx.q(*(arg1 + 0x34)), 1)
    int32_t x8_21 = arg1[3].d
    int64_t x0_26
    
    if (x8_21 == 2)
        x0_26 = *arg1 * arg1[1]
    label_108ff5c:
        
        if (x0_26 << 0x20 s>= 1)
            int64_t i_3 = 0
            
            do
                int64_t x8_25 = *(arg1[7] + (i_3 << 3))
                int64_t x1_12
                
                if (x8_25 s< 0)
                    x1_12 = neg.q(x8_25)
                else
                    x1_12 = x8_25
                
                oggpack_write(arg2, x1_12, zx.q(arg1[6].d))
                i_3 += 1
            while (i_3 s< sx.q(x0_26.d))
    else if (x8_21 == 1)
        x0_26 = _book_maptype1_quantvals(arg1)
        goto label_108ff5c
else if (x8_18 != 0)
    return 0xffffffff

return 0
