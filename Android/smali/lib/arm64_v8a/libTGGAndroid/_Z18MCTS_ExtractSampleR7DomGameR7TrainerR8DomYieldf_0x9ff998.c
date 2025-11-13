// 函数: _Z18MCTS_ExtractSampleR7DomGameR7TrainerR8DomYieldf
// 地址: 0x9ff998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_70 = v10
int64_t v9
int64_t var_68 = v9
int64_t x21 = sx.q(*(arg3 + 0x58))
uint64_t x19 = *((x21 << 3) + 0x14a7240)
sub_9f6acc(arg1, arg3)
int32_t x24 = *(x19 + 0xd8)
sub_9fd5f0(arg1, x19, arg3)

if (x24 != *(x19 + 0xd8))
    sub_9fd5f0(arg1, x19, arg3)

FillTrainer(arg1, arg2, arg3)
int64_t x8_2 = sx.q(*(x19 + 0xd8))
int64_t x0_3

if (0 == x8_2 u>> 0x3e)
    x0_3 = x8_2 << 2
else
    x0_3 = -1

float* x0_4
float y
float x
x0_4, y, x = operator new[](x0_3)
int128_t v8

if (*(x19 + 0xd8) s>= 1)
    int64_t x8_4 = 0
    v9.d = fconvert.s(-1f)
    int64_t x9_1 = 0x50
    int64_t x10_3
    float v0
    
    do
        v0 = *(*(x19 + 0xd0) + x9_1)
        x9_1 += 0x70
        v0 = float.s(v0) / float.s(*(x19 + 0xb0) - 1)
        x0_4[x8_4] = v0
        x10_3 = sx.q(*(x19 + 0xd8))
        x8_4 += 1
        
        if (v0 f> v9.d)
            v9.d = v0
        else
            v9.d = v9.d
    while (x8_4 s< x10_3)
    
    if (x10_3.d s>= 1)
        int64_t x24_1 = 0
        v8.d = fconvert.s(1f) f/ arg4.d
        v10.d = 0f
        int64_t x8_5
        
        do
            v0, y, x = powf(x0_4[x24_1] f/ v9.d, v8.d, y, x)
            x0_4[x24_1] = v0
            x8_5 = sx.q(*(x19 + 0xd8))
            x24_1 += 1
            v10.d = v10.d f+ v0
        while (x24_1 s< x8_5)
        
        if (x8_5.d s>= 1)
            int64_t i = 0
            
            do
                i += 1
                x0_4[i] = x0_4[i] f/ v10.d
            while (i s< sx.q(*(x19 + 0xd8)))

int32_t x0_5 = RandomInt(&data_14a71e8, 0x8000)
int32_t x0_6 = RandomInt(&data_14a71e8, 0x8000)
int64_t x8_6 = sx.q(*(x19 + 0xd8))
int32_t x24_3
int64_t x25_2

if (x8_6.d s< 1)
    x25_2 = 0
label_9ffb7c:
    x24_3 = -1
else
    x25_2 = 0
    float v0_1 = float.s(x0_6 + (x0_5 << 0xf)) * float.s(0x30800000)
    
    while (true)
        v0_1 = v0_1 - x0_4[x25_2]
        
        if (v0_1 <= float.s(0x33d6bf95))
            x24_3 = x25_2.d
            break
        
        x25_2 += 1
        
        if (x25_2 s>= x8_6)
            goto label_9ffb7c

sub_9f5644(arg1, arg3, *(x19 + 0xd0) + muls.dp.d(x24_3, 0x70))
int64_t x8_8 = x21 << 2
*(x8_8 + 0x14a71f8) = *(x8_8 + 0x14a7210)
v8.d = *(x19 + x8_8 + 0x94)
printf("Player %d ", zx.q(x21.d))
int32_t x1_6 = *(x19 + 0xe0)

if (x1_6 != 0)
    printf("*%d* ", x1_6)

int128_t v0_2
v0_2.q = fconvert.d(v8.d)
printf("(%f): ", v0_2)
char var_470[0x400]
sub_9f45c0(&var_470, x19, *(x19 + 0xd0) + mulu.dp.d(x25_2.d, 0x70))
printf("%s ", &var_470)

if (*(x19 + 0xd8) s>= 1)
    int64_t i_1 = 0
    int64_t x24_4 = 0x50
    
    do
        if (zx.q(x24_3) == i_1)
            putchar(0x2a)
        
        printf("%d ", zx.q(*(*(x19 + 0xd0) + x24_4)))
        i_1 += 1
        x24_4 += 0x70
    while (i_1 s< sx.q(*(x19 + 0xd8)))

putchar(0xa)
return operator delete[](x0_4)
