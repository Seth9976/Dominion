// 函数: _Z22ToggleSmartplaySetting9SmartPlay14SmartplayStyle
// 地址: 0xb02720
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
int32_t x20 = arg2
uint8_t* x0_1 = GetSmartplays(zx.q(arg2))
uint64_t x8 = zx.q(*(x0_1 + 0x200))
void* result

if (x8.d s< 1)
label_b02778:
    void* x22_2 = &x0_1[sx.q(x8.d) << 3]
    *(x0_1 + 0x200) = x8.d + 1
    *x22_2 = i
    *(x22_2 + 4) = SmartplayNextOption(zx.q(i), zx.q(GetSmartplayDefault(zx.q(i))))
    result = SaveSmartplays(zx.q(x20))
    
    if (x20 == 1)
    label_b027d0:
        result = GetClient()
        
        if (*(result + 0x5068) == 2)
            uint8_t* var_40_1 = x0_1
            int32_t var_48 = *ActiveGame()
            int32_t var_44_1 = 0
            int64_t x8_4 = sx.q(*(x0_1 + 0x200))
            int32_t var_38_1 = x8_4.d
            int32_t var_34_1 = memcrc32(x0_1, x8_4 << 3, 0)
            return NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42cd, *defMapGameSmartplays, 
                &var_48)
else
    void* x22_1 = &x0_1[4]
    uint64_t x9_1 = x8
    
    while (*(x22_1 - 4) != i)
        uint64_t temp0_1 = x9_1
        x9_1 -= 1
        x22_1 += 8
        
        if (temp0_1 == 1)
            goto label_b02778
    
    *x22_1 = SmartplayNextOption(zx.q(i), zx.q(*x22_1))
    result = SaveSmartplays(zx.q(x20))
    
    if (x20 == 1)
        goto label_b027d0

return result
