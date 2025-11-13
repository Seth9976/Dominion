// 函数: _ZNK5Botan8DL_Group21verify_public_elementERKNS_6BigIntE
// 地址: 0xd1201c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x0 = Botan::DL_Group::data()
void* x0_1 = Botan::DL_Group::data()
Botan::BigInt* entry_x1

if (*(entry_x1 + 0x20) != 0)
    int64_t i_5 = *(entry_x1 + 0x18)
    
    if (i_5 == -1)
        int64_t x9_1 = *entry_x1
        int64_t x11_1 = *(entry_x1 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_5 = 0
            *(entry_x1 + 0x18) = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_5 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_7 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_7 << 2))
                i = i_7
                i_7 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_5 -= x11_3
            while (i != 1)
            *(entry_x1 + 0x18) = i_5
            
            if (i_5 u> 1)
                goto label_d12134
        
    label_d120dc:
        
        if (i_5 != 0)
            int32_t* x9_3 = *entry_x1
            int32_t x10_4 = 0
            int64_t i_1
            
            do
                int32_t x11_4 = *x9_3
                x9_3 = &x9_3[1]
                i_1 = i_5
                i_5 -= 1
                int32_t x11_6 = (((x11_4 ^ 1) - 1) & not.d(x11_4)) s>> 0x1f
                x10_4 =
                    (x10_4 & x11_6) | ((((x11_4 - 1) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
            while (i_1 != 1)
            
            if (x10_4 s>= 1)
                goto label_d12134
    else
        if (i_5 u<= 1)
            goto label_d120dc
        
    label_d12134:
        
        if ((Botan::BigInt::cmp(entry_x1, x0.b) & 0x80000000) != 0)
            int64_t x8_1 = *(x0_1 + 0x40)
            
            if (x8_1 == -1)
                int64_t x9_4 = *(x0_1 + 0x28)
                int64_t x11_7 = *(x0_1 + 0x30)
                int64_t x10_6 = x11_7 - x9_4
                
                if (x11_7 == x9_4)
                    *(x0_1 + 0x40) = 0
                    return 1
                
                int64_t x12_10
                
                x12_10 = x10_6 s>= 0 ? x10_6 : -1
                
                int64_t x11_8 = x9_4 - x11_7
                int64_t x12_11
                
                x12_11 = x12_10 s< 1 ? x12_10 : 1
                
                int64_t x8_2 = x10_6 s>> 2
                int64_t x10_7
                
                x10_7 = x11_8 s> x10_6 ? x11_8 : x10_6
                
                int64_t i_8 = x12_11 * (x10_7 u>> 2)
                uint64_t x11_9 = 1
                int64_t i_2
                
                do
                    int32_t x12_12 = *(x9_4 - 4 + (i_8 << 2))
                    i_2 = i_8
                    i_8 -= 1
                    x11_9 = zx.q(x11_9.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                    x8_2 -= x11_9
                while (i_2 != 1)
                *(x0_1 + 0x40) = x8_2
                
                if (x8_2 == 0)
                    return 1
            else if (x8_1 == 0)
                return 1
            
            Botan::power_mod(entry_x1, x0_1 + 0x28, x0)
            int32_t* var_48
            int32_t var_28
            int64_t i_6
            
            if (var_28 != 0)
                int64_t i_10
                i_6 = i_10
                
                if (i_6 == -1)
                    int64_t var_40
                    void* x10_9 = var_40 - var_48
                    
                    if (var_40 == var_48)
                        i_6 = 0
                    else
                        void* x12_14
                        
                        x12_14 = x10_9 s>= 0 ? x10_9 : -ffffffffffffffff
                        
                        void* x11_11 = var_48 - var_40
                        void* x12_15
                        
                        x12_15 = x12_14 s< 1 ? x12_14 : 1
                        
                        i_6 = x10_9 s>> 2
                        void* x10_10
                        
                        x10_10 = x11_11 s> x10_9 ? x11_11 : x10_9
                        
                        int64_t i_9 = x12_15 * (x10_10 u>> 2)
                        uint64_t x11_12 = 1
                        int64_t i_3
                        
                        do
                            int32_t x12_16 = *(var_48 - 4 + (i_9 << 2))
                            i_3 = i_9
                            i_9 -= 1
                            x11_12 = zx.q(x11_12.d) & zx.q(((x12_16 - 1) & not.d(x12_16)) s>> 0x1f)
                            i_6 -= x11_12
                        while (i_3 != 1)
                    
                    int64_t i_11 = i_6
            
            int32_t x19_1
            
            if (var_28 == 0 || i_6 u> 1 || i_6 == 0)
                x19_1 = 0
            else
                int32_t* x9_8 = var_48
                int32_t x10_12 = 0
                int64_t i_4
                
                do
                    int32_t x11_13 = *x9_8
                    x9_8 = &x9_8[1]
                    i_4 = i_6
                    i_6 -= 1
                    int32_t x11_15 = (((x11_13 ^ 1) - 1) & not.d(x11_13)) s>> 0x1f
                    x10_12 = (x10_12 & x11_15)
                        | ((((x11_13 - 1) & not.d(x11_13)) s>> 0x1f | 1) & not.d(x11_15))
                while (i_4 != 1)
                x19_1 = x10_12 == 0 ? 1 : 0
            
            if (var_48 != 0)
                int32_t* var_40_1 = var_48
                int64_t var_38
                Botan::deallocate_memory(var_48, (var_38 - var_48) s>> 2, 4)
            
            if (x19_1 != 0)
                return 1

return 0
