// 函数: _Z17FillTrainerStaticR7DomGameR13TrainerStaticPf
// 地址: 0x9fbbd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x150) = zx.o(0)
*(arg2 + 0x160) = zx.o(0)
*(arg2 + 0x130) = zx.o(0)
*(arg2 + 0x140) = zx.o(0)
*(arg2 + 0x110) = zx.o(0)
*(arg2 + 0x120) = zx.o(0)
*(arg2 + 0xf0) = zx.o(0)
*(arg2 + 0x100) = zx.o(0)
*(arg2 + 0xd0) = zx.o(0)
*(arg2 + 0xe0) = zx.o(0)
*(arg2 + 0xb0) = zx.o(0)
*(arg2 + 0xc0) = zx.o(0)
*(arg2 + 0x90) = zx.o(0)
*(arg2 + 0xa0) = zx.o(0)
*(arg2 + 0x70) = zx.o(0)
*(arg2 + 0x80) = zx.o(0)
*(arg2 + 0x50) = zx.o(0)
*(arg2 + 0x60) = zx.o(0)
*(arg2 + 0x30) = zx.o(0)
*(arg2 + 0x40) = zx.o(0)
*(arg2 + 0x10) = zx.o(0)
*(arg2 + 0x20) = zx.o(0)
*arg2 = zx.o(0)
float v0 = *arg3
*(arg2 + 0x154) = 0xffffffff
*(arg2 + 0x2c) = 0
*arg2 = v0
v0 = arg3[1]
*(arg2 + 0x158) = 0xffffffff
*(arg2 + 0x30) = 0
*(arg2 + 4) = v0
v0 = arg3[2]
*(arg2 + 0x15c) = 0xffffffff
*(arg2 + 0x34) = 0
*(arg2 + 8) = v0
v0 = arg3[3]
*(arg2 + 0x160) = 0xffffffff
*(arg2 + 0x38) = 0
*(arg2 + 0xc) = v0
v0 = arg3[4]
*(arg2 + 0x164) = 0xffffffff
*(arg2 + 0x3c) = 0
*(arg2 + 0x10) = v0
v0 = arg3[5]
*(arg2 + 0x168) = 0xffffffff
*(arg2 + 0x14) = v0
int32_t var_48[0x6]
PlayerScores(arg1, &var_48)
uint64_t x21 = zx.q(*(arg1 + 0xd40))
int32_t var_60

if (x21.d s>= 1)
    memcpy(&var_60, &var_48, x21 << 2)

std::__ndk1::greater<int32_t> var_28
std::__ndk1::__sort<std::__ndk1::greater<int32_t>&, int32_t*>(&var_60, &(&var_60)[sx.q(x21.d)], 
    &var_28)

if (*(arg1 + 0xd40) s> 0)
    int32_t x9_1 = var_60
    int64_t x8_1 = 0
    int64_t x13_2
    
    do
        int64_t x13_1 = x8_1 << 2
        int32_t x14_1 = var_48[x8_1]
        x8_1 += 1
        int32_t x14_3
        int32_t var_5c
        
        if (x14_1 == x9_1)
            x14_3 = x9_1 - var_5c
        else
            x14_3 = x14_1 - x9_1
        *(arg2 + 0x28 + x13_1) = x14_3
        x13_2 = sx.q(*(arg1 + 0xd40))
    while (x8_1 s< x13_2)
    
    if (x13_2.d s>= 1)
        int64_t i = 0
        
        do
            void* x10_2 = arg2 + (i << 2)
            int32_t x11_3 = *(x10_2 + 0x28)
            *(x10_2 + 0x154) = 0
            i += 1
            int32_t x11_4
            
            if (x11_3 s>= 0xffffff6a)
                x11_4 = x11_3 + 0x97
            else
                x11_4 = 1
            
            int32_t x11_5
            
            x11_5 = x11_4 s< 0x12c ? x11_4 : 0x12c
            
            *(x10_2 + 0x28) = x11_5
        while (i s< sx.q(*(arg1 + 0xd40)))

int32_t x22 = 0

for (int32_t i_1 = 7; i_1 != 0x22; i_1 += 1)
    int32_t* x0_3 = DomBoardPile(arg1, i_1)
    int32_t x8_2 = *x0_3
    
    if (x8_2 != 0)
        *(arg2 + (sx.q(x22) << 2) + 0x40) = x8_2
        void* x9_3 = arg2 + sx.q(x22)
        x22 += 1
        *(x9_3 + 0x108) = (x0_3[2] == 0 ? 1 : 0).b

