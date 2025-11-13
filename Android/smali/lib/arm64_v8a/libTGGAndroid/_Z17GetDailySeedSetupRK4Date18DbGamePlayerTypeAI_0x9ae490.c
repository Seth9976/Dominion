// 函数: _Z17GetDailySeedSetupRK4Date18DbGamePlayerTypeAI
// 地址: 0x9ae490
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
GameSetup* entry_x8
memset(entry_x8, 0, 0x11b0)
XString::XString()
XString::XString()
XString::XString()
*(entry_x8 + 0x11ac) = 2
*(entry_x8 + 0x60) = 0x3e8
*(entry_x8 + 0x64) = *(GetActiveProfile() + 0x4320)
GetActiveProfile()
strcpy(entry_x8 + 0x4c, XString::operator char const*())
*(entry_x8 + 0x290) = x19
*(entry_x8 + 0x28c) = 3
__builtin_strcpy(entry_x8 + 0x278, "Hard AI")
*(entry_x8 + 0x11ac) = 2
*(entry_x8 + 0x28) = GameLatestVersion(GameSpecific_GameType(), false)
*(entry_x8 + 0x2c) = 0
void* x0_9 = GetClient()

for (Date* i = *(*(x0_9 + 0x75d8) + ((((0xffff00ff & zx.q(*arg1 << 0x10))
        | zx.q(zx.d((*(arg1 + 4)).b) << 8) | zx.q(*(arg1 + 8))) & zx.q(*(x0_9 + 0x75e0))) << 3)); i != 0; 
        i = *(i + 0x28))
    if ((operator!=(arg1, i) & 1) == 0)
        break

void var_48
XString::XString(&var_48)
XString::operator=(entry_x8 + 0x30)
XString::~XString()
XString::operator=(entry_x8 + 0x38)
*(entry_x8 + 0x18) = 6
return GameSetupSetAILevel(entry_x8, zx.q(x19))
