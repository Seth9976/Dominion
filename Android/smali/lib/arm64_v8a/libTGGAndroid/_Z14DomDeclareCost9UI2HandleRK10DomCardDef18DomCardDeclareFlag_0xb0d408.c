// 函数: _Z14DomDeclareCost9UI2HandleRK10DomCardDef18DomCardDeclareFlag
// 地址: 0xb0d408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x21 = arg3
CardCostParse(zx.q(*(arg2 + 0xc4)))
int32_t var_90
int32_t var_58

if (zx.d(*(gDomClient + 0x205d8)) != 0)
    int32_t x22_1 = *(arg2 + 0xc0)
    int32_t x0_2 = CardCost(gDomClient + 0x20728, zx.q(*(gDomClient + 0x220fc)), zx.q(x22_1), 0)
    uint64_t x24_1 = zx.q(*(DomDefGet(zx.q(x22_1), zx.q(*(gDomClient + 0x21478))) + 0xc4))
    uint64_t x22_2 = zx.q(x0_2)
    CardCostParse(x22_2)
    CardCostParse(x24_1)
    int32_t var_70
    int32_t var_68
    int32_t var_50
    int32_t x8_4
    
    if (var_58 != var_70 || var_50 != var_68)
        x8_4 = 1
        
        if ((x21 & 1) == 0)
        label_b0d4f0:
            
            if (x8_4 != 0)
                UI2SetState(zx.q(x19), &data_182cef8, 0xffffffff, 0)
                CardCostParse(x22_2)
                var_90.o = var_58.o
                int32_t var_48
                int32_t var_80_1 = var_48
    else
        int32_t var_6c
        int32_t var_54
        x8_4 = var_54 != var_6c ? 1 : 0
        
        if ((x21 & 1) == 0)
            goto label_b0d4f0

int32_t var_84

if (var_84 == 0x100000 || (*(arg2 + 0xc8) & 0x4094037000000) != 0)
    UI2SetState(zx.q(x19), &data_182ce08, 0xffffffff, 0)
    return 0

int32_t var_8c
int32_t var_88

if (var_90 != 0)
label_b0d5a0:
    UI2SetState(zx.q(x19), &data_182ce20, 0xffffffff, 0)
    XStringFromInt(var_90)
    UI2SetText(zx.q(x19), &data_182ce98, &var_58, 0xffffffff)
    XString::~XString()
    
    if (var_84 == 0x20000)
        UI2SetState(zx.q(x19), &data_182ce68, 0xffffffff, 0)
    else if (var_84 == 0x80000)
        UI2SetState(zx.q(x19), &data_182ce80, 0xffffffff, 0)
    
    if (var_8c != 0)
        UI2SetState(zx.q(x19), &data_182ceb0, 0xffffffff, 0)
    else if (var_88 != 0)
        UI2SetState(zx.q(x19), &data_182cec8, 0xffffffff, 0)
        XStringFromInt(var_88)
        UI2SetText(zx.q(x19), &data_182cee0, &var_58, 0xffffffff)
        XString::~XString()
else if (var_88 == 0)
    if (var_8c == 0)
        goto label_b0d5a0
    
label_b0d6b4:
    UI2SetState(zx.q(x19), &data_182ce38, 0xffffffff, 0)
    XString::XString(&var_58)
    UI2SetText(zx.q(x19), &data_182cee0, &var_58, 0xffffffff)
    XString::~XString()
else
    if (var_8c != 0)
        goto label_b0d6b4
    
    UI2SetState(zx.q(x19), &data_182ce50, 0xffffffff, 0)
    XStringFromInt(var_88)
    UI2SetText(zx.q(x19), &data_182ce98, &var_58, 0xffffffff)
    XString::~XString()
return 1
