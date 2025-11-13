// 函数: _ZNSt6__ndk15dequeIhNS_9allocatorIhEEE5eraseENS_16__deque_iteratorIhPKhRS5_PKS6_lLl4096EEESA_
// 地址: 0xe70130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
int64_t x9 = entry_x2
int64_t* x8 = arg2
void* x19 = arg1
int64_t entry_x4
int64_t x22
int64_t* entry_x3

if (entry_x4 == entry_x2)
    x22 = 0
else
    x22 = entry_x4 + ((entry_x3 - x8) << 9) - (x9 + *entry_x3) + *x8
int64_t i = *(x19 + 0x20)
int64_t* x10_4 = *(x19 + 8)
int64_t x12_2 = *(x19 + 0x10)
int64_t* x0 = x10_4 + (i u>> 9 & 0x7ffffffffffff8)
int64_t x1

if (x12_2 != x10_4)
    x1 = *x0 + (i & 0xfff)
    
    if (x9 == x1)
        goto label_e70204
    
    goto label_e701ac

x1 = 0
int64_t x20
int32_t x21
void* x8_5

if (x9 != 0)
label_e701ac:
    int64_t x14_2 = *x0
    int64_t x8_2 = x9 + ((x8 - x0) << 9) - x1 - *x8
    x20 = x8_2 + x14_2
    
    if (x8_2 == neg.q(x14_2))
        x21 = 1
        x9 = x1
        x8_5 = x0
        
        if (x22 s>= 1)
            goto label_e70274
    else
        int64_t x9_3 = x8_2 + x1
        
        if (x9_3 s< 1)
            int64_t x9_5
            
            if (0xfff - x9_3 s< 0)
                x9_5 = 0x1ffe - x9_3
            else
                x9_5 = 0xfff - x9_3
            
            x8_5 = x0 - (x9_5 s>> 0xc << 3)
            x21 = 0
            x9 = *x8_5 + (x9_5 & 0xfffffffffffff000) - (0xfff - x9_3) + 0xfff
            
            if (x22 s>= 1)
                goto label_e70274
        else
            x8_5 = x0 + (x9_3 u>> 9 & 0x7ffffffffffff8)
            x21 = 0
            x9 = *x8_5 + (x9_3 & 0xfff)
            
            if (x22 s>= 1)
                goto label_e70274
else
label_e70204:
    x20 = 0
    x21 = 1
    x8_5 = x0
    
    if (x22 s>= 1)
    label_e70274:
        int64_t x13_6 = *(x19 + 0x28)
        int64_t x14_6 = x9 - *x8_5 + x22
        
        if (x20 u<= (x13_6 - x22) u>> 1)
            void* x4
            int64_t x5_1
            
            if (x14_6 s< 1)
                int64_t x11_7
                
                if (0xfff - x14_6 s< 0)
                    x11_7 = 0x1ffe - x14_6
                else
                    x11_7 = 0xfff - x14_6
                
                x4 = x8_5 - (x11_7 s>> 0xc << 3)
                x5_1 = *x4 + (x11_7 & 0xfffffffffffff000) - (0xfff - x14_6) + 0xfff
            else
                x4 = x8_5 + (x14_6 u>> 9 & 0x7ffffffffffff8)
                x5_1 = *x4 + (x14_6 & 0xfff)
            
            std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l> std::__ndk1::move_backward<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l, unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>(std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>, std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>, std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>)(
                x0, x1, x8_5, x9, x4, x5_1)
            x10_4 = *(x19 + 8)
            int64_t x8_9 = *(x19 + 0x28) - x22
            i = *(x19 + 0x20) + x22
            *(x19 + 0x20) = i
            *(x19 + 0x28) = x8_9
            
            while (i u>= 0x2000)
                operator delete(*x10_4)
                i = *(x19 + 0x20) - 0x1000
                x10_4 = *(x19 + 8) + 8
                *(x19 + 8) = x10_4
                *(x19 + 0x20) = i
        else
            void* x0_1
            int64_t x1_1
            
            if (x14_6 s< 1)
                int64_t x14_9
                
                if (0xfff - x14_6 s< 0)
                    x14_9 = 0x1ffe - x14_6
                else
                    x14_9 = 0xfff - x14_6
                
                x0_1 = x8_5 - (x14_9 s>> 0xc << 3)
                x1_1 = *x0_1 + (x14_9 & 0xfffffffffffff000) - (0xfff - x14_6) + 0xfff
            else
                x0_1 = x8_5 + (x14_6 u>> 9 & 0x7ffffffffffff8)
                x1_1 = *x0_1 + (x14_6 & 0xfff)
            
            int64_t x11_4 = x13_6 + i
            void* x2 = x10_4 + (x11_4 u>> 9 & 0x7ffffffffffff8)
            int64_t x3
            
            if (x12_2 == x10_4)
                x3 = 0
            else
                x3 = *x2 + (x11_4 & 0xfff)
            
            std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l> std::__ndk1::move<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l, unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>(std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>, std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>, std::__ndk1::__deque_iterator<unsigned char, unsigned char*, unsigned char&, unsigned char**, long, 4096l>)(
                x0_1, x1_1, x2, x3, x8_5, x9)
            x10_4 = *(x19 + 8)
            void* x8_11 = *(x19 + 0x10)
            i = *(x19 + 0x20)
            int64_t x9_12 = *(x19 + 0x28) - x22
            int64_t x12_8
            
            if (x8_11 == x10_4)
                x12_8 = 0
            else
                x12_8 = ((x8_11 - x10_4) << 9) - 1
            
            *(x19 + 0x28) = x9_12
            
            if (x12_8 - (x9_12 + i) u>= 0x2000)
                uint64_t i_1
                
                do
                    operator delete(*(x8_11 - 8))
                    x10_4 = *(x19 + 8)
                    i = *(x19 + 0x20)
                    x8_11 = *(x19 + 0x10) - 8
                    int64_t x12_13
                    
                    if (x8_11 == x10_4)
                        x12_13 = 0
                    else
                        x12_13 = ((x8_11 - x10_4) << 9) - 1
                    
                    i_1 = (x12_13 - (*(x19 + 0x28) + i)) u>> 0xd
                    *(x19 + 0x10) = x8_11
                while (i_1 != 0)
void* x0_4 = x10_4 + (i u>> 9 & 0x7ffffffffffff8)
int64_t x1_2

if (*(x19 + 0x10) == x10_4)
    x1_2 = 0
    
    if ((x21 & 1) != 0)
        return x0_4
else
    x1_2 = *x0_4 + (i & 0xfff)
    
    if ((x21 & 1) != 0)
        return x0_4

int64_t x8_17 = x1_2 - *x0_4 + x20

if (x8_17 s>= 1)
    void* x0_5 = x0_4 + (x8_17 u>> 9 & 0x7ffffffffffff8)
    *x0_5
    return x0_5

int64_t x8_20

if (0xfff - x8_17 s< 0)
    x8_20 = 0x1ffe - x8_17
else
    x8_20 = 0xfff - x8_17

void* x0_6 = x0_4 - (x8_20 s>> 0xc << 3)
*x0_6
return x0_6
