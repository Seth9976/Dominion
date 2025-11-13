// 函数: _Z14DomDeclareType9UI2HandleRK10DomCardDef18DomCardDeclareFlag
// 地址: 0xb0e180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg2 + 0xc8)
int32_t x19 = arg1

if ((arg3 & 2) == 0 && zx.d(*(gDomClient + 0x205d8)) != 0)
    x21 = CardTypeQuery(gDomClient + 0x20728, zx.q(*(arg2 + 0xc0)), true, -1)

if ((x21 & 0x20000) != 0)
    if ((arg3 & 2) != 0 || *(arg2 + 0xc0) != 0x101)
        UI2SetState(zx.q(x19), &data_182ca78, 0xffffffff, 0)
    else if ((HasActiveGame() & 1) == 0)
        UI2SetState(zx.q(x19), &data_182ca78, 0xffffffff, 0)
    else if ((IsInheirtanceActive(gDomClient + 0x20728) & 1) == 0)
        UI2SetState(zx.q(x19), &data_182ca78, 0xffffffff, 0)

XString::XString()
XString::XString()
XString::XString()
XString::XString()
XString::XString()
int64_t i = 0
int32_t i_4 = 0
DomTypeDef* var_98[0x5]

do
    if ((*(&data_1837ab8 + i) & x21) != 0)
        bool cond:0_1 = i_4 s<= 3
        var_98[sx.q(i_4)] = &data_1837ab8 + i
        i_4 += 1
        
        if (not(cond:0_1))
            break
    
    i += 0x28
while (i != 0x730)

if (i_4 != 0)
    bool (* var_48)(DomTypeDef const*, DomTypeDef const*) = SortTypeDefs
    std::__ndk1::__sort<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(
        &var_98, &var_98[sx.q(i_4)], &var_48)
    void var_70
    
    if (i_4 s>= 1)
        uint64_t i_3 = zx.q(i_4)
        void* x21_1 = &var_70
        DomTypeDef* (* x24_1)[0x5] = &var_98
        uint64_t i_1
        
        do
            UI2SetState(zx.q(x19), *x24_1 + 0x10, 0xffffffff, 0)
            DomTypeDef* x8_4 = *x24_1
            x24_1 = &(*x24_1)[1]
            *(x8_4 + 8)
            XFormatString("dom_card_type_%s")
            DoTranslate(XString::operator char const*())
            XString::operator=(x21_1)
            XString::~XString()
            XString::~XString()
            i_1 = i_3
            i_3 -= 1
            x21_1 += 8
        while (i_1 != 1)
    
    XString::XString()
    
    if (i_4 != 1)
        XFormatString("dom_card_type_%d")
        DoTranslate(XString::operator char const*())
        XString::operator=(&var_48)
        XString::~XString()
        XString::~XString()
        
        if (i_4 s>= 1)
            int64_t i_2 = 0
            void* x20_1 = &var_70
            
            do
                char* x0_13 = XString::operator char const*()
                i_2 += 1
                XFormatString("[c%d]")
                StringReplace(x0_13, XString::operator char const*(), 
                    XString::operator char const*())
                XString::operator=(&var_48)
                XString::~XString()
                XString::~XString()
                x20_1 += 8
            while (zx.q(i_4) != i_2)
    else
        XString::operator=(&var_48)
    
    UI2SetText(zx.q(x19), &data_182cf10, &var_48, 0xffffffff)
    XString::~XString()

XString::~XString()
XString::~XString()
XString::~XString()
XString::~XString()
return XString::~XString()
