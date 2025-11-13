// 函数: _Z18CardGetTranslationRK10DomCardDef
// 地址: 0xb0cfa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xc0)

for (int32_t* i = *(*gCardTranslations
        + (((zx.q(x8) | zx.q(x8 s>> 4)) & zx.q(*(gCardTranslations + 8))) << 3)); i != 0; i = *(i + 0x28))
    if (x8 == *i)
        return &i[2]

XString::XString()
XString::XString()
XString::XString()
DomDefName(arg1, 0, nullptr, false)
void var_60
XString::operator=(&var_60)
XString::~XString()
void var_50
DomDefPower(arg1, &var_50)
void var_58
XString::operator=(&var_58)
XString::~XString()
void var_48
HasHeirloom(arg1, &var_48)
XMap<DomCardEnum, DomCardTranslation>::SetAt(gCardTranslations, arg1 + 0xc0)
int32_t i_1 = *(arg1 + 0xc0)
int32_t* x9_4 =
    *(*gCardTranslations + (((zx.q(i_1) | zx.q(i_1 s>> 4)) & zx.q(*(gCardTranslations + 8))) << 3))
void* result

if (x9_4 == 0)
label_b0d0bc:
    result = nullptr
else
    while (i_1 != *x9_4)
        x9_4 = *(x9_4 + 0x28)
        
        if (x9_4 == 0)
            goto label_b0d0bc
    
    result = &x9_4[2]

XString::~XString()
XString::~XString()
XString::~XString()
return result
