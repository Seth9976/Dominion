// 函数: _Z21stbi_write_png_to_memPhiiiiPi
// 地址: 0xfde444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t bytes_1 = arg5 * arg3
uint32_t x8 = *stbi_write_force_png_filter
int32_t x28 = (bytes_1 + 1) * arg4
int32_t bytes_3

bytes_3 = arg2 == 0 ? bytes_1 : arg2

uint32_t x19

x19 = x8 s<= 4 ? x8 : -1

uint8_t* x0_1 = malloc(sx.q(x28))

if (x0_1 != 0)
    uint8_t* fp_1 = x0_1
    int64_t bytes = sx.q(bytes_1)
    char* x0_2 = malloc(bytes)
    
    if (x0_2 == 0)
        free(fp_1)
    else
        if (arg4 s>= 1)
            uint64_t x8_2 = zx.q(arg4)
            int64_t x8_3 = sx.q(bytes_1 + 1)
            
            if ((x19 & 0x80000000) != 0)
                uint64_t bytes_2 = zx.q(bytes_1)
                int64_t x19_2 = 0
                int64_t i_22 = bytes_2 & 0xfffffffe
                uint8_t* var_a0_1 = fp_1
                
                do
                    sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 0, x0_2)
                    int32_t x23_3
                    
                    if (bytes_1 s<= 0)
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 1, x0_2)
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 2, x0_2)
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 3, x0_2)
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 4, x0_2)
                        x23_3 = 0
                    else
                        int32_t x23_4
                        int64_t i_23
                        
                        if (bytes_1 != 1)
                            void* x11_24 = &x0_2[1]
                            int32_t x8_15 = 0
                            int32_t x9_20 = 0
                            int64_t i_17 = i_22
                            int64_t i
                            
                            do
                                int32_t x12_9 = sx.d(*(x11_24 - 1))
                                int32_t x13_2 = sx.d(*x11_24)
                                x11_24 += 2
                                int32_t x12_10
                                
                                if (x12_9 s< 0)
                                    x12_10 = neg.d(x12_9)
                                else
                                    x12_10 = x12_9
                                
                                int32_t x13_3
                                
                                if (x13_2 s< 0)
                                    x13_3 = neg.d(x13_2)
                                else
                                    x13_3 = x13_2
                                
                                x8_15 += x12_10
                                i = i_17
                                i_17 -= 2
                                x9_20 += x13_3
                            while (i != 2)
                            x23_4 = x9_20 + x8_15
                            i_23 = i_22
                            
                            if (i_22 != bytes_2)
                                goto label_fde9e0
                        else
                            i_23 = 0
                            x23_4 = 0
                        label_fde9e0:
                            void* x8_16 = &x0_2[i_23]
                            int64_t i_12 = bytes_2 - i_23
                            int64_t i_1
                            
                            do
                                int32_t x10_9 = sx.d(*x8_16)
                                x8_16 += 1
                                int32_t x10_10
                                
                                if (x10_9 s< 0)
                                    x10_10 = neg.d(x10_9)
                                else
                                    x10_10 = x10_9
                                
                                i_1 = i_12
                                i_12 -= 1
                                x23_4 += x10_10
                            while (i_1 != 1)
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 1, x0_2)
                        int32_t x8_17
                        int64_t i_24
                        
                        if (bytes_1 u>= 2)
                            void* x11_25 = &x0_2[1]
                            int32_t x8_18 = 0
                            int32_t x9_21 = 0
                            int64_t i_18 = i_22
                            int64_t i_2
                            
                            do
                                int32_t x12_11 = sx.d(*(x11_25 - 1))
                                int32_t x13_4 = sx.d(*x11_25)
                                x11_25 += 2
                                int32_t x12_12
                                
                                if (x12_11 s< 0)
                                    x12_12 = neg.d(x12_11)
                                else
                                    x12_12 = x12_11
                                
                                int32_t x13_5
                                
                                if (x13_4 s< 0)
                                    x13_5 = neg.d(x13_4)
                                else
                                    x13_5 = x13_4
                                
                                x8_18 += x12_12
                                i_2 = i_18
                                i_18 -= 2
                                x9_21 += x13_5
                            while (i_2 != 2)
                            x8_17 = x9_21 + x8_18
                            i_24 = i_22
                            
                            if (i_22 != bytes_2)
                                goto label_fdea8c
                        else
                            i_24 = 0
                            x8_17 = 0
                        label_fdea8c:
                            int64_t i_13 = bytes_2 - i_24
                            void* x10_12 = &x0_2[i_24]
                            int64_t i_3
                            
                            do
                                int32_t x11_26 = sx.d(*x10_12)
                                x10_12 += 1
                                int32_t x11_27
                                
                                if (x11_26 s< 0)
                                    x11_27 = neg.d(x11_26)
                                else
                                    x11_27 = x11_26
                                
                                i_3 = i_13
                                i_13 -= 1
                                x8_17 += x11_27
                            while (i_3 != 1)
                        int32_t x23_5
                        
                        x23_5 = x8_17 u< x23_4 ? x8_17 : x23_4
                        
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 2, x0_2)
                        int32_t x8_19
                        int64_t i_25
                        
                        if (bytes_1 u>= 2)
                            void* x11_28 = &x0_2[1]
                            int32_t x8_20 = 0
                            int32_t x9_23 = 0
                            int64_t i_19 = i_22
                            int64_t i_4
                            
                            do
                                int32_t x12_13 = sx.d(*(x11_28 - 1))
                                int32_t x13_6 = sx.d(*x11_28)
                                x11_28 += 2
                                int32_t x12_14
                                
                                if (x12_13 s< 0)
                                    x12_14 = neg.d(x12_13)
                                else
                                    x12_14 = x12_13
                                
                                int32_t x13_7
                                
                                if (x13_6 s< 0)
                                    x13_7 = neg.d(x13_6)
                                else
                                    x13_7 = x13_6
                                
                                x8_20 += x12_14
                                i_4 = i_19
                                i_19 -= 2
                                x9_23 += x13_7
                            while (i_4 != 2)
                            x8_19 = x9_23 + x8_20
                            i_25 = i_22
                            
                            if (i_22 != bytes_2)
                                goto label_fdeb44
                        else
                            i_25 = 0
                            x8_19 = 0
                        label_fdeb44:
                            int64_t i_14 = bytes_2 - i_25
                            void* x10_14 = &x0_2[i_25]
                            int64_t i_5
                            
                            do
                                int32_t x11_29 = sx.d(*x10_14)
                                x10_14 += 1
                                int32_t x11_30
                                
                                if (x11_29 s< 0)
                                    x11_30 = neg.d(x11_29)
                                else
                                    x11_30 = x11_29
                                
                                i_5 = i_14
                                i_14 -= 1
                                x8_19 += x11_30
                            while (i_5 != 1)
                        int32_t fp_3
                        
                        if (x8_19 s< x23_5)
                            fp_3 = 2
                        else
                            fp_3 = x8_17 u< x23_4 ? 1 : 0
                        
                        int32_t x23_6
                        
                        x23_6 = x8_19 s< x23_5 ? x8_19 : x23_5
                        
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 3, x0_2)
                        int32_t x8_21
                        int64_t i_26
                        
                        if (bytes_1 u>= 2)
                            void* x11_31 = &x0_2[1]
                            int32_t x8_22 = 0
                            int32_t x9_25 = 0
                            int64_t i_20 = i_22
                            int64_t i_6
                            
                            do
                                int32_t x12_15 = sx.d(*(x11_31 - 1))
                                int32_t x13_8 = sx.d(*x11_31)
                                x11_31 += 2
                                int32_t x12_16
                                
                                if (x12_15 s< 0)
                                    x12_16 = neg.d(x12_15)
                                else
                                    x12_16 = x12_15
                                
                                int32_t x13_9
                                
                                if (x13_8 s< 0)
                                    x13_9 = neg.d(x13_8)
                                else
                                    x13_9 = x13_8
                                
                                x8_22 += x12_16
                                i_6 = i_20
                                i_20 -= 2
                                x9_25 += x13_9
                            while (i_6 != 2)
                            x8_21 = x9_25 + x8_22
                            i_26 = i_22
                            
                            if (i_22 != bytes_2)
                                goto label_fdec00
                        else
                            i_26 = 0
                            x8_21 = 0
                        label_fdec00:
                            int64_t i_15 = bytes_2 - i_26
                            void* x10_16 = &x0_2[i_26]
                            int64_t i_7
                            
                            do
                                int32_t x11_32 = sx.d(*x10_16)
                                x10_16 += 1
                                int32_t x11_33
                                
                                if (x11_32 s< 0)
                                    x11_33 = neg.d(x11_32)
                                else
                                    x11_33 = x11_32
                                
                                i_7 = i_15
                                i_15 -= 1
                                x8_21 += x11_33
                            while (i_7 != 1)
                        int32_t fp_4
                        
                        fp_4 = x8_21 s< x23_6 ? 3 : fp_3
                        
                        int32_t x23_7
                        
                        x23_7 = x8_21 s< x23_6 ? x8_21 : x23_6
                        
                        sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, 4, x0_2)
                        int32_t x8_23
                        int64_t i_27
                        
                        if (bytes_1 u>= 2)
                            void* x11_34 = &x0_2[1]
                            int32_t x8_24 = 0
                            int32_t x9_27 = 0
                            int64_t i_21 = i_22
                            int64_t i_8
                            
                            do
                                int32_t x12_17 = sx.d(*(x11_34 - 1))
                                int32_t x13_10 = sx.d(*x11_34)
                                x11_34 += 2
                                int32_t x12_18
                                
                                if (x12_17 s< 0)
                                    x12_18 = neg.d(x12_17)
                                else
                                    x12_18 = x12_17
                                
                                int32_t x13_11
                                
                                if (x13_10 s< 0)
                                    x13_11 = neg.d(x13_10)
                                else
                                    x13_11 = x13_10
                                
                                x8_24 += x12_18
                                i_8 = i_21
                                i_21 -= 2
                                x9_27 += x13_11
                            while (i_8 != 2)
                            x8_23 = x9_27 + x8_24
                            i_27 = i_22
                            
                            if (i_22 != bytes_2)
                                goto label_fdecbc
                        else
                            i_27 = 0
                            x8_23 = 0
                        label_fdecbc:
                            int64_t i_16 = bytes_2 - i_27
                            void* x10_18 = &x0_2[i_27]
                            int64_t i_9
                            
                            do
                                int32_t x11_35 = sx.d(*x10_18)
                                x10_18 += 1
                                int32_t x11_36
                                
                                if (x11_35 s< 0)
                                    x11_36 = neg.d(x11_35)
                                else
                                    x11_36 = x11_35
                                
                                i_9 = i_16
                                i_16 -= 1
                                x8_23 += x11_36
                            while (i_9 != 1)
                        
                        x23_3 = x8_23 s< x23_7 ? 4 : fp_4
                        
                        fp_1 = var_a0_1
                    
                    sub_fdecf0(arg1, bytes_3, arg3, arg4, x19_2.d, arg5, x23_3, x0_2)
                    char* x0_19 = fp_1 + x19_2 * x8_3
                    *x0_19 = x23_3.b
                    memcpy(&x0_19[1], x0_2, bytes)
                    x19_2 += 1
                while (x19_2 != x8_2)
            else
                int64_t x24 = 0
                void* x23_1 = &fp_1[1]
                
                do
                    sub_fdecf0(arg1, bytes_3, arg3, x8_2.d, x24.d, arg5, x19, x0_2)
                    *(x23_1 - 1) = x19.b
                    memcpy(x23_1, x0_2, bytes)
                    x24 += 1
                    x23_1 += x8_3
                while (x8_2 != x24)
        
        free(x0_2)
        int32_t var_64
        int64_t x0_7 = stbi_zlib_compress(fp_1, x28, &var_64, *stbi_write_png_compression_level)
        free(fp_1)
        
        if (x0_7 != 0)
            int64_t x23_2 = sx.q(var_64)
            int64_t* result = malloc(x23_2 + 0x39)
            void* x20_2
            
            if (result != 0)
                uint32_t x8_5 = arg3 u>> 0x18
                uint8_t x10_1 = (arg3 u>> 0x10).b
                int32_t x9_3 = *(&data_866df8 + ((zx.q(x8_5) ^ 0xf5) << 2)) ^ 0x575e51
                uint8_t x12_1 = (arg3 u>> 8).b
                int32_t x9_4 = *(&data_866df8 + ((zx.q(x9_3.b) ^ zx.q(x10_1)) << 2)) ^ x9_3 u>> 8
                uint32_t x14_1 = arg4 u>> 0x18
                uint8_t x15_1 = (arg4 u>> 0x10).b
                int32_t x9_5 = *(&data_866df8 + ((zx.q(x9_4.b) ^ zx.q(x12_1)) << 2)) ^ x9_4 u>> 8
                int32_t x9_6 = *(&data_866df8 + ((zx.q(x9_5.b) ^ zx.q(arg3.b)) << 2)) ^ x9_5 u>> 8
                int32_t x11_12 = *(&data_866df8 + (((zx.q(x9_6) & 0xff) ^ zx.q(x14_1)) << 2))
                *arg6 = (x23_2 + 0x39).d
                *result = 0xa1a0a0d474e5089
                int32_t x9_7 = x11_12 ^ x9_6 u>> 8
                int32_t x11_15 = *(&data_866df8 + ((zx.q(x9_7.b) ^ zx.q(x15_1)) << 2))
                uint8_t x13_1 = (arg4 u>> 8).b
                *(result + 0x17) = arg4.b
                int32_t x9_8 = x11_15 ^ x9_7 u>> 8
                int32_t x11_18 = *(&data_866df8 + ((zx.q(x9_8.b) ^ zx.q(x13_1)) << 2))
                *(result + 0x12) = x12_1
                result[2].b = x8_5.b
                int32_t x9_9 = x11_18 ^ x9_8 u>> 8
                char x11_19 = (*(&data_86678c + (sx.q(arg5) << 2))).b
                int32_t x9_10 = *(&data_866df8 + ((zx.q(x9_9.b) ^ zx.q(arg4.b)) << 2)) ^ x9_9 u>> 8
                int32_t x16_7 = *(&data_866df8 + (((zx.q(x9_10) & 0xff) ^ 8) << 2))
                result[3].b = 8
                *(result + 0x11) = x10_1
                int32_t x9_11 = x16_7 ^ x9_10 u>> 8
                int32_t x12_4 = *(&data_866df8 + ((zx.q(x9_11.b) ^ zx.q(x11_19)) << 2))
                *(result + 0x14) = x14_1.b
                int32_t x9_12 = x12_4 ^ x9_11 u>> 8
                int32_t x9_13 = *(&data_866df8 + ((zx.q(x9_12) & 0xff) << 2)) ^ x9_12 u>> 8
                int32_t x12_8 = *(&data_866df8 + ((zx.q(x9_13) & 0xff) << 2))
                *(result + 0x21) = (x23_2 u>> 0x18).b & 0xff
                *(result + 0x19) = x11_19
                int32_t x8_6 = x12_8 ^ x9_13 u>> 8
                int32_t x8_7 = *(&data_866df8 + ((zx.q(x8_6) & 0xff) << 2)) ^ not.d(x8_6 u>> 8)
                *(result + 0x13) = arg3.b
                *(result + 0x1a) = 0
                *(result + 0x1c) = 0
                *(result + 0x24) = (x23_2.d).b
                *(result + 0x15) = x15_1
                *(result + 0x16) = x13_1
                *(result + 0x22) = (x23_2 u>> 0x10).b & 0xff
                *(result + 0x23) = (x23_2 u>> 8).b & 0xff
                result[1] = 0x524448490d000000
                result[4].b = x8_7.b
                *(result + 0x1d) = (x8_7 u>> 0x18).b
                *(result + 0x1e) = (x8_7 u>> 0x10).b
                *(result + 0x1f) = (x8_7 u>> 8).b
                void* x21_3 = result + 0x25
                __builtin_strncpy(x21_3, "IDAT", 4)
                memmove(result + 0x29, x0_7, x23_2)
                x20_2 = result + 0x29 + x23_2
                free(x0_7)
                int32_t x8_8 = 0
                
                if (x23_2.d s>= 0xfffffffd)
                    uint64_t i_11 = zx.q(x23_2.d + 4)
                    int32_t x8_9 = -1
                    uint64_t i_10
                    
                    do
                        uint32_t x10_4 = zx.d(*x21_3)
                        x21_3 += 1
                        i_10 = i_11
                        i_11 -= 1
                        x8_9 = *(&data_866df8 + (((zx.q(x8_9) & 0xff) ^ zx.q(x10_4)) << 2))
                            ^ x8_9 u>> 8
                    while (i_10 != 1)
                    x8_8 = not.d(x8_9)
                
                *x20_2 = (x8_8 u>> 0x18).b
                *(x20_2 + 1) = (x8_8 u>> 0x10).b
                *(x20_2 + 2) = (x8_8 u>> 8).b
                *(x20_2 + 3) = x8_8.b
                *(x20_2 + 4) = 0x444e454900000000
                *(x20_2 + 0xc) = _byteswap(0xae426082)
            
            if (result == 0 || x20_2 + 0x10 == result + sx.q(*arg6))
                return result
            
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\ExternalCode\stb/stb_image_write.h", 
                0x44e, 
                "unsigned char *stbi_write_png_to_mem(unsigned char *, int, int, int, int, int *)", 
                "o == out + *out_len")
            free(fp_1)

return nullptr
