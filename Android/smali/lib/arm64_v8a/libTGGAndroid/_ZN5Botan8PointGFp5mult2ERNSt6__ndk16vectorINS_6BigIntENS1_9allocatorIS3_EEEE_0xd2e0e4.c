// 函数: _ZN5Botan8PointGFp5mult2ERNSt6__ndk16vectorINS_6BigIntENS1_9allocatorIS3_EEEE
// 地址: 0xd2e0e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x78)

if (x8 == -1)
    int64_t x9_1 = *(arg1 + 0x60)
    int64_t x11_1 = *(arg1 + 0x68)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        *(arg1 + 0x78) = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_3 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        *(arg1 + 0x78) = x8_1
        
        if (x8_1 != 0)
            goto label_d2e18c
else if (x8 != 0)
label_d2e18c:
    int64_t x8_2 = *(arg1 + 0x50)
    
    if (x8_2 == -1)
        int64_t x9_12 = *(arg1 + 0x38)
        int64_t x11_4 = *(arg1 + 0x40)
        int64_t x10_5 = x11_4 - x9_12
        
        if (x11_4 != x9_12)
            int64_t x12_5
            
            x12_5 = x10_5 s>= 0 ? x10_5 : -1
            
            int64_t x11_5 = x9_12 - x11_4
            int64_t x12_6
            
            x12_6 = x12_5 s< 1 ? x12_5 : 1
            
            int64_t x8_6 = x10_5 s>> 2
            int64_t x10_6
            
            x10_6 = x11_5 s> x10_5 ? x11_5 : x10_5
            
            int64_t i_4 = x12_6 * (x10_6 u>> 2)
            uint64_t x11_6 = 1
            int64_t i_1
            
            do
                int32_t x12_7 = *(x9_12 - 4 + (i_4 << 2))
                i_1 = i_4
                i_4 -= 1
                x11_6 = zx.q(x11_6.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
                x8_6 -= x11_6
            while (i_1 != 1)
            *(arg1 + 0x50) = x8_6
            
            if (x8_6 != 0)
                goto label_d2e1a8
            
            goto label_d2e2a0
        
        *(arg1 + 0x50) = 0
    label_d2e2a0:
        int64_t var_e8
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = Botan::PointGFp::PointGFp(&var_e8)
        
        if (&var_e8 != arg1)
            int64_t x11_7 = *arg1
            int64_t x9_14 = *(arg1 + 8)
            *arg1 = var_e8
            int64_t var_e0
            *(arg1 + 8) = var_e0
            var_e8 = x11_7
            int64_t var_e0_1 = x9_14
            v1_1 = *(arg1 + 0x10)
            int128_t var_d8
            *(arg1 + 0x10) = var_d8
            int128_t var_d8_1 = v1_1
            int64_t x11_8 = *(arg1 + 0x20)
            int64_t x9_15 = *(arg1 + 0x28)
            int64_t var_c8
            *(arg1 + 0x20) = var_c8
            int64_t var_c0
            *(arg1 + 0x28) = var_c0
            int64_t var_c8_1 = x11_8
            int64_t var_c0_1 = x9_15
            int32_t x9_16 = *(arg1 + 0x30)
            int32_t var_b8
            *(arg1 + 0x30) = var_b8
            int32_t var_b8_1 = x9_16
            v1_1 = *(arg1 + 0x38)
            int128_t var_b0
            *(arg1 + 0x38) = var_b0
            int128_t var_b0_1 = v1_1
            int64_t x11_9 = *(arg1 + 0x48)
            int64_t x9_17 = *(arg1 + 0x50)
            int64_t var_a0
            *(arg1 + 0x48) = var_a0
            int64_t var_98
            *(arg1 + 0x50) = var_98
            int64_t var_a0_1 = x11_9
            int64_t var_98_1 = x9_17
            int32_t x9_18 = *(arg1 + 0x58)
            int32_t var_90
            *(arg1 + 0x58) = var_90
            int32_t var_90_1 = x9_18
            v1_1 = *(arg1 + 0x60)
            int128_t var_88
            *(arg1 + 0x60) = var_88
            int128_t var_88_1 = v1_1
            int64_t x11_10 = *(arg1 + 0x70)
            int64_t x9_19 = *(arg1 + 0x78)
            int64_t var_78
            *(arg1 + 0x70) = var_78
            int64_t var_70
            *(arg1 + 0x78) = var_70
            int64_t var_78_1 = x11_10
            int64_t var_70_1 = x9_19
            int32_t x9_20 = *(arg1 + 0x80)
            int32_t var_68
            *(arg1 + 0x80) = var_68
            int32_t var_68_1 = x9_20
        
        Botan::PointGFp::~PointGFp()
    else
        if (x8_2 == 0)
            goto label_d2e2a0
        
    label_d2e1a8:
        int64_t x0_1 = (*(**arg1 + 0x30))()
        int64_t* entry_x1
        void* x20_1 = *entry_x1
        void* x8_5 = entry_x1[1]
        uint32_t* x0_42
        uint64_t x1_31
        uint32_t* x2_26
        uint64_t x3_20
        uint32_t* x4_13
        uint64_t x5_6
        std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* x6
        
        if (((x8_5 - x20_1) s>> 3) * -0x3333333333333333 u< 8)
            x0_42, x1_31, x2_26, x3_20, x4_13, x5_6, x6 = Botan::assertion_failure(
                "ws_bn.size() >= PointGFp::WORKSPACE_SIZE", "Expected size for PointGFp workspace", 
                "resize_ws", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x70dc)
            return Botan::PointGFp::add(x0_42, x1_31, x2_26, x3_20, x4_13, x5_6, x6) __tailcall
        
        if (x8_5 == x20_1)
            x20_1 = x8_5
        else
            int64_t x23_1 = 0
            int64_t i_2 = 0
            
            do
                int64_t* x0_2 = x20_1 + x23_1
                
                if (x0_1 u> (x0_2[1] - *x0_2) s>> 2)
                    x0_2[3] = -1
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        x0_2)
                    x20_1 = *entry_x1
                    x8_5 = entry_x1[1]
                
                i_2 += 1
                x23_1 += 0x28
            while (i_2 != ((x8_5 - x20_1) s>> 3) * -0x3333333333333333)
        
        *(x20_1 + 0x18) = -1
        *(*entry_x1 + 0x40) = -1
        void* x24_1 = *entry_x1
        void* fp_1 = x24_1 + 0x50
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x0_5 =
            (*(**arg1 + 0x10))()
        int64_t* x0_6 = *arg1
        int64_t x2_1 = *(arg1 + 0x38)
        (*(*x0_6 + 0x88))(x0_6, fp_1, x2_1, (*(arg1 + 0x40) - x2_1) s>> 2, x20_1)
        int64_t x2_2 = *(arg1 + 0x10)
        int64_t* x0_7 = *arg1
        (*(*x0_7 + 0x80))(x0_7, x24_1 + 0x78, x2_2, (*(arg1 + 0x18) - x2_2) s>> 2, fp_1, x20_1)
        
        if (*(x24_1 + 0x98) == 0)
        label_d2e84c:
            Botan::throw_invalid_argument("*this must be positive", "mod_mul", 
                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
            x0_42, x1_31, x2_26, x3_20, x4_13, x5_6, x6 = Botan::assertion_failure(
                "ws_bn.size() >= PointGFp::WORKSPACE_SIZE", "Expected size for PointGFp workspace", 
                "resize_ws", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x70dc)
            return Botan::PointGFp::add(x0_42, x1_31, x2_26, x3_20, x4_13, x5_6, x6) __tailcall
        
        Botan::BigInt::reduce_below(Botan::BigInt::operator*=((x24_1 + 0x78).d), x0_5)
        int32_t x0_11 = (*(**arg1 + 0x40))()
        int64_t* x8_23 = *arg1
        
        if ((x0_11 & 1) == 0)
            int32_t x0_14 = (*(*x8_23 + 0x48))(x8_23)
            int64_t* x0_15 = *arg1
            int64_t x2_5 = *(arg1 + 0x60)
            (*(*x0_15 + 0x88))(x0_15, x24_1 + 0xc8, x2_5, (*(arg1 + 0x68) - x2_5) s>> 2, x20_1)
            
            if ((x0_14 & 1) == 0)
                int64_t* x0_22 = *arg1
                int64_t x2_11 = *(x24_1 + 0xc8)
                (*(*x0_22 + 0x88))(x0_22, x24_1 + 0xf0, x2_11, (*(x24_1 + 0xd0) - x2_11) s>> 2, 
                    x20_1)
                int64_t* x0_24 = (*(**arg1 + 0x50))()
                int64_t* x8_36 = *arg1
                int64_t x2_12 = *x0_24
                (*(*x8_36 + 0x80))(x8_36, x24_1 + 0xc8, x2_12, (x0_24[1] - x2_12) s>> 2, 
                    x24_1 + 0xf0, x20_1)
                int64_t* x0_26 = *arg1
                int64_t x2_13 = *(arg1 + 0x10)
                (*(*x0_26 + 0x88))(x0_26, x24_1 + 0xf0, x2_13, (*(arg1 + 0x18) - x2_13) s>> 2, 
                    x20_1)
                
                if (*(x24_1 + 0x110) == 0)
                    goto label_d2e84c
                
                Botan::BigInt::reduce_below(Botan::BigInt::operator*=((x24_1 + 0xf0).d), x0_5)
                Botan::BigInt::mod_add(x24_1 + 0xf0, x24_1 + 0xc8, x0_5)
            else
                if (x24_1 + 0xa0 != arg1 + 0x10)
                    *(arg1 + 0x18)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                        x24_1 + 0xa0, *(arg1 + 0x10))
                
                *(x24_1 + 0xb8) = *(arg1 + 0x28)
                *(x24_1 + 0xc0) = *(arg1 + 0x30)
                Botan::BigInt::mod_sub(x24_1 + 0xa0, x24_1 + 0xc8, x0_5)
                Botan::BigInt::mod_add(x24_1 + 0xc8, arg1 + 0x10, x0_5)
                int64_t* x0_19 = *arg1
                int64_t x2_9 = *(x24_1 + 0xa0)
                (*(*x0_19 + 0x80))(x0_19, x24_1 + 0xf0, x2_9, (*(x24_1 + 0xa8) - x2_9) s>> 2, 
                    x24_1 + 0xc8, x20_1)
                
                if (*(x24_1 + 0x110) == 0)
                    goto label_d2e84c
                
                Botan::BigInt::reduce_below(Botan::BigInt::operator*=((x24_1 + 0xf0).d), x0_5)
        else
            int64_t x2_4 = *(arg1 + 0x10)
            (*(*x8_23 + 0x88))(x8_23, x24_1 + 0xf0, x2_4, (*(arg1 + 0x18) - x2_4) s>> 2, x20_1)
            
            if (*(x24_1 + 0x110) == 0)
                goto label_d2e84c
            
            Botan::BigInt::reduce_below(Botan::BigInt::operator*=((x24_1 + 0xf0).d), x0_5)
        
        int64_t* x0_30 = *arg1
        int64_t x2_16 = *(x24_1 + 0xf0)
        (*(*x0_30 + 0x88))(x0_30, x24_1 + 0xa0, x2_16, (*(x24_1 + 0xf8) - x2_16) s>> 2, x20_1)
        Botan::BigInt::mod_sub(Botan::BigInt::mod_sub(x24_1 + 0xa0, x24_1 + 0x78, x0_5), 
            x24_1 + 0x78, x0_5)
        int64_t* x0_33 = *arg1
        int64_t x2_19 = *(x24_1 + 0x50)
        (*(*x0_33 + 0x88))(x0_33, x24_1 + 0xc8, x2_19, (*(x24_1 + 0x58) - x2_19) s>> 2, x20_1)
        
        if (*(x24_1 + 0xe8) == 0)
            goto label_d2e84c
        
        Botan::BigInt::reduce_below(Botan::BigInt::operator*=((x24_1 + 0xc8).d), x0_5)
        Botan::BigInt::mod_sub(x24_1 + 0x78, x24_1 + 0xa0, x0_5)
        int64_t* x0_37 = *arg1
        int64_t x2_22 = *(x24_1 + 0xf0)
        (*(*x0_37 + 0x80))(x0_37, fp_1, x2_22, (*(x24_1 + 0xf8) - x2_22) s>> 2, x24_1 + 0x78, x20_1)
        Botan::BigInt::mod_sub(fp_1, x24_1 + 0xc8, x0_5)
        int64_t x9_45 = *(arg1 + 0x10)
        *(arg1 + 0x10) = *(x24_1 + 0xa0)
        *(x24_1 + 0xa0) = x9_45
        int64_t x9_46 = *(arg1 + 0x18)
        *(arg1 + 0x18) = *(x24_1 + 0xa8)
        *(x24_1 + 0xa8) = x9_46
        int64_t x9_47 = *(arg1 + 0x20)
        *(arg1 + 0x20) = *(x24_1 + 0xb0)
        *(x24_1 + 0xb0) = x9_47
        int64_t x9_48 = *(arg1 + 0x28)
        *(arg1 + 0x28) = *(x24_1 + 0xb8)
        *(x24_1 + 0xb8) = x9_48
        int32_t x9_49 = *(arg1 + 0x30)
        *(arg1 + 0x30) = *(x24_1 + 0xc0)
        *(x24_1 + 0xc0) = x9_49
        int64_t* x0_39 = *arg1
        int64_t x2_24 = *(arg1 + 0x38)
        (*(*x0_39 + 0x80))(x0_39, x24_1 + 0xa0, x2_24, (*(arg1 + 0x40) - x2_24) s>> 2, arg1 + 0x60, 
            x20_1)
        
        if (*(x24_1 + 0xc0) == 0)
            goto label_d2e84c
        
        Botan::BigInt::reduce_below(Botan::BigInt::operator*=((x24_1 + 0xa0).d), x0_5)
        int64_t x9_52 = *(arg1 + 0x38)
        *(arg1 + 0x38) = *(x24_1 + 0x50)
        *(x24_1 + 0x50) = x9_52
        int64_t x9_53 = *(arg1 + 0x40)
        *(arg1 + 0x40) = *(x24_1 + 0x58)
        *(x24_1 + 0x58) = x9_53
        int64_t x9_54 = *(arg1 + 0x48)
        *(arg1 + 0x48) = *(x24_1 + 0x60)
        *(x24_1 + 0x60) = x9_54
        int64_t x9_55 = *(arg1 + 0x50)
        *(arg1 + 0x50) = *(x24_1 + 0x68)
        *(x24_1 + 0x68) = x9_55
        int32_t x9_56 = *(arg1 + 0x58)
        *(arg1 + 0x58) = *(x24_1 + 0x70)
        *(x24_1 + 0x70) = x9_56
        int64_t x9_57 = *(arg1 + 0x60)
        *(arg1 + 0x60) = *(x24_1 + 0xa0)
        *(x24_1 + 0xa0) = x9_57
        int64_t x9_58 = *(arg1 + 0x68)
        *(arg1 + 0x68) = *(x24_1 + 0xa8)
        *(x24_1 + 0xa8) = x9_58
        int64_t x9_59 = *(arg1 + 0x70)
        *(arg1 + 0x70) = *(x24_1 + 0xb0)
        *(x24_1 + 0xb0) = x9_59
        int64_t x9_60 = *(arg1 + 0x78)
        *(arg1 + 0x78) = *(x24_1 + 0xb8)
        *(x24_1 + 0xb8) = x9_60
        int32_t x9_61 = *(arg1 + 0x80)
        *(arg1 + 0x80) = *(x24_1 + 0xc0)
        *(x24_1 + 0xc0) = x9_61
