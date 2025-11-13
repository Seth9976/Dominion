// 函数: _ZN5Botan13base64_encodeEPKhm
// 地址: 0xcd206c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t entry_v14
int64_t var_90 = entry_v14.q
uint128_t entry_v13
int64_t var_88 = entry_v13.q
uint128_t entry_v12
int64_t var_80 = entry_v12.q
uint128_t entry_v11
int64_t var_78 = entry_v11.q
uint128_t entry_v10
int64_t var_70 = entry_v10.q
uint128_t entry_v9
int64_t var_68 = entry_v9.q
uint128_t entry_v8
int64_t var_60 = entry_v8.q
int64_t x10_5

if (arg2 == arg2 u/ 3 * 3)
    x10_5 = 0
else
    x10_5 = (arg2 u% 3) ^ 3

uint64_t x9_1 = (x10_5 + arg2) u/ 3
uint64_t x22 = x9_1 << 2
char* entry_x8

if (x22 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    Botan::assertion_failure("consumed == input_length", "Consumed the entire input", 
        "base_encode_to_string", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
        0x232)
else
    uint8_t const* x21_1 = arg1
    int64_t x25_1
    int64_t x26_1
    void* x23_2
    
    if (x22 u>= 0x17)
        uint64_t x24_1 = (x22 + 0x10) & 0xfffffffffffffff0
        void* x0_1 = operator new(x24_1)
        x23_2 = x0_1
        *(entry_x8 + 8) = x22
        *(entry_x8 + 0x10) = x0_1
        *entry_x8 = x24_1 | 1
    label_cd212c:
        int128_t v0_1
        uint128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v16_1
        int128_t v17_1
        int128_t v18_1
        uint128_t v19_1
        uint128_t v20_1
        int128_t v21_1
        uint128_t v23_1
        uint128_t v24_1
        uint128_t v25_1
        uint128_t v26_1
        int128_t v27_1
        uint128_t v28_1
        uint128_t v29_1
        uint128_t v30_1
        int128_t v31_1
        arg1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v16_1, v17_1, v18_1, v19_1, v20_1, v21_1, 
            v23_1, v24_1, v25_1, v26_1, v27_1, v28_1, v29_1, v30_1, v31_1 = memset(x23_2, 0, x22)
        *(x23_2 + x22) = 0
        void* x24_2
        
        if ((zx.d(*entry_x8) & 1) != 0)
            x24_2 = *(entry_x8 + 0x10)
        else
            x24_2 = &entry_x8[1]
        
        size_t i_1
        
        if (arg2 u< 3)
            x25_1 = 0
            x26_1 = 0
            i_1 = arg2
        else if (arg2 - 3 u>= 0x2d)
            int64_t x15_1 =
                (mulu.dp.q(arg2 - 3, -0x5555555555555555) u>> 0x40).q << 1 & 0xfffffffffffffffc
            int32_t x10_8 = 0 != (arg2 - 3) u/ -0x4000000000000000 ? 1 : 0
            x25_1 = 0
            
            if (x24_2 + 2 + x15_1 u< x24_2 + 2 || (x10_8 & 1) != 0 || x24_2 + 3 + x15_1 u< x24_2 + 3
                    || (x10_8 & 1) != 0 || x24_2 + 1 + x15_1 u< x24_2 + 1 || (x10_8 & 1) != 0
                    || x24_2 + x15_1 u< x24_2)
                i_1 = arg2
                x26_1 = 0
                goto label_cd262c
            
            i_1 = arg2
            x26_1 = 0
            
            if ((x10_8 & 1) != 0)
                goto label_cd262c
            
            uint64_t x8_6 = (arg2 - 3) u/ 3
            
            if (x24_2 u< &x21_1[x8_6 * 3 + 3] && x24_2 + (x8_6 << 2) + 4 u> x21_1)
                goto label_cd2154
            
            int64_t i_3 = ((arg2 - 3) u/ 3 + 1) & 0x7ffffffffffffff0
            x26_1 = i_3 << 2
            v0_1.b = 0x3c
            v0_1:1.b = 0x3c
            v0_1:2.b = 0x3c
            v0_1:3.b = 0x3c
            v0_1:4.b = 0x3c
            v0_1:5.b = 0x3c
            v0_1:6.b = 0x3c
            v0_1:7.b = 0x3c
            v0_1:8.b = 0x3c
            v0_1:9.b = 0x3c
            v0_1:0xa.b = 0x3c
            v0_1:0xb.b = 0x3c
            v0_1:0xc.b = 0x3c
            v0_1:0xd.b = 0x3c
            v0_1:0xe.b = 0x3c
            v0_1:0xf.b = 0x3c
            v1_1.b = 0x3f
            v1_1:1.b = 0x3f
            v1_1:2.b = 0x3f
            v1_1:3.b = 0x3f
            v1_1:4.b = 0x3f
            v1_1:5.b = 0x3f
            v1_1:6.b = 0x3f
            v1_1:7.b = 0x3f
            v1_1:8.b = 0x3f
            v1_1:9.b = 0x3f
            v1_1:0xa.b = 0x3f
            v1_1:0xb.b = 0x3f
            v1_1:0xc.b = 0x3f
            v1_1:0xd.b = 0x3f
            v1_1:0xe.b = 0x3f
            v1_1:0xf.b = 0x3f
            v2_1.b = 0xe6
            v2_1:1.b = 0xe6
            v2_1:2.b = 0xe6
            v2_1:3.b = 0xe6
            v2_1:4.b = 0xe6
            v2_1:5.b = 0xe6
            v2_1:6.b = 0xe6
            v2_1:7.b = 0xe6
            v2_1:8.b = 0xe6
            v2_1:9.b = 0xe6
            v2_1:0xa.b = 0xe6
            v2_1:0xb.b = 0xe6
            v2_1:0xc.b = 0xe6
            v2_1:0xd.b = 0xe6
            v2_1:0xe.b = 0xe6
            v2_1:0xf.b = 0xe6
            v3_1.b = 0x33
            v3_1:1.b = 0x33
            v3_1:2.b = 0x33
            v3_1:3.b = 0x33
            v3_1:4.b = 0x33
            v3_1:5.b = 0x33
            v3_1:6.b = 0x33
            v3_1:7.b = 0x33
            v3_1:8.b = 0x33
            v3_1:9.b = 0x33
            v3_1:0xa.b = 0x33
            v3_1:0xb.b = 0x33
            v3_1:0xc.b = 0x33
            v3_1:0xd.b = 0x33
            v3_1:0xe.b = 0x33
            v3_1:0xf.b = 0x33
            v4_1.b = 0xcc
            v4_1:1.b = 0xcc
            v4_1:2.b = 0xcc
            v4_1:3.b = 0xcc
            v4_1:4.b = 0xcc
            v4_1:5.b = 0xcc
            v4_1:6.b = 0xcc
            v4_1:7.b = 0xcc
            v4_1:8.b = 0xcc
            v4_1:9.b = 0xcc
            v4_1:0xa.b = 0xcc
            v4_1:0xb.b = 0xcc
            v4_1:0xc.b = 0xcc
            v4_1:0xd.b = 0xcc
            v4_1:0xe.b = 0xcc
            v4_1:0xf.b = 0xcc
            v5_1.b = 0x3d
            v5_1:1.b = 0x3d
            v5_1:2.b = 0x3d
            v5_1:3.b = 0x3d
            v5_1:4.b = 0x3d
            v5_1:5.b = 0x3d
            v5_1:6.b = 0x3d
            v5_1:7.b = 0x3d
            v5_1:8.b = 0x3d
            v5_1:9.b = 0x3d
            v5_1:0xa.b = 0x3d
            v5_1:0xb.b = 0x3d
            v5_1:0xc.b = 0x3d
            v5_1:0xd.b = 0x3d
            v5_1:0xe.b = 0x3d
            v5_1:0xf.b = 0x3d
            v6_1.b = 0x3e
            v6_1:1.b = 0x3e
            v6_1:2.b = 0x3e
            v6_1:3.b = 0x3e
            v6_1:4.b = 0x3e
            v6_1:5.b = 0x3e
            v6_1:6.b = 0x3e
            v6_1:7.b = 0x3e
            v6_1:8.b = 0x3e
            v6_1:9.b = 0x3e
            v6_1:0xa.b = 0x3e
            v6_1:0xb.b = 0x3e
            v6_1:0xc.b = 0x3e
            v6_1:0xd.b = 0x3e
            v6_1:0xe.b = 0x3e
            v6_1:0xf.b = 0x3e
            v16_1.b = 0x41
            v16_1:1.b = 0x41
            v16_1:2.b = 0x41
            v16_1:3.b = 0x41
            v16_1:4.b = 0x41
            v16_1:5.b = 0x41
            v16_1:6.b = 0x41
            v16_1:7.b = 0x41
            v16_1:8.b = 0x41
            v16_1:9.b = 0x41
            v16_1:0xa.b = 0x41
            v16_1:0xb.b = 0x41
            v16_1:0xc.b = 0x41
            v16_1:0xd.b = 0x41
            v16_1:0xe.b = 0x41
            v16_1:0xf.b = 0x41
            v17_1.b = 0x47
            v17_1:1.b = 0x47
            v17_1:2.b = 0x47
            v17_1:3.b = 0x47
            v17_1:4.b = 0x47
            v17_1:5.b = 0x47
            v17_1:6.b = 0x47
            v17_1:7.b = 0x47
            v17_1:8.b = 0x47
            v17_1:9.b = 0x47
            v17_1:0xa.b = 0x47
            v17_1:0xb.b = 0x47
            v17_1:0xc.b = 0x47
            v17_1:0xd.b = 0x47
            v17_1:0xe.b = 0x47
            v17_1:0xf.b = 0x47
            v18_1.b = 0xfc
            v18_1:1.b = 0xfc
            v18_1:2.b = 0xfc
            v18_1:3.b = 0xfc
            v18_1:4.b = 0xfc
            v18_1:5.b = 0xfc
            v18_1:6.b = 0xfc
            v18_1:7.b = 0xfc
            v18_1:8.b = 0xfc
            v18_1:9.b = 0xfc
            v18_1:0xa.b = 0xfc
            v18_1:0xb.b = 0xfc
            v18_1:0xc.b = 0xfc
            v18_1:0xd.b = 0xfc
            v18_1:0xe.b = 0xfc
            v18_1:0xf.b = 0xfc
            v19_1.b = 0x2b
            v19_1:1.b = 0x2b
            v19_1:2.b = 0x2b
            v19_1:3.b = 0x2b
            v19_1:4.b = 0x2b
            v19_1:5.b = 0x2b
            v19_1:6.b = 0x2b
            v19_1:7.b = 0x2b
            v19_1:8.b = 0x2b
            v19_1:9.b = 0x2b
            v19_1:0xa.b = 0x2b
            v19_1:0xb.b = 0x2b
            v19_1:0xc.b = 0x2b
            v19_1:0xd.b = 0x2b
            v19_1:0xe.b = 0x2b
            v19_1:0xf.b = 0x2b
            v20_1.b = 0x2f
            v20_1:1.b = 0x2f
            v20_1:2.b = 0x2f
            v20_1:3.b = 0x2f
            v20_1:4.b = 0x2f
            v20_1:5.b = 0x2f
            v20_1:6.b = 0x2f
            v20_1:7.b = 0x2f
            v20_1:8.b = 0x2f
            v20_1:9.b = 0x2f
            v20_1:0xa.b = 0x2f
            v20_1:0xb.b = 0x2f
            v20_1:0xc.b = 0x2f
            v20_1:0xd.b = 0x2f
            v20_1:0xe.b = 0x2f
            v20_1:0xf.b = 0x2f
            x25_1 = i_3 * 3
            i_1 = i_3 - x26_1 + arg2
            v21_1.b = 0x30
            v21_1:1.b = 0x30
            v21_1:2.b = 0x30
            v21_1:3.b = 0x30
            v21_1:4.b = 0x30
            v21_1:5.b = 0x30
            v21_1:6.b = 0x30
            v21_1:7.b = 0x30
            v21_1:8.b = 0x30
            v21_1:9.b = 0x30
            v21_1:0xa.b = 0x30
            v21_1:0xb.b = 0x30
            v21_1:0xc.b = 0x30
            v21_1:0xd.b = 0x30
            v21_1:0xe.b = 0x30
            v21_1:0xf.b = 0x30
            int64_t i_2 = i_3
            uint8_t const* x11_3 = x21_1
            void* x12_3 = x24_2
            int64_t i
            
            do
                v27_1.b = *x11_3
                v28_1.b = x11_3[1]
                v29_1.b = x11_3[2]
                v27_1:1.b = x11_3[3]
                v28_1:1.b = x11_3[4]
                v29_1:1.b = x11_3[5]
                v27_1:2.b = x11_3[6]
                v28_1:2.b = x11_3[7]
                v29_1:2.b = x11_3[8]
                v27_1:3.b = x11_3[9]
                v28_1:3.b = x11_3[0xa]
                v29_1:3.b = x11_3[0xb]
                v27_1:4.b = x11_3[0xc]
                v28_1:4.b = x11_3[0xd]
                v29_1:4.b = x11_3[0xe]
                v27_1:5.b = x11_3[0xf]
                v28_1:5.b = x11_3[0x10]
                v29_1:5.b = x11_3[0x11]
                v27_1:6.b = x11_3[0x12]
                v28_1:6.b = x11_3[0x13]
                v29_1:6.b = x11_3[0x14]
                v27_1:7.b = x11_3[0x15]
                v28_1:7.b = x11_3[0x16]
                v29_1:7.b = x11_3[0x17]
                v27_1:8.b = x11_3[0x18]
                v28_1:8.b = x11_3[0x19]
                v29_1:8.b = x11_3[0x1a]
                v27_1:9.b = x11_3[0x1b]
                v28_1:9.b = x11_3[0x1c]
                v29_1:9.b = x11_3[0x1d]
                v27_1:0xa.b = x11_3[0x1e]
                v28_1:0xa.b = x11_3[0x1f]
                v29_1:0xa.b = x11_3[0x20]
                v27_1:0xb.b = x11_3[0x21]
                v28_1:0xb.b = x11_3[0x22]
                v29_1:0xb.b = x11_3[0x23]
                v27_1:0xc.b = x11_3[0x24]
                v28_1:0xc.b = x11_3[0x25]
                v29_1:0xc.b = x11_3[0x26]
                v27_1:0xd.b = x11_3[0x27]
                v28_1:0xd.b = x11_3[0x28]
                v29_1:0xd.b = x11_3[0x29]
                v27_1:0xe.b = x11_3[0x2a]
                v28_1:0xe.b = x11_3[0x2b]
                v29_1:0xe.b = x11_3[0x2c]
                v27_1:0xf.b = x11_3[0x2d]
                v28_1:0xf.b = x11_3[0x2e]
                v29_1:0xf.b = x11_3[0x2f]
                x11_3 = &x11_3[0x30]
                v30_1.b = 0x41
                v30_1:1.b = 0x41
                v30_1:2.b = 0x41
                v30_1:3.b = 0x41
                v30_1:4.b = 0x41
                v30_1:5.b = 0x41
                v30_1:6.b = 0x41
                v30_1:7.b = 0x41
                v30_1:8.b = 0x41
                v30_1:9.b = 0x41
                v30_1:0xa.b = 0x41
                v30_1:0xb.b = 0x41
                v30_1:0xc.b = 0x41
                v30_1:0xd.b = 0x41
                v30_1:0xe.b = 0x41
                v30_1:0xf.b = 0x41
                v31_1.b = 0x47
                v31_1:1.b = 0x47
                v31_1:2.b = 0x47
                v31_1:3.b = 0x47
                v31_1:4.b = 0x47
                v31_1:5.b = 0x47
                v31_1:6.b = 0x47
                v31_1:7.b = 0x47
                v31_1:8.b = 0x47
                v31_1:9.b = 0x47
                v31_1:0xa.b = 0x47
                v31_1:0xb.b = 0x47
                v31_1:0xc.b = 0x47
                v31_1:0xd.b = 0x47
                v31_1:0xe.b = 0x47
                v31_1:0xf.b = 0x47
                v24_1.b = 0xfc
                v24_1:1.b = 0xfc
                v24_1:2.b = 0xfc
                v24_1:3.b = 0xfc
                v24_1:4.b = 0xfc
                v24_1:5.b = 0xfc
                v24_1:6.b = 0xfc
                v24_1:7.b = 0xfc
                v24_1:8.b = 0xfc
                v24_1:9.b = 0xfc
                v24_1:0xa.b = 0xfc
                v24_1:0xb.b = 0xfc
                v24_1:0xc.b = 0xfc
                v24_1:0xd.b = 0xfc
                v24_1:0xe.b = 0xfc
                v24_1:0xf.b = 0xfc
                v26_1.b = 0xe6
                v26_1:1.b = 0xe6
                v26_1:2.b = 0xe6
                v26_1:3.b = 0xe6
                v26_1:4.b = 0xe6
                v26_1:5.b = 0xe6
                v26_1:6.b = 0xe6
                v26_1:7.b = 0xe6
                v26_1:8.b = 0xe6
                v26_1:9.b = 0xe6
                v26_1:0xa.b = 0xe6
                v26_1:0xb.b = 0xe6
                v26_1:0xc.b = 0xe6
                v26_1:0xd.b = 0xe6
                v26_1:0xe.b = 0xe6
                v26_1:0xf.b = 0xe6
                v25_1.b = 0xcc
                v25_1:1.b = 0xcc
                v25_1:2.b = 0xcc
                v25_1:3.b = 0xcc
                v25_1:4.b = 0xcc
                v25_1:5.b = 0xcc
                v25_1:6.b = 0xcc
                v25_1:7.b = 0xcc
                v25_1:8.b = 0xcc
                v25_1:9.b = 0xcc
                v25_1:0xa.b = 0xcc
                v25_1:0xb.b = 0xcc
                v25_1:0xc.b = 0xcc
                v25_1:0xd.b = 0xcc
                v25_1:0xe.b = 0xcc
                v25_1:0xf.b = 0xcc
                v23_1.b = v27_1.b u>> 2
                v23_1:1.b = v27_1:1.b u>> 2
                v23_1:2.b = v27_1:2.b u>> 2
                v23_1:3.b = v27_1:3.b u>> 2
                v23_1:4.b = v27_1:4.b u>> 2
                v23_1:5.b = v27_1:5.b u>> 2
                v23_1:6.b = v27_1:6.b u>> 2
                v23_1:7.b = v27_1:7.b u>> 2
                v23_1:8.b = v27_1:8.b u>> 2
                v23_1:9.b = v27_1:9.b u>> 2
                v23_1:0xa.b = v27_1:0xa.b u>> 2
                v23_1:0xb.b = v27_1:0xb.b u>> 2
                v23_1:0xc.b = v27_1:0xc.b u>> 2
                v23_1:0xd.b = v27_1:0xd.b u>> 2
                v23_1:0xe.b = v27_1:0xe.b u>> 2
                v23_1:0xf.b = v27_1:0xf.b u>> 2
                entry_v8.b = v28_1.b << 2
                entry_v8:1.b = v28_1:1.b << 2
                entry_v8:2.b = v28_1:2.b << 2
                entry_v8:3.b = v28_1:3.b << 2
                entry_v8:4.b = v28_1:4.b << 2
                entry_v8:5.b = v28_1:5.b << 2
                entry_v8:6.b = v28_1:6.b << 2
                entry_v8:7.b = v28_1:7.b << 2
                entry_v8:8.b = v28_1:8.b << 2
                entry_v8:9.b = v28_1:9.b << 2
                entry_v8:0xa.b = v28_1:0xa.b << 2
                entry_v8:0xb.b = v28_1:0xb.b << 2
                entry_v8:0xc.b = v28_1:0xc.b << 2
                entry_v8:0xd.b = v28_1:0xd.b << 2
                entry_v8:0xe.b = v28_1:0xe.b << 2
                entry_v8:0xf.b = v28_1:0xf.b << 2
                unimplemented  {usra v30.16b, v27.16b, #0x2}
                unimplemented  {usra v31.16b, v27.16b, #0x2}
                unimplemented  {usra v24.16b, v27.16b, #0x2}
                entry_v10.b = v27_1.b << 4
                entry_v10:1.b = v27_1:1.b << 4
                entry_v10:2.b = v27_1:2.b << 4
                entry_v10:3.b = v27_1:3.b << 4
                entry_v10:4.b = v27_1:4.b << 4
                entry_v10:5.b = v27_1:5.b << 4
                entry_v10:6.b = v27_1:6.b << 4
                entry_v10:7.b = v27_1:7.b << 4
                entry_v10:8.b = v27_1:8.b << 4
                entry_v10:9.b = v27_1:9.b << 4
                entry_v10:0xa.b = v27_1:0xa.b << 4
                entry_v10:0xb.b = v27_1:0xb.b << 4
                entry_v10:0xc.b = v27_1:0xc.b << 4
                entry_v10:0xd.b = v27_1:0xd.b << 4
                entry_v10:0xe.b = v27_1:0xe.b << 4
                entry_v10:0xf.b = v27_1:0xf.b << 4
                entry_v9.b = v29_1.b u>> 6
                entry_v9:1.b = v29_1:1.b u>> 6
                entry_v9:2.b = v29_1:2.b u>> 6
                entry_v9:3.b = v29_1:3.b u>> 6
                entry_v9:4.b = v29_1:4.b u>> 6
                entry_v9:5.b = v29_1:5.b u>> 6
                entry_v9:6.b = v29_1:6.b u>> 6
                entry_v9:7.b = v29_1:7.b u>> 6
                entry_v9:8.b = v29_1:8.b u>> 6
                entry_v9:9.b = v29_1:9.b u>> 6
                entry_v9:0xa.b = v29_1:0xa.b u>> 6
                entry_v9:0xb.b = v29_1:0xb.b u>> 6
                entry_v9:0xc.b = v29_1:0xc.b u>> 6
                entry_v9:0xd.b = v29_1:0xd.b u>> 6
                entry_v9:0xe.b = v29_1:0xe.b u>> 6
                entry_v9:0xf.b = v29_1:0xf.b u>> 6
                uint128_t v22_1 = v29_1 & v1_1
                unimplemented  {usra v26.16b, v27.16b, #0x2}
                unimplemented  {usra v25.16b, v27.16b, #0x2}
                v28_1.b u>>= 4
                v28_1:1.b u>>= 4
                v28_1:2.b u>>= 4
                v28_1:3.b u>>= 4
                v28_1:4.b u>>= 4
                v28_1:5.b u>>= 4
                v28_1:6.b u>>= 4
                v28_1:7.b u>>= 4
                v28_1:8.b u>>= 4
                v28_1:9.b u>>= 4
                v28_1:0xa.b u>>= 4
                v28_1:0xb.b u>>= 4
                v28_1:0xc.b u>>= 4
                v28_1:0xd.b u>>= 4
                v28_1:0xe.b u>>= 4
                v28_1:0xf.b u>>= 4
                uint128_t v26_2 = vorrq_s8(v3_1 - v23_1, v26_1)
                uint128_t v28_2 = vorrq_s8(v28_1, entry_v10 & v21_1)
                uint128_t v29_3 = vorrq_s8(entry_v9, entry_v8 & v0_1)
                uint128_t v25_2 = vorrq_s8(v5_1 - v23_1, v25_1)
                uint128_t v31_3 = vorrq_s8(v3_1 - v22_1, v22_1 + v2_1)
                v26_2.b s>>= 7
                v26_2:1.b s>>= 7
                v26_2:2.b s>>= 7
                v26_2:3.b s>>= 7
                v26_2:4.b s>>= 7
                v26_2:5.b s>>= 7
                v26_2:6.b s>>= 7
                v26_2:7.b s>>= 7
                v26_2:8.b s>>= 7
                v26_2:9.b s>>= 7
                v26_2:0xa.b s>>= 7
                v26_2:0xb.b s>>= 7
                v26_2:0xc.b s>>= 7
                v26_2:0xd.b s>>= 7
                v26_2:0xe.b s>>= 7
                v26_2:0xf.b s>>= 7
                uint128_t v9_1 = vorrq_s8(v5_1 - v22_1, v22_1 + v4_1)
                uint128_t v10_2 = vorrq_s8(v3_1 - v28_2, v28_2 + v2_1)
                uint128_t v12_2 = vorrq_s8(v5_1 - v28_2, v28_2 + v4_1)
                uint128_t v30_4 = vorrq_s8(v3_1 - v29_3, v29_3 + v2_1)
                uint128_t v11_4 = vorrq_s8(v5_1 - v29_3, v29_3 + v4_1)
                int128_t v13_3 = v22_1 + v17_1
                v31_3.b s>>= 7
                v31_3:1.b s>>= 7
                v31_3:2.b s>>= 7
                v31_3:3.b s>>= 7
                v31_3:4.b s>>= 7
                v31_3:5.b s>>= 7
                v31_3:6.b s>>= 7
                v31_3:7.b s>>= 7
                v31_3:8.b s>>= 7
                v31_3:9.b s>>= 7
                v31_3:0xa.b s>>= 7
                v31_3:0xb.b s>>= 7
                v31_3:0xc.b s>>= 7
                v31_3:0xd.b s>>= 7
                v31_3:0xe.b s>>= 7
                v31_3:0xf.b s>>= 7
                int128_t v8_3 = v22_1 + v18_1
                int128_t v13_5 = v28_2 + v17_1
                v25_2.b s>>= 7
                v25_2:1.b s>>= 7
                v25_2:2.b s>>= 7
                v25_2:3.b s>>= 7
                v25_2:4.b s>>= 7
                v25_2:5.b s>>= 7
                v25_2:6.b s>>= 7
                v25_2:7.b s>>= 7
                v25_2:8.b s>>= 7
                v25_2:9.b s>>= 7
                v25_2:0xa.b s>>= 7
                v25_2:0xb.b s>>= 7
                v25_2:0xc.b s>>= 7
                v25_2:0xd.b s>>= 7
                v25_2:0xe.b s>>= 7
                v25_2:0xf.b s>>= 7
                v10_2.b s>>= 7
                v10_2:1.b s>>= 7
                v10_2:2.b s>>= 7
                v10_2:3.b s>>= 7
                v10_2:4.b s>>= 7
                v10_2:5.b s>>= 7
                v10_2:6.b s>>= 7
                v10_2:7.b s>>= 7
                v10_2:8.b s>>= 7
                v10_2:9.b s>>= 7
                v10_2:0xa.b s>>= 7
                v10_2:0xb.b s>>= 7
                v10_2:0xc.b s>>= 7
                v10_2:0xd.b s>>= 7
                v10_2:0xe.b s>>= 7
                v10_2:0xf.b s>>= 7
                int128_t v10_3 = v29_3 + v17_1
                v30_4.b s>>= 7
                v30_4:1.b s>>= 7
                v30_4:2.b s>>= 7
                v30_4:3.b s>>= 7
                v30_4:4.b s>>= 7
                v30_4:5.b s>>= 7
                v30_4:6.b s>>= 7
                v30_4:7.b s>>= 7
                v30_4:8.b s>>= 7
                v30_4:9.b s>>= 7
                v30_4:0xa.b s>>= 7
                v30_4:0xb.b s>>= 7
                v30_4:0xc.b s>>= 7
                v30_4:0xd.b s>>= 7
                v30_4:0xe.b s>>= 7
                v30_4:0xf.b s>>= 7
                int128_t v26_7 = v30_4 & ((v29_3 + v16_1) ^ v10_3)
                v30_4.b = v9_1.b s>> 7
                v30_4:1.b = v9_1:1.b s>> 7
                v30_4:2.b = v9_1:2.b s>> 7
                v30_4:3.b = v9_1:3.b s>> 7
                v30_4:4.b = v9_1:4.b s>> 7
                v30_4:5.b = v9_1:5.b s>> 7
                v30_4:6.b = v9_1:6.b s>> 7
                v30_4:7.b = v9_1:7.b s>> 7
                v30_4:8.b = v9_1:8.b s>> 7
                v30_4:9.b = v9_1:9.b s>> 7
                v30_4:0xa.b = v9_1:0xa.b s>> 7
                v30_4:0xb.b = v9_1:0xb.b s>> 7
                v30_4:0xc.b = v9_1:0xc.b s>> 7
                v30_4:0xd.b = v9_1:0xd.b s>> 7
                v30_4:0xe.b = v9_1:0xe.b s>> 7
                v30_4:0xf.b = v9_1:0xf.b s>> 7
                uint128_t v24_2 = ((v24_1 ^ v31_1 ^ (v26_2 & (v30_1 ^ v31_1))) & v25_2) ^ v24_1
                int128_t v25_4 = v28_2 + v18_1
                v31_1 = v29_3 + v18_1
                int128_t v26_8 = v31_1 ^ v10_3 ^ v26_7
                int128_t v9_2
                v9_2.b = v12_2.b s>> 7
                v9_2:1.b = v12_2:1.b s>> 7
                v9_2:2.b = v12_2:2.b s>> 7
                v9_2:3.b = v12_2:3.b s>> 7
                v9_2:4.b = v12_2:4.b s>> 7
                v9_2:5.b = v12_2:5.b s>> 7
                v9_2:6.b = v12_2:6.b s>> 7
                v9_2:7.b = v12_2:7.b s>> 7
                v9_2:8.b = v12_2:8.b s>> 7
                v9_2:9.b = v12_2:9.b s>> 7
                v9_2:0xa.b = v12_2:0xa.b s>> 7
                v9_2:0xb.b = v12_2:0xb.b s>> 7
                v9_2:0xc.b = v12_2:0xc.b s>> 7
                v9_2:0xd.b = v12_2:0xd.b s>> 7
                v9_2:0xe.b = v12_2:0xe.b s>> 7
                v9_2:0xf.b = v12_2:0xf.b s>> 7
                uint128_t v8_5
                v8_5.b = ((v23_1 ^ v6_1) + sx.o(-1)).b s>> 7
                v8_5:1.b s>>= 7
                v8_5:2.b s>>= 7
                v8_5:3.b s>>= 7
                v8_5:4.b s>>= 7
                v8_5:5.b s>>= 7
                v8_5:6.b s>>= 7
                v8_5:7.b s>>= 7
                v8_5:8.b s>>= 7
                v8_5:9.b s>>= 7
                v8_5:0xa.b s>>= 7
                v8_5:0xb.b s>>= 7
                v8_5:0xc.b s>>= 7
                v8_5:0xd.b s>>= 7
                v8_5:0xe.b s>>= 7
                v8_5:0xf.b s>>= 7
                v10_3.b = v11_4.b s>> 7
                v10_3:1.b = v11_4:1.b s>> 7
                v10_3:2.b = v11_4:2.b s>> 7
                v10_3:3.b = v11_4:3.b s>> 7
                v10_3:4.b = v11_4:4.b s>> 7
                v10_3:5.b = v11_4:5.b s>> 7
                v10_3:6.b = v11_4:6.b s>> 7
                v10_3:7.b = v11_4:7.b s>> 7
                v10_3:8.b = v11_4:8.b s>> 7
                v10_3:9.b = v11_4:9.b s>> 7
                v10_3:0xa.b = v11_4:0xa.b s>> 7
                v10_3:0xb.b = v11_4:0xb.b s>> 7
                v10_3:0xc.b = v11_4:0xc.b s>> 7
                v10_3:0xd.b = v11_4:0xd.b s>> 7
                v10_3:0xe.b = v11_4:0xe.b s>> 7
                v10_3:0xf.b = v11_4:0xf.b s>> 7
                uint128_t v23_2 = vceqq_u8(v23_1, v1_1)
                uint128_t v24_3 = vbslq_s8(v8_5, v19_1, v24_2)
                entry_v9.b = ((v28_2 ^ v6_1) + sx.o(-1)).b s>> 7
                entry_v9:1.b s>>= 7
                entry_v9:2.b s>>= 7
                entry_v9:3.b s>>= 7
                entry_v9:4.b s>>= 7
                entry_v9:5.b s>>= 7
                entry_v9:6.b s>>= 7
                entry_v9:7.b s>>= 7
                entry_v9:8.b s>>= 7
                entry_v9:9.b s>>= 7
                entry_v9:0xa.b s>>= 7
                entry_v9:0xb.b s>>= 7
                entry_v9:0xc.b s>>= 7
                entry_v9:0xd.b s>>= 7
                entry_v9:0xe.b s>>= 7
                entry_v9:0xf.b s>>= 7
                uint128_t v22_2 = vceqq_u8(v22_1, v1_1)
                v28_1 = vceqq_u8(v28_2, v1_1)
                v29_1 = vceqq_u8(v29_3, v1_1)
                entry_v8.b = ((v22_1 ^ v6_1) + sx.o(-1)).b s>> 7
                entry_v8:1.b s>>= 7
                entry_v8:2.b s>>= 7
                entry_v8:3.b s>>= 7
                entry_v8:4.b s>>= 7
                entry_v8:5.b s>>= 7
                entry_v8:6.b s>>= 7
                entry_v8:7.b s>>= 7
                entry_v8:8.b s>>= 7
                entry_v8:9.b s>>= 7
                entry_v8:0xa.b s>>= 7
                entry_v8:0xb.b s>>= 7
                entry_v8:0xc.b s>>= 7
                entry_v8:0xd.b s>>= 7
                entry_v8:0xe.b s>>= 7
                entry_v8:0xf.b s>>= 7
                entry_v10.b = ((v29_3 ^ v6_1) + sx.o(-1)).b s>> 7
                entry_v10:1.b s>>= 7
                entry_v10:2.b s>>= 7
                entry_v10:3.b s>>= 7
                entry_v10:4.b s>>= 7
                entry_v10:5.b s>>= 7
                entry_v10:6.b s>>= 7
                entry_v10:7.b s>>= 7
                entry_v10:8.b s>>= 7
                entry_v10:9.b s>>= 7
                entry_v10:0xa.b s>>= 7
                entry_v10:0xb.b s>>= 7
                entry_v10:0xc.b s>>= 7
                entry_v10:0xd.b s>>= 7
                entry_v10:0xe.b s>>= 7
                entry_v10:0xf.b s>>= 7
                entry_v11 = vbslq_s8(v23_2, v20_1, v24_3)
                v30_1 = vbslq_s8(entry_v8, v19_1, 
                    ((v8_3 ^ v13_3 ^ (v31_3 & ((v22_1 + v16_1) ^ v13_3))) & v30_4) ^ v8_3)
                v24_1 = vbslq_s8(entry_v9, v19_1, 
                    ((v25_4 ^ v13_5 ^ (v10_2 & ((v28_2 + v16_1) ^ v13_5))) & v9_2) ^ v25_4)
                v23_1 = vbslq_s8(entry_v10, v19_1, (v26_8 & v10_3) ^ v31_1)
                entry_v12 = vbslq_s8(v28_1, v20_1, v24_1)
                entry_v13 = vbslq_s8(v29_1, v20_1, v23_1)
                entry_v14 = vbslq_s8(v22_2, v20_1, v30_1)
                i = i_2
                i_2 -= 0x10
                *x12_3 = entry_v11.b
                *(x12_3 + 1) = entry_v12.b
                *(x12_3 + 2) = entry_v13.b
                *(x12_3 + 3) = entry_v14.b
                *(x12_3 + 4) = entry_v11:1.b
                *(x12_3 + 5) = entry_v12:1.b
                *(x12_3 + 6) = entry_v13:1.b
                *(x12_3 + 7) = entry_v14:1.b
                *(x12_3 + 8) = entry_v11:2.b
                *(x12_3 + 9) = entry_v12:2.b
                *(x12_3 + 0xa) = entry_v13:2.b
                *(x12_3 + 0xb) = entry_v14:2.b
                *(x12_3 + 0xc) = entry_v11:3.b
                *(x12_3 + 0xd) = entry_v12:3.b
                *(x12_3 + 0xe) = entry_v13:3.b
                *(x12_3 + 0xf) = entry_v14:3.b
                *(x12_3 + 0x10) = entry_v11:4.b
                *(x12_3 + 0x11) = entry_v12:4.b
                *(x12_3 + 0x12) = entry_v13:4.b
                *(x12_3 + 0x13) = entry_v14:4.b
                *(x12_3 + 0x14) = entry_v11:5.b
                *(x12_3 + 0x15) = entry_v12:5.b
                *(x12_3 + 0x16) = entry_v13:5.b
                *(x12_3 + 0x17) = entry_v14:5.b
                *(x12_3 + 0x18) = entry_v11:6.b
                *(x12_3 + 0x19) = entry_v12:6.b
                *(x12_3 + 0x1a) = entry_v13:6.b
                *(x12_3 + 0x1b) = entry_v14:6.b
                *(x12_3 + 0x1c) = entry_v11:7.b
                *(x12_3 + 0x1d) = entry_v12:7.b
                *(x12_3 + 0x1e) = entry_v13:7.b
                *(x12_3 + 0x1f) = entry_v14:7.b
                *(x12_3 + 0x20) = entry_v11:8.b
                *(x12_3 + 0x21) = entry_v12:8.b
                *(x12_3 + 0x22) = entry_v13:8.b
                *(x12_3 + 0x23) = entry_v14:8.b
                *(x12_3 + 0x24) = entry_v11:9.b
                *(x12_3 + 0x25) = entry_v12:9.b
                *(x12_3 + 0x26) = entry_v13:9.b
                *(x12_3 + 0x27) = entry_v14:9.b
                *(x12_3 + 0x28) = entry_v11:0xa.b
                *(x12_3 + 0x29) = entry_v12:0xa.b
                *(x12_3 + 0x2a) = entry_v13:0xa.b
                *(x12_3 + 0x2b) = entry_v14:0xa.b
                *(x12_3 + 0x2c) = entry_v11:0xb.b
                *(x12_3 + 0x2d) = entry_v12:0xb.b
                *(x12_3 + 0x2e) = entry_v13:0xb.b
                *(x12_3 + 0x2f) = entry_v14:0xb.b
                *(x12_3 + 0x30) = entry_v11:0xc.b
                *(x12_3 + 0x31) = entry_v12:0xc.b
                *(x12_3 + 0x32) = entry_v13:0xc.b
                *(x12_3 + 0x33) = entry_v14:0xc.b
                *(x12_3 + 0x34) = entry_v11:0xd.b
                *(x12_3 + 0x35) = entry_v12:0xd.b
                *(x12_3 + 0x36) = entry_v13:0xd.b
                *(x12_3 + 0x37) = entry_v14:0xd.b
                *(x12_3 + 0x38) = entry_v11:0xe.b
                *(x12_3 + 0x39) = entry_v12:0xe.b
                *(x12_3 + 0x3a) = entry_v13:0xe.b
                *(x12_3 + 0x3b) = entry_v14:0xe.b
                *(x12_3 + 0x3c) = entry_v11:0xf.b
                *(x12_3 + 0x3d) = entry_v12:0xf.b
                *(x12_3 + 0x3e) = entry_v13:0xf.b
                *(x12_3 + 0x3f) = entry_v14:0xf.b
                x12_3 += 0x40
            while (i != 0x10)
            
            if ((arg2 - 3) u/ 3 + 1 != i_3)
                goto label_cd262c
        else
        label_cd2154:
            x25_1 = 0
            x26_1 = 0
            i_1 = arg2
        label_cd262c:
            
            do
                void* x12_4 = &x21_1[x25_1]
                uint32_t x17_1 = zx.d(*x12_4)
                uint32_t x13_2 = zx.d(*(x12_4 + 2))
                uint32_t x16_2 = zx.d(*(x12_4 + 1))
                i_1 -= 3
                uint32_t x14_2 = x17_1 u>> 2
                int32_t x13_3 = x13_2 & 0x3f
                int32_t x12_6 = (0xffffffc3 & x13_2 u>> 6) | (0xf & x16_2) << 2
                int32_t x15_3 = (0xffffffcf & x16_2 u>> 4) | (3 & x17_1) << 4
                char x0_7 = ((x14_2.b - 4) ^ (x14_2.b + 0x47) ^ (((x14_2.b + 0x41)
                    ^ (x14_2.b + 0x47)) & (((0x33 - x14_2) | (x14_2 - 0x1a)) u>> 7).b))
                    & (((0x3d - x14_2) | (x14_2 - 0x34)) u>> 7).b
                int32_t x0_8 = ((x15_3 - 4) ^ (x15_3 + 0x47) ^
                    (((x15_3 + 0x41) ^ (x15_3 + 0x47)) & ((0x33 - x15_3) | (x15_3 - 0x1a)) u>> 7))
                    & ((0x3d - x15_3) | (x15_3 - 0x34)) u>> 7
                char x17_6 = ((x13_3.b - 4) ^ (x13_3.b + 0x47) ^ (((x13_3.b + 0x41)
                    ^ (x13_3.b + 0x47)) & (((0x33 - x13_3) | (x13_3 - 0x1a)) u>> 7).b))
                    & (((0x3d - x13_3) | (x13_3 - 0x34)) u>> 7).b
                char x2_8 = ((x12_6.b - 4) ^ (x12_6.b + 0x47) ^ (((x12_6.b + 0x41)
                    ^ (x12_6.b + 0x47)) & (((0x33 - x12_6) | (x12_6 - 0x1a)) u>> 7).b))
                    & (((0x3d - x12_6) | (x12_6 - 0x34)) u>> 7).b
                int32_t x14_5 = ((x14_2 ^ 0x3e) - 1) s>> 7
                int32_t x1_5 = ((x15_3 ^ 0x3e) - 1) s>> 7
                int32_t x5_8 = ((x12_6 ^ 0x3e) - 1) s>> 7
                void* x4_6 = x24_2 + x26_1
                int32_t x3_8 = ((x13_3 ^ 0x3e) - 1) s>> 7
                char x14_8
                
                if (x14_2 == 0x3f)
                    x14_8 = 0x2f
                else
                    x14_8 = (x14_5.b & 0x2b) | ((x0_7 ^ (x14_2.b - 4)) & (not.d(x14_5)).b)
                
                *x4_6 = x14_8
                char x14_9
                
                if (x15_3 == 0x3f)
                    x14_9 = 0x2f
                else
                    x14_9 = (x1_5.b & 0x2b) | ((x0_8 ^ (x15_3 - 4)) & not.d(x1_5)).b
                
                char x12_7
                
                if (x12_6 == 0x3f)
                    x12_7 = 0x2f
                else
                    x12_7 = (x5_8.b & 0x2b) | ((x2_8 ^ (x12_6.b - 4)) & (not.d(x5_8)).b)
                
                x25_1 += 3
                *(x4_6 + 2) = x12_7
                char x12_8
                
                if (x13_3 == 0x3f)
                    x12_8 = 0x2f
                else
                    x12_8 = (x3_8.b & 0x2b) | ((x17_6 ^ (x13_3.b - 4)) & (not.d(x3_8)).b)
                
                x26_1 += 4
                *(x4_6 + 1) = x14_9
                *(x4_6 + 3) = x12_8
            while (i_1 u> 2)
        
        if (i_1 != 0)
            char* x0_10 = operator new(3)
            memset(&x0_10[i_1], 0, 3 - i_1)
            memcpy(x0_10, &x21_1[x25_1], i_1)
            uint32_t x15_5 = zx.d(*x0_10)
            uint32_t x14_10 = zx.d(x0_10[1])
            uint32_t x8_11 = zx.d(x0_10[2])
            uint32_t x10_13 = x15_5 u>> 2
            int32_t x8_12 = x8_11 & 0x3f
            int32_t x11_5 = (0xffffffcf & x14_10 u>> 4) | (3 & x15_5) << 4
            int32_t x9_5 = (0xffffffc3 & x8_11 u>> 6) | (0xf & x14_10) << 2
            char x16_12 = ((x10_13.b - 4) ^ (x10_13.b + 0x47) ^ (((x10_13.b + 0x41)
                ^ (x10_13.b + 0x47)) & (((0x33 - x10_13) | (x10_13 - 0x1a)) u>> 7).b))
                & (((0x3d - x10_13) | (x10_13 - 0x34)) u>> 7).b
            char x17_16 = ((x11_5.b - 4) ^ (x11_5.b + 0x47) ^ (((x11_5.b + 0x41) ^ (x11_5.b + 0x47))
                & (((0x33 - x11_5) | (x11_5 - 0x1a)) u>> 7).b))
                & (((0x3d - x11_5) | (x11_5 - 0x34)) u>> 7).b
            char x12_13 = ((x9_5.b - 4) ^ (x9_5.b + 0x47) ^
                (((x9_5.b + 0x41) ^ (x9_5.b + 0x47)) & (((0x33 - x9_5) | (x9_5 - 0x1a)) u>> 7).b))
                & (((0x3d - x9_5) | (x9_5 - 0x34)) u>> 7).b
            int32_t x10_16 = ((x10_13 ^ 0x3e) - 1) s>> 7
            char x15_10 = ((x8_12.b - 4) ^ (x8_12.b + 0x47) ^ (((x8_12.b + 0x41) ^ (x8_12.b + 0x47))
                & (((0x33 - x8_12) | (x8_12 - 0x1a)) u>> 7).b))
                & (((0x3d - x8_12) | (x8_12 - 0x34)) u>> 7).b
            int32_t x1_14 = ((x11_5 ^ 0x3e) - 1) s>> 7
            int32_t x0_18 = ((x8_12 ^ 0x3e) - 1) s>> 7
            int32_t x14_16 = ((x9_5 ^ 0x3e) - 1) s>> 7
            void* x16_13 = x24_2 + x26_1
            char x10_19
            
            if (x10_13 == 0x3f)
                x10_19 = 0x2f
            else
                x10_19 = (x10_16.b & 0x2b) | ((x16_12 ^ (x10_13.b - 4)) & (not.d(x10_16)).b)
            
            *x16_13 = x10_19
            char x10_20
            
            if (x11_5 == 0x3f)
                x10_20 = 0x2f
            else
                x10_20 = (x1_14.b & 0x2b) | ((x17_16 ^ (x11_5.b - 4)) & (not.d(x1_14)).b)
            
            char x14_17 = (i_1.d << 3).b
            char x9_6
            
            if (x9_5 == 0x3f)
                x9_6 = 0x2f
            else
                x9_6 = (x14_16.b & 0x2b) | ((x12_13 ^ (x9_5.b - 4)) & (not.d(x14_16)).b)
            
            char x8_13
            
            if (x8_12 == 0x3f)
                x8_13 = 0x2f
            else
                x8_13 = (x0_18.b & 0x2b) | ((x15_10 ^ (x8_12.b - 4)) & (not.d(x0_18)).b)
            
            *(x16_13 + 3) = x8_13
            char x8_14
            
            if (i_1 u> 1)
                x8_14 = x14_17 - 0x12
            else
                x8_14 = -7
            
            uint64_t x8_19 = zx.q(zx.d(x8_14 - x14_17 + 0x17) u/ 6)
            *(x16_13 + 2) = x9_6
            *(x16_13 + 1) = x10_20
            memset(x24_2 + (x26_1 | 3) - x8_19, 0x3d, x8_19 + 1)
            x25_1 += i_1
            operator delete(x0_10)
            x26_1 += 4
    else
        char* x23_1 = entry_x8
        *x23_1 = (x9_1.d << 3).b
        x23_2 = &x23_1[1]
        
        if (x22 != 0)
            goto label_cd212c
        
        x25_1 = 0
        x26_1 = 0
        *x23_2 = 0
    
    if (x25_1 != arg2)
        Botan::assertion_failure("consumed == input_length", "Consumed the entire input", 
            "base_encode_to_string", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
            0x232)
    else
        uint64_t x8_20 = zx.q(*entry_x8)
        uint64_t x8_21
        
        if ((x8_20.d & 1) == 0)
            x8_21 = x8_20 u>> 1
        else
            x8_21 = *(entry_x8 + 8)
        
        if (x26_1 == x8_21)
            entry_v9.q = var_68
            entry_v8.q = var_60
            entry_v11.q = var_78
            entry_v10.q = var_70
            entry_v13.q = var_88
            entry_v12.q = var_80
            entry_v14.q = var_90
            return 

int64_t* x0_23 = Botan::assertion_failure("produced == output.size()", "Produced expected size", 
    "base_encode_to_string", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x233)

if ((zx.d(*entry_x8) & 1) != 0)
    operator delete(*(entry_x8 + 0x10))

sub_1101e04(x0_23)
noreturn
