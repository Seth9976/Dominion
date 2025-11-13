// 函数: _Z19KingdomViewAddEntryR11KingdomView24KingdomViewEntryCategory20KingdomViewEntryTypePK11DomCardEnumiS5_i
// 地址: 0xb1b23c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0x3a20))
void* x9 = arg1 + x8 * 0x74
*(arg1 + 0x3a20) = x8.d + 1
*(x9 + 0x20) = 1
float v1 = *(arg1 + 8)
*(x9 + 0x2c) = v1
float v0

if (v1 != 0f)
    v0 = v1 + fconvert.s(15f)
else
    v0 = v1

*(x9 + 0x28) = 0
v0 = v0 + float.s(0x43b40000)
int32_t i_14

i_14 = arg3 == 4 ? 3 : 5

int32_t i_13

i_13 = arg3 == 3 ? 6 : i_14

v1 = vmax_f32(*(arg1 + 4), float.s(0x45282000))
*(arg1 + 4) = v1
*(arg1 + 8) = v0
*(x9 + 0x30) = arg2
float v2
float v3

if (i_13 s>= arg5)
    int64_t x9_2 = sx.q(*(arg1 + 0x3a20))
    void* x8_1 = arg1 + x9_2 * 0x74
    *(arg1 + 0x3a20) = x9_2.d + 1
    *(x8_1 + 0x24) = 0
    *(x8_1 + 0x20) = arg3
    *(x8_1 + 0x2c) = v0
    
    if (arg3 u> 4)
    label_b1b6b0:
        pthread_kill(pthread_self(), 6)
        DomGame* x0_1
        int64_t x1_3
        x0_1, x1_3 = XNoReturn()
        return HasPotionCost(x0_1, x1_3) __tailcall
    
    uint64_t x8_2 = zx.q(arg3)
    v2 = float.s(0x42f00000)
    v3 = float.s(0x45282000)
    
    switch (x8_2)
        case 1
            v2 = float.s(0x43b40000)
            v3 = float.s(0x45282000)
        case 2
            v2 = float.s(0x44480000)
            v3 = float.s(0x45282000)
        case 3
            v2 = float.s(0x4426c000)
            v3 = float.s(0x45282000)
        case 4
            v2 = float.s(0x440b8000)
            v3 = float.s(0x45282000)
    
    if (v3 > v1)
        v1 = v3
    
    *(arg1 + 4) = v1
    *(arg1 + 8) = v0 + fconvert.s(15f) + v2
    
    if (arg5 s>= 1)
        uint64_t i_6 = zx.q(arg5)
        int32_t* x11_3 = arg1 + x9_2 * 0x74 + 0x30
        int32_t i
        
        do
            int32_t x12_1 = *arg4
            arg4 += 4
            i = i_6
            i_6 -= 1
            *x11_3 = x12_1
            x11_3 = &x11_3[4]
        while (i != 1)
    
    *(arg1 + x9_2 * 0x74 + 0x90) = arg5
    
    if (arg7 != 0)
        int64_t x9_4 = sx.q(*(arg1 + 0x3a20))
        void* x10_3 = arg1 + x9_4 * 0x74
        *(arg1 + 0x3a20) = x9_4.d + 1
        *(x10_3 + 0x20) = arg3
        *(x10_3 + 0x24) = 0
        v0 = *(arg1 + 8)
        *(x10_3 + 0x28) = 0
        *(x10_3 + 0x2c) = v0
        
        if (arg3 u> 4)
            goto label_b1b6b0
        
        v1 = float.s(0x42f00000)
        v2 = float.s(0x45282000)
        
        switch (x8_2)
            case 1
                v1 = float.s(0x43b40000)
                v2 = float.s(0x45282000)
            case 2
                v1 = float.s(0x44480000)
                v2 = float.s(0x45282000)
            case 3
                v1 = float.s(0x4426c000)
                v2 = float.s(0x45282000)
            case 4
                v1 = float.s(0x440b8000)
                v2 = float.s(0x45282000)
        
        v3 = *(arg1 + 4)
        v0 = v0 + fconvert.s(15f) + v1
        
        v1 = v2 > v3 ? v2 : v3
        
        *(arg1 + 4) = v1
        *(arg1 + 8) = v0
        
        if (arg7 s>= 1)
            uint64_t i_5 = zx.q(arg7)
            int32_t* x10_5 = arg1 + x9_4 * 0x74 + 0x30
            uint64_t i_1
            
            do
                int32_t x11_5 = *arg6
                arg6 += 4
                i_1 = i_5
                i_5 -= 1
                *x10_5 = x11_5
                x10_5 = &x10_5[4]
            while (i_1 != 1)
        
        *(arg1 + x9_4 * 0x74 + 0x90) = arg7
