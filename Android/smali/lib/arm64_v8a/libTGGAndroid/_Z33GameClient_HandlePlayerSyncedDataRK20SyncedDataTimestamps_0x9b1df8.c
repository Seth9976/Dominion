// 函数: _Z33GameClient_HandlePlayerSyncedDataRK20SyncedDataTimestamps
// 地址: 0x9b1df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()

if (*arg1 == 0 && *(x0 + 0x42c8) == 0)
    *(x0 + 0x42c8) = CurrentDateTime()
    
    if (*(arg1 + 8) == 0)
        goto label_9b1e38
else if (*(arg1 + 8) == 0)
label_9b1e38:
    
    if (*(x0 + 0x42d0) == 0)
        *(x0 + 0x42d0) = CurrentDateTime()

if (*(arg1 + 0x10) == 0 && *(x0 + 0x42d8) == 0)
    *(x0 + 0x42d8) = CurrentDateTime()
    
    if (*(arg1 + 0x18) == 0)
        goto label_9b1e74
else if (*(arg1 + 0x18) == 0)
label_9b1e74:
    
    if (*(x0 + 0x42e0) == 0)
        *(x0 + 0x42e0) = CurrentDateTime()

if (*(arg1 + 0x20) == 0 && *(x0 + 0x42e8) == 0)
    *(x0 + 0x42e8) = CurrentDateTime()
    
    if (*(arg1 + 0x28) == 0)
        goto label_9b1eb4
else if (*(arg1 + 0x28) == 0)
label_9b1eb4:
    
    if (*(x0 + 0x42f0) == 0)
        *(x0 + 0x42f0) = CurrentDateTime()

int64_t x8_15 = *(x0 + 0x42c8)
int64_t x9 = *arg1
int64_t var_2e8
int32_t var_2e0
int32_t x24

if (x8_15 u< x9)
    NetworkSendSimpleMessage(zx.q(*(GetClient() + 0x14)), 0xf42be)
    x24 = 0
else if (x8_15 u<= x9)
    x24 = 0
else
    int64_t x0_9 = CurrentDateTime()
    *(x0 + 0x42c8) = x0_9
    var_2e8 = x0_9
    SafeStrcpy(&var_2e0, XString::operator char const*(), 0x10)
    NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42bf, 0x18, &var_2e8)
    x24 = 1

int64_t x8_16 = *(x0 + 0x42d0)
int64_t x9_1 = *(arg1 + 8)

if (x8_16 u< x9_1)
    NetworkSendSimpleMessage(zx.q(*(GetClient() + 0x14)), 0xf42c0)
else if (x8_16 u> x9_1)
    int64_t x0_17 = CurrentDateTime()
    *(x0 + 0x42d0) = x0_17
    var_2e8 = x0_17
    var_2e0 = *(x0 + 0x10)
    NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42c1, 0x10, &var_2e8)
    x24 = 1

memset(&var_2e8, 0, 0x280)
int32_t x0_22 = GetOwnedExpansionSetups(&var_2e8)
int32_t var_58 = x0_22
int64_t* var_60 = &var_2e8
int32_t var_2ec
int64_t result = DomExpansionsBitsetFromExpansions(&var_2e8, x0_22, &var_2ec)

if (result.d != *(x0 + 0x6f4c) || var_2ec != *(x0 + 0x6f50) || *(x0 + 0x42d8) != *(arg1 + 0x10))
    int64_t x0_24 = CurrentDateTime()
    *(x0 + 0x42d8) = x0_24
    *(x0 + 0x6f4c) = result.d
    *(x0 + 0x6f50) = var_2ec
    int64_t var_68 = x0_24
    result = NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42c2, *defMapSetExpansions, &var_68)
    x24 = 1

int64_t x8_22 = *(x0 + 0x42e0)
int64_t x9_4 = *(arg1 + 0x18)

if (x8_22 u< x9_4)
    result = NetworkSendSimpleMessage(zx.q(*(GetClient() + 0x14)), 0xf42c3)
else if (x8_22 u> x9_4)
    int64_t x0_29 = CurrentDateTime()
    *(x0 + 0x42e0) = x0_29
    var_2e8 = x0_29
    int32_t x0_31 = memcrc32(x0 + 0x5964, sx.q(*(x0 + 0x6454)) << 2, 0)
    var_2e0.q = x0 + 0x5964
    int32_t var_2d8_1 = *(x0 + 0x6454)
    int32_t var_2d4_1 = x0_31
    result = NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42c4, *defMapSetBans, &var_2e8)
    x24 = 1

int64_t x8_25 = *(x0 + 0x42e8)
int64_t x9_5 = *(arg1 + 0x20)

if (x8_25 u< x9_5)
    result = NetworkSendSimpleMessage(zx.q(*(GetClient() + 0x14)), 0xf42c5)
else if (x8_25 u> x9_5)
    int64_t x0_36 = CurrentDateTime()
    *(x0 + 0x42e8) = x0_36
    var_2e8 = x0_36
    int32_t x0_38 = memcrc32(x0 + 0x5760, sx.q(*(x0 + 0x5960)) << 3, 0)
    var_2e0.q = x0 + 0x5760
    int32_t var_2d8_2 = *(x0 + 0x5960)
    int32_t var_2d4_2 = x0_38
    result = NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42c6, *defMapSetSmartplays, &var_2e8)
    x24 = 1

int64_t x8_28 = *(x0 + 0x42f0)
int64_t x9_6 = *(arg1 + 0x28)

if (x8_28 u>= x9_6)
    if (x8_28 u<= x9_6)
        goto label_9b21bc
    
    int64_t x0_43 = CurrentDateTime()
    *(x0 + 0x42f0) = x0_43
    int64_t x8_30 = *(x0 + 0x7574)
    int32_t var_2d8_3 = *(x0 + 0x757c)
    var_2e8 = x0_43
    var_2e0.q = x8_30
    NetworkSendMessage(zx.q(*(GetClient() + 0x14)), 0xf42c8, 0x18, &var_2e8)
else
    result = NetworkSendSimpleMessage(zx.q(*(GetClient() + 0x14)), 0xf42c7)
label_9b21bc:
    
    if (x24 == 0)
        return result

return SaveProfiles()
