// 函数: _Z17AnimationFreeSetsP13StructureAnimb
// 地址: 0xc7873c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *(arg1 + 8)

if (result != 0)
    if ((arg2.d & 1) != 0)
        void* i
        
        do
            void** x8_7 = *result
            i = *(result + 8)
            void** x9_4 = *(*gpGameData + 8)
            
            if (x8_7[5].d == 2)
                *(arg1 + (sx.q(x8_7[6].d) << 4) + 0x38) = 0
                int64_t x10_8 = sx.q(*(arg1 + 0xc0))
                int32_t x11_2 = x8_7[6].d
                *(arg1 + 0xc0) = x10_8.d + 1
                *(arg1 + (x10_8 << 2) + 0xc4) = x11_2
            
            void* x11_1 = *x9_4
            *(x9_4 + 0x14) -= 1
            *x8_7 = x11_1
            *x9_4 = x8_7
            void* x8_1 = *(result + 0x10)
            void* __offset(StructureAnim, 0x8) x8_2
            
            if (x8_1 == 0)
                x8_2 = arg1 + 8
            else
                x8_2 = x8_1 + 8
            
            *x8_2 = *(result + 8)
            void* x8_3 = *(result + 8)
            void* __offset(StructureAnim, 0x10) x8_4
            
            if (x8_3 == 0)
                x8_4 = arg1 + 0x10
            else
                x8_4 = x8_3 + 0x10
            
            *x8_4 = *(result + 0x10)
            *(arg1 + 0x18) -= 1
            XPooledFree(result, 0x18)
            result = i
        while (i != 0)
    else
        void* i_1
        
        do
            void** x8_8 = *result
            i_1 = *(result + 8)
            int32_t x9_5 = x8_8[5].d
            bool z_1
            
            if (x9_5 != 2)
                z_1 = x9_5 == 4
            else
                z_1 = true
            
            if (not(z_1))
                void** x9_7 = *(*gpGameData + 8)
                void* x11_3 = *x9_7
                *(x9_7 + 0x14) -= 1
                *x8_8 = x11_3
                *x9_7 = x8_8
                void* x8_9 = *(result + 0x10)
                int64_t* x8_10
                
                if (x8_9 == 0)
                    x8_10 = arg1 + 8
                else
                    x8_10 = x8_9 + 8
                
                *x8_10 = *(result + 8)
                void* x8_11 = *(result + 8)
                void* __offset(StructureAnim, 0x10) x8_12
                
                if (x8_11 == 0)
                    x8_12 = arg1 + 0x10
                else
                    x8_12 = x8_11 + 0x10
                
                *x8_12 = *(result + 0x10)
                *(arg1 + 0x18) -= 1
                XPooledFree(result, 0x18)
            
            result = i_1
        while (i_1 != 0)

return result
