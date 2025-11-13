// 函数: _Z8MCTS_RunRK8DomYieldRNSt6__ndk16atomicIbEEfb
// 地址: 0x9fe12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x24 = sx.q(*(arg1 + 0x58))
void* x9_1 = *((x24 << 3) + 0x14a7240)
data_14a71b0 = arg4 & 1
float v1 = *(x24 * 0x84 + 0x14a76c0)
uint32_t x10_1 = vcvts_s32_f32(float.s(*(x24 * 0x84 + 0x14a76bc)) * arg3)

if (not(v1 <= 0f))
    x10_1 = vcvts_s32_f32((v1 * float.s(0x3eb33333) + fconvert.s(1f)) * float.s(x10_1))

int32_t x26 = data_14a71c0
data_14a71bc += 1
int32_t x13_2 = *(x9_1 + 0xd8)
int32_t x11 = *(x9_1 + 0xb0)
uint32_t x12_3

if (x13_2 == 1)
    x12_3 = x10_1 s/ 0xa
else
    x12_3 = x10_1

int32_t x9_2 = x13_2 << 1
int32_t x10_2 = x12_3 + x11
uint32_t x27

if (x10_2 s< x9_2)
    x27 = x9_2 - x11
else
    x27 = x12_3

if ((zx.d(*arg2) & 1) != 0)
    return 

int32_t x9_3

x9_3 = x10_2 s< x9_2 ? x9_2 : x10_2

int32_t x8_2 = x9_3 * 3 - x11 * 3
int32_t x28_1 = 0

do
    arg3 = *(x24 * 0x84 + 0x14a76c0)
    
    if (not(arg3 <= 0f))
        void* x8_5 = *((x24 << 3) + 0x14a7240)
        uint64_t x9_5 = zx.q(*(x8_5 + 0xd8))
        int32_t x9_6
        
        if (x9_5.d s< 1)
        label_9fe35c:
            x9_6 = 0
            
            if (x28_1 u>= 0xb)
            label_9fe368:
                
                if (x9_6 s< 2)
                    break
        else
            void* x10_3 = *(x8_5 + 0xd0)
            int32_t x12_4
            int64_t i_5
            
            if (x9_5.d != 1)
                i_5 = x9_5 & 0xfffffffe
                int32_t x12_5 = 0
                int32_t x13_4 = 0
                int32_t* x14_2 = x10_3 + 0xc0
                int64_t i_4 = i_5
                int64_t i
                
                do
                    int32_t x16_1 = x14_2[-0x1c]
                    int32_t x17_1 = *x14_2
                    x14_2 = &x14_2[0x38]
                    
                    if (x16_1 s> x12_5)
                        x12_5 = x16_1
                    
                    if (x17_1 s> x13_4)
                        x13_4 = x17_1
                    
                    i = i_4
                    i_4 -= 2
                while (i != 2)
                
                x12_4 = x12_5 s> x13_4 ? x12_5 : x13_4
                
                if (i_5 != x9_5)
                    goto label_9fe2d4
            else
                i_5 = 0
                x12_4 = 0
            label_9fe2d4:
                int32_t* x10_5 = x10_3 + i_5 * 0x70 + 0x50
                int64_t i_3 = x9_5 - i_5
                int32_t i_1
                
                do
                    int32_t x13_5 = *x10_5
                    x10_5 = &x10_5[0x1c]
                    
                    if (x13_5 s> x12_4)
                        x12_4 = x13_5
                    
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            if (x9_5.d s< 1)
                goto label_9fe35c
            
            int32_t x13_6 = x27 - x28_1
            int64_t x10_6 = 0
            int64_t i_2 = 0
            x9_6 = 0
            uint32_t temp0_2 =
                vcvts_s32_f32(float.s(x12_4) - float.s(x13_6 & not.d(x13_6 s>> 0x1f)) / arg3)
            
            do
                i_2 += 1
                void* x13_9 = *(x8_5 + 0xd0) + x10_6
                int32_t x14_3 = *(x13_9 + 0x50)
                x10_6 += 0x70
                *(x13_9 + 0x69) = (x14_3 s< temp0_2 ? 1 : 0).b
                
                if (x14_3 s>= temp0_2)
                    x9_6 += 1
            while (i_2 s< sx.q(*(x8_5 + 0xd8)))
            
            if (x28_1 u>= 0xb)
                goto label_9fe368
    
    data_14a71c4 += 1
    SimulateGame(0x137ac58, 0x1299210, zx.q(*(arg1 + 0x58)))
    uint64_t x8_8 = zx.q(data_137b998)
    
    if (x8_8.d s>= 1)
        memcpy(0x14a71f8, &data_14a7228, x8_8 << 2)
    
    data_14a71b4 = 0
    sub_9fe6ec(sub_9fe420(0x137ac58, *(arg1 + 0x58)))
    
    if (x28_1 == (x8_2 & not.d(x8_2 s>> 0x1f)))
        break
    
    if (data_14a71c0 - x26 s>= x27)
        void* x8_12 = *((x24 << 3) + 0x14a7240)
        int32_t x9_7 = *(x8_12 + 0xb0)
        
        if (x9_7 s>= x27)
            break
        
        if (x9_7 s>= *(x8_12 + 0xd8))
            break
    
    x28_1 += 1
while ((zx.d(*arg2) & 1) == 0)
