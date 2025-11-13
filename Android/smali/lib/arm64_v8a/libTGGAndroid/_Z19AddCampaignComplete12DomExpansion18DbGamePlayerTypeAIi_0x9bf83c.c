// 函数: _Z19AddCampaignComplete12DomExpansion18DbGamePlayerTypeAIi
// 地址: 0x9bf83c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x21 = arg1
void* x0 = GetActiveProfile()
int64_t x8 = 0

while (true)
    void* x11_1 = x0 + 0x360c + x8
    int32_t x10_1 = *(x11_1 + 8)
    void* x8_1
    
    if (x10_1 == 0)
        x8_1 = x0 + x8
        int32_t x10_3 = *(x8_1 + 0x361c)
        *(x8_1 + 0x3614) = 1
        *(x8_1 + 0x3610) = x20
        int32_t x9_3
        
        x9_3 = x10_3 s> arg3 ? x10_3 : arg3
        
        *(x8_1 + 0x360c) = x21
        *(x8_1 + 0x361c) = x9_3
        
        if (arg3 != 0xa)
            break
    else if (*(x11_1 + 4) != x20 || *(x0 + 0x360c + x8) != x21)
        x8 += 0x14
        
        if (x8 == 0xc80)
            break
        
        continue
    else
        x8_1 = x0 + x8
        int32_t x9_1 = *(x8_1 + 0x361c)
        *(x8_1 + 0x3614) = x10_1 + 1
        int32_t x9_2
        
        x9_2 = x9_1 s> arg3 ? x9_1 : arg3
        
        *(x8_1 + 0x361c) = x9_2
        
        if (arg3 != 0xa)
            break
    
    *(x8_1 + 0x3618) += 1
    break

return SaveProfiles() __tailcall
