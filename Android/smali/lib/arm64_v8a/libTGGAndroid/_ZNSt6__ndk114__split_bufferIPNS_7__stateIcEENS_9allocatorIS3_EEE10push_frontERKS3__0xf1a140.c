// 函数: _ZNSt6__ndk114__split_bufferIPNS_7__stateIcEENS_9allocatorIS3_EEE10push_frontERKS3_
// 地址: 0xf1a140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_6 = arg1[1]
std::__ndk1::__state<char>* const& x19 = arg1
void* i_3

if (i_6 == *arg1)
    int64_t x25_1 = x19[2]
    int64_t x8_1 = x19[3]
    
    if (x25_1 u>= x8_1)
        int64_t x8_8
        
        if (x8_1 != i_6)
            x8_8 = (x8_1 - i_6) s>> 2
        else
            x8_8 = 1
        
        if (x8_8 u>> 0x3d != 0)
            sub_ef2a0c()
            noreturn
        
        uint64_t x24_1 = (x8_8 + 3) u>> 2
        int128_t v0_1
        int128_t v1_1
        arg1, v0_1, v1_1 = operator new(x8_8 << 3)
        i_3 = &arg1[x24_1]
        void* x10_2 = x25_1 - i_6
        void* i_4 = i_3
        
        if (x25_1 != i_6)
            void* x9_4
            
            x9_4 = x10_2 s>= 0 ? x10_2 : -ffffffffffffffff
            
            void* x12_1 = i_6 - x25_1
            void* x11_1
            
            x11_1 = x9_4 s< 1 ? x9_4 : 1
            
            void* x9_5
            
            x9_5 = x12_1 s> x10_2 ? x12_1 : x10_2
            
            i_4 = i_3 + x10_2
            void* i = i_3
            void* i_7 = i_6
            
            if (((x11_1 * (x9_5 u>> 3)) << 3) - 8 u< 0x18)
            label_f1a2d8:
                void* x10_3
                
                x10_3 = x12_1 s> x10_2 ? x12_1 : x10_2
                
                do
                    int64_t x11_2 = *i_7
                    i_7 += 8
                    *i = x11_2
                    i += 8
                while (arg1 + ((x11_1 * (x10_3 u>> 3)) << 3) + (x24_1 << 3) != i)
            else
                void* x14_1
                
                x14_1 = x10_2 s>= 0 ? x10_2 : -ffffffffffffffff
                
                void* x14_2
                
                x14_2 = x14_1 s< 1 ? x14_1 : 1
                
                void* x17_1
                
                x17_1 = x12_1 s> x10_2 ? x12_1 : x10_2
                
                int64_t x14_4 = (x14_2 * (x17_1 u>> 3)) << 3
                
                if (&arg1[x24_1] u< x14_4 + i_6)
                    i = i_3
                    i_7 = i_6
                
                if (&arg1[x24_1] u< x14_4 + i_6 && arg1 + x14_4 + (x24_1 << 3) u> i_6)
                    goto label_f1a2d8
                
                int64_t i_5 = (((((x11_1 * (x9_5 u>> 3)) << 3) - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                int64_t x14_5 = i_5 << 3
                void* x15_2 = i_6 + 0x10
                i = i_3 + x14_5
                i_7 = i_6 + x14_5
                void* x1_2 = &arg1[x24_1 + 2]
                int64_t i_2 = i_5
                int64_t i_1
                
                do
                    v0_1 = *(x15_2 - 0x10)
                    v1_1 = *x15_2
                    x15_2 += 0x20
                    i_1 = i_2
                    i_2 -= 4
                    *(x1_2 - 0x10) = v0_1
                    *x1_2 = v1_1
                    x1_2 += 0x20
                while (i_1 != 4)
                
                if (((((x11_1 * (x9_5 u>> 3)) << 3) - 8) u>> 3) + 1 != i_5)
                    goto label_f1a2d8
        
        *x19 = arg1
        x19[1] = i_3
        x19[2] = i_4
        x19[3] = &arg1[x8_8]
        
        if (i_6 != 0)
            operator delete(i_6)
            i_3 = x19[1]
    else
        int64_t x8_3 = (x8_1 - x25_1) s>> 3
        int64_t x8_4
        
        if (x8_3 + 1 s< 0)
            x8_4 = x8_3 + 2
        else
            x8_4 = x8_3 + 1
        
        int64_t x23_1 = x8_4 s>> 1
        size_t x2_1 = x25_1 - i_6
        i_3 = x25_1 + (x23_1 << 3)
        
        if (x25_1 != i_6)
            i_3 -= x2_1
            memmove(i_3, i_6, x2_1)
            x25_1 = x19[2]
        
        x19[1] = i_3
        x19[2] = x25_1 + (x23_1 << 3)
else
    i_3 = i_6

int64_t* entry_x1
*(i_3 - 8) = *entry_x1
x19[1] -= 8
