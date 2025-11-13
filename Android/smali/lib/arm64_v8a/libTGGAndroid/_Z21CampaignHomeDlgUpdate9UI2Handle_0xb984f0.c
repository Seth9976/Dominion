// 函数: _Z21CampaignHomeDlgUpdate9UI2Handle
// 地址: 0xb984f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, CampaignHomeDlgClick)
void* x0 = GetActiveProfile()
int32_t x8 = *(x0 + 0x3528)
int64_t* x1_1

if (x8 == 0)
    x1_1 = &data_18324a8
else
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        return SmartplayDlgOpen(XNoReturn()) __tailcall
    
    x1_1 = &data_18324c0

UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
GrandCampaignCompleteInfo(x0 + 0x360c)
UI2SetState(zx.q(x19), &data_18324f0, 0xffffffff, 0)
int32_t var_28
UI2SetInt(zx.q(x19), &data_1832448, var_28, 0xffffffff)

if (var_28 s>= 1)
    int64_t i = 0
    void var_68
    void* x21_1 = &var_68
    
    do
        DeclareCampaignMedal(zx.q(x19), x21_1, i.d)
        i += 1
        x21_1 += 0x10
    while (i s< sx.q(var_28))

return GameSpecific_UpdateExpansionButtons(zx.q(x19), 6, 0)