*(arg2 + 0x13c) = x22
int32_t* x0_5 = DomBoardPile(arg1, 0x22)
int32_t x8_5 = *x0_5
int32_t x21_1

if (x8_5 == 0)
    x21_1 = 0
else
    *(arg2 + 0x140) = x8_5
    *(arg2 + 0x150) = 0
    x21_1 = 1
    
    if (*(arg1 + 0xd40) s>= 1)
        int64_t i_2 = 0
        void* __offset(DomGame, 0x181c0) x9_4 = arg1 + 0x181c0
        
        do
            int32_t x11_7 = *x0_5
            
            if (*(x9_4 - 8) != x11_7)
                if (*(x9_4 - 4) == x11_7)
                    goto label_9fbe38
                
                goto label_9fbe0c
            
            *(arg2 + 0x150) = 1
            x11_7 = *x0_5
            
            if (*(x9_4 - 4) == x11_7)
            label_9fbe38:
                *(arg2 + 0x150) = 1
                x11_7 = *x0_5
                
                if (*x9_4 != x11_7)
                    goto label_9fbe18
                
                goto label_9fbe4c
            
        label_9fbe0c:
            
            if (*x9_4 == x11_7)
            label_9fbe4c:
                *(arg2 + 0x150) = 1
                
                if (*(x9_4 + 4) == *x0_5)
                    *(arg2 + 0x150) = 1
            else
            label_9fbe18:
                
                if (*(x9_4 + 4) == x11_7)
                    *(arg2 + 0x150) = 1
            
            i_2 += 1
            x9_4 += 0x5a30
        while (i_2 s< sx.q(*(arg1 + 0xd40)))
        
        x21_1 = 1

int32_t* x0_7 = DomBoardPile(arg1, 0x23)
int32_t x8_7 = *x0_7

if (x8_7 != 0)
    void* x9_5 = arg2 + zx.q(x21_1)
    *(arg2 + (zx.q(x21_1) << 2) + 0x140) = x8_7
    *(x9_5 + 0x150) = 0
    
    if (*(arg1 + 0xd40) s>= 1)
        int64_t i_3 = 0
        void* __offset(DomGame, 0x181c0) x11_9 = arg1 + 0x181c0
        
        do
            int32_t x13_4 = *x0_7
            
            if (*(x11_9 - 8) != x13_4)
                if (*(x11_9 - 4) == x13_4)
                    goto label_9fbf24
                
                goto label_9fbef8
            
            *(x9_5 + 0x150) = 1
            x13_4 = *x0_7
            
            if (*(x11_9 - 4) == x13_4)
            label_9fbf24:
                *(x9_5 + 0x150) = 1
                x13_4 = *x0_7
                
                if (*x11_9 != x13_4)
                    goto label_9fbf04
                
                goto label_9fbf38
            
        label_9fbef8:
            
            if (*x11_9 == x13_4)
            label_9fbf38:
                *(x9_5 + 0x150) = 1
                
                if (*(x11_9 + 4) == *x0_7)
                    *(x9_5 + 0x150) = 1
            else
            label_9fbf04:
                
                if (*(x11_9 + 4) == x13_4)
                    *(x9_5 + 0x150) = 1
            
            i_3 += 1
            x11_9 += 0x5a30
        while (i_3 s< sx.q(*(arg1 + 0xd40)))
    
    x21_1 += 1

int32_t* x0_9 = DomBoardPile(arg1, 0x24)
int32_t x8_9 = *x0_9

if (x8_9 != 0)
    void* x9_7 = arg2 + zx.q(x21_1)
    *(arg2 + (zx.q(x21_1) << 2) + 0x140) = x8_9
    *(x9_7 + 0x150) = 0
    
    if (*(arg1 + 0xd40) s>= 1)
        int64_t i_4 = 0
        void* __offset(DomGame, 0x181c0) x11_10 = arg1 + 0x181c0
        
        do
            int32_t x13_7 = *x0_9
            
            if (*(x11_10 - 8) != x13_7)
                if (*(x11_10 - 4) == x13_7)
                    goto label_9fc008
                
                goto label_9fbfdc
            
            *(x9_7 + 0x150) = 1
            x13_7 = *x0_9
            
            if (*(x11_10 - 4) == x13_7)
            label_9fc008:
                *(x9_7 + 0x150) = 1
                x13_7 = *x0_9
                
                if (*x11_10 != x13_7)
                    goto label_9fbfe8
                
                goto label_9fc01c
            
        label_9fbfdc:
            
            if (*x11_10 == x13_7)
            label_9fc01c:
                *(x9_7 + 0x150) = 1
                
                if (*(x11_10 + 4) == *x0_9)
                    *(x9_7 + 0x150) = 1
            else
            label_9fbfe8:
                
                if (*(x11_10 + 4) == x13_7)
                    *(x9_7 + 0x150) = 1
            
            i_4 += 1
            x11_10 += 0x5a30
        while (i_4 s< sx.q(*(arg1 + 0xd40)))
    
    x21_1 += 1

