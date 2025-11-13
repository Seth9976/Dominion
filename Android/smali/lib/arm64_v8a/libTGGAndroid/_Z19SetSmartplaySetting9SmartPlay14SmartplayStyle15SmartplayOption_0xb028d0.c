// 函数: _Z19SetSmartplaySetting9SmartPlay14SmartplayStyle15SmartplayOption
// 地址: 0xb028d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
int32_t x20 = arg2
void* x0_1 = GetSmartplays(zx.q(arg2))
uint64_t x9 = zx.q(*(x0_1 + 0x200))
int64_t x8_1

if (x9.d s< 1)
label_b02928:
    x8_1 = sx.q(x9.d)
    *(x0_1 + 0x200) = x9.d + 1
    *(x0_1 + (x8_1 << 3)) = i
else
    x8_1 = 0
    void* x10_1 = x0_1
    
    while (*x10_1 != i)
        x8_1 += 1
        x10_1 += 8
        
        if (x9 == x8_1)
            goto label_b02928

*(x0_1 + (x8_1 << 3) + 4) = arg3
void* result = SaveSmartplays(zx.q(x20))

if (x20 == 1)
    result = GetClient()
    
    if (*(result + 0x5068) == 2)
        void* var_40_1 = x0_1
        int32_t var_48 = *ActiveGame()
        int32_t var_44_1 = 0
        int64_t x8_5 = sx.q(*(x0_1 + 0x200))
        int32_t var_38_1 = x8_5.d
        int32_t var_34_1 = memcrc32(x0_1, x8_5 << 3, 0)
        return NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42cd, *defMapGameSmartplays, &var_48)

return result