else if (arg5 s>= 1)
    if (arg3 == 0)
        while (true)
            int64_t x14_4 = sx.q(*(arg1 + 0x3a20))
            int32_t i_11
            
            i_11 = i_13 s< arg5 ? i_13 : arg5
            
            int64_t x17_3 = x14_4 * 0x74
            float temp0_2 = vmax_f32(v1, float.s(0x45282000))
            *(arg1 + 0x3a20) = x14_4.d + 1
            void* x16_5 = arg1 + x17_3
            uint64_t i_8
            
            if (i_11 s> 1)
                i_8 = zx.q(i_11)
            else
                i_8 = 1
            
            *(x16_5 + 0x20) = 0
            *(x16_5 + 0x28) = 0
            *(x16_5 + 0x2c) = v0
            void* x16_6 = arg1 + 0x30 + x17_3
            DomCardEnum const* x17_4 = arg4
            *(arg1 + 4) = temp0_2
            *(arg1 + 8) = v0 + fconvert.s(15f) + float.s(0x42f00000)
            uint64_t i_2
            
            do
                int32_t x1_1 = *x17_4
                x17_4 += 4
                i_2 = i_8
                i_8 -= 1
                *x16_6 = x1_1
                x16_6 += 0x10
            while (i_2 != 1)
            arg5 -= i_11
            *(arg1 + x14_4 * 0x74 + 0x90) = i_11
            
            if (arg5 s< 1)
                break
            
            v1 = *(arg1 + 4)
            v0 = *(arg1 + 8)
            arg4 += sx.q(i_11) << 2
    else
        if (arg3 != 1)
            while (true)
                int64_t x13_2 = sx.q(*(arg1 + 0x3a20))
                void* x15_1 = arg1 + x13_2 * 0x74
                *(arg1 + 0x3a20) = x13_2.d + 1
                *(x15_1 + 0x24) = 0
                *(x15_1 + 0x20) = arg3
                *(x15_1 + 0x2c) = v0
                
                if (arg3 u> 4)
                    break
                
                int32_t x14_7
                
                switch (arg3)
                    case 2
                        x14_7 = 0x44480000
                    case 3
                        x14_7 = 0x4426c000
                    case 4
                        x14_7 = 0x440b8000
                
                v3 = float.s(0x45282000)
                float v4 = *(arg1 + 4)
                int32_t* x16_8 = arg1 + 0x30 + x13_2 * 0x74
                
                v2 = v3 > v4 ? v3 : v4
                
                int32_t i_12
                
                i_12 = i_13 s< arg5 ? i_13 : arg5
                
                uint64_t i_9
                
                if (i_12 s> 1)
                    i_9 = zx.q(i_12)
                else
                    i_9 = 1
                
                DomCardEnum const* x17_6 = arg4
                *(arg1 + 4) = v2
                *(arg1 + 8) = v0 + fconvert.s(15f) + float.s(x14_7)
                uint64_t i_3
                
                do
                    int32_t x1_2 = *x17_6
                    x17_6 += 4
                    i_3 = i_9
                    i_9 -= 1
                    *x16_8 = x1_2
                    x16_8 = &x16_8[4]
                while (i_3 != 1)
                arg5 -= i_12
                *(arg1 + x13_2 * 0x74 + 0x90) = i_12
                
                if (arg5 s< 1)
                    return 
                
                v0 = *(arg1 + 8)
                arg4 += sx.q(i_12) << 2
            
            goto label_b1b6b0
        
        while (true)
            int64_t x14_1 = sx.q(*(arg1 + 0x3a20))
            int32_t i_10
            
            i_10 = i_13 s< arg5 ? i_13 : arg5
            
            int64_t x17_1 = x14_1 * 0x74
            float temp0_1 = vmax_f32(v1, float.s(0x45282000))
            *(arg1 + 0x3a20) = x14_1.d + 1
            void* x16_2 = arg1 + x17_1
            uint64_t i_7
            
            if (i_10 s> 1)
                i_7 = zx.q(i_10)
            else
                i_7 = 1
            
            *(x16_2 + 0x20) = 1
            *(x16_2 + 0x28) = 0
            *(x16_2 + 0x2c) = v0
            void* x16_3 = arg1 + 0x30 + x17_1
            DomCardEnum const* x17_2 = arg4
            *(arg1 + 4) = temp0_1
            *(arg1 + 8) = v0 + fconvert.s(15f) + float.s(0x43b40000)
            uint64_t i_4
            
            do
                int32_t x1 = *x17_2
                x17_2 += 4
                i_4 = i_7
                i_7 -= 1
                *x16_3 = x1
                x16_3 += 0x10
            while (i_4 != 1)
            arg5 -= i_10
            *(arg1 + x14_1 * 0x74 + 0x90) = i_10
            
            if (arg5 s< 1)
                break
            
            v1 = *(arg1 + 4)
            v0 = *(arg1 + 8)
            arg4 += sx.q(i_10) << 2
