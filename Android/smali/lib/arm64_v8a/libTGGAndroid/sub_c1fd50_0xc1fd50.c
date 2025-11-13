// 函数: sub_c1fd50
// 地址: 0xc1fd50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int32_t x14 = *(arg1 + 4)
int32_t x11 = arg2 << 1
void* x9 = *(x8 + (sx.q(arg2) << 3))
int64_t x10_1 = sx.q(arg2)

if (x11 s< x14)
    int64_t x13_1 = sx.q(x11)
    uint64_t x12_1 = x13_1 | 1
    float v0
    float v1
    bool cond:1_1
    
    if (x12_1.d s< x14)
        void* x13_2 = *(x8 + (x13_1 << 3))
        void* x14_1 = *(x8 + (x12_1 << 3))
        v0 = *(x13_2 + 0x20)
        v1 = *(x14_1 + 0x20)
        v0 - v1
        cond:1_1 = v0 > v1
        
        if (not(v0 != v1))
            cond:1_1 = *(x13_2 + 0x18) > *(x14_1 + 0x18)
    
    if (x12_1.d s< x14 && cond:1_1)
        goto label_c1fdb0
    
    x12_1 = zx.q(x11)
    
    if (x11 != 0)
    label_c1fdb0:
        uint64_t x11_1 = zx.q(x12_1.d)
        
        do
            void* x10_2 = *(x8 + (sx.q(x11_1.d) << 3))
            v0 = *(x9 + 0x20)
            int32_t x12_2 = arg2
            arg2 = x11_1.d
            v1 = *(x10_2 + 0x20)
            v0 - v1
            bool cond:2_1 = v0 <= v1
            
            if (not(v0 != v1))
                cond:2_1 = *(x9 + 0x18) <= *(x10_2 + 0x18)
            
            if (cond:2_1)
                x10_1 = sx.q(x12_2)
                arg2 = x12_2
                break
            
            *(x8 + (sx.q(x12_2) << 3)) = x10_2
            *(x10_2 + 0x28) = x12_2
            int32_t x14_2 = *(arg1 + 4)
            int32_t x12_3 = arg2 << 1
            x10_1 = sx.q(arg2)
            
            if (x12_3 s>= x14_2)
                break
            
            int64_t x13_3 = sx.q(x12_3)
            x11_1 = x13_3 | 1
            bool cond:3_1
            
            if (x11_1.d s< x14_2)
                int64_t x14_3 = *(arg1 + 8)
                void* x13_4 = *(x14_3 + (x13_3 << 3))
                void* x14_4 = *(x14_3 + (x11_1 << 3))
                v0 = *(x13_4 + 0x20)
                v1 = *(x14_4 + 0x20)
                v0 - v1
                cond:3_1 = v0 <= v1
                
                if (not(v0 != v1))
                    cond:3_1 = *(x13_4 + 0x18) <= *(x14_4 + 0x18)
            
            if (x11_1.d s>= x14_2 || cond:3_1)
                x11_1 = zx.q(x12_3)
        while (x11_1.d != 0)

*(x8 + (x10_1 << 3)) = x9
*(x9 + 0x28) = arg2
