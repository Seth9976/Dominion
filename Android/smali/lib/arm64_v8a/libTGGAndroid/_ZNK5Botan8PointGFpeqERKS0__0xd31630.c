// 函数: _ZNK5Botan8PointGFpeqERKS0_
// 地址: 0xd31630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *arg1
int64_t* entry_x1
int32_t x19_1

if (x0 == *entry_x1)
label_d316f8:
    int64_t x8_10 = *(arg1 + 0x78)
    
    if (x8_10 == -1)
        int64_t x9_9 = *(arg1 + 0x60)
        int64_t x11_1 = *(arg1 + 0x68)
        int64_t x10_1 = x11_1 - x9_9
        
        if (x11_1 != x9_9)
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_9 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            int64_t x8_14 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_2 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_9 - 4 + (i_2 << 2))
                i = i_2
                i_2 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                x8_14 -= x11_3
            while (i != 1)
            *(arg1 + 0x78) = x8_14
            
            if (x8_14 != 0)
                goto label_d31710
            
            goto label_d31810
        
        *(arg1 + 0x78) = 0
    label_d31810:
        int64_t x8_15 = entry_x1[0xf]
        
        if (x8_15 == -1)
            int64_t x9_11 = entry_x1[0xc]
            int64_t x11_4 = entry_x1[0xd]
            int64_t x10_4 = x11_4 - x9_11
            
            if (x11_4 == x9_11)
                x8_15 = 0
            else
                int64_t x12_5
                
                x12_5 = x10_4 s>= 0 ? x10_4 : -1
                
                int64_t x11_5 = x9_11 - x11_4
                int64_t x12_6
                
                x12_6 = x12_5 s< 1 ? x12_5 : 1
                
                x8_15 = x10_4 s>> 2
                int64_t x10_5
                
                x10_5 = x11_5 s> x10_4 ? x11_5 : x10_4
                
                int64_t i_3 = x12_6 * (x10_5 u>> 2)
                uint64_t x11_6 = 1
                int64_t i_1
                
                do
                    int32_t x12_7 = *(x9_11 - 4 + (i_3 << 2))
                    i_1 = i_3
                    i_3 -= 1
                    x11_6 = zx.q(x11_6.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
                    x8_15 -= x11_6
                while (i_1 != 1)
            
            entry_x1[0xf] = x8_15
        
        x19_1 = x8_15 == 0 ? 1 : 0
    else
        if (x8_10 == 0)
            goto label_d31810
        
    label_d31710:
        Botan::PointGFp::get_affine_x()
        Botan::PointGFp::get_affine_x()
        void* var_48
        void* var_70
        void* var_68_1
        int64_t var_60
        
        if ((Botan::BigInt::is_equal(&var_48) & 1) == 0)
            x19_1 = 0
            
            if (var_70 != 0)
                var_68_1 = var_70
                Botan::deallocate_memory(var_70, (var_60 - var_70) s>> 2, 4)
        else
            Botan::PointGFp::get_affine_y()
            Botan::PointGFp::get_affine_y()
            void* var_98
            x19_1 = Botan::BigInt::is_equal(&var_98)
            void* var_c0
            
            if (var_c0 != 0)
                void* var_b8_1 = var_c0
                int64_t var_b0
                Botan::deallocate_memory(var_c0, (var_b0 - var_c0) s>> 2, 4)
            
            void* x0_27 = var_98
            
            if (x0_27 != 0)
                void* var_90_1 = x0_27
                int64_t var_88
                Botan::deallocate_memory(x0_27, (var_88 - x0_27) s>> 2, 4)
            
            if (var_70 != 0)
                var_68_1 = var_70
                Botan::deallocate_memory(var_70, (var_60 - var_70) s>> 2, 4)
        void* x0_29 = var_48
        
        if (x0_29 != 0)
            void* var_40_1 = x0_29
            int64_t var_38
            Botan::deallocate_memory(x0_29, (var_38 - x0_29) s>> 2, 4)
else
    Botan::BigInt* x0_1 = (*(*x0 + 0x10))()
    int64_t* x8_3 = *entry_x1
    (*(*x8_3 + 0x10))(x8_3)
    
    if ((Botan::BigInt::is_equal(x0_1) & 1) == 0)
        x19_1 = 0
    else
        Botan::BigInt* x0_7 = (*(**arg1 + 0x18))()
        int64_t* x8_6 = *entry_x1
        (*(*x8_6 + 0x18))(x8_6)
        
        if ((Botan::BigInt::is_equal(x0_7) & 1) == 0)
            x19_1 = 0
        else
            Botan::BigInt* x0_13 = (*(**arg1 + 0x20))()
            int64_t* x8_9 = *entry_x1
            (*(*x8_9 + 0x20))(x8_9)
            
            if ((Botan::BigInt::is_equal(x0_13) & 1) != 0)
                goto label_d316f8
            
            x19_1 = 0

return zx.q(x19_1) & 1
