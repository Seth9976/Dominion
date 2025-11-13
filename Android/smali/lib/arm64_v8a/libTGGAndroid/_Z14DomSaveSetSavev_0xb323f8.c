// 函数: _Z14DomSaveSetSavev
// 地址: 0xb323f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(gDomSetSave + 8)
int32_t x19_1

if (x8 u>= 2)
    if (x8 != 2)
        pthread_kill(pthread_self(), 6)
        return DomSetSaveCommit(XNoReturn()) __tailcall
    
    XString::operator=(GetActiveProfile() + sx.q(*(gDomSetSave + 0xc)) * 0x18 + 0x6f58)
    SaveProfiles()
    x19_1 = *(gDomSetSave + 0xc)
else
    DomSaveSetString()
    void* x0 = GetActiveProfile()
    int64_t x8_1 = sx.q(*(x0 + 0x7558))
    void* x22_1 = x0 + x8_1 * 0x18
    *(x0 + 0x7558) = x8_1.d + 1
    XString::operator=(x22_1 + 0x6f58)
    XString::operator=(x22_1 + 0x6f60)
    DomSetupConfigFromString(XString::operator char const*(), GameLatestVersion(4, false))
    ExpansionsBitsetFlags var_19c4
    void var_19c0
    *(x22_1 + 0x6f68) = DomSetupConfigToExpansionBitset(&var_19c0, &var_19c4)
    SaveProfiles()
    x19_1 = *(x0 + 0x7558) - 1
    XString::~XString()

return zx.q(x19_1)
