// 函数: _ZNSt6__ndk16vectorIhN5Botan16secure_allocatorIhEEE8__appendEmRKh
// 地址: 0xf5aa84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(arg1 + 8)
int64_t x8 = *(arg1 + 0x10)
uint64_t x19 = arg1
char* entry_x2
int128_t v0

if (x8 - x23 u>= arg2)
    if (arg2 != 0)
        void* x8_3 = x23 + arg2
        
        if (arg2 u< 8 || (x23 u< &entry_x2[1] && x8_3 u> entry_x2))
            goto label_f5acbc
        
        void* i_10
        
        if (arg2 u>= 0x20)
            char temp0_3 = *entry_x2
            v0.b = temp0_3
            v0:1.b = temp0_3
            v0:2.b = temp0_3
            v0:3.b = temp0_3
            v0:4.b = temp0_3
            v0:5.b = temp0_3
            v0:6.b = temp0_3
            v0:7.b = temp0_3
            v0:8.b = temp0_3
            v0:9.b = temp0_3
            v0:0xa.b = temp0_3
            v0:0xb.b = temp0_3
            v0:0xc.b = temp0_3
            v0:0xd.b = temp0_3
            v0:0xe.b = temp0_3
            v0:0xf.b = temp0_3
            i_10 = arg2 & 0xffffffffffffffe0
            void* x10_1 = x23 + 0x10
            void* i_9 = i_10
            void* i
            
            do
                *(x10_1 - 0x10) = v0
                *x10_1 = v0
                i = i_9
                i_9 -= 0x20
                x10_1 += 0x20
            while (i != 0x20)
            
            if (i_10 != arg2)
                if ((arg2 & 0x18) != 0)
                    goto label_f5ac14
                
                x23 += i_10
            label_f5acbc:
                
                do
                    *x23 = *entry_x2
                    x23 += 1
                while (x8_3 != x23)
        else
            i_10 = nullptr
        label_f5ac14:
            void* x10_2 = arg2 & 0xfffffffffffffff8
            void* x11_3 = x23 + i_10
            x23 += x10_2
            void* i_5 = i_10 - x10_2
            void* i_1
            
            do
                char temp0_4 = *entry_x2
                v0.b = temp0_4
                v0:1.b = temp0_4
                v0:2.b = temp0_4
                v0:3.b = temp0_4
                v0:4.b = temp0_4
                v0:5.b = temp0_4
                v0:6.b = temp0_4
                v0:7.b = temp0_4
                i_1 = i_5
                i_5 += 8
                *x11_3 = v0.q
                x11_3 += 8
            while (i_1 != -8)
            
            if (x10_2 != arg2)
                goto label_f5acbc
        x23 = x8_3
    
    *(x19 + 8) = x23
else
    int64_t x25_1 = *x19
    void* x26_1 = x23 - x25_1
    void* x9_1 = x26_1 + arg2
    
    if (x26_1 + arg2 s< 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x8_1 = x8 - x25_1
    int64_t x11_1 = x8_1 << 1
    int64_t x9_2
    
    x9_2 = x11_1 u< x9_1 ? x9_1 : x11_1
    
    int64_t x22_1
    
    x22_1 = x8_1 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
    
    void* x8_2
    int64_t x24_1
    
    if (x22_1 != 0)
        arg1, v0 = Botan::allocate_memory(x22_1, 1)
        x8_2 = arg1 + x26_1
        x24_1 = x8_2 + arg2
        
        if (arg2 u>= 8)
            goto label_f5ab5c
        
        goto label_f5ab04
    
    arg1 = 0
    x8_2 = x26_1
    x24_1 = x8_2 + arg2
    void* x9_5
    
    if (arg2 u< 8)
    label_f5ab04:
        x9_5 = x8_2
    label_f5ac50:
        void* i_7 = arg1 + arg2 + x23 - x9_5 - x25_1
        void* i_2
        
        do
            i_2 = i_7
            i_7 -= 1
            *x9_5 = *entry_x2
            x9_5 += 1
        while (i_2 != 1)
    else
    label_f5ab5c:
        
        if (x8_2 u< &entry_x2[1])
            x9_5 = x8_2
        
        if (x8_2 u< &entry_x2[1] && x24_1 u> entry_x2)
            goto label_f5ac50
        
        void* i_11
        
        if (arg2 u>= 0x20)
            char temp0_1 = *entry_x2
            v0.b = temp0_1
            v0:1.b = temp0_1
            v0:2.b = temp0_1
            v0:3.b = temp0_1
            v0:4.b = temp0_1
            v0:5.b = temp0_1
            v0:6.b = temp0_1
            v0:7.b = temp0_1
            v0:8.b = temp0_1
            v0:9.b = temp0_1
            v0:0xa.b = temp0_1
            v0:0xb.b = temp0_1
            v0:0xc.b = temp0_1
            v0:0xd.b = temp0_1
            v0:0xe.b = temp0_1
            v0:0xf.b = temp0_1
            i_11 = arg2 & 0xffffffffffffffe0
            void* x9_7 = x26_1 + arg1 + 0x10
            void* i_8 = i_11
            void* i_3
            
            do
                *(x9_7 - 0x10) = v0
                *x9_7 = v0
                i_3 = i_8
                i_8 -= 0x20
                x9_7 += 0x20
            while (i_3 != 0x20)
            
            if (i_11 != arg2)
                if ((arg2 & 0x18) != 0)
                    goto label_f5abb0
                
                x9_5 = x8_2 + i_11
                goto label_f5ac50
        else
            i_11 = nullptr
        label_f5abb0:
            char temp0_2 = *entry_x2
            v0.b = temp0_2
            v0:1.b = temp0_2
            v0:2.b = temp0_2
            v0:3.b = temp0_2
            v0:4.b = temp0_2
            v0:5.b = temp0_2
            v0:6.b = temp0_2
            v0:7.b = temp0_2
            void* x11_2 = arg2 & 0xfffffffffffffff8
            x9_5 = x8_2 + x11_2
            void* x12_3 = arg1 + i_11 + x23 - x25_1
            void* i_6 = i_11 - x11_2
            void* i_4
            
            do
                i_4 = i_6
                i_6 += 8
                *x12_3 = v0.q
                x12_3 += 8
            while (i_4 != -8)
            
            if (x11_2 != arg2)
                goto label_f5ac50
    void* x20_1 = *x19
    size_t x2 = *(x19 + 8) - x20_1
    void* x21_1 = x8_2 - x2
    
    if (x2 s>= 1)
        memcpy(x21_1, x20_1, x2)
    
    int64_t x8_4 = *(x19 + 0x10)
    *x19 = x21_1
    *(x19 + 8) = x24_1
    *(x19 + 0x10) = arg1 + x22_1
    
    if (x20_1 != 0)
        Botan::deallocate_memory(x20_1, x8_4 - x20_1, 1)
