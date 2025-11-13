// 函数: _Z17CampaignGetStatusv
// 地址: 0xb003a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gCampaignDlg + 0x502c)

if (x8 != 1)
    if (x8 != 0)
        pthread_kill(pthread_self(), 6)
        int64_t x0_5
        int64_t x1
        x0_5, x1 = XNoReturn()
        return TryModifyAI(x0_5, x1) __tailcall
    
    return GetActiveProfile() + 0x358c

void* x0_1 = GetActiveProfile()
int32_t i = *(gCampaignDlg + 0x5030)
int32_t* x9_3 = *(*(x0_1 + 0x7750) + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(x0_1 + 0x7758))) << 3))
void* result

if (x9_3 == 0)
label_b00414:
    result = 0x14
    
    if ((zx.d(*0x18) & 4) != 0)
        XTrace("using local status")
else
    while (i != *x9_3)
        x9_3 = *(x9_3 + 0x98)
        
        if (x9_3 == 0)
            goto label_b00414
    
    result = &x9_3[6]
    
    if ((zx.d(x9_3[7].b) & 4) != 0)
        XTrace("using local status")

return result
