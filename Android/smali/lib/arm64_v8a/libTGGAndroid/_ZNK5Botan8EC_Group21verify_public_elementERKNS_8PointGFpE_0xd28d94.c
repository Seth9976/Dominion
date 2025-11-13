// 函数: _ZNK5Botan8EC_Group21verify_public_elementERKNS_8PointGFpE
// 地址: 0xd28d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::PointGFp* entry_x1
int64_t x8 = *(entry_x1 + 0x78)

if (x8 == -1)
    int64_t x9_1 = *(entry_x1 + 0x60)
    int64_t x11_1 = *(entry_x1 + 0x68)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        *(entry_x1 + 0x78) = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_8 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_8 << 2))
            i = i_8
            i_8 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        *(entry_x1 + 0x78) = x8_1
        
        if (x8_1 != 0)
            goto label_d28e30
else if (x8 != 0)
label_d28e30:
    
    if ((Botan::PointGFp::on_the_curve() & 1) != 0)
        Botan::operator*(Botan::EC_Group::data() + 0xe8, entry_x1)
        int64_t var_30
        
        if (var_30 == -1)
            int64_t var_48
            int64_t var_40
            int64_t x9_3 = var_40 - var_48
            
            if (var_40 == var_48)
                var_30 = 0
                Botan::PointGFp::~PointGFp()
            label_d28ef0:
                void* x0_4 = Botan::EC_Group::data()
                
                if (*(x0_4 + 0x130) == 0)
                    return 1
                
                int64_t i_5 = *(x0_4 + 0x128)
                
                if (i_5 == -1)
                    int64_t x9_6 = *(x0_4 + 0x110)
                    int64_t x11_8 = *(x0_4 + 0x118)
                    int64_t x10_7 = x11_8 - x9_6
                    
                    if (x11_8 == x9_6)
                        i_5 = 0
                    else
                        int64_t x12_6
                        
                        x12_6 = x10_7 s>= 0 ? x10_7 : -1
                        
                        int64_t x11_9 = x9_6 - x11_8
                        int64_t x12_7
                        
                        x12_7 = x12_6 s< 1 ? x12_6 : 1
                        
                        i_5 = x10_7 s>> 2
                        int64_t x10_8
                        
                        x10_8 = x11_9 s> x10_7 ? x11_9 : x10_7
                        
                        int64_t i_9 = x12_7 * (x10_8 u>> 2)
                        uint64_t x11_10 = 1
                        int64_t i_1
                        
                        do
                            int32_t x12_8 = *(x9_6 - 4 + (i_9 << 2))
                            i_1 = i_9
                            i_9 -= 1
                            x11_10 = zx.q(x11_10.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                            i_5 -= x11_10
                        while (i_1 != 1)
                    
                    *(x0_4 + 0x128) = i_5
                
                if (i_5 u<= 1)
                    if (i_5 == 0)
                        return 1
                    
                    int32_t* x9_8 = *(x0_4 + 0x110)
                    int32_t x10_10 = 0
                    int64_t i_2
                    
                    do
                        int32_t x11_11 = *x9_8
                        x9_8 = &x9_8[1]
                        i_2 = i_5
                        i_5 -= 1
                        int32_t x11_13 = (((x11_11 ^ 1) - 1) & not.d(x11_11)) s>> 0x1f
                        x10_10 = (x10_10 & x11_13)
                            | ((((x11_11 - 1) & not.d(x11_11)) s>> 0x1f | 1) & not.d(x11_13))
                    while (i_2 != 1)
                    
                    if (x10_10 s< 1)
                        return 1
                
                Botan::operator*(Botan::EC_Group::data() + 0x110, entry_x1)
                int64_t x19_1 = var_30
                
                if (x19_1 == -1)
                    int64_t x9_9 = var_40 - var_48
                    
                    if (var_40 == var_48)
                        x19_1 = 0
                    else
                        int64_t x11_14
                        
                        x11_14 = x9_9 s>= 0 ? x9_9 : -1
                        
                        int64_t x10_13 = var_48 - var_40
                        int64_t x11_15
                        
                        x11_15 = x11_14 s< 1 ? x11_14 : 1
                        
                        x19_1 = x9_9 s>> 2
                        int64_t x9_10
                        
                        x9_10 = x10_13 s> x9_9 ? x10_13 : x9_9
                        
                        int64_t i_7 = x11_15 * (x9_10 u>> 2)
                        uint64_t x10_14 = 1
                        int64_t i_3
                        
                        do
                            int32_t x11_16 = *(var_48 - 4 + (i_7 << 2))
                            i_3 = i_7
                            i_7 -= 1
                            x10_14 = zx.q(x10_14.d) & zx.q(((x11_16 - 1) & not.d(x11_16)) s>> 0x1f)
                            x19_1 -= x10_14
                        while (i_3 != 1)
                    
                    int64_t var_30_1 = x19_1
                
                Botan::PointGFp::~PointGFp()
                
                if (x19_1 != 0)
                    return 1
            else
                int64_t x11_4
                
                x11_4 = x9_3 s>= 0 ? x9_3 : -1
                
                int64_t x10_5 = var_48 - var_40
                int64_t x11_5
                
                x11_5 = x11_4 s< 1 ? x11_4 : 1
                
                int64_t x21_2 = x9_3 s>> 2
                int64_t x9_4
                
                x9_4 = x10_5 s> x9_3 ? x10_5 : x9_3
                
                int64_t i_6 = x11_5 * (x9_4 u>> 2)
                uint64_t x10_6 = 1
                int64_t i_4
                
                do
                    int32_t x11_6 = *(var_48 - 4 + (i_6 << 2))
                    i_4 = i_6
                    i_6 -= 1
                    x10_6 = zx.q(x10_6.d) & zx.q(((x11_6 - 1) & not.d(x11_6)) s>> 0x1f)
                    x21_2 -= x10_6
                while (i_4 != 1)
                var_30 = x21_2
                Botan::PointGFp::~PointGFp()
                
                if (x21_2 == 0)
                    goto label_d28ef0
        else
            Botan::PointGFp::~PointGFp()
            
            if (var_30 == 0)
                goto label_d28ef0

return 0
