// 函数: _Z8ModifyAI9PlayerWho18DbGamePlayerTypeAI
// 地址: 0xb0028c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1
GameSave* x0 = ActiveGame()
char* x0_2 = GameGetPlayer(x0 + 8, zx.q(x20))
*(x0_2 + 0x18) = x19
int32_t x0_3 = strlen(x0_2)
int32_t x8_1

if (x0_3 s> 0xe)
    x8_1 = x0_3 - 1
else
    x8_1 = 0xe

int64_t x8_2 = sx.q(x8_1)

if (zx.d(x0_2[x8_2]) != 0x2a)
    *(x0_2 + x8_2) = 0x2a

int32_t x0_7 = AILevelLessThan(zx.q(x19), zx.q(GameSetupAILevelFlag(x0 + 8)))
int32_t x0_9

if ((x0_7 & 1) == 0)
    x0_9 = GameSaveAnyMoveMade(x0)

if ((x0_7 & 1) != 0 || (x0_9 & 1) == 0)
    GameSetupSetAILevel(x0 + 8, zx.q(x19))
    LocalGameSaveXML(x0, *x0)

int32_t var_34
int32_t* result = IsCampaignMission(zx.q(*x0), &var_34)

if ((result.d & 1) != 0)
    result = CampaignGetStatus()
    *result = x19

uint64_t i_1 = zx.q(*(gDomClient + 0x8444c))

if (i_1.d s>= 1)
    int64_t (* x9_1)() = gDomClient + 0x84420
    uint64_t i
    
    do
        if (*(x9_1 - 4) == x20)
            *x9_1 = x19
            break
        
        i = i_1
        i_1 -= 1
        x9_1 += 8
    while (i != 1)

return result
