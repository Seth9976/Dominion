// 函数: _Z14ClickstateFoldRK10ControllerPK12ButtonSourcei
// 地址: 0xc82464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = *arg2
void* __offset(Controller, 0x10) x8
int32_t x9

if (x24 s> 0x23)
    if (*(arg1 + 8) == 0)
        x8 = arg1 + 0x72d0
    else
        x8 = arg1 + 0x8c50
    
    x9 = x24 - 0x24
else
    x8 = arg1 + 0x10
    x9 = x24

int64_t entry_x8
int64_t result = memcpy(entry_x8, x8 + muls.dp.d(x9, 0x330), 0x330)

if (arg3 s>= 1)
    void* __offset(ButtonSource, 0x4) x20_1 = arg2 + 4
    void* __offset(Controller, 0x8c50) x21_1
    
    if (*(arg1 + 8) == 0)
        x21_1 = arg1 + 0x72d0
    else
        x21_1 = arg1 + 0x8c50
    
    int64_t x22_1 = zx.q(arg3) - 1
    
    while (true)
        int32_t x9_3
        
        if (x24 s< 0x24)
            x9_3 = x24
        else
            x9_3 = x24 - 0x24
        
        void* __offset(Controller, 0x10) x8_4
        
        if (x24 s< 0x24)
            x8_4 = arg1 + 0x10
        else
            x8_4 = x21_1
        
        void* x1_1 = x8_4 + muls.dp.d(x9_3, 0x330)
        int64_t x9_4
        
        if (zx.d(*(x1_1 + 8)) == 0)
            x9_4 = sx.q(x9_3)
        
        if (zx.d(*(x1_1 + 8)) != 0 || zx.d(*(x8_4 + x9_4 * 0x330 + 0x32c)) != 0
                || zx.d(*(x8_4 + x9_4 * 0x330 + 0x32b)) != 0
                || zx.d(*(x8_4 + x9_4 * 0x330 + 0x329)) != 0)
            result = memcpy(entry_x8, x1_1, 0x32e)
        
        if (x22_1 == 0)
            break
        
        x24 = *x20_1
        x20_1 += 4
        x22_1 -= 1

return result
