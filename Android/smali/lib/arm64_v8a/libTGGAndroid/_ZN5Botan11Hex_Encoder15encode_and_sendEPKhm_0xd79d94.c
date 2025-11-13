// 函数: _ZN5Botan11Hex_Encoder15encode_and_sendEPKhm
// 地址: 0xd79d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t const* x19 = arg1
int64_t entry_x2

if (entry_x2 != 0)
    char* x9_1 = *(x19 + 0x70)
    char x8_2
    
    if (*(x19 + 0x4c) == 0)
        x8_2 = 0x41
    else
        x8_2 = 0x61
    
    int64_t i_6
    
    if (entry_x2 u>= 8)
        int64_t x13_6 = (entry_x2 - 1) * 2
        int32_t x11_8 = (entry_x2 - 1) * 2 u< entry_x2 - 1 ? 1 : 0
        i_6 = 0
        
        if (&x9_1[x13_6] u< x9_1 || (x11_8 & 1) != 0 || &x9_1[1 + x13_6] u< &x9_1[1]
                || (x11_8 & 1) != 0)
            goto label_d79ddc
        
        if (x9_1 u< arg2 + entry_x2 && &x9_1[entry_x2 << 1] u> arg2)
            goto label_d79dd4
        
        int128_t v0
        int128_t v1
        int128_t v2
        uint128_t v3
        uint128_t v4
        uint128_t v5
        uint128_t v6
        
        if (entry_x2 u>= 0x10)
            i_6 = entry_x2 & 0xfffffffffffffff0
            v0.b = x8_2
            v0:1.b = x8_2
            v0:2.b = x8_2
            v0:3.b = x8_2
            v0:4.b = x8_2
            v0:5.b = x8_2
            v0:6.b = x8_2
            v0:7.b = x8_2
            v0:8.b = x8_2
            v0:9.b = x8_2
            v0:0xa.b = x8_2
            v0:0xb.b = x8_2
            v0:0xc.b = x8_2
            v0:0xd.b = x8_2
            v0:0xe.b = x8_2
            v0:0xf.b = x8_2
            v1.b = 0xf
            v1:1.b = 0xf
            v1:2.b = 0xf
            v1:3.b = 0xf
            v1:4.b = 0xf
            v1:5.b = 0xf
            v1:6.b = 0xf
            v1:7.b = 0xf
            v1:8.b = 0xf
            v1:9.b = 0xf
            v1:0xa.b = 0xf
            v1:0xb.b = 0xf
            v1:0xc.b = 0xf
            v1:0xd.b = 0xf
            v1:0xe.b = 0xf
            v1:0xf.b = 0xf
            v2.b = 0xf6
            v2:1.b = 0xf6
            v2:2.b = 0xf6
            v2:3.b = 0xf6
            v2:4.b = 0xf6
            v2:5.b = 0xf6
            v2:6.b = 0xf6
            v2:7.b = 0xf6
            v2:8.b = 0xf6
            v2:9.b = 0xf6
            v2:0xa.b = 0xf6
            v2:0xb.b = 0xf6
            v2:0xc.b = 0xf6
            v2:0xd.b = 0xf6
            v2:0xe.b = 0xf6
            v2:0xf.b = 0xf6
            v3.b = 0x30
            v3:1.b = 0x30
            v3:2.b = 0x30
            v3:3.b = 0x30
            v3:4.b = 0x30
            v3:5.b = 0x30
            v3:6.b = 0x30
            v3:7.b = 0x30
            v3:8.b = 0x30
            v3:9.b = 0x30
            v3:0xa.b = 0x30
            v3:0xb.b = 0x30
            v3:0xc.b = 0x30
            v3:0xd.b = 0x30
            v3:0xe.b = 0x30
            v3:0xf.b = 0x30
            int64_t i_4 = i_6
            char* x12_11 = x9_1
            uint64_t x13_7 = arg2
            int64_t i
            
            do
                v4 = *x13_7
                x13_7 += 0x10
                v5.b = 0xf6
                v5:1.b = 0xf6
                v5:2.b = 0xf6
                v5:3.b = 0xf6
                v5:4.b = 0xf6
                v5:5.b = 0xf6
                v5:6.b = 0xf6
                v5:7.b = 0xf6
                v5:8.b = 0xf6
                v5:9.b = 0xf6
                v5:0xa.b = 0xf6
                v5:0xb.b = 0xf6
                v5:0xc.b = 0xf6
                v5:0xd.b = 0xf6
                v5:0xe.b = 0xf6
                v5:0xf.b = 0xf6
                i = i_4
                i_4 -= 0x10
                v6.b = v4.b u>> 4
                v6:1.b = v4:1.b u>> 4
                v6:2.b = v4:2.b u>> 4
                v6:3.b = v4:3.b u>> 4
                v6:4.b = v4:4.b u>> 4
                v6:5.b = v4:5.b u>> 4
                v6:6.b = v4:6.b u>> 4
                v6:7.b = v4:7.b u>> 4
                v6:8.b = v4:8.b u>> 4
                v6:9.b = v4:9.b u>> 4
                v6:0xa.b = v4:0xa.b u>> 4
                v6:0xb.b = v4:0xb.b u>> 4
                v6:0xc.b = v4:0xc.b u>> 4
                v6:0xd.b = v4:0xd.b u>> 4
                v6:0xe.b = v4:0xe.b u>> 4
                v6:0xf.b = v4:0xf.b u>> 4
                uint128_t v7_1 = v4 & v1
                unimplemented  {usra v5.16b, v4.16b, #0x4}
                int128_t v16_1 = v7_1 + v2
                v4 = vbslq_s8(sx.o(-1), vorrq_s8(v6, v3), v5 + v0)
                v6.b = v16_1.b s>> 7
                v6:1.b = v16_1:1.b s>> 7
                v6:2.b = v16_1:2.b s>> 7
                v6:3.b = v16_1:3.b s>> 7
                v6:4.b = v16_1:4.b s>> 7
                v6:5.b = v16_1:5.b s>> 7
                v6:6.b = v16_1:6.b s>> 7
                v6:7.b = v16_1:7.b s>> 7
                v6:8.b = v16_1:8.b s>> 7
                v6:9.b = v16_1:9.b s>> 7
                v6:0xa.b = v16_1:0xa.b s>> 7
                v6:0xb.b = v16_1:0xb.b s>> 7
                v6:0xc.b = v16_1:0xc.b s>> 7
                v6:0xd.b = v16_1:0xd.b s>> 7
                v6:0xe.b = v16_1:0xe.b s>> 7
                v6:0xf.b = v16_1:0xf.b s>> 7
                v5 = vbslq_s8(v6, vorrq_s8(v7_1, v3), v16_1 + v0)
                *x12_11 = v4.b
                x12_11[1] = v5.b
                x12_11[2] = v4:1.b
                x12_11[3] = v5:1.b
                x12_11[4] = v4:2.b
                x12_11[5] = v5:2.b
                x12_11[6] = v4:3.b
                x12_11[7] = v5:3.b
                x12_11[8] = v4:4.b
                x12_11[9] = v5:4.b
                x12_11[0xa] = v4:5.b
                x12_11[0xb] = v5:5.b
                x12_11[0xc] = v4:6.b
                x12_11[0xd] = v5:6.b
                x12_11[0xe] = v4:7.b
                x12_11[0xf] = v5:7.b
                x12_11[0x10] = v4:8.b
                x12_11[0x11] = v5:8.b
                x12_11[0x12] = v4:9.b
                x12_11[0x13] = v5:9.b
                x12_11[0x14] = v4:0xa.b
                x12_11[0x15] = v5:0xa.b
                x12_11[0x16] = v4:0xb.b
                x12_11[0x17] = v5:0xb.b
                x12_11[0x18] = v4:0xc.b
                x12_11[0x19] = v5:0xc.b
                x12_11[0x1a] = v4:0xd.b
                x12_11[0x1b] = v5:0xd.b
                x12_11[0x1c] = v4:0xe.b
                x12_11[0x1d] = v5:0xe.b
                x12_11[0x1e] = v4:0xf.b
                x12_11[0x1f] = v5:0xf.b
                x12_11 = &x12_11[0x20]
            while (i != 0x10)
            
            if (i_6 != entry_x2)
                if ((entry_x2.d & 8) == 0)
                    goto label_d79ddc
                
                goto label_d7a0ec
        else
            i_6 = 0
        label_d7a0ec:
            int64_t i_7 = i_6
            i_6 = entry_x2 & 0xfffffffffffffff8
            v0.b = x8_2
            v0:1.b = x8_2
            v0:2.b = x8_2
            v0:3.b = x8_2
            v0:4.b = x8_2
            v0:5.b = x8_2
            v0:6.b = x8_2
            v0:7.b = x8_2
            int64_t* x11_9 = arg2 + i_7
            char* x12_12 = &x9_1[i_7 << 1]
            v1.b = 0xf
            v1:1.b = 0xf
            v1:2.b = 0xf
            v1:3.b = 0xf
            v1:4.b = 0xf
            v1:5.b = 0xf
            v1:6.b = 0xf
            v1:7.b = 0xf
            v2.b = 0xf6
            v2:1.b = 0xf6
            v2:2.b = 0xf6
            v2:3.b = 0xf6
            v2:4.b = 0xf6
            v2:5.b = 0xf6
            v2:6.b = 0xf6
            v2:7.b = 0xf6
            int64_t i_5 = i_7 - i_6
            v3.b = 0x30
            v3:1.b = 0x30
            v3:2.b = 0x30
            v3:3.b = 0x30
            v3:4.b = 0x30
            v3:5.b = 0x30
            v3:6.b = 0x30
            v3:7.b = 0x30
            int64_t i_1
            
            do
                v4.q = *x11_9
                x11_9 = &x11_9[1]
                v5.b = 0xf6
                v5:1.b = 0xf6
                v5:2.b = 0xf6
                v5:3.b = 0xf6
                v5:4.b = 0xf6
                v5:5.b = 0xf6
                v5:6.b = 0xf6
                v5:7.b = 0xf6
                i_1 = i_5
                i_5 += 8
                v6.b = v4.b u>> 4
                v6:1.b = v4:1.b u>> 4
                v6:2.b = v4:2.b u>> 4
                v6:3.b = v4:3.b u>> 4
                v6:4.b = v4:4.b u>> 4
                v6:5.b = v4:5.b u>> 4
                v6:6.b = v4:6.b u>> 4
                v6:7.b = v4:7.b u>> 4
                int128_t v7_3 = v4 & v1
                int128_t v5_3 = vsra_n_u8(v5, v4, 4)
                v4.b = v5_3.b s>> 7
                v4:1.b = v5_3:1.b s>> 7
                v4:2.b = v5_3:2.b s>> 7
                v4:3.b = v5_3:3.b s>> 7
                v4:4.b = v5_3:4.b s>> 7
                v4:5.b = v5_3:5.b s>> 7
                v4:6.b = v5_3:6.b s>> 7
                v4:7.b = v5_3:7.b s>> 7
                int128_t v16_3 = v7_3 + v2
                v4 = vbsl_s8(v4, vorr_s8(v6, v3), v5_3 + v0)
                v6.b = v16_3.b s>> 7
                v6:1.b = v16_3:1.b s>> 7
                v6:2.b = v16_3:2.b s>> 7
                v6:3.b = v16_3:3.b s>> 7
                v6:4.b = v16_3:4.b s>> 7
                v6:5.b = v16_3:5.b s>> 7
                v6:6.b = v16_3:6.b s>> 7
                v6:7.b = v16_3:7.b s>> 7
                int128_t v5_4
                v5_4.q = v6.q
                v5 = vbsl_s8(v5_4, vorr_s8(v7_3, v3), v16_3 + v0)
                *x12_12 = v4.b
                x12_12[1] = v5.b
                x12_12[2] = v4:1.b
                x12_12[3] = v5:1.b
                x12_12[4] = v4:2.b
                x12_12[5] = v5:2.b
                x12_12[6] = v4:3.b
                x12_12[7] = v5:3.b
                x12_12[8] = v4:4.b
                x12_12[9] = v5:4.b
                x12_12[0xa] = v4:5.b
                x12_12[0xb] = v5:5.b
                x12_12[0xc] = v4:6.b
                x12_12[0xd] = v5:6.b
                x12_12[0xe] = v4:7.b
                x12_12[0xf] = v5:7.b
                x12_12 = &x12_12[0x10]
            while (i_1 != -8)
            
            if (i_6 != entry_x2)
                goto label_d79ddc
    else
    label_d79dd4:
        i_6 = 0
    label_d79ddc:
        int64_t i_3 = entry_x2 - i_6
        void* x9_3 = &x9_1[(i_6 << 1) + 1]
        char* x10_1 = arg2 + i_6
        int64_t i_2
        
        do
            uint32_t x12_1 = zx.d(*x10_1)
            x10_1 = &x10_1[1]
            i_2 = i_3
            i_3 -= 1
            uint32_t x14_1 = x12_1 u>> 4
            int32_t x16_1 = (x14_1 - 0xa) s>> 7
            int32_t x16_2 = ((x12_1 & 0xf) - 0xa) s>> 7
            *(x9_3 - 1) =
                ((x14_1.b | 0x30) & x16_1.b) | (((x14_1 - 0xa).b + x8_2) & (not.d(x16_1)).b)
            *x9_3 = ((0x30 | (x12_1 & 0xf).b) & x16_2.b)
                | ((((x12_1 & 0xf) - 0xa).b + x8_2) & (not.d(x16_2)).b)
            x9_3 += 2
        while (i_2 != 1)

int64_t x9_4 = *(x19 + 0x50)
int64_t x20 = entry_x2 << 1

if (x9_4 == 0)
    if (*(x19 + 0x78) - *(x19 + 0x70) u>= x20)
        jump(*(*x19 + 0x38))
    
    char* x0_3
    uint8_t* x1_5
    uint64_t x2_2
    bool x3_1
    x0_3, x1_5, x2_2, x3_1 = Botan::assertion_failure("length <= in.size()", &data_793a18, "send", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x2d93)
    return Botan::hex_encode(x0_3, x1_5, x2_2, x3_1) __tailcall

if (x20 == 0)
    return 

int64_t x24_1 = 0
int64_t x8_4 = x9_4 - *(x19 + 0x90)
int64_t x22_1

x22_1 = x20 u< x8_4 ? x20 : x8_4

if (x22_1 != 0)
    goto label_d79e8c

while (true)
    x20 -= x22_1
    int64_t x8_15 = *(x19 + 0x90) + x22_1
    bool cond:2_1 = x8_15 != *(x19 + 0x50)
    *(x19 + 0x90) = x8_15
    int64_t var_60
    
    if (not(cond:2_1))
        var_60.b = 0xa
        (*(*x19 + 0x38))(x19, &var_60, 1)
        x8_15 = 0
        *(x19 + 0x90) = 0
    
    if (x20 == 0)
        return 
    
    x24_1 += x22_1
    int64_t x8_5 = *(x19 + 0x50) - x8_15
    
    x22_1 = x20 u< x8_5 ? x20 : x8_5
    
    if (x22_1 != 0)
    label_d79e8c:
        int64_t x8_6 = *(x19 + 0x20)
        int64_t x10_2 = *(x19 + 0x28)
        int64_t x23_1 = *(x19 + 0x70) + x24_1
        
        if (x10_2 != x8_6)
            int64_t x26_1 = 0
        label_d79ea8:
            int64_t x11_1 = x10_2 - x8_6
            int64_t x12_6
            
            x12_6 = x11_1 s>= 0 ? x11_1 : -1
            
            int64_t x10_3 = x8_6 - x10_2
            int64_t x12_7
            
            x12_7 = x12_6 s< 1 ? x12_6 : 1
            
            int64_t x10_4
            
            x10_4 = x10_3 s> x11_1 ? x10_3 : x11_1
            
        label_d79ed0:
            arg1 = *(x8_6 + (x26_1 << 3))
            
            if (arg1 != 0)
                if (*(x19 + 0x10) != *(x19 + 8))
                    (*(*arg1 + 8))()
                    arg1 = *(*(x19 + 0x20) + (x26_1 << 3))
                
                (*(*arg1 + 8))(arg1, x23_1, x22_1)
                x8_6 = *(x19 + 0x20)
                x10_2 = *(x19 + 0x28)
                int64_t x11_2 = x10_2 - x8_6
                int64_t x13_4
                
                x13_4 = x11_2 s>= 0 ? x11_2 : -1
                
                int64_t x12_8 = x8_6 - x10_2
                int64_t x13_5
                
                x13_5 = x13_4 s< 1 ? x13_4 : 1
                
                int64_t x11_3
                
                x11_3 = x12_8 s> x11_2 ? x12_8 : x11_2
                
                if (x13_5 * (x11_3 u>> 3) - 1 != x26_1)
                    break
                
                *(x19 + 0x10) = *(x19 + 8)
                continue
            else
                if (x12_7 * (x10_4 u>> 3) != x26_1 + 1)
                    break
                
                if (1 == 0)
                    *(x19 + 0x10) = *(x19 + 8)
                    continue
        
        var_60 = x23_1
        int64_t var_58_1 = x22_1
        Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&x19[8], &var_60)
