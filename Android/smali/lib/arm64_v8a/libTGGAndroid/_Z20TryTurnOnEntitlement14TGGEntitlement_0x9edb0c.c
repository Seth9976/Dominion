// 函数: _Z20TryTurnOnEntitlement14TGGEntitlement
// 地址: 0x9edb0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg1
void* result = GetActiveProfile()
uint64_t x22 = zx.q(i_1) | zx.q(i_1 s>> 4)

for (int32_t* i = *(*(result + 0x5750) + ((zx.q(*(result + 0x5758)) & x22) << 3)); i != 0; 
        i = *(i + 8))
    if (*i == i_1)
        if (i[1] == 1)
            return result
        
        break

void* x0 = GetActiveProfile()
uint64_t x22_1 = zx.q(*(x0 + 0x5758)) & zx.q(x22.d)
int32_t* x8_4 = *(*(x0 + 0x5750) + (zx.q(x22_1.d) << 3))

if (x8_4 == 0)
label_9edba8:
    int32_t* x0_1 = XPooledMalloc(0x10)
    *x0_1 = i_1
    x0_1[1] = 1
    uint64_t x9_4 = x22_1 << 3
    *(x0_1 + 8) = *(*(x0 + 0x5750) + x9_4)
    *(*(x0 + 0x5750) + x9_4) = x0_1
    *(x0 + 0x575c) += 1
else
    while (*x8_4 != i_1)
        x8_4 = *(x8_4 + 8)
        
        if (x8_4 == 0)
            goto label_9edba8
    
    x8_4[1] = 1

SaveProfiles()
void var_148
int32_t i_8 = CalcThingsToTurnOn(zx.q(i_1), &var_148, 0x20)
void* x0_3 = GetActiveProfile()
GetKingdomConfig(x0_3 + 0x18)
DomSetupConfig var_1ad8
void* x19_2

if (i_8 s<= 0)
    DomSetupConfigToString(&var_1ad8, *(x0_3 + 0x40), 0)
    XString::operator=(x0_3 + 0x48)
    XString::~XString()
    SaveProfiles()
    void* x0_33 = GetActiveProfile()
    GetKingdomConfig(x0_33 + 0x11c8)
    DomSetupConfigToString(&var_1ad8, *(x0_33 + 0x11f0), 0)
    XString::operator=(x0_33 + 0x11f8)
    XString::~XString()
    SaveProfiles()
    void* x0_37 = GetActiveProfile()
    x19_2 = x0_37
    GetKingdomConfig(x0_37 + 0x2378)
else
    uint64_t i_5 = zx.q(i_8)
    int32_t* x21_2 = &var_148 | 4
    uint64_t i_6 = i_5
    uint64_t i_2
    
    do
        int32_t x8_10 = x21_2[-1]
        
        if (x8_10 == 1)
            *(FindOrAddExpSetup(&var_1ad8, zx.q(*x21_2), 0xa00000000) + 4) = 0xffffffff
        else if (x8_10 == 2)
            void* x0_10 = FindOrAddExpSetup(&var_1ad8, 0x13, 0xa00000000)
            *(x0_10 + 4) |= *x21_2
        else if (x8_10 == 3)
            *(FindOrAddExpSetup(&var_1ad8, zx.q(*x21_2), 0xa00000000) + 4) = 2
        
        i_2 = i_6
        i_6 -= 1
        x21_2 = &x21_2[2]
    while (i_2 != 1)
    DomSetupConfigToString(&var_1ad8, *(x0_3 + 0x40), 0)
    XString::operator=(x0_3 + 0x48)
    XString::~XString()
    SaveProfiles()
    void* x0_13 = GetActiveProfile()
    GetKingdomConfig(x0_13 + 0x11c8)
    int32_t* x22_2 = &var_148 | 4
    uint64_t i_7 = i_5
    uint64_t i_3
    
    do
        int32_t x8_13 = x22_2[-1]
        
        if (x8_13 == 1)
            *(FindOrAddExpSetup(&var_1ad8, zx.q(*x22_2), 0xa00000000) + 4) = 0xffffffff
        else if (x8_13 == 2)
            void* x0_20 = FindOrAddExpSetup(&var_1ad8, 0x13, 0xa00000000)
            *(x0_20 + 4) |= *x22_2
        else if (x8_13 == 3)
            *(FindOrAddExpSetup(&var_1ad8, zx.q(*x22_2), 0xa00000000) + 4) = 2
        
        i_3 = i_7
        i_7 -= 1
        x22_2 = &x22_2[2]
    while (i_3 != 1)
    DomSetupConfigToString(&var_1ad8, *(x0_13 + 0x11f0), 0)
    XString::operator=(x0_13 + 0x11f8)
    XString::~XString()
    SaveProfiles()
    void* x0_23 = GetActiveProfile()
    x19_2 = x0_23
    GetKingdomConfig(x0_23 + 0x2378)
    int32_t* x22_3 = &var_148 | 4
    uint64_t i_4
    
    do
        int32_t x8_16 = x22_3[-1]
        
        if (x8_16 == 1)
            *(FindOrAddExpSetup(&var_1ad8, zx.q(*x22_3), 0xa00000000) + 4) = 0xffffffff
        else if (x8_16 == 2)
            void* x0_30 = FindOrAddExpSetup(&var_1ad8, 0x13, 0xa00000000)
            *(x0_30 + 4) |= *x22_3
        else if (x8_16 == 3)
            *(FindOrAddExpSetup(&var_1ad8, zx.q(*x22_3), 0xa00000000) + 4) = 2
        
        i_4 = i_5
        i_5 -= 1
        x22_3 = &x22_3[2]
    while (i_4 != 1)

DomSetupConfigToString(&var_1ad8, *(x19_2 + 0x23a0), 0)
XString::operator=(x19_2 + 0x23a8)
XString::~XString()
return SaveProfiles()