int32_t* x0_11 = DomBoardPile(arg1, 0x25)
int32_t x8_11 = *x0_11

if (x8_11 != 0)
    void* x9_9 = arg2 + zx.q(x21_1)
    *(arg2 + (zx.q(x21_1) << 2) + 0x140) = x8_11
    *(x9_9 + 0x150) = 0
    
    if (*(arg1 + 0xd40) s>= 1)
        int64_t i_5 = 0
        void* __offset(DomGame, 0x181c0) x11_11 = arg1 + 0x181c0
        
        do
            int32_t x13_10 = *x0_11
            
            if (*(x11_11 - 8) != x13_10)
                if (*(x11_11 - 4) == x13_10)
                    goto label_9fc0ec
                
                goto label_9fc0c0
            
            *(x9_9 + 0x150) = 1
            x13_10 = *x0_11
            
            if (*(x11_11 - 4) == x13_10)
            label_9fc0ec:
                *(x9_9 + 0x150) = 1
                x13_10 = *x0_11
                
                if (*x11_11 != x13_10)
                    goto label_9fc0cc
                
                goto label_9fc100
            
        label_9fc0c0:
            
            if (*x11_11 == x13_10)
            label_9fc100:
                *(x9_9 + 0x150) = 1
                
                if (*(x11_11 + 4) == *x0_11)
                    *(x9_9 + 0x150) = 1
            else
            label_9fc0cc:
                
                if (*(x11_11 + 4) == x13_10)
                    *(x9_9 + 0x150) = 1
            
            i_5 += 1
            x11_11 += 0x5a30
        while (i_5 s< sx.q(*(arg1 + 0xd40)))
    
    x21_1 += 1

int32_t* result = DomBoardPile(arg1, 0x26)
int32_t x8_13 = *result

if (x8_13 != 0)
    void* x9_11 = arg2 + zx.q(x21_1)
    *(arg2 + (zx.q(x21_1) << 2) + 0x140) = x8_13
    *(x9_11 + 0x150) = 0
    
    if (*(arg1 + 0xd40) s>= 1)
        int64_t i_6 = 0
        void* __offset(DomGame, 0x181c0) x11_12 = arg1 + 0x181c0
        
        do
            int32_t x13_13 = *result
            
            if (*(x11_12 - 8) != x13_13)
                if (*(x11_12 - 4) == x13_13)
                    goto label_9fc1d0
                
                goto label_9fc1a4
            
            *(x9_11 + 0x150) = 1
            x13_13 = *result
            
            if (*(x11_12 - 4) == x13_13)
            label_9fc1d0:
                *(x9_11 + 0x150) = 1
                x13_13 = *result
                
                if (*x11_12 != x13_13)
                    goto label_9fc1b0
                
                goto label_9fc1e4
            
        label_9fc1a4:
            
            if (*x11_12 == x13_13)
            label_9fc1e4:
                *(x9_11 + 0x150) = 1
                
                if (*(x11_12 + 4) == *result)
                    *(x9_11 + 0x150) = 1
            else
            label_9fc1b0:
                
                if (*(x11_12 + 4) == x13_13)
                    *(x9_11 + 0x150) = 1
            
            i_6 += 1
            x11_12 += 0x5a30
        while (i_6 s< sx.q(*(arg1 + 0xd40)))

int32_t x9_13 = *(arg1 + 0x1528)

if (x9_13 s>= 1)
    int64_t i_7 = 0
    void* __offset(DomGame, 0x1a70) x10_8 = arg1 + 0x1a70
    
    do
        if (*x10_8 == 0x103)
            int64_t x11_14 = sx.q(*(x10_8 + 0x24))
            
            if (x11_14.d != 0xffffffff)
                void* x9_14 = arg2 + (x11_14 << 2)
                *(x9_14 + 0x154) += 1
                x9_13 = *(arg1 + 0x1528)
        
        i_7 += 1
        x10_8 += 0x68
    while (i_7 s< sx.q(x9_13))

*(arg2 + 0x16c) = *(arg1 + 0x19e4)
return result
