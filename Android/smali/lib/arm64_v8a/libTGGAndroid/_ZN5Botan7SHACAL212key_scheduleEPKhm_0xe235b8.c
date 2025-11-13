// 函数: _ZN5Botan7SHACAL212key_scheduleEPKhm
// 地址: 0xe235b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)
int64_t entry_x2
uint64_t x23

if (result == x8)
    result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
    x23 = entry_x2 u>> 2
    
    if (x23 != 0)
    label_e23610:
        int32_t* x20_1 = *(arg1 + 8)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        result, v0_1, v1_1, v2_1, v3_1 = memcpy(x20_1, arg2, entry_x2 & 0xfffffffffffffffc)
        int64_t x9_1 = x23 & 0x3ffffffffffffffc
        uint64_t i_5 = entry_x2 u>> 2 & 3
        
        if (x9_1 != 0)
            int64_t x10_1 = 0
            
            if (x9_1 == 4)
            label_e236d4:
                int64_t i_6 = x10_1 - x9_1
                void* x10_4 = &x20_1[x10_1 + 2]
                int64_t i
                
                do
                    int32_t x13_3 = *(x10_4 - 4)
                    int32_t x14_4 = *x10_4
                    int32_t x15_2 = *(x10_4 + 4)
                    i = i_6
                    i_6 += 4
                    int32_t temp0_1 = _byteswap(*(x10_4 - 8))
                    int32_t temp0_2 = _byteswap(x13_3)
                    int32_t temp0_3 = _byteswap(x14_4)
                    int32_t temp0_4 = _byteswap(x15_2)
                    *(x10_4 - 8) = temp0_1
                    *(x10_4 - 4) = temp0_2
                    *x10_4 = temp0_3
                    *(x10_4 + 4) = temp0_4
                    x10_4 += 0x10
                while (i != -4)
            else
                int32_t x12_1 = 0 != (x9_1 - 4) u>> 0x3e ? 1 : 0
                result = zx.q(&x20_1[x9_1 - 1] u< &x20_1[3] ? 1 : 0)
                
                if ((result.d & 1) != 0 || (x12_1 & 1) != 0 || &x20_1[x9_1 - 2] u< &x20_1[2]
                        || (x12_1 & 1) != 0 || &x20_1[x9_1 - 3] u< &x20_1[1] || (x12_1 & 1) != 0
                        || &x20_1[x9_1 - 4] u< x20_1 || (x12_1 & 1) != 0)
                    goto label_e236d4
                
                int64_t i_8 = (((x9_1 - 4) u>> 2) + 1) & 0x7ffffffffffffffe
                x10_1 = i_8 << 2
                int64_t i_7 = i_8
                int32_t* x14_3 = x20_1
                int64_t i_1
                
                do
                    v0_1.d = *x14_3
                    v1_1.d = x14_3[1]
                    v2_1.d = x14_3[2]
                    v3_1.d = x14_3[3]
                    v0_1:4.d = x14_3[4]
                    v1_1:4.d = x14_3[5]
                    v2_1:4.d = x14_3[6]
                    v3_1:4.d = x14_3[7]
                    i_1 = i_7
                    i_7 -= 2
                    uint64_t v4_1 = vrev32_s8(v0_1)
                    uint64_t v5_1 = vrev32_s8(v1_1)
                    uint64_t v6_1 = vrev32_s8(v2_1)
                    uint64_t v7_1 = vrev32_s8(v3_1)
                    *x14_3 = v4_1.d
                    x14_3[1] = v5_1.d
                    x14_3[2] = v6_1.d
                    x14_3[3] = v7_1.d
                    x14_3[4] = v4_1:4.d
                    x14_3[5] = v5_1:4.d
                    x14_3[6] = v6_1:4.d
                    x14_3[7] = v7_1:4.d
                    x14_3 = &x14_3[8]
                while (i_1 != 2)
                
                if (((x9_1 - 4) u>> 2) + 1 != i_8)
                    goto label_e236d4
        
        if (i_5 != 0)
            void* x9_2 = &x20_1[x9_1]
            uint64_t i_2
            
            do
                i_2 = i_5
                i_5 -= 1
                *x9_2 = _byteswap(*x9_2)
                x9_2 += 4
            while (i_2 != 1)
else
    if (x8 != result)
        result = memset(result, 0, x8 - result)
    
    x23 = entry_x2 u>> 2
    
    if (x23 != 0)
        goto label_e23610

for (int64_t i_3 = 0; i_3 != 0xc0; )
    int32_t* x9_4 = *(arg1 + 8) + i_3
    int32_t x10_7 = x9_4[1]
    int32_t x11_3 = x9_4[0xe]
    i_3 += 4
    x9_4[0x10] = (ror.d(x10_7, 7) ^ ror.d(x10_7, 0x12) ^ x10_7 u>> 3) + *x9_4 + x9_4[9]
        + (ror.d(x11_3, 0x11) ^ ror.d(x11_3, 0x13) ^ x11_3 u>> 0xa)

for (int64_t i_4 = 0; i_4 != 0x100; i_4 += 4)
    int32_t* x10_12 = *(arg1 + 8)
    *(x10_12 + i_4) += *(&data_83ae18 + i_4)

return result
