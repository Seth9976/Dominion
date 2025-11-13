// 函数: _Z14UpdatePilePodsR11PodIconInfoRK16PodIconInfoEntry8DomWhere9PlayerWho
// 地址: 0xba9ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx* x0_1 = PodIconGetPile(*(arg1 + (sx.q(*arg2) << 3) + 0x1008))
int64_t x9 = *arg2
int64_t x8_2 = *(arg2 + 4)
int32_t x25

if (x9.d s>= x8_2.d)
    x25 = 0
else
    int64_t x10_1 = x8_2 - x9
    
    if (x10_1 u>= 2)
        int64_t i_7 = x10_1 & 0xfffffffffffffffe
        void* x14_1 = arg1 + (x9 << 3)
        int32_t x11_1 = 0
        int32_t x12_1 = 0
        x9 += i_7
        void* x14_2 = x14_1 + 0x1010
        int64_t i_6 = i_7
        int64_t i
        
        do
            void* x16_1 = *(x14_2 - 8)
            void* x17_1 = *x14_2
            x14_2 += 0x10
            
            if (*(x16_1 + 0x2c) != 7)
                x11_1 += 1
            
            if (*(x17_1 + 0x2c) != 7)
                x12_1 += 1
            
            i = i_6
            i_6 -= 2
        while (i != 2)
        x25 = x12_1 + x11_1
        
        if (x10_1 != i_7)
            goto label_ba9e90
    else
        x25 = 0
    label_ba9e90:
        int64_t i_4 = x8_2 - x9
        void* x9_2 = arg1 + (x9 << 3) + 0x1008
        int64_t i_1
        
        do
            void* x10_2 = *x9_2
            x9_2 += 8
            
            if (*(x10_2 + 0x2c) != 7)
                x25 += 1
            
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

int32_t x8_3 = *(x0_1 + 0x2134)
bool z

if (x8_3 == *(gDomClient + 0x1d01c))
    z = x8_3 == 0
else
    z = true

int32_t x24

x24 = not(z) ? 0xe : 6

int64_t result = IsBoardPile(zx.q(*(x0_1 + 0x5c)))
int32_t x8_4 = *(x0_1 + 0x21d0)
int32_t var_48 = arg3
int32_t var_44 = arg4
int32_t var_50 = 1
int32_t var_4c = x8_4
int64_t i_2

if (x24 s>= x25)
    result = ClearPileArrows(x0_1, arg1, arg2)
label_ba9f60:
    i_2 = sx.q(*arg2)
    
    if (i_2.d s< *(arg2 + 4))
    label_ba9fc0:
        
        do
            void* x11_4 = *(arg1 + 0x1008 + (i_2 << 3))
            
            if (x11_4 != 0)
                if (*(x11_4 + 0x3b0) != 1)
                    *(x11_4 + 0x2144) = 0
                else
                    *(x11_4 + 0x2144) = (*(x11_4 + 0x3c4) s>= x24 ? 1 : 0).b
            
            i_2 += 1
        while (i_2 s< sx.q(*(arg2 + 4)))
else
    int64_t x9_4 = *arg2
    int64_t x8_5 = *(arg2 + 4)
    
    if (x9_4.d s< x8_5.d)
        int64_t i_5 = x8_5 - x9_4
        void* x9_6 = arg1 + (x9_4 << 3) + 0x1008
        int64_t i_3
        
        do
            void* x10_4 = *x9_6
            
            if (*(x10_4 + 0x2c) == 7 && *(x10_4 + 0x220) == 0)
                goto label_ba9f60
            
            i_3 = i_5
            i_5 -= 1
            x9_6 += 8
        while (i_3 != 1)
    
    result = PileAddTokenSlot(DomCreateArrow(&var_50, x24 - 1, 0), x0_1, x24 - 1)
    i_2 = sx.q(*arg2)
    
    if (i_2.d s< *(arg2 + 4))
        goto label_ba9fc0
return result
