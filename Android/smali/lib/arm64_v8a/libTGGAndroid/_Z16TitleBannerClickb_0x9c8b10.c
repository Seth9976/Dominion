// 函数: _Z16TitleBannerClickb
// 地址: 0x9c8b10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_b0[0x28]
int64_t result = GetOwnedExpansions(&var_b0)
uint64_t x19 = zx.q(result.d)

if (result.d s>= 1)
    uint64_t x9_1 = zx.q(x19.d)
    int32_t (* x8_1)[0x28] = &var_b0
    
    while (true)
        if (*x8_1 == 0x13)
            x19 = sx.q(x19.d) - 1
            *x8_1 = var_b0[x19]
            
            if (x19.d s< 1)
                break
        else
            uint64_t temp0_1 = x9_1
            x9_1 -= 1
            x8_1 = &(*x8_1)[1]
            
            if (temp0_1 != 1)
                continue
            else if (x19.d s< 1)
                break
        
        uint64_t i_1 = zx.q(x19.d)
        int32_t (* x8_2)[0x28] = &var_b0
        uint64_t i
        
        do
            if (*x8_2 == 2)
                x19 = sx.q(x19.d) - 1
                *x8_2 = var_b0[x19]
                
                if (x19.d != 0)
                    goto label_9c8b98
                
                goto label_9c8c08
            
            i = i_1
            i_1 -= 1
            x8_2 = &(*x8_2)[1]
        while (i != 1)
        break

if (x19.d == 0)
label_9c8c08:
    *(gStoreDlg + 8) = 0
    *gStoreDlg = 0x300000000
    *(gGameDlgManager + 0xc8) = 0x15
    return result

label_9c8b98:
void* x0_1 = GetActiveProfile()

if (x19.d s> 2)
    *(x0_1 + 0x3528) = 1
    return CampaignDialogOpen()

*(x0_1 + 0x3528) = 0
SaveProfiles()
return CampaignDialogOpen()
