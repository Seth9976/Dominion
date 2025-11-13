// 函数: vorbis_staticbook_unpack
// 地址: 0x108ffac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = calloc(1, 0x48)
result[8].d = 1

if (oggpack_read(arg1, 0x18) ==
        "rtificate_Store_In_SQL11revoke_certERKNS_16X509_CertificateENS_8CRL_CodeERKNS_9ASN1_TimeE")
    *result = oggpack_read(arg1, 0x10)
    int64_t x0_5 = oggpack_read(arg1, 0x18)
    result[1] = x0_5
    
    if (x0_5 != -1)
        int32_t x0_7 = ov_ilog(zx.q(*result))
        
        if (ov_ilog(zx.q(result[1].d)) + x0_7 s<= 0x18)
            int32_t x0_11 = oggpack_read(arg1, 1)
            
            if (x0_11 == 1)
                int64_t x0_23 = oggpack_read(arg1, 5)
                int64_t x22_2 = x0_23 + 1
                
                if (x0_23 != -1)
                    size_t bytes = result[1]
                    result[2] = malloc(bytes)
                    
                    if (bytes s>= 1)
                        int64_t x23_2 = 0
                        
                        do
                            int64_t i_5 = oggpack_read(arg1, zx.q(ov_ilog(zx.q(bytes.d - x23_2.d))))
                            
                            if (x22_2 s> 0x20)
                                goto label_10902d4
                            
                            if (i_5 == -1)
                                goto label_10902d4
                            
                            bytes = result[1]
                            
                            if (i_5 s> bytes - x23_2)
                                goto label_10902d4
                            
                            if (i_5 s>= 1)
                                if ((i_5 - 1) s>> (x22_2 - 1) s> 1)
                                    goto label_10902d4
                                
                                int64_t i_4 = i_5
                                int64_t x9_4 = x23_2
                                int64_t i
                                
                                do
                                    i = i_4
                                    i_4 -= 1
                                    result[2][x9_4] = (x22_2.d).b
                                    x9_4 += 1
                                while (i != 1)
                                bytes = result[1]
                                x23_2 += i_5
                            
                            x22_2 += 1
                        while (bytes s> x23_2)
                    
                label_10901fc:
                    int32_t x0_32 = oggpack_read(arg1, 4)
                    result[3].d = x0_32
                    
                    if (x0_32 - 1 u< 2)
                        result[4] = oggpack_read(arg1, 0x20)
                        result[5] = oggpack_read(arg1, 0x20)
                        result[6].d = oggpack_read(arg1, 4) + 1
                        int32_t x0_40 = oggpack_read(arg1, 1)
                        *(result + 0x34) = x0_40
                        
                        if (x0_40 != 0xffffffff)
                            int32_t x8_15 = result[3].d
                            int32_t x21_3
                            
                            if (x8_15 == 2)
                                x21_3 = *result * result[1].d
                            else
                                x21_3 = 0
                                
                                if (x8_15 == 1)
                                    if (*result == 0)
                                        x21_3 = 0
                                    else
                                        x21_3 = _book_maptype1_quantvals(result)
                            
                            if (*(arg1 + 0x20) - oggpack_bytes(arg1)
                                    s>= sx.q((7 + result[6].d * x21_3) s>> 3))
                                int64_t x0_48 = malloc(zx.q(x21_3) << 0x20 s>> 0x1d)
                                result[7] = x0_48
                                int64_t x8_21
                                
                                if (x21_3 s< 1)
                                    x8_21 = x0_48
                                else
                                    int64_t i_1 = 0
                                    
                                    do
                                        int64_t x0_50 = oggpack_read(arg1, zx.q(result[6].d))
                                        x8_21 = result[7]
                                        *(x8_21 + (i_1 << 3)) = x0_50
                                        i_1 += 1
                                    while (sx.q(x21_3) != i_1)
                                
                                if (x21_3 == 0 || *(x8_21 + (sx.q(x21_3 - 1) << 3)) != -1)
                                    return result
                    else if (x0_32 == 0)
                        return result
            else if (x0_11 == 0)
                int64_t x0_13 = oggpack_read(arg1, 1)
                int64_t x9_1
                
                x9_1 = x0_13 == 0 ? 5 : 1
                
                if ((7 + x9_1 * result[1]) s>> 3 s<= *(arg1 + 0x20) - oggpack_bytes(arg1))
                    size_t bytes_1 = result[1]
                    result[2] = malloc(bytes_1)
                    
                    if (x0_13 == 0)
                        if (bytes_1 s>= 1)
                            int64_t i_2 = 0
                            
                            do
                                int64_t x0_30 = oggpack_read(arg1, 5)
                                
                                if (x0_30 == -1)
                                    goto label_10902d4
                                
                                result[2][i_2] = x0_30.b + 1
                                i_2 += 1
                            while (i_2 s< result[1])
                    else if (bytes_1 s>= 1)
                        int64_t i_3 = 0
                        
                        do
                            char x8_6
                            
                            if (oggpack_read(arg1, 1) == 0)
                                x8_6 = 0
                            else
                                int64_t x0_21 = oggpack_read(arg1, 5)
                                
                                if (x0_21 == -1)
                                    goto label_10902d4
                                
                                x8_6 = x0_21.b + 1
                            
                            result[2][i_3] = x8_6
                            i_3 += 1
                        while (i_3 s< result[1])
                    
                    goto label_10901fc

label_10902d4:
vorbis_staticbook_destroy(result)
return nullptr
