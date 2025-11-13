// 函数: _Z17MCTS_ExtractPriorRK7DomGameR8DomYield9PlayerWhob
// 地址: 0x9ff60c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg4.d
DomGame var_60d70
SimulateGame(&var_60d70, arg1, arg3)
sub_9f6acc(arg1, arg2)
uint64_t x0_2 = operator new(0xe8)
__builtin_memset(x0_2, 0, 0xe8)
*(x0_2 + 0xdc) = 4
int64_t x0_3 = operator new[](0x1c0)
__builtin_memset(x0_3, 0, 0x1c0)
*(x0_2 + 0xd0) = x0_3
*(x0_2 + 0xb4) = arg3.d
sub_9fd2ec(&var_60d70, x0_2, arg2)
sub_9fd5f0(&var_60d70, x0_2, arg2)
void* x19_1
void* x20_1
DomGame* x21_1
x19_1, x20_1, x21_1 = sub_9fdb9c(&var_60d70, x0_2, arg2)
uint64_t i_7 = zx.q(*(x19_1 + 0xd8))
uint64_t x23_1
float x

if (i_7.d s< 1)
    x23_1 = 0xffffffff
    
    if ((x22 & 1) != 0)
    label_9ff7b0:
        uint64_t i_8 = zx.q(*(x19_1 + 0xd8))
        
        if (i_8.d s>= 1)
            float v8_1 = 0f
            uint64_t i_6 = i_8
            float* x24_1 = *(x19_1 + 0xd0) + 0x54
            uint64_t i
            
            do
                x = *x24_1
                x24_1 = &x24_1[0x1c]
                i = i_6
                i_6 -= 1
                v8_1 = v8_1 + expf(x)
            while (i != 1)
            
            if (i_8.d s>= 1)
                int64_t x22_1 = 0
                int64_t i_1 = 0
                
                do
                    void* x25_1 = *(x19_1 + 0xd0) + x22_1
                    *(x25_1 + 0x60) = expf(*(x25_1 + 0x54)) / v8_1
                    i_1 += 1
                    x22_1 += 0x70
                while (i_1 s< sx.q(*(x19_1 + 0xd8)))
        
        int32_t x0_8 = RandomInt(&data_14a71e8, 0x8000)
        int32_t x0_9 = RandomInt(&data_14a71e8, 0x8000)
        int64_t x8_8 = sx.q(*(x19_1 + 0xd8))
        
        if (x8_8.d s>= 1)
            float* x10_2 = *(x19_1 + 0xd0) + 0x60
            int64_t x9_1 = 0
            float v0_1 = float.s(x0_9 + (x0_8 << 0xf)) * float.s(0x30800000)
            
            do
                v0_1 = v0_1 - *x10_2
                
                if (v0_1 <= float.s(0x33d6bf95))
                    x23_1 = zx.q(x9_1.d)
                    break
                
                x9_1 += 1
                x10_2 = &x10_2[0x1c]
            while (x9_1 s< x8_8)
else
    int32_t* x8_2 = *(x19_1 + 0xd0) + 0x54
    x = float.s(0x4e6e6b28)
    float i_3 = float.s(0xce6e6b28)
    uint64_t i_5 = i_7
    uint64_t i_2
    
    do
        float v2_1 = *x8_2
        x8_2 = &x8_2[0x1c]
        
        if (v2_1 > i_3)
            i_3 = v2_1
        
        if (v2_1 < x)
            x = v2_1
        
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    
    if (i_7.d s< 1)
    label_9ff784:
        x23_1 = 0xffffffff
    else
        x23_1 = 0
        int32_t* x8_4 = *(x19_1 + 0xd0) + 0x54
        
        while (not(*x8_4 == i_3))
            x23_1 += 1
            x8_4 = &x8_4[0x1c]
            
            if (i_7 == x23_1)
                goto label_9ff784
    
    if (not(x != i_3))
        x23_1 = zx.q(RandomInt(&data_14a71e8, i_7.d))
    
    if ((x22 & 1) != 0)
        goto label_9ff7b0
sub_9f5644(x21_1, x20_1, *(x19_1 + 0xd0) + muls.dp.d(x23_1.d, 0x70))

if (*(x19_1 + 0xd8) s>= 1)
    int64_t x20_2 = 0
    int64_t x21_2 = 0
    int64_t x8_11
    
    do
        void* x8_12 = *(x19_1 + 0xd0)
        void* x0_11 = *(x8_12 + x20_2 + 0x10)
        
        if (x0_11 != 0)
            operator delete[](x0_11)
            x8_12 = *(x19_1 + 0xd0)
        
        void* x0_12 = *(x8_12 + x20_2 + 0x20)
        
        if (x0_12 != 0)
            operator delete[](x0_12)
        
        x8_11 = sx.q(*(x19_1 + 0xd8))
        x21_2 += 1
        x20_2 += 0x70
    while (x21_2 s< x8_11)
    
    if (x8_11.d s>= 1)
        int64_t x20_3 = 0
        int64_t i_4 = 0
        
        do
            int64_t* x8_15 = *(x19_1 + 0xd0)
            void* x0_13 = *(x8_15 + x20_3)
            
            if (x0_13 != 0)
                operator delete[](x0_13)
                x8_15 = *(x19_1 + 0xd0)
            
            void* x0_14 = *(x8_15 + x20_3 + 0x48)
            
            if (x0_14 != 0)
                operator delete[](x0_14)
            
            i_4 += 1
            x20_3 += 0x70
        while (i_4 s< sx.q(*(x19_1 + 0xd8)))

void* x0_15 = *(x19_1 + 0xd0)

if (x0_15 != 0)
    operator delete[](x0_15)

return operator delete(x19_1)
