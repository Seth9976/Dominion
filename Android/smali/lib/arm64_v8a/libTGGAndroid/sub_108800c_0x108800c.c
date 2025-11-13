// 函数: sub_108800c
// 地址: 0x108800c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_60 = v15
int64_t v14
int64_t var_58 = v14
int64_t v13
int64_t var_50 = v13
int64_t v12
int64_t var_48 = v12
int64_t v11
int64_t var_40 = v11
int64_t v10
int64_t var_38 = v10
int64_t v9
int64_t var_30 = v9
int64_t v8
int64_t var_28 = v8
int32_t x9 = *(arg1 + 4)
float v0
float v1
float v2
float v3

if (x9 s>= 7)
    void* x8_1 = *(arg1 + 8)
    void* x10_3 = arg2 + (sx.q(arg3 s>> 1) << 2) - 0x20
    void* x11_1 = x8_1 + 0x20
    void* x12_2 = arg2 + (sx.q(arg3) << 2) - 0x10
    
    do
        v0 = *(x10_3 + 0x18)
        v3 = *(x10_3 + 0x1c)
        v1 = *(x12_2 + 8)
        v2 = *(x12_2 + 0xc)
        *(x12_2 + 8) = v0 + v1
        v0 = v1 - v0
        *(x12_2 + 0xc) = *(x10_3 + 0x1c) + v2
        *(x10_3 + 0x18) = vfma_f32(*(x11_1 - 0x1c) * (v2 - v3), *(x11_1 - 0x20), v0)
        unimplemented  {fnmsub s0, s3, s1, s0}
        *(x10_3 + 0x1c) = *(x11_1 - 0x1c) * v0
        v0 = *x12_2
        v3 = *(x12_2 + 4)
        v1 = *(x10_3 + 0x10)
        v2 = *(x10_3 + 0x14)
        *x12_2 = v1 + v0
        v0 = v0 - v1
        *(x12_2 + 4) = *(x10_3 + 0x14) + v3
        *(x10_3 + 0x10) = vfma_f32(*(x11_1 - 0xc) * (v3 - v2), *(x11_1 - 0x10), v0)
        unimplemented  {fnmsub s0, s3, s1, s0}
        *(x10_3 + 0x14) = *(x11_1 - 0xc) * v0
        v0 = *(x12_2 - 8)
        v3 = *(x12_2 - 4)
        v1 = *(x10_3 + 8)
        v2 = *(x10_3 + 0xc)
        *(x12_2 - 8) = v1 + v0
        v0 = v0 - v1
        *(x12_2 - 4) = *(x10_3 + 0xc) + v3
        *(x10_3 + 8) = vfma_f32(*(x11_1 + 4) * (v3 - v2), *x11_1, v0)
        unimplemented  {fnmsub s0, s3, s1, s0}
        *(x10_3 + 0xc) = *(x11_1 + 4) * v0
        v0 = *(x12_2 - 0x10)
        v3 = *(x12_2 - 0xc)
        v1 = *x10_3
        v2 = *(x10_3 + 4)
        *(x12_2 - 0x10) = v1 + v0
        v0 = v0 - v1
        *(x12_2 - 0xc) = *(x10_3 + 4) + v3
        x12_2 -= 0x20
        *x10_3 = vfma_f32(*(x11_1 + 0x14) * (v3 - v2), *(x11_1 + 0x10), v0)
        *(x11_1 + 0x10)
        v2 = *(x11_1 + 0x14)
        x11_1 += 0x40
        unimplemented  {fnmsub s0, s3, s1, s0}
        *(x10_3 + 4) = v2 * v0
        x10_3 -= 0x20
    while (x10_3 u>= arg2)
    
    if (x9 s>= 8)
        int32_t i = 1
        
        do
            if (i != 0x1f)
                int32_t x5_1 = 4 << i
                uint64_t x4_1 = zx.q(arg3 s>> i)
                int64_t x4_2 = (x4_1 & 0xffffffff) << 0x20 s>> 0x1e
                int64_t j = 0
                void* x6_2 = arg2 - 0x10 + x4_2
                
                do
                    void* x7_2 = arg2 + ((j * sx.q(x4_1.d)) << 2)
                    float* x19_2 = x7_2 + ((x4_1 & 0xfffffffe) << 0x20 s>> 0x21 << 2) - 0x20
                    void* x20_1 = x6_2
                    void* x21_1 = x8_1
                    
                    do
                        v0 = x19_2[6]
                        v3 = x19_2[7]
                        v1 = *(x20_1 + 8)
                        v2 = *(x20_1 + 0xc)
                        void* x22_1 = x21_1 + (zx.q(x5_1) << 0x20 s>> 0x1e)
                        *(x20_1 + 8) = v0 + v1
                        v0 = v1 - v0
                        *(x20_1 + 0xc) = x19_2[7] + v2
                        x19_2[6] = vfma_f32(*(x21_1 + 4) * (v2 - v3), *x21_1, v0)
                        unimplemented  {fnmsub s0, s3, s1, s0}
                        x19_2[7] = *(x21_1 + 4) * v0
                        v0 = *x20_1
                        v3 = *(x20_1 + 4)
                        v1 = x19_2[4]
                        v2 = x19_2[5]
                        *x20_1 = v1 + v0
                        v0 = v0 - v1
                        *(x20_1 + 4) = x19_2[5] + v3
                        x19_2[4] = vfma_f32(*(x22_1 + 4) * (v3 - v2), *x22_1, v0)
                        void* x22_2 = x21_1 + (zx.q(x5_1) << 0x20 s>> 0x1d)
                        unimplemented  {fnmsub s0, s3, s1, s0}
                        x19_2[5] = *(x22_1 + 4) * v0
                        v0 = *(x20_1 - 8)
                        v3 = *(x20_1 - 4)
                        v1 = x19_2[2]
                        v2 = x19_2[3]
                        *(x20_1 - 8) = v1 + v0
                        v0 = v0 - v1
                        *(x20_1 - 4) = x19_2[3] + v3
                        x19_2[2] = vfma_f32(*(x22_2 + 4) * (v3 - v2), *x22_2, v0)
                        void* x22_3 = x21_1 + sx.q(x5_1) * 0xc
                        x21_1 += zx.q(x5_1) << 0x20 s>> 0x1c
                        unimplemented  {fnmsub s0, s3, s1, s0}
                        x19_2[3] = *(x22_2 + 4) * v0
                        v0 = *(x20_1 - 0x10)
                        v3 = *(x20_1 - 0xc)
                        v1 = *x19_2
                        v2 = x19_2[1]
                        *(x20_1 - 0x10) = v1 + v0
                        v0 = v0 - v1
                        *(x20_1 - 0xc) = x19_2[1] + v3
                        x20_1 -= 0x20
                        *x19_2 = vfma_f32(*(x22_3 + 4) * (v3 - v2), *x22_3, v0)
                        *x22_3
                        unimplemented  {fnmsub s0, s3, s1, s0}
                        x19_2[1] = *(x22_3 + 4) * v0
                        x19_2 -= 0x20
                    while (x19_2 u>= x7_2)
                    
                    j += 1
                    x6_2 += x4_2
                while (j s< sx.q(1 << i))
            
            i += 1
        while (i != x9 - 6)

