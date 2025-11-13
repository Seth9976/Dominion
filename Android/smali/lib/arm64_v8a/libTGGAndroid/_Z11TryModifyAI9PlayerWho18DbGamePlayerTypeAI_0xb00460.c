// 函数: _Z11TryModifyAI9PlayerWho18DbGamePlayerTypeAI
// 地址: 0xb00460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x19 = arg2
uint32_t x20 = arg1
GameSave* x0 = ActiveGame()
int32_t x0_4 = AILevelLessThan(zx.q(x19), zx.q(GameSetupAILevelFlag(x0 + 8)))
int32_t x0_6

if ((x0_4 & 1) == 0)
    x0_6 = GameSaveAnyMoveMade(x0)

if (((x0_4 & 1) != 0 || (x0_6 & 1) == 0) && (zx.d(*(GetActiveProfile() + 0x4344)) & 2) == 0
        && (GameSaveAnyMoveMade(x0) & 1) != 0 && (zx.d(*(x0 + 0x20)) & 4) != 0)
    *gPendingAIWho = x20
    *gPendingAILevel = x19
    return GameMsgBoxTranslated("dom_ui_daily_difficulty_confirm_header", 
        "dom_ui_daily_difficulty_confirm_body", 0x20, nullptr, nullptr, sub_bad014, nullptr) __tailcall

int64_t result = ModifyAI(zx.q(x20), zx.q(x19))
int64_t x10 = sx.q(*(gDomClient + 0x8444c))
*(gDomClient + 0x8444c) = x10.d + 1
*(gDomClient + (x10 << 3) + 0x8441c) = x20
*(gDomClient + (x10 << 3) + 0x84420) = x19
return result
