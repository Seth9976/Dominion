// 函数: _Z17AddKingdomStrCardRK19DomKingdomSetupDataR7XString11DomCardEnumPKS4_i
// 地址: 0x9ea01c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomCardEnum const* x21 = arg4
int32_t x23 = arg3

if ((XString::IsEmpty() & 1) == 0)
    XString::operator+=(arg2)

*(DomDefGet(zx.q(x23), 0x17) + 0x58)
XString::operator+=(arg2)

if (x21 == 0 || *x21 == 0)
    DomCardEnum var_cc0
    int64_t result = GetRefCards(DomDefGet(zx.q(x23), 0x17), arg1, &var_cc0)
    
    if (result.d == 0)
        return result
    
    int32_t i_4 = result.d
    XString::XString()
    
    if (i_4 s>= 1)
        uint64_t i_2 = zx.q(i_4)
        DomCardEnum* x22_1 = &var_cc0
        uint64_t i
        
        do
            uint64_t x2_2 = zx.q(*x22_1)
            x22_1 += 4
            XString var_cc8
            AddKingdomStrCard(arg1, &var_cc8, x2_2, nullptr, 0)
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if ((XString::IsEmpty() & 1) == 0)
        XString::GetString()
        XFormatString("(%s)")
        XString::operator char const*()
        XString::operator+=(arg2)
        XString::~XString()
else
    XString::XString()
    
    if (arg5 s>= 1)
        uint64_t i_3 = zx.q(arg5)
        uint64_t i_1
        
        do
            uint64_t x2 = zx.q(*x21)
            
            if (x2.d == 0)
                break
            
            XString var_38
            AddKingdomStrCard(arg1, &var_38, x2, nullptr, 0)
            i_1 = i_3
            i_3 -= 1
            x21 += 4
        while (i_1 != 1)
    
    if ((XString::IsEmpty() & 1) == 0)
        XString::GetString()
        XFormatString("(%s)")
        XString::operator char const*()
        XString::operator+=(arg2)
        XString::~XString()

return XString::~XString()
