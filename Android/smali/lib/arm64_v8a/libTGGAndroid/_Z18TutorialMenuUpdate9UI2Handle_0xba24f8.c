// 函数: _Z18TutorialMenuUpdate9UI2Handle
// 地址: 0xba24f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, TutorialMenuClick)
int32_t x22 = *gTutorialMenu
int32_t x24

x24 = x22 s< 2 ? 4 : 8

int32_t x8

if (x22 s>= 2)
    x8 = 8 - (x22 << 3)
else
    x8 = neg.d(x22 << 2)

int32_t x2

if (x24 s< x8 + 0x18)
    x2 = x24
else
    x2 = x8 + 0x18

UI2SetInt(zx.q(x19), &data_1832e98, x2, 0xffffffff)

if (x22 == 0)
    int32_t x20_2 = 0
    
    do
        if (x20_2 s> *(GetActiveProfile() + 0x4340))
            UI2SetState(zx.q(x19), &data_1832ec8, x20_2, 0)
        
        x20_2 += 1
    while (x24 != x20_2)
else
    UI2SetState(zx.q(x19), &data_1832eb0, 0xffffffff, 0)

int32_t x8_2 = *gTutorialMenu
int32_t x8_4

if (x8_2 s< 2)
    x8_4 = x8_2 << 2
else
    x8_4 = (x8_2 << 3) - 8

int64_t result = UI2SetState(zx.q(x19), *(muls.dp.d(x8_4, 0x28) + &data_18361b8), 0xffffffff, 0)
int32_t x20_1 = 0

do
    int32_t x8_6 = *gTutorialMenu
    int32_t x8_7
    
    if (x8_6 s< 2)
        x8_7 = x8_6 << 2
    else
        x8_7 = (x8_6 << 3) - 8
    
    int32_t x8_8 = x8_7 + x20_1
    
    if (x8_8 s> 0x17)
        break
    
    result = UI2SetState(zx.q(x19), muls.dp.d(x8_8, 0x28) + &data_18361a0, x20_1, 0)
    x20_1 += 1
while (x24 != x20_1)

int64_t* x1_3

if (x22 == 0)
    x1_3 = &data_1830e10
else
    if (x22 != 3)
        return result
    
    x1_3 = &data_1830e28

return UI2SetState(zx.q(x19), x1_3, 0xffffffff, 0) __tailcall
