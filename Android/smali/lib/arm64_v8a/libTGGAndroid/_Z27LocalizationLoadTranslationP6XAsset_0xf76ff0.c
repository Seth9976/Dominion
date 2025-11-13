// 函数: _Z27LocalizationLoadTranslationP6XAsset
// 地址: 0xf76ff0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int32_t* fp

if (x8 == 0)
    int32_t*** x19_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19_1, false, true)
    fp = **x19_1
    
    if (fp[4] s>= 1)
        goto label_f7708c
    
    return 

fp = *x8

if (fp[4] s< 1)
    return 

label_f7708c:
int64_t x28_1 = 0
int64_t i = 0

do
    int64_t* x8_6 = *(fp + 8) + x28_1
    ToKey(*x8_6, x8_6[1])
    XString::XString()
    XString::XString()
    XString::XString()
    int64_t var_79_1 = 0
    int64_t var_80_1 = 0
    var_80_1:4.d = 1
    int64_t x9_1 = *(*gTranslations + 0x2a8)
    char var_98
    
    if (x9_1 == 0)
        *(*(fp + 8) + x28_1 + 0x10)
        XString::operator=(&var_98)
    else
        int64_t* x8_9 = *(fp + 8) + x28_1
        x9_1(zx.q(*fp), *x8_9, x8_9[1], x8_9[3], x8_9[2])
        XString::operator=(&var_98)
        XString::~XString()
    *(*(fp + 8) + x28_1 + 0x18)
    char var_88
    XString::operator=(&var_88)
    var_79_1:5.b = 0
    var_79_1:1.d = 0
    var_79_1:6.b = *(*(fp + 8) + x28_1 + 0x20)
    XString var_90
    operator==(&var_90, &data_793a18)
    XString::XString()
    void var_a0
    
    if ((ModsHasEntry(&var_88, "article", &var_a0) & 1) != 0
            && strcasecmp(XString::operator char const*(), "none") == 0)
        var_79_1:1.d = 1
    
    int32_t x0_15
    
    if ((ModsHasEntry(&var_88, "plural", &var_90) & 1) == 0)
        x0_15 = ModsHasEntry(&var_88, "p", nullptr)
    else
        x0_15 = XString::IsEmpty()
    
    if ((x0_15 & 1) != 0)
        var_79_1:5.b = 1
    
    if ((ModsHasEntry(&var_88, "p", nullptr) & 1) == 0)
        if ((ModsHasEntry(&var_88, "m", nullptr) & 1) == 0)
            if ((ModsHasEntry(&var_88, "f", nullptr) & 1) == 0)
                if ((ModsHasEntry(&var_88, "n", nullptr) & 1) != 0)
                    var_80_1.d = 4
                else if (*fp != 8)
                    var_80_1.d = 1
                else
                    XString var_a8
                    XString::XString(&var_a8)
                    XString::XString()
                    XString var_68
                    int32_t x22_1
                    
                    if ((EndingIs(&var_a8, "o", &var_68) & 1) == 0)
                        if ((EndingIs(&var_a8, "a", &var_68) & 1) != 0)
                            x22_1 = 3
                        else
                            x22_1 = 2
                    else
                        x22_1 = 2
                    
                    XString::~XString()
                    var_80_1.d = x22_1
                    XString::~XString()
            else
                var_80_1.d = 3
        else
            var_80_1.d = 2
    else
        var_80_1.d = 5
    
    var_79_1:7.b = 0
    Translation var_70
    XMap<XString, Translation>::SetAt(*gTranslations + (sx.q(*fp) << 4), &var_70)
    ToKey(*(*(fp + 8) + x28_1), nullptr)
    XString::operator=(&var_70)
    XString::~XString()
    XMap<XString, Translation>::SetAt(*gTranslations + (sx.q(*fp) << 4), &var_70)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    i += 1
    x28_1 += 0x28
while (i s< sx.q(fp[4]))
