// 函数: _Z9ExecPiece13CampaignPiece
// 地址: 0xa3f9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 =
    *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != arg1)

void* x8_3 = *(x9_2 + 8)
int64_t x9_4

if (*(x8_3 + 0x18) == 1)
    x9_4 = 0
else if (*(x8_3 + 0x288) == 1)
    x9_4 = 1
else if (*(x8_3 + 0x4f8) != 1)
    if (*(x8_3 + 0x768) != 1)
        pthread_kill(pthread_self(), 6)
        return CampaignAddExpFeature(XNoReturn()) __tailcall
    
    x9_4 = 3
else
    x9_4 = 2

jump(*(x8_3 + x9_4 * 0x270 + 0x20))
