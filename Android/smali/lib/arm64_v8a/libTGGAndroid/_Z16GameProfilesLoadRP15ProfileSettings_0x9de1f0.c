// 函数: _Z16GameProfilesLoadRP15ProfileSettings
// 地址: 0x9de1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ProfileSettings* x0 = XPooledCalloc(0x1f2f0)
GameProfile::GameProfile()
GameProfile::GameProfile()
GameProfile::GameProfile()
GameProfile::GameProfile()
*arg1 = x0
char var_38
XString::XString(&var_38)
HalFilePathCreate(&var_38, 0)
XString::~XString()
void var_30
ProfileSettings_Save* x0_7 = DefXMLReadFileIntoDefinitionBlock(*defMapProfileSettings, &var_30)
ProfileSettings_Save* x20_1 = x0_7

if (x0_7 == 0)
    x20_1 = DefinitionAllocDefaultBlock(*defMapProfileSettings)

ToSettings(*arg1, x20_1)
DefinitionDeleteBlock(x20_1, *defMapProfileSettings)
int32_t* x8 = *(gGameSettings + 0x10)
uint64_t x9 = zx.q(x8[0x7cb8])

if (x9.d s< 1)
    NewProfile()
    GameProfilesSave(*arg1)
    x8 = *(gGameSettings + 0x10)
    x9 = zx.q(x8[0x7cb8])
else
    int64_t x12_1 = x9 - 1
    int64_t x11_1 = 0x4320
    
    while (*(x8 + x11_1) != *(*arg1 + 0x1f2e4))
        int64_t x14_2 = x12_1
        x12_1 -= 1
        x11_1 += 0x7cb8
        
        if (x14_2 == 0)
            break

uint64_t x9_1

x9_1 = x9 u> 1 ? x9 : 1

void* x14_3 = &x8[0x10c8]
void* x19_1 = x8

while (*x14_3 != x8[0x7cb9])
    x19_1 += 0x7cb8
    uint64_t temp0_1 = x9_1
    x9_1 -= 1
    x14_3 += 0x7cb8
    
    if (temp0_1 == 1)
        x19_1 = x8
        x8[0x7cb9] = x8[0x10c8]
        break

*(x19_1 + 0x30) = 0
SyncedDataSetAccount(x19_1 + 0x42f8)
*(x19_1 + 0x78a0) = 0
ProfileVerifyEntitlements(x19_1)
LocalGameExists(true)
return XString::~XString()
