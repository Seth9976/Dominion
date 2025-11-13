// 函数: _Z19GameSettingsDisposev
// 地址: 0x9deb74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *gGameSettings

if (x0 != 0)
    DefinitionDeleteBlock(x0, *defMapLocalSettings)
    *gGameSettings = 0

void* x0_1 = *(gGameSettings + 8)

if (x0_1 != 0)
    DefinitionDeleteBlock(x0_1, *defMapChannelSettings)
    *(gGameSettings + 8) = 0

if (*(gGameSettings + 0x10) != 0)
    GameProfile::~GameProfile()
    GameProfile::~GameProfile()
    GameProfile::~GameProfile()
    GameProfile::~GameProfile()
    XPooledFree(*(gGameSettings + 0x10), 0x1f2f0)
    *(gGameSettings + 0x10) = 0

void* result = *(gGameSettings + 0x18)

if (result != 0)
    result = DefinitionDeleteBlock(result, *defMapServerSettings)
    *(gGameSettings + 0x18) = 0

return result