if (arg3 s< 1)
    return 

int64_t i_1 = 0
void* x10_5 = arg2 + 0x40

do
    float v4 = *(x10_5 + 0x38)
    v2 = *(x10_5 + 0x3c)
    float v24 = *(x10_5 - 8)
    float v29 = *(x10_5 - 4)
    float v31 = *(x10_5 + 0x30)
    float v22 = *(x10_5 + 0x34)
    v10.d = *(x10_5 - 0x10)
    float v23 = *(x10_5 - 0xc)
    float v25 = *(x10_5 + 0x28)
    v3 = *(x10_5 + 0x2c)
    v9.d = *(x10_5 - 0x18)
    v13.d = *(x10_5 - 0x14)
    float v19 = *(x10_5 + 0x20)
    float v20 = *(x10_5 + 0x24)
    float v26 = *(x10_5 - 0x20)
    float v27 = *(x10_5 - 0x1c)
    v12.d = *(x10_5 - 0x30)
    v14.d = *(x10_5 - 0x2c)
    v15.d = *(x10_5 + 0x10)
    float v21 = *(x10_5 + 0x14)
    v0 = v4 - v24
    float v28 = *(x10_5 - 0x28)
    float v30 = *(x10_5 - 0x24)
    v8.d = *(x10_5 + 0x18)
    v11.d = *(x10_5 + 0x1c)
    float v5 = *(x10_5 - 0x38)
    float v6 = *(x10_5 - 0x34)
    float v7 = *(x10_5 + 8)
    float v16 = *(x10_5 + 0xc)
    float v17 = *(x10_5 - 0x40)
    float v18 = *(x10_5 - 0x3c)
    float var_88_1 = v24 + v4
    float var_80_1 = v29 + v2
    v1 = v2 - v29
    float var_70_1 = v31 f- v10.d
    v4 = v22 - v23
    v31 = v10.d f+ v31
    v29 = v23 + v22
    v22 = v25 f- v9.d
    v23 = v3 f- v13.d
    v10.d = v9.d f+ v25
    v9.d = v13.d f+ v3
    float var_78_1 = v19 - v26
    float var_7c_1 = v20 - v27
    float var_84_1 = v14.d f- v21
    v25 = v30 f- v11.d
    v30 = v11.d f+ v30
    v11.d = v21 f+ v14.d
    v21 = v5 - v7
    v14.d = v7 + v5
    v5 = *x10_5
    v7 = *(x10_5 + 4)
    v13.d = v27 + v20
    v27 = v8.d f- v28
    *(x10_5 - 8) = v0
    *(x10_5 - 4) = v1
    float var_6c_1 = v0 - v25
    float var_68_1 = v25 + v0
    v3 = v26 + v19
    v26 = v12.d f- v15.d
    v12.d = v15.d f+ v12.d
    v15.d = v16 + v6
    v20 = v5 + v17
    v19 = v7 + v18
    float var_8c_1 = v1 - v27
    float var_64_1 = v27 + v1
    *(x10_5 + 0x20) = v3
    *(x10_5 + 0x24) = v13.d
    *x10_5 = v20
    *(x10_5 + 4) = v19
    *(x10_5 + 0x28) = v10.d
    *(x10_5 + 0x2c) = v9.d
    *(x10_5 + 8) = v14.d
    *(x10_5 + 0xc) = v15.d
    *(x10_5 + 0x30) = v31
    *(x10_5 + 0x34) = v29
    *(x10_5 + 0x10) = v12.d
    *(x10_5 + 0x14) = v11.d
    v8.d = v28 f+ v8.d
    v24 = v6 - v16
    *(x10_5 - 0x24) = v27
    *(x10_5 + 0x38) = var_88_1
    *(x10_5 + 0x18) = v8.d
    *(x10_5 + 0x1c) = v30
    v6 = v17 - v5
    v28 = v18 - v7
    v18 = v24 + v21
    v17 = v24 - v21
    v2 = v20 - v3
    v5 = v20 + v3
    v3 = v19 f- v13.d
    v20 = v19 f+ v13.d
    v19 = v10.d f- v14.d
    v21 = v14.d f+ v10.d
    v24 = v31 f- v12.d
    v25 = v12.d f+ v31
    v31 = var_88_1 f- v8.d
    v8.d = v8.d f+ var_88_1
    v14.d = var_7c_1
    v16 = v22 - v23
    v7 = v23 + v22
    v22 = v15.d f- v9.d
    *(x10_5 + 0x3c) = var_80_1
    v23 = v15.d f+ v9.d
    v27 = v29 f- v11.d
    v29 = v11.d f+ v29
    v9.d = var_80_1 - v30
    v30 = v30 + var_80_1
    v12.d = v4
    v11.d = var_70_1
    v13.d = var_78_1
    v15.d = var_84_1
    v10.d = v12.d f* 0.382683426f
    unimplemented  {fnmsub s10, s11, s0, s10}
    v11.d = v11.d f* 0.382683426f
    v11.d = vfma_f32(v11.d, v12.d, 0.923879504f)
    v12.d = v14.d f* 0.923879504f
    unimplemented  {fnmsub s12, s13, s4, s12}
    v13.d = v13.d f* 0.923879504f
    v13.d = vfma_f32(v13.d, v14.d, 0.382683426f)
    v14.d = v26 * 0.382683426f
    v26 = v26 * 0.923879504f
    v14.d = vfma_f32(v14.d, v15.d, 0.923879504f)
    unimplemented  {fnmsub s26, s15, s4, s26}
    v15.d = v6 * 0.923879504f
    v15.d = vfma_f32(v15.d, v28, 0.382683426f)
    unimplemented  {fnmsub s28, s28, s0, s1}
    float var_70_2 = v9.d f- v19
    v0 = v19 f+ v9.d
    v1 = v3 + v2
    v4 = v3 - v2
    v9.d = v21 f+ v8.d
    v21 = v8.d f- v21
    v8.d = v5 + v25
    v2 = v25 - v5
    v25 = v29 - v20
    v20 = v20 + v29
    v29 = v30 - v23
    v23 = v23 + v30
    v30 = v16 - v18
    v18 = v18 + v16
    *(x10_5 - 0x1c) = v13.d
    *(x10_5 - 0x18) = v16 * 0.707106769f
    v16 = v17 - v7
    v17 = v17 + v7
    v3 = v24 - v27
    *(x10_5 - 0x14) = v7 * 0.707106769f
    *(x10_5 - 0x10) = v10.d
    v24 = v27 + v24
    v27 = v22 + v31
    v31 = v31 - v22
    *(x10_5 - 0x20) = v12.d
    v7 = v15.d f- v12.d
    v12.d = v15.d f+ v12.d
    v15.d = v28 f- v13.d
    v28 = v28 f+ v13.d
    v13.d = v10.d f- v14.d
    v10.d = v14.d f+ v10.d
    *(x10_5 - 0xc) = v11.d
    v14.d = v11.d f- v26
    v26 = v26 f+ v11.d
    v11.d = v1 + v3
    v22 = v3 - v1
    v16 = v16 * 0.707106769f
    v3 = v24 - v4
    v19 = v4 + v24
    v24 = v8.d f+ v9.d
    v8.d = v9.d f- v8.d
    v9.d = v25 + v21
    v21 = v21 - v25
    v25 = v2 + v29
    v2 = v29 - v2
    v29 = v20 + v23
    v20 = v23 - v20
    v23 = v7 f+ v15.d
    v7 = v15.d f- v7
    v15.d = v13.d f- v14.d
    v13.d = v14.d f+ v13.d
    v14.d = v16 + var_6c_1
    v5 = var_6c_1 - v16
    v16 = v30 * 0.707106769f
    v17 = v17 * 0.707106769f
    *(x10_5 + 0x28) = v21
    v30 = var_8c_1 - v16
    v6 = v16 + var_8c_1
    v16 = v18 * 0.707106769f
    *(x10_5 + 0x34) = v20
    v4 = v12.d f+ v10.d
    v18 = v16 + var_68_1
    v16 = var_68_1 - v16
    *(x10_5 + 0x38) = v24
    *(x10_5 + 0x3c) = v29
    *(x10_5 + 0x2c) = v25
    *(x10_5 + 0x30) = v8.d
    *(x10_5 + 0x20) = v9.d
    *(x10_5 + 0x24) = v2
    v10.d = v10.d f- v12.d
    v12.d = v26 - v28
    v26 = v28 + v26
    v28 = var_64_1 - v17
    v17 = v17 + var_64_1
    v1 = v22 * 0.707106769f
    v8.d = v0
    v2 = v11.d f* 0.707106769f
    v3 = v3 * 0.707106769f
    v24 = v4 + v18
    v29 = v26 + v17
    v17 = v17 - v26
    v26 = v2 + v27
    v19 = v19 * 0.707106769f
    *(x10_5 - 0x14) = v10.d f+ v28
    *(x10_5 - 0x10) = v18 - v4
    *(x10_5 + 0xc) = v1 + var_70_2
    *(x10_5 + 0x10) = v27 - v2
    *x10_5 = v3 + v31
    *(x10_5 + 4) = var_70_2 - v1
    *(x10_5 + 8) = v31 - v3
    v1 = (v23 f+ v15.d) * 0.707106769f
    v2 = (v15.d f- v23) * 0.707106769f
    v3 = (v13.d f- v7) * 0.707106769f
    v4 = (v7 f+ v13.d) * 0.707106769f
    *(x10_5 - 0x18) = v16 f- v12.d
    i_1 += 0x20
    *(x10_5 - 8) = v24
    *(x10_5 - 4) = v29
    *(x10_5 - 0x20) = v12.d f+ v16
    *(x10_5 - 0x1c) = v28 f- v10.d
    *(x10_5 - 0xc) = v17
    *(x10_5 + 0x18) = v26
    *(x10_5 + 0x1c) = v19 f+ v8.d
    *(x10_5 + 0x14) = v8.d f- v19
    *(x10_5 - 0x28) = v1 f+ v14.d
    *(x10_5 - 0x24) = v4 + v6
    *(x10_5 - 0x34) = v2 + v30
    *(x10_5 - 0x30) = v14.d f- v1
    *(x10_5 - 0x40) = v3 + v5
    *(x10_5 - 0x3c) = v30 - v2
    *(x10_5 - 0x38) = v5 - v3
    *(x10_5 - 0x2c) = v6 - v4
    x10_5 += 0x80
while (i_1 s< sx.q(arg3))
