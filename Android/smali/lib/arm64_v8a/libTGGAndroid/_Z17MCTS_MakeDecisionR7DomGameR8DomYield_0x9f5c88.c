// 函数: _Z17MCTS_MakeDecisionR7DomGameR8DomYield
// 地址: 0x9f5c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v8
int64_t var_68 = v8
int64_t x8 = sx.q(*(arg2 + 0x58))
char* x27 = &data_14a71b0
DomYield& fp = arg2
DomGame& x26 = arg1
int64_t result =
    LogReadAction(&data_11d9210 + (x8 << 0x11), *((x8 << 2) + 0x14a7210), (x8 << 2) + 0x14a71f8, fp)

if ((result.d & 1) != 0)
    return result

if (zx.d(*(x26 + 0x1524)) == 0)
    x27, fp = sub_9f654c(x26, *(x26 + 0x1520))

sub_9f6acc(x26, fp)
uint64_t* x0_4 = sub_9f7b40(x26, fp, *(x26 + 0x1520), nullptr)
uint64_t x22 = x0_4[1]

if (x22 != 0)
    int32_t x19_1 = *(x22 + 0xd8)
    sub_9fd5f0(x26, x22, fp)
    
    if (x19_1 != *(x22 + 0xd8))
        sub_9fd5f0(x26, x22, fp)
    
    void* x21_2 = x0_4[1]
    int32_t x8_4 = *(fp + 0x48) - 3
    int32_t x24_1
    
    if (x8_4 u>= 0xa || (0x251 u>> x8_4 & 1) == 0)
        x24_1 = *(*(x27 + (sx.q(*(x26 + 0x1520)) << 3) + 0x90) + 0xc8) != *(x26 + 0x19ec) ? 1 : 0
    else
        x24_1 = 0
    
    int32_t x8_10 = data_14a71b4
    int64_t x22_1 = sx.q(*(x21_2 + 0xb4))
    int64_t x23_1 = sx.q(*(fp + 0x58))
    
    if (x8_10 s>= 1)
        sub_a05118(
            *(*(&data_11d5210 + (zx.q(x8_10 - 1) << 4)) + 0xd0)
                + sx.q(*((zx.q(x8_10 - 1) << 4) + &data_11d5218)) * 0x70, 
            x21_2)
    
    uint64_t i_6 = zx.q(*(x21_2 + 0xd8))
    
    if (i_6.d s>= 1)
        int64_t x8_14 = sx.q(data_14a71b4)
        void* x19_2 = *(x21_2 + 0xd0)
        int64_t v0_1
        int64_t v9
        
        if (x8_14.d == 0)
            v0_1.d = *(x27 + x22_1 * 0x84 + 0x528)
            uint64_t i_5
            
            if (i_6.d s> 1)
                i_5 = zx.q(i_6.d)
            else
                i_5 = 1
            
            void* x9_5 = x19_2 + 0x54
            v9.d = float.s(0xce6e6b28)
            uint64_t i
            
            do
                float v1_1 = *x9_5
                x9_5 += 0x70
                v1_1 = v1_1 f/ v0_1.d
                
                if (v1_1 f> v9.d)
                    v9.d = v1_1
                else
                    v9.d = v9.d
                
                i = i_5
                i_5 -= 1
            while (i != 1)
        else
            uint64_t i_4
            
            if (i_6.d s> 1)
                i_4 = zx.q(i_6.d)
            else
                i_4 = 1
            
            void* x9_4 = x19_2 + 0x54
            v9.d = float.s(0xce6e6b28)
            uint64_t i_1
            
            do
                v0_1.d = *x9_4
                x9_4 += 0x70
                
                if (v0_1.d f> v9.d)
                    v9.d = v0_1.d
                else
                    v9.d = v9.d
                
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        int64_t v10
        
        if (x8_14.d == 0)
            v8.d = *(x27 + x22_1 * 0x84 + 0x528)
            void* x20_2 = x19_2 + 0x54
            v10.d = 0f
            uint64_t i_2
            
            do
                v0_1.d = *x20_2
                x20_2 += 0x70
                v0_1.d = v0_1.d f/ v8.d
                v0_1.d = v0_1.d f- v9.d
                i_2 = i_6
                i_6 -= 1
                v10.d = v10.d f+ expf(v0_1.d).d
            while (i_2 != 1)
        else
            void* x20_1 = x19_2 + 0x54
            v10.d = 0f
            uint64_t i_3
            
            do
                v0_1.d = *x20_1
                x20_1 += 0x70
                v0_1.d = v0_1.d f- v9.d
                i_3 = i_6
                i_6 -= 1
                v10.d = v10.d f+ expf(v0_1.d).d
            while (i_3 != 1)
        
        DomGame& var_b0_1 = x26
        int64_t x8_21
        int64_t v11
        
        if (x8_14.d == 0)
            void* x8_22 = x27 + x22_1 * 0x84
            int64_t x25_2 = 0
            int64_t x26_1 = 0
            
            if (zx.d(data_14a71b0) == 0)
                v8.d = fconvert.s(-1f)
                v11.d = 0f
                v12.d = fconvert.s(1f)
                
                do
                    void* x19_5 = x19_2 + x25_2
                    v0_1.d = *(x19_5 + 0x54)
                    v0_1.d = v0_1.d f/ *(x8_22 + 0x528)
                    v0_1.d = v0_1.d f- v9.d
                    v0_1.d = expf(v0_1.d).d f/ v10.d
                    *(x19_5 + 0x60) = v0_1.d
                    v0_1.d = *(x8_22 + 0x520)
                    x26_1 += 1
                    void* x8_26 = *(x21_2 + 0xd0) + x25_2
                    v0_1.d = v12.d f- v0_1.d
                    v0_1.d = v0_1.d f* *(x8_26 + 0x60)
                    *(x8_26 + 0x60) = v0_1.d
                    v0_1.d = *(x8_22 + 0x520)
                    void* x8_28 = *(x21_2 + 0xd0) + x25_2
                    v0_1.d = v0_1.d f* *(x8_28 + 0x58)
                    v0_1.d = *(x8_28 + 0x60) f+ v0_1.d
                    *(x8_28 + 0x60) = v0_1.d
                    x19_2 = *(x21_2 + 0xd0)
                    void* x8_29 = x19_2 + x25_2
                    v0_1.d = *(x8_29 + 0x60)
                    x25_2 += 0x70
                    
                    if (v0_1.d f> v8.d)
                        v8.d = v0_1.d
                    else
                        v8.d = v8.d
                    
                    x8_21 = sx.q(*(x21_2 + 0xd8))
                    v0_1.d = v11.d f+ v0_1.d
                    
                    if (*(x8_29 + 0x50) s> 0)
                        v11.d = v0_1.d
                    else
                        v11.d = v11.d
                while (x26_1 s< x8_21)
            else
                v8.d = fconvert.s(-1f)
                v11.d = 0f
                
                do
                    void* x19_4 = x19_2 + x25_2
                    v0_1.d = *(x19_4 + 0x54)
                    v0_1.d = v0_1.d f/ *(x8_22 + 0x528)
                    v0_1.d = v0_1.d f- v9.d
                    v0_1.d = expf(v0_1.d).d f/ v10.d
                    *(x19_4 + 0x60) = v0_1.d
                    x19_2 = *(x21_2 + 0xd0)
                    x26_1 += 1
                    void* x8_23 = x19_2 + x25_2
                    v0_1.d = *(x8_23 + 0x60)
                    x25_2 += 0x70
                    
                    if (v0_1.d f> v8.d)
                        v8.d = v0_1.d
                    else
                        v8.d = v8.d
                    
                    x8_21 = sx.q(*(x21_2 + 0xd8))
                    v0_1.d = v11.d f+ v0_1.d
                    
                    if (*(x8_23 + 0x50) s> 0)
                        v11.d = v0_1.d
                    else
                        v11.d = v11.d
                while (x26_1 s< x8_21)
            
            x26 = var_b0_1
            
            if (x8_21.d s>= 1)
                goto label_9f60bc
        else
            int64_t x20_3 = 0
            int64_t x25_1 = 0
            v8.d = fconvert.s(-1f)
            v11.d = 0f
            
            do
                void* x19_3 = x19_2 + x20_3
                v0_1.d = *(x19_3 + 0x54)
                v0_1.d = v0_1.d f- v9.d
                v0_1.d = expf(v0_1.d).d f/ v10.d
                *(x19_3 + 0x60) = v0_1.d
                x19_2 = *(x21_2 + 0xd0)
                x25_1 += 1
                void* x8_19 = x19_2 + x20_3
                v0_1.d = *(x8_19 + 0x60)
                x20_3 += 0x70
                
                if (v0_1.d f> v8.d)
                    v8.d = v0_1.d
                else
                    v8.d = v8.d
                
                x8_21 = sx.q(*(x21_2 + 0xd8))
                v0_1.d = v11.d f+ v0_1.d
                
                if (*(x8_19 + 0x50) s> 0)
                    v11.d = v0_1.d
                else
                    v11.d = v11.d
            while (x25_1 s< x8_21)
            
            if (x8_21.d s>= 1)
            label_9f60bc:
                void* x9_8 = x27 + x22_1 * 0x84
                int32_t x23_2
                float v1_2
                
                if (*(x26 + 0x150c) != 5)
                    v0_1.d = sqrt(v11.d)
                    v0_1.d = v0_1.d f* float.s(0x3e4ccccd)
                    uint64_t x22_3 = zx.q(x8_21.d)
                    int64_t x20_6 = 0
                    int64_t x8_36 = x23_1 << 2
                    x23_2 = -1
                    int32_t var_bc_1 = v0_1.d
                    
                    if (x23_1.d != x22_1.d)
                        v10.d = fconvert.s(-1f)
                        v12.d = float.s(0xc479c000)
                        v11.d = fconvert.s(1f)
                        void* x26_4 = x19_2
                        
                        do
                            if (zx.d(*(x26_4 + 0x69)) == 0)
                                int32_t x8_40 = *(x26_4 + 0x50)
                                
                                if (x8_40 s< 1)
                                    v13.d = *(x26_4 + 0x60)
                                    v14.d = *(x21_2 + (x23_1 << 2) + 0x94)
                                    
                                    if (not(v13.d f>= v8.d))
                                        v0_1.d = var_bc_1
                                        v14.d = v14.d f- v0_1.d
                                else
                                    v0_1.d = *(x26_4 + x8_36 + 0x2c)
                                    v13.d = *(x26_4 + 0x60)
                                    
                                    if (*(x26_4 + 0x64) == 0)
                                        v14.d = v0_1.d
                                    else
                                        v14.d = v0_1.d f+ v10.d
                                    
                                    if (x8_14.d == 0)
                                        v0_1.d = *(x21_2 + 0xb0)
                                        v0_1.d = float.s(v0_1.d)
                                        v0_1.d = (v13.d f+ v13.d) f* v0_1.d
                                        v0_1.d = sqrt(v0_1.d)
                                        uint32_t temp0_3 = vcvts_s32_f32(v0_1.d)
                                        v0_1.d = v14.d f+ v11.d
                                        
                                        if (x8_40 s< temp0_3)
                                            v14.d = v0_1.d
                                        else
                                            v14.d = v14.d
                                
                                v0_1.d = *(x9_8 + 0x4f8)
                                v15.d = *(x9_8 + 0x4fc)
                                v1_2 = float.s(*(x21_2 + 0xb0))
                                v0_1.d = (v0_1.d f+ v1_2 f+ v11.d) f/ v0_1.d
                                v9.d = sqrt(v1_2) / (float.s(x8_40) f+ v11.d)
                                v0_1.d = v15.d f+ logf(v0_1.d).d
                                v0_1.d = v9.d f* v0_1.d
                                v0_1.d = v13.d f* v0_1.d
                                v0_1.d = v14.d f+ v0_1.d
                                
                                if (x24_1 != 0)
                                    v0_1.d = v13.d
                                else
                                    v0_1.d = v0_1.d
                                
                                if (not(v0_1.d f<= v12.d))
                                    v12 = v0_1
                                    x23_2 = x20_6.d
                            
                            x20_6 += 1
                            x26_4 += 0x70
                        while (x22_3 != x20_6)
                    else
                        v10.d = fconvert.s(1f)
                        v12.d = float.s(0xc479c000)
                        v9.d = fconvert.s(10f)
                        void* x26_3 = x19_2
                        
                        do
                            if (zx.d(*(x26_3 + 0x69)) == 0)
                                int32_t x8_38 = *(x26_3 + 0x50)
                                
                                if (x8_38 s<= 0)
                                    v14.d = *(x26_3 + 0x60)
                                    v13.d = *(x21_2 + (x23_1 << 2) + 0x94)
                                    
                                    if (not(v14.d f>= v8.d))
                                        v0_1.d = var_bc_1
                                        v13.d = v13.d f- v0_1.d
                                else
                                    int32_t x9_10 = *(x26_3 + 0x64)
                                    v13.d = *(x26_3 + x8_36 + 0x2c)
                                    
                                    if (x9_10 != 0)
                                        v0_1.d = float.s(x9_10)
                                        v0_1.d = v9.d f/ v0_1.d
                                        v13.d = v13.d f+ v0_1.d
                                    
                                    v14.d = *(x26_3 + 0x60)
                                    
                                    if (x8_14.d == 0)
                                        v0_1.d = *(x21_2 + 0xb0)
                                        v0_1.d = float.s(v0_1.d)
                                        v0_1.d = (v14.d f+ v14.d) f* v0_1.d
                                        v0_1.d = sqrt(v0_1.d)
                                        uint32_t temp0_2 = vcvts_s32_f32(v0_1.d)
                                        v0_1.d = v13.d f+ v10.d
                                        
                                        if (x8_38 s< temp0_2)
                                            v13.d = v0_1.d
                                        else
                                            v13.d = v13.d
                                
                                v0_1.d = *(x9_8 + 0x4f8)
                                v15.d = *(x9_8 + 0x4fc)
                                v1_2 = float.s(*(x21_2 + 0xb0))
                                v0_1.d = (v0_1.d f+ v1_2 f+ v10.d) f/ v0_1.d
                                v11.d = sqrt(v1_2) / (float.s(x8_38) f+ v10.d)
                                v0_1.d = v15.d f+ logf(v0_1.d).d
                                v0_1.d = v11.d f* v0_1.d
                                v0_1.d = v14.d f* v0_1.d
                                v0_1.d = v13.d f+ v0_1.d
                                
                                if (x24_1 != 0)
                                    v0_1.d = v14.d
                                else
                                    v0_1.d = v0_1.d
                                
                                if (not(v0_1.d f<= v12.d))
                                    v12 = v0_1
                                    x23_2 = x20_6.d
                            
                            x20_6 += 1
                            x26_3 += 0x70
                        while (x22_3 != x20_6)
                else
                    uint64_t x22_2 = zx.q(x8_21.d)
                    
                    if (x8_14.d == 0)
                        int64_t x20_7 = 0
                        x23_2 = -1
                        v8.d = float.s(0xc479c000)
                        v9.d = fconvert.s(1f)
                        void* x26_5 = x19_2
                        
                        do
                            if (zx.d(*(x26_5 + 0x69)) == 0)
                                int32_t x8_43 = *(x26_5 + 0x50)
                                
                                if (x8_43 s<= 0)
                                    v0_1.d = *(x21_2 + 0xb0)
                                    v11.d = *(x21_2 + (x23_1 << 2) + 0x94)
                                    v10.d = *(x26_5 + 0x60)
                                    v0_1.d = float.s(v0_1.d)
                                else
                                    v10.d = *(x26_5 + 0x60)
                                    v0_1.d = *(x21_2 + 0xb0)
                                    v1_2 = *(x26_5 + (x23_1 << 2) + 0x2c)
                                    v0_1.d = float.s(v0_1.d)
                                    
                                    if (x8_43 s< vcvts_s32_f32(sqrt((v10.d f+ v10.d) f* v0_1.d)))
                                        v11.d = v1_2 f+ v9.d
                                    else
                                        v11.d = v1_2
                                
                                v1_2 = *(x9_8 + 0x4f8)
                                v12.d = *(x9_8 + 0x4fc)
                                float v2_1 = sqrt(v0_1.d)
                                v0_1.d = v1_2 f+ v0_1.d
                                v0_1.d = v0_1.d f+ v9.d
                                v0_1.d = v0_1.d f/ v1_2
                                v13.d = v2_1 / (float.s(x8_43) f+ v9.d)
                                v0_1.d = v12.d f+ logf(v0_1.d).d
                                v0_1.d = v13.d f* v0_1.d
                                v0_1.d = v10.d f* v0_1.d
                                v0_1.d = v11.d f+ v0_1.d
                                
                                if (x24_1 != 0)
                                    v0_1.d = v10.d
                                else
                                    v0_1.d = v0_1.d
                                
                                if (not(v0_1.d f<= v8.d))
                                    v8 = v0_1
                                    x23_2 = x20_7.d
                            
                            x20_7 += 1
                            x26_5 += 0x70
                        while (x22_2 != x20_7)
                    else
                        int64_t x20_5 = 0
                        x23_2 = -1
                        v9.d = float.s(0xc479c000)
                        v8.d = fconvert.s(1f)
                        void* x26_2 = x19_2
                        
                        do
                            if (zx.d(*(x26_2 + 0x69)) == 0)
                                int32_t x8_34 = *(x26_2 + 0x50)
                                v0_1.d = *(x21_2 + 0xb0)
                                v1_2 = *(x9_8 + 0x4f8)
                                v0_1.d = float.s(v0_1.d)
                                void* x8_35
                                
                                if (x8_34 s> 0)
                                    x8_35 = x26_2 + (x23_1 << 2) + 0x2c
                                else
                                    x8_35 = x21_2 + (x23_1 << 2) + 0x94
                                
                                v10.d = *(x26_2 + 0x60)
                                v11.d = *(x9_8 + 0x4fc)
                                float v3_1 = sqrt(v0_1.d)
                                v12.d = *x8_35
                                v0_1.d = v1_2 f+ v0_1.d
                                v0_1.d = v0_1.d f+ v8.d
                                v0_1.d = v0_1.d f/ v1_2
                                v13.d = v3_1 / (float.s(x8_34) f+ v8.d)
                                v0_1.d = v11.d f+ logf(v0_1.d).d
                                v0_1.d = v13.d f* v0_1.d
                                v0_1.d = v10.d f* v0_1.d
                                v0_1.d = v12.d f+ v0_1.d
                                
                                if (x24_1 != 0)
                                    v0_1.d = v10.d
                                else
                                    v0_1.d = v0_1.d
                                
                                if (not(v0_1.d f<= v9.d))
                                    v9 = v0_1
                                    x23_2 = x20_5.d
                            
                            x20_5 += 1
                            x26_2 += 0x70
                        while (x22_2 != x20_5)
                
                if ((x23_2 & 0x80000000) == 0)
                    *(x19_2 + mulu.dp.d(x23_2, 0x70) + 0x68) = 1
                    
                    if (x8_14.d != 0x3ff)
                        data_14a71b4 = x8_14.d + 1
                        *(&data_11d5210 + (x8_14 << 4)) = x21_2
                        *((x8_14 << 4) + &data_11d5218) = x23_2
                        return sub_9f5644(var_b0_1, fp, *(x21_2 + 0xd0) + zx.q(x23_2) * 0x70)
                            __tailcall

YldCopy(0x1379f30, fp)
longjmp(0x14a72e8, 1)
noreturn
