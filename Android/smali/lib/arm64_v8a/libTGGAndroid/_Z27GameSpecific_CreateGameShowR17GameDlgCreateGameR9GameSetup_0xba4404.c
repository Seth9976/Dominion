// 函数: _Z27GameSpecific_CreateGameShowR17GameDlgCreateGameR9GameSetup
// 地址: 0xba4404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GetKingdomConfig(arg2)
void var_19f0
int64_t result = HasNonDefaultKingdom(&var_19f0)
int32_t x8_2

if ((result.d & 1) == 0 || (zx.d(*(arg2 + 0x18)) & 0x20) != 0)
    x8_2 = 0
else
    x8_2 = 1

int32_t x9 = *arg1
*(arg1 + 4) = x8_2
*(arg1 + 0x70) = x8_2.b

if (x9 u> 1)
    return result

GameLatestVersion(4, true)
void* x0_2 = GetActiveProfile()
int32_t var_60
int32_t var_54

if (*(x0_2 + 0x6454) s>= 1)
    int32_t i = 0
    
    do
        void* x26_1 = x0_2 + (sx.q(i) << 2) + 0x5964
        int32_t x0_5 = DomExpGet(DomCardExp(zx.q(*x26_1), &var_54), &var_60)
        uint64_t x8_11 = zx.q(var_54)
        void* x8_7
        
        if ((x8_11.d & 0x80000000) != 0 || x8_11.d s>= x0_5)
            i -= 1
            int64_t x8_5 = sx.q(*(x0_2 + 0x6454)) - 1
            *(x0_2 + 0x6454) = x8_5.d
            x8_7 = x0_2 + (x8_5 << 2) + 0x5964
        else
            x8_7 = var_60.q + x8_11 * 0x780 + 0xc0
        
        i += 1
        *x26_1 = *x8_7
    while (i s< *(x0_2 + 0x6454))

void* x0_6 = GetActiveProfile()

if (*(x0_6 + 0x6f48) s>= 1)
    int32_t i_1 = 0
    
    do
        void* x26_2 = x0_6 + (sx.q(i_1) << 2) + 0x6458
        int32_t x0_9 = DomExpGet(DomCardExp(zx.q(*x26_2), &var_54), &var_60)
        uint64_t x8_21 = zx.q(var_54)
        void* x8_17
        
        if ((x8_21.d & 0x80000000) != 0 || x8_21.d s>= x0_9)
            i_1 -= 1
            int64_t x8_15 = sx.q(*(x0_6 + 0x6f48)) - 1
            *(x0_6 + 0x6f48) = x8_15.d
            x8_17 = x0_6 + (x8_15 << 2) + 0x6458
        else
            x8_17 = var_60.q + x8_21 * 0x780 + 0xc0
        
        i_1 += 1
        *x26_2 = *x8_17
    while (i_1 s< *(x0_6 + 0x6f48))

int32_t x8_23 = *arg1
void var_dec

if (x8_23 == 0)
    memcpy(&var_dec, GetActiveProfile() + 0x6458, sx.q(*(GetActiveProfile() + 0x6f48)) << 2)
else if (x8_23 == 1)
    memcpy(&var_dec, GetActiveProfile() + 0x5964, sx.q(*(GetActiveProfile() + 0x6454)) << 2)
DomSetupConfigToString(&var_19f0, *(arg2 + 0x28), 0)
XString::operator=(arg2 + 0x30)
XString::~XString()
int32_t x0_16 = ProfileHasEntitlementForExpansion(3, &var_60)
int32_t x8_26 = *arg1
int32_t x21_3 = x0_16 & (var_60 != 0x63 ? 1 : 0)
int32_t x1_7

x1_7 = x21_3 != 0 ? 6 : 4

if (x8_26 == 0)
    ValidateConfigSinglePlayer(arg2, x1_7)
else if (x8_26 == 1)
    ValidateConfigMultiPlayer(arg2, x1_7)
    
    if ((zx.d(*(arg1 + 8)) & 1) != 0)
        *(arg2 + 0x28c) = 2
        *(arg2 + 0x4b8) = 0x100000002
        *(arg2 + 0x6e4) = 0x100000002
        *(arg2 + 0x910) = 0x100000002
        *(arg2 + 0xb3c) = 0x100000002
        
        if ((x21_3 & 1) == 0)
            *(arg2 + 0x4b8) = 0
            *(arg2 + 0xb3c) = 0
        
        *(arg2 + 0x18) |= 0x20

return SaveProfiles()
