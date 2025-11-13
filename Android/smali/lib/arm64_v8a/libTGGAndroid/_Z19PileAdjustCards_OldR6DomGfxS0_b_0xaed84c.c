// 函数: _Z19PileAdjustCards_OldR6DomGfxS0_b
// 地址: 0xaed84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
int32_t i = *(arg1 + 0x70)
int32_t x22 = 0

while (i != 0)
    i = *(*(gDomClient + 0x205e0) + mulu.dp.d(i & 0xffff, 0x21d8) + 0x213c)
    x22 += 1

uint64_t result = PileIsStacked(zx.q(*(arg1 + 0x58)), zx.q(*(arg1 + 0x5c)), *(arg1 + 0x6c))

if ((result.d & 1) == 0)
    int32_t i_1 = *(arg1 + 0x70)
    
    if (i_1 != 0)
        int32_t x22_2 = x22 - 1
        
        do
            int64_t x8_4 = *(gDomClient + 0x205e0)
            uint64_t x9_3 = zx.q(i_1) & 0xffff
            result = x8_4 + mulu.dp.d(x9_3.d, 0x21d8)
            *(result + 0xb0) = x22_2
            *(result + 0xbc) = 0x100000001
            
            if (*(arg1 + 0x5c) == 0x3ea)
                void* x8_5 = x8_4 + x9_3 * 0x21d8
                *(x8_5 + 0xb8) = *(x8_5 + 0x98)
            
            i_1 = *(result + 0x213c)
            
            if (result != arg2)
                result = DomMove_Adjust(result, arg3 & 1)
            
            x22_2 -= 1
        while (i_1 != 0)
else
    int32_t i_2 = *(arg1 + 0x70)
    int32_t i_7
    
    if (i_2 == 0)
        i_7 = 0
    else
        i_7 = 0
        void var_3268
        void* x27_1 = &var_3268
        
        do
            void* x28_1 = *(gDomClient + 0x205e0) + mulu.dp.d(i_2 & 0xffff, 0x21d8)
            int32_t x0_2 = CardWhat(gDomClient + 0x20728, zx.q(*(x28_1 + 0x98)))
            *x27_1 = x28_1
            *(x27_1 - 8) = x0_2
            i_7 += 1
            *(x27_1 - 4) = *(x28_1 + 0xb8)
            i_2 = *(x28_1 + 0x213c)
            x27_1 += 0x10
        while (i_2 != 0)
    
    bool (* var_3ef0)(CardHandSortInfo const&, CardHandSortInfo const&) = SortHandCardInfo
    CardHandSortInfo var_3270
    result = std::__ndk1::__sort<bool (*&)(CardHandSortInfo const&, CardHandSortInfo const&), CardHandSortInfo*>(
        &var_3270, &var_3270 + (zx.q(i_7) << 4), &var_3ef0)
    
    if (i_7 != 0)
        int64_t x9_5 = 0
        int32_t x10_2 = 0
        uint64_t i_6 = zx.q(i_7)
        void var_4b70
        
        while (true)
            int32_t i_3 = *(&var_3270 + (x9_5 << 4))
            
            if (x10_2 s< 1)
            label_aed9f8:
                int64_t x14_1 = zx.q(x10_2) << 0x20 s>> 0x1e
                x10_2 += 1
                *(&var_3ef0 + x14_1) = i_3
                *(&var_4b70 + x14_1) = 1
                x9_5 += 1
                
                if (x9_5 == i_6)
                    break
            else
                uint64_t x15_1 = zx.q(x10_2)
                void* x14_2 = &var_4b70
                bool (** x16_1)(CardHandSortInfo const&, CardHandSortInfo const&) = &var_3ef0
                
                while (*x16_1 != i_3)
                    x14_2 += 4
                    uint64_t temp0_1 = x15_1
                    x15_1 -= 1
                    x16_1 += 4
                    
                    if (temp0_1 == 1)
                        goto label_aed9f8
                
                *x14_2 += 1
                x9_5 += 1
                
                if (x9_5 == i_6)
                    break
        
        if (i_6.d != 0)
            if (x10_2 s<= 0)
                int32_t x10_4 = 0
                int32_t x11_2 = 0
                CardHandSortInfo* x9_7 = &var_3270
                uint64_t i_4
                
                do
                    void* x12_1 = *(x9_7 + 8)
                    
                    if (x11_2 != *x9_7)
                        *(x12_1 + 0xb0) = x10_4
                        x10_4 += 1
                        int32_t var_4b74
                        *(x12_1 + 0xbc) = var_4b74
                        *(x12_1 + 0xc0) = var_4b74
                        x11_2 = *x9_7
                        
                        if (*(arg1 + 0x5c) == 0x3ea)
                            *(x12_1 + 0xb8) = *(x12_1 + 0x98)
                    else
                        *(x12_1 + 0xbc) = 0
                        *(x12_1 + 0xc0) = 0
                        *(x12_1 + 0xb0) = x10_4 - 1
                        
                        if (*(arg1 + 0x5c) == 0x3ea)
                            *(x12_1 + 0xb8) = *(x12_1 + 0x98)
                    
                    i_4 = i_6
                    i_6 -= 1
                    x9_7 += 0x10
                while (i_4 != 1)
            else
                int64_t x9_6 = 0
                int32_t x11_1 = 0
                int32_t x16_2 = 0
                
                do
                    void* x17_2 = &var_3270 + (x9_6 << 4)
                    result = zx.q(*x17_2)
                    void* x15_2 = *(x17_2 + 8)
                    
                    if (x16_2 != result.d)
                        int64_t x16_3 = 0
                        
                        while (*(&var_3ef0 + (x16_3 << 2)) != result.d)
                            x16_3 += 1
                            
                            if (zx.q(x10_2) == x16_3)
                                x16_3 = -1
                                break
                        
                        int32_t x16_5 = *(&var_4b70 + ((x16_3 & 0xffffffff) << 0x20 s>> 0x1e))
                        *(x15_2 + 0xb0) = x11_1
                        x11_1 += 1
                        *(x15_2 + 0xbc) = x16_5
                        *(x15_2 + 0xc0) = x16_5
                        x16_2 = *x17_2
                        
                        if (*(arg1 + 0x5c) == 0x3ea)
                            *(x15_2 + 0xb8) = *(x15_2 + 0x98)
                    else
                        *(x15_2 + 0xbc) = 0
                        *(x15_2 + 0xc0) = 0
                        *(x15_2 + 0xb0) = x11_1 - 1
                        
                        if (*(arg1 + 0x5c) == 0x3ea)
                            *(x15_2 + 0xb8) = *(x15_2 + 0x98)
                    
                    x9_6 += 1
                while (x9_6 != i_6)
    
    int32_t i_5 = *(arg1 + 0x70)
    
    while (i_5 != 0)
        result = *(gDomClient + 0x205e0) + mulu.dp.d(i_5 & 0xffff, 0x21d8)
        i_5 = *(result + 0x213c)
        
        if (result != arg2)
            result = DomMove_Adjust(result, arg3 & 1)

return result
