// 函数: _Z14UI2Parse_ExactR14UI2ParserStatePKc
// 地址: 0x104dcd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t lr
int64_t var_30 = lr
int64_t x23
int64_t var_28 = x23
UI2ParserState* nptr_34
UI2ParserState& nptr_30 = nptr_34
int64_t* nptr_22
int64_t* nptr_5 = nptr_22
int64_t nptr_20
int64_t nptr_6 = nptr_20
int128_t* nptr_18
int128_t* nptr_7 = nptr_18
UI2ParserState& nptr_21 = arg1
int128_t* entry_nptr
int128_t* nptr_19 = entry_nptr
size_t nptr_33 = strlen(arg2)
int64_t* nptr_23 = *(nptr_21 + 8)
XString* nptr_12
UI2ParseResult* x1_1
UI2ParseResult* x2_1
UI2ParseResult* x3
UI2ParseResult* x4
int64_t nptr_28
int128_t v0
nptr_12, x1_1, x2_1, x3, x4, nptr_28, v0 = strncmp(arg2, nptr_23, nptr_33)
int128_t* nptr_14

if (nptr_12.d == 0)
    nptr_14 = nptr_23 + nptr_33
    uint8_t* const x9_1 = &jump_table_86931c
    *(nptr_21 + 8) = nptr_14
    uint64_t nptr_16 = zx.q(zx.d(*nptr_14) - 9)
    bool cond:0_1 = nptr_16.d u> 0x17
    bool cond:1_1 = nptr_16.d == 0x17
    bool cond:2_1 = nptr_16.d u<= 0x17
    bool cond:3_1 = nptr_16.d u< 0x17
    bool cond:4_1 = nptr_16.d == 0x17
    bool cond:5_1 = nptr_16.d u>= 0x17
    bool cond:6_1 = nptr_16.d u>= 0x17
    bool cond:7_1 = nptr_16.d == 0x17
    
    if (nptr_16.d u> 0x17)
    label_104ddac:
        nptr_14 = &data_24b6000
    label_104ddb0:
        nptr_14 = &nptr_14[0x25]
        goto label_104ddb4
    
label_104dd54:
    void* const x11_1 = &data_104dd3c
label_104dd58:
    uint64_t x12_2 = zx.q(jump_table_86931c[nptr_16])
label_104dd5c:
    x11_1 += x12_2 << 2
    
    while (true)
        size_t nptr_31
        int64_t* nptr_32
        UI2ParserState& nptr_10
        int128_t* nptr_11
        
        switch (x11_1)
            case &data_104dd3c
                nptr_14 += 1
            label_104dd40:
                *(nptr_21 + 8) = nptr_14
            label_104dd44:
                nptr_16 = zx.q(*nptr_14)
            label_104dd48:
                nptr_16 = zx.q(nptr_16.d - 9)
            label_104dd4c:
                cond:0_1 = nptr_16.d u> 0x17
                cond:1_1 = nptr_16.d == 0x17
                cond:2_1 = nptr_16.d u<= 0x17
                cond:3_1 = nptr_16.d u< 0x17
                cond:4_1 = nptr_16.d == 0x17
                cond:5_1 = nptr_16.d u>= 0x17
                cond:6_1 = nptr_16.d u>= 0x17
                cond:7_1 = nptr_16.d == 0x17
            label_104dd50:
                
                if (cond:0_1)
                    goto label_104ddac
                
                goto label_104dd54
            case 0x104dd40
                goto label_104dd40
            case 0x104dd44
                goto label_104dd44
            case 0x104dd48
                goto label_104dd48
            case 0x104dd4c
                goto label_104dd4c
            case 0x104dd50
                goto label_104dd50
            case 0x104dd54
                goto label_104dd54
            case 0x104dd58
                goto label_104dd58
            case 0x104dd5c
                goto label_104dd5c
            case 0x104dd60
                continue
            case 0x104dd64
                nptr_16 = nptr_14
            label_104dd68:
                nptr_16 += 1
                x11_1 = zx.q(*nptr_16)
            label_104dd6c:
                x12_2 = zx.q(*(nptr_21 + 0x18))
            label_104dd70:
                cond:1_1 = x11_1.d == 0xd
            label_104dd88:
                
                if (not(cond:1_1))
                    goto label_104dd8c
                
                nptr_14 = nptr_16
            label_104dd8c:
                x11_1 = zx.q(x12_2.d + 1)
            label_104dd90:
                nptr_14 += 1
            label_104dd94:
                *(nptr_21 + 8) = nptr_14
                *(nptr_21 + 0x10) = nptr_14
            label_104dd98:
                *(nptr_21 + 0x18) = x11_1.d
            label_104dd9c:
                nptr_16 = zx.q(*nptr_14)
            label_104dda0:
                nptr_16 = zx.q(nptr_16.d - 9)
            label_104dda4:
                cond:0_1 = nptr_16.d u> 0x17
                cond:1_1 = nptr_16.d == 0x17
                cond:2_1 = nptr_16.d u<= 0x17
                cond:3_1 = nptr_16.d u< 0x17
                cond:4_1 = nptr_16.d == 0x17
                cond:5_1 = nptr_16.d u>= 0x17
                cond:6_1 = nptr_16.d u>= 0x17
                cond:7_1 = nptr_16.d == 0x17
            label_104dda8:
                
                if (cond:2_1)
                    goto label_104dd54
                
                goto label_104ddac
            case 0x104dd68
                goto label_104dd68
            case 0x104dd6c
                goto label_104dd6c
            case 0x104dd70
                goto label_104dd70
            case 0x104dd74
                goto label_104dd88
            case 0x104dd78
                nptr_16 = nptr_14
            label_104dd7c:
                nptr_16 += 1
                x11_1 = zx.q(*nptr_16)
            label_104dd80:
                x12_2 = zx.q(*(nptr_21 + 0x18))
            label_104dd84:
                cond:1_1 = x11_1.d == 0xa
                goto label_104dd88
            case 0x104dd7c
                goto label_104dd7c
            case 0x104dd80
                goto label_104dd80
            case 0x104dd84
                goto label_104dd84
            case 0x104dd8c
                goto label_104dd8c
            case 0x104dd90
                goto label_104dd90
            case 0x104dd94
                goto label_104dd94
            case 0x104dd98
                goto label_104dd98
            case 0x104dd9c
                goto label_104dd9c
            case 0x104dda0
                goto label_104dda0
            case 0x104dda4
                goto label_104dda4
            case 0x104dda8
                goto label_104dda8
            case 0x104ddac
                goto label_104ddac
            case 0x104ddb0
                goto label_104ddb0
            case 0x104ddb4
                goto label_104ddb4
            case 0x104ddb8
                goto label_104ddb8
            case 0x104ddbc
                break
            case 0x104ddc8
                goto label_104ddd0
            case UI2ParseResultMakeExpr
                return UI2ParseResultMakeExpr(nptr_12) __tailcall
            case 0x104ddd8
                nptr_30 = nptr_21
                nptr_5 = nptr_19
            label_104dddc:
                nptr_19 = nptr_12
            label_104dde4:
                nptr_21 = nptr_14
            label_104dde8:
                nptr_12 = XString::XString()
            label_104ddec:
                nptr_14 = 3
            label_104ddf0:
                *nptr_21 = nptr_14.d
                *(nptr_21 + 8) = nptr_19
                return nptr_12
            case 0x104dddc
                goto label_104dddc
            case 0x104dde0
                goto label_104dde4
            case 0x104dde8
                goto label_104dde8
            case 0x104ddec
                goto label_104ddec
            case 0x104ddf0
                goto label_104ddf0
            case 0x104ddf4
                *(nptr_21 + 8) = nptr_19
                return nptr_12
            case 0x104ddf8
                return nptr_12
            case UI2ParseResultMakeString
                return UI2ParseResultMakeString(nptr_12) __tailcall
            case 0x104de08
                nptr_30 = nptr_21
                nptr_5 = nptr_19
            label_104de0c:
                nptr_19 = &nptr_14[1]
            label_104de18:
                nptr_23 = nptr_14
            label_104de1c:
                XString::XString()
            label_104de20:
                nptr_14 = 4
            label_104de24:
                *nptr_23 = nptr_14.d
            label_104de28:
                return XString::operator=(nptr_19)
            case 0x104de0c
                goto label_104de0c
            case 0x104de10
                goto label_104de18
            case 0x104de1c
                goto label_104de1c
            case 0x104de20
                goto label_104de20
            case 0x104de24
                goto label_104de24
            case 0x104de28
                goto label_104de28
            case 0x104de2c
                return XString::operator=(nptr_12)
            case 0x104de34
                return nptr_12
            case 0x104de40
                nptr_21 = nptr_12
            label_104de48:
                XString::~XString()
            label_104de4c:
                sub_1101e04(nptr_21)
                noreturn
            case 0x104de44
                goto label_104de48
            case 0x104de4c
                goto label_104de4c
            case 0x104de50
                sub_1101e04(nptr_12)
                noreturn
            case is_success
                return is_success(nptr_12) __tailcall
            case 0x104de58
                return zx.q(nptr_14.d - 2 u< 3 ? 1 : 0)
            case 0x104de5c
                return zx.q(nptr_14.d u< 3 ? 1 : 0)
            case 0x104de60
                return zx.q(cond:3_1 ? 1 : 0)
            case 0x104de64
                return nptr_12
            case is_error
                return is_error(nptr_12) __tailcall
            case 0x104de6c
                return zx.q(nptr_14.d == 1 ? 1 : 0)
            case 0x104de70
                return zx.q(cond:4_1 ? 1 : 0)
            case 0x104de74
                return nptr_12
            case UI2Parse_NullLiteral
                return UI2Parse_NullLiteral(nptr_12) __tailcall
            case 0x104de7c
                nptr_31 = nptr_28
                nptr_32 = nptr_23
            label_104de80:
                nptr_10 = nptr_21
                nptr_11 = nptr_19
            label_104de84:
                x1_1 = "blicKeyType is implemented"
            label_104de88:
                nptr_19 = nptr_14
            label_104de8c:
                x1_1 += 0x71d
            label_104de94:
                nptr_21 = nptr_12
            label_104de9c:
                UI2Parse_Exact(nptr_12, x1_1)
            label_104dea0:
                nptr_14 = zx.q(nptr_6.d)
            label_104dea4:
                nptr_14 = zx.q(nptr_14.d - 2)
            label_104dea8:
                cond:5_1 = nptr_14.d u>= 3
            label_104deac:
                
                if (cond:5_1)
                    goto label_104df20
                
                goto label_104deb0
            case 0x104de80
                goto label_104de80
            case 0x104de84
                goto label_104de84
            case 0x104de88
                goto label_104de88
            case 0x104de8c
                goto label_104de8c
            case 0x104de90
                goto label_104de94
            case 0x104de98
                goto label_104de9c
            case 0x104dea0
                goto label_104dea0
            case 0x104dea4
                goto label_104dea4
            case 0x104dea8
                goto label_104dea8
            case 0x104deac
                goto label_104deac
            case 0x104deb0
            label_104deb0:
                x1_1 = " signature--"
            label_104deb4:
                x1_1 += 0x62c
            label_104debc:
                nptr_12 = nptr_21
            label_104dec4:
                UI2Parse_Exact(nptr_12, x1_1)
            label_104dec8:
                v0 = var_28.o
            label_104decc:
                nptr_14 = &nptr_6
            label_104ded0:
                nptr_21 = &nptr_14[1]
            label_104ded8:
                nptr_6.o = v0
            label_104dedc:
                nptr_12 = nptr_21
            label_104dee4:
                XString::operator=(nptr_12)
            label_104deec:
                XString::~XString()
            label_104def0:
                nptr_14 = zx.q(nptr_6.d)
            label_104def4:
                nptr_14 = zx.q(nptr_14.d - 2)
            label_104def8:
                cond:6_1 = nptr_14.d u>= 3
            label_104defc:
                
                if (cond:6_1)
                    goto label_104df38
                
                goto label_104df04
            case 0x104deb4
                goto label_104deb4
            case 0x104deb8
                goto label_104debc
            case 0x104dec0
                goto label_104dec4
            case 0x104dec8
                goto label_104dec8
            case 0x104decc
                goto label_104decc
            case 0x104ded0
                goto label_104ded0
            case 0x104ded4
                goto label_104ded8
            case 0x104dedc
                goto label_104dedc
            case 0x104dee0
                goto label_104dee4
            case 0x104dee8
                goto label_104deec
            case 0x104def0
                goto label_104def0
            case 0x104def4
                goto label_104def4
            case 0x104def8
                goto label_104def8
            case 0x104defc
                goto label_104defc
            case 0x104df00
            label_104df04:
                XString::XString()
            label_104df08:
                x9_1 = "HHHH0"
            label_104df0c:
                nptr_14 = 3
            label_104df10:
                x9_1 = &x9_1[0x510]
            label_104df14:
                *nptr_19 = nptr_14.d
            label_104df18:
                *(nptr_19 + 8) = x9_1
                return XString::~XString()
            case 0x104df08
                goto label_104df08
            case 0x104df0c
                goto label_104df0c
            case 0x104df10
                goto label_104df10
            case 0x104df14
                goto label_104df14
            case 0x104df18
                goto label_104df18
            case 0x104df20
            label_104df20:
                v0 = nptr_6.o
            label_104df24:
                nptr_12 = &nptr_19[1]
            label_104df2c:
                *nptr_19 = v0
            label_104df30:
                XString::XString(nptr_12)
                return XString::~XString()
            case 0x104df24
                goto label_104df24
            case 0x104df28
                goto label_104df2c
            case 0x104df30
                goto label_104df30
            case 0x104df34
                return XString::~XString()
            case 0x104df38
            label_104df38:
                v0 = nptr_6.o
            label_104df3c:
                nptr_12 = &nptr_19[1]
            label_104df40:
                *nptr_19 = v0
            label_104df48:
                XString::XString(nptr_12)
                return XString::~XString()
            case 0x104df3c
                goto label_104df3c
            case 0x104df40
                goto label_104df40
            case 0x104df44
                goto label_104df48
            case 0x104df58
                return nptr_12
            case 0x104df68
                nptr_19 = nptr_12
            label_104df70:
                XString::~XString()
            label_104df88:
                XString::~XString()
            label_104df8c:
                sub_1101e04(nptr_19)
                noreturn
            case 0x104df6c
                goto label_104df70
            case 0x104df74
                goto label_104df88
            case 0x104df78
                nptr_19 = nptr_12
                goto label_104df88
            case 0x104df8c
                goto label_104df8c
            case 0x104df90
                sub_1101e04(nptr_12)
                noreturn
            case IsBinaryOp
                return IsBinaryOp(nptr_12) __tailcall
            case 0x104df98
                return zx.q(cond:7_1 ? 1 : 0)
            case 0x104df9c
                return nptr_12
            case UI2ExprMakeVar
                return UI2ExprMakeVar(nptr_12, x1_1, x2_1) __tailcall
            case 0x104dfa4
                x9_1 = 0x38
            label_104dfa8:
                nptr_16 = 0xa
            label_104dfac:
                x11_1 = zx.q(nptr_14.d + 1)
            label_104dfb0:
                nptr_14 = nptr_12 + nptr_14 * x9_1
            label_104dfb4:
                *(nptr_12 + 0x428) = x11_1.d
            label_104dfb8:
                nptr_14 += 0xa8
                *nptr_14 = nptr_16.d
            label_104dfbc:
                nptr_12 = nptr_14
            label_104dfc0:
                *(nptr_14 + 8) = x1_1
                nptr_14[1].q = x2_1
                return nptr_12
            case 0x104dfa8
                goto label_104dfa8
            case 0x104dfac
                goto label_104dfac
            case 0x104dfb0
                goto label_104dfb0
            case 0x104dfb4
                goto label_104dfb4
            case 0x104dfb8
                goto label_104dfb8
            case 0x104dfbc
                goto label_104dfbc
            case 0x104dfc0
                goto label_104dfc0
            case 0x104dfc4
                return nptr_12
            case UI2ExprMakeTuple
                return UI2ExprMakeTuple(nptr_12, x1_1, x2_1) __tailcall
            case 0x104dfcc
                x9_1 = 0x38
            label_104dfd0:
                nptr_16 = 7
            label_104dfd4:
                x11_1 = zx.q(nptr_14.d + 1)
            label_104dfd8:
                nptr_14 = nptr_12 + nptr_14 * x9_1
            label_104dfdc:
                *(nptr_12 + 0x428) = x11_1.d
            label_104dfe0:
                nptr_14 += 0xa8
                *nptr_14 = nptr_16.d
            label_104dfe4:
                x9_1 = *(x1_1 + 8)
            label_104dfe8:
                nptr_12 = nptr_14
            label_104dfec:
                *(nptr_14 + 0x18) = x9_1
            label_104dff0:
                nptr_14[2].q = *(x2_1 + 8)
                return nptr_12
            case 0x104dfd0
                goto label_104dfd0
            case 0x104dfd4
                goto label_104dfd4
            case 0x104dfd8
                goto label_104dfd8
            case 0x104dfdc
                goto label_104dfdc
            case 0x104dfe0
                goto label_104dfe0
            case 0x104dfe4
                goto label_104dfe4
            case 0x104dfe8
                goto label_104dfe8
            case 0x104dfec
                goto label_104dfec
            case 0x104dff0
                goto label_104dff0
            case 0x104dff4
                nptr_14[2].q = x9_1
                return nptr_12
            case 0x104dff8
                return nptr_12
            case UI2ExprMakeTuple
                return UI2ExprMakeTuple(nptr_12, x1_1, x2_1, x3) __tailcall
            case &data_104e000
                nptr_14 = 0x38
            label_104e004:
                nptr_14 = nptr_12 + &jump_table_86931c * nptr_14
            label_104e008:
                x9_1 = &jump_table_86931c[1]
            label_104e00c:
                *(nptr_12 + 0x428) = x9_1.d
            label_104e010:
                x9_1 = 8
            label_104e014:
                nptr_14 += 0xa8
                *nptr_14 = x9_1.d
            label_104e018:
                x9_1 = *(x1_1 + 8)
            label_104e01c:
                nptr_12 = nptr_14
            label_104e020:
                *(nptr_14 + 0x18) = x9_1
            label_104e024:
                x9_1 = *(x2_1 + 8)
            label_104e028:
                nptr_14[2].q = x9_1
            label_104e02c:
                *(nptr_14 + 0x28) = *(x3 + 8)
                return nptr_12
            case 0x104e004
                goto label_104e004
            case 0x104e008
                goto label_104e008
            case 0x104e00c
                goto label_104e00c
            case 0x104e010
                goto label_104e010
            case 0x104e014
                goto label_104e014
            case 0x104e018
                goto label_104e018
            case 0x104e01c
                goto label_104e01c
            case 0x104e020
                goto label_104e020
            case 0x104e024
                goto label_104e024
            case 0x104e028
                goto label_104e028
            case 0x104e02c
                goto label_104e02c
            case 0x104e030
                *(nptr_14 + 0x28) = x9_1
                return nptr_12
            case 0x104e034
                return nptr_12
            case UI2ExprMakeTuple
                return UI2ExprMakeTuple(nptr_12, x1_1, x2_1, x3, x4) __tailcall
            case 0x104e03c
                nptr_14 = 0x38
            label_104e040:
                nptr_14 = nptr_12 + &jump_table_86931c * nptr_14
            label_104e044:
                x9_1 = &jump_table_86931c[1]
            label_104e048:
                *(nptr_12 + 0x428) = x9_1.d
            label_104e04c:
                x9_1 = 9
            label_104e050:
                nptr_14 += 0xa8
                *nptr_14 = x9_1.d
            label_104e054:
                x9_1 = *(x1_1 + 8)
            label_104e058:
                nptr_12 = nptr_14
            label_104e05c:
                *(nptr_14 + 0x18) = x9_1
            label_104e060:
                x9_1 = *(x2_1 + 8)
            label_104e064:
                nptr_14[2].q = x9_1
            label_104e068:
                x9_1 = *(x3 + 8)
            label_104e06c:
                *(nptr_14 + 0x28) = x9_1
            label_104e070:
                nptr_14[3].q = *(x4 + 8)
                return nptr_12
            case 0x104e040
                goto label_104e040
            case 0x104e044
                goto label_104e044
            case 0x104e048
                goto label_104e048
            case 0x104e04c
                goto label_104e04c
            case 0x104e050
                goto label_104e050
            case 0x104e054
                goto label_104e054
            case 0x104e058
                goto label_104e058
            case 0x104e05c
                goto label_104e05c
            case 0x104e060
                goto label_104e060
            case 0x104e064
                goto label_104e064
            case 0x104e068
                goto label_104e068
            case 0x104e06c
                goto label_104e06c
            case 0x104e070
                goto label_104e070
            case 0x104e074
                nptr_14[3].q = x9_1
                return nptr_12
            case 0x104e078
                return nptr_12
            case UI2ExprMakeStyleExpression
                return UI2ExprMakeStyleExpression(nptr_12, x1_1) __tailcall
            case 0x104e080
                x9_1 = 0x38
            label_104e084:
                nptr_16 = 0xc
            label_104e088:
                x11_1 = zx.q(nptr_14.d + 1)
            label_104e08c:
                nptr_14 = nptr_12 + nptr_14 * x9_1
            label_104e090:
                *(nptr_12 + 0x428) = x11_1.d
            label_104e094:
                nptr_14 += 0xa8
                *nptr_14 = nptr_16.d
            label_104e098:
                *(nptr_14 + 8) = x1_1.d
                return nptr_14
            case 0x104e084
                goto label_104e084
            case 0x104e088
                goto label_104e088
            case 0x104e08c
                goto label_104e08c
            case 0x104e090
                goto label_104e090
            case 0x104e094
                goto label_104e094
            case 0x104e098
                goto label_104e098
            case 0x104e09c
                *(nptr_14 + 8) = x1_1.d
                return nptr_12
            case 0x104e0a0
                return nptr_12
            case UI2ExprMakeBinary
                return UI2ExprMakeBinary(nptr_12, x1_1, x2_1, x3) __tailcall
            case 0x104e0a8
                x9_1 = 0x38
            label_104e0ac:
                nptr_16 = zx.q(nptr_14.d + 1)
            label_104e0b0:
                nptr_14 = nptr_12 + nptr_14 * x9_1
            label_104e0b4:
                *(nptr_12 + 0x428) = nptr_16.d
            label_104e0b8:
                nptr_14 += 0xa8
                *nptr_14 = x1_1.d
            label_104e0bc:
                x9_1 = *(x2_1 + 8)
            label_104e0c0:
                nptr_12 = nptr_14
            label_104e0c4:
                *(nptr_14 + 0x18) = x9_1
            label_104e0c8:
                nptr_14[2].q = *(x3 + 8)
                return nptr_12
            case 0x104e0ac
                goto label_104e0ac
            case 0x104e0b0
                goto label_104e0b0
            case 0x104e0b4
                goto label_104e0b4
            case 0x104e0b8
                goto label_104e0b8
            case 0x104e0bc
                goto label_104e0bc
            case 0x104e0c0
                goto label_104e0c0
            case 0x104e0c4
                goto label_104e0c4
            case 0x104e0c8
                goto label_104e0c8
            case 0x104e0cc
                nptr_14[2].q = x9_1
                return nptr_12
            case 0x104e0d0
                return nptr_12
            case UI2ExprMakeCurveExpression
                return UI2ExprMakeCurveExpression(nptr_12, x1_1, x2_1, x3) __tailcall
            case 0x104e0d8
                nptr_14 = 0x38
            label_104e0dc:
                nptr_14 = nptr_12 + &jump_table_86931c * nptr_14
            label_104e0e0:
                x9_1 = &jump_table_86931c[1]
            label_104e0e4:
                *(nptr_12 + 0x428) = x9_1.d
            label_104e0e8:
                x9_1 = 0xd
            label_104e0ec:
                nptr_14 += 0xa8
                *nptr_14 = x9_1.d
            label_104e0f0:
                x9_1 = *(x1_1 + 8)
            label_104e0f4:
                nptr_12 = nptr_14
            label_104e0f8:
                *(nptr_14 + 0x18) = x9_1
            label_104e0fc:
                x9_1 = *(x2_1 + 8)
            label_104e100:
                nptr_14[2].q = x9_1
            label_104e104:
                *(nptr_14 + 0x28) = *(x3 + 8)
                return nptr_12
            case 0x104e0dc
                goto label_104e0dc
            case 0x104e0e0
                goto label_104e0e0
            case 0x104e0e4
                goto label_104e0e4
            case 0x104e0e8
                goto label_104e0e8
            case 0x104e0ec
                goto label_104e0ec
            case 0x104e0f0
                goto label_104e0f0
            case 0x104e0f4
                goto label_104e0f4
            case 0x104e0f8
                goto label_104e0f8
            case 0x104e0fc
                goto label_104e0fc
            case 0x104e100
                goto label_104e100
            case 0x104e104
                goto label_104e104
            case 0x104e108
                *(nptr_14 + 0x28) = x9_1
                return nptr_12
            case 0x104e10c
                return nptr_12
            case UI2ParseMakeError
                return UI2ParseMakeError(nptr_12, x1_1) __tailcall
            case 0x104e114
                nptr_19 = nptr_14
            label_104e11c:
                nptr_12 = XString::XString()
            label_104e120:
                *nptr_19 = 1.d
                return nptr_12
            case 0x104e11c
                goto label_104e11c
            case 0x104e120
                goto label_104e120
            case 0x104e124
                *nptr_19 = nptr_14.d
                return nptr_12
            case 0x104e128
                return nptr_12
            case Parse_Identifier
                return Parse_Identifier(nptr_12) __tailcall
            case 0x104e134
                nptr_6 = nptr_28
            label_104e138:
                char* nptr_26
                char* nptr_8 = nptr_26
                char const* nptr_9 = arg2
                nptr_31 = nptr_33
                nptr_32 = nptr_23
                nptr_10 = nptr_21
                nptr_11 = nptr_19
                char* nptr_24 = *(nptr_12 + 8)
                int64_t nptr_2 = nptr_12
                int128_t* nptr_1 = nptr_14
                uint32_t x9_4 = zx.d(*nptr_24)
                void* nptr
                
                if (x9_4 == 0x5f || (x9_4 & 0xffffffdf) - 0x41 u<= 0x19)
                    void* nptr_25 = nullptr
                    
                    while (true)
                        uint32_t x8_5 = zx.d(*(nptr_24 + nptr_25 + 1))
                        nptr_25 += 1
                        
                        if (x8_5 - 0x30 u>= 0xa && x8_5 != 0x5f)
                            if ((x8_5 & 0xffffffdf) - 0x41 u>= 0x1a)
                                break
                    
                    void* x8_7 = *nptr_2
                    int64_t x9_7 = sx.q(*(x8_7 + 0x428))
                    int64_t* nptr_3 = &nptr_5
                    *(x8_7 + 0x428) = x9_7.d + 1
                    char* nptr_27 = x8_7 + x9_7 * 0x38 + 0xa8
                    *nptr_27 = 0xa
                    *(nptr_27 + 8) = nptr_24
                    *(nptr_27 + 0x10) = nptr_25
                    XString* nptr_13
                    int64_t nptr_29
                    int128_t v0_3
                    nptr, nptr_13, nptr_29, v0_3 = XString::XString()
                    var_28.d = 3
                    int64_t nptr_15 = nptr_24 + nptr_25
                    uint8_t* const x9_8 = &jump_table_869334
                    char* nptr_4 = nptr_27
                    *(nptr_2 + 8) = nptr_15
                    uint64_t nptr_17 = zx.q(zx.d(*nptr_15) - 9)
                    bool cond:9_1 = nptr_17.d u> 0x17
                    bool cond:10_1 = nptr_17.d == 0x17
                    bool cond:11_1 = nptr_17.d u<= 0x17
                    bool cond:12_1 = nptr_17.d == 0x17
                    bool cond:13_1 = nptr_17.d u>= 0x17
                    bool cond:14_1 = nptr_17.d u<= 0x17
                    bool cond:15_1 = nptr_17.d == 0x17
                    bool cond:16_1 = nptr_17.d u> 0x17
                    bool cond:17_1 = nptr_17.d u<= 0x17
                    bool cond:18_1 = nptr_17.d u< 0x17
                    bool cond:19_1 = nptr_17.d u< 0x17
                    bool cond:20_1 = nptr_17.d u< 0x17
                    
                    if (nptr_17.d u<= 0x17)
                    label_104e230:
                        uint64_t x11_4 = &data_104e218
                    label_104e234:
                        uint64_t x12_5 = zx.q(jump_table_869334[nptr_17])
                    label_104e238:
                        x11_4 += x12_5 << 2
                        
                        while (true)
                            switch (x11_4)
                                case &data_104e218
                                    nptr_15 += 1
                                label_104e21c:
                                    *(nptr_2 + 8) = nptr_15
                                label_104e220:
                                    nptr_17 = zx.q(*nptr_15)
                                label_104e224:
                                    nptr_17 = zx.q(nptr_17.d - 9)
                                label_104e228:
                                    cond:9_1 = nptr_17.d u> 0x17
                                    cond:10_1 = nptr_17.d == 0x17
                                    cond:11_1 = nptr_17.d u<= 0x17
                                    cond:12_1 = nptr_17.d == 0x17
                                    cond:13_1 = nptr_17.d u>= 0x17
                                    cond:14_1 = nptr_17.d u<= 0x17
                                    cond:15_1 = nptr_17.d == 0x17
                                    cond:16_1 = nptr_17.d u> 0x17
                                    cond:17_1 = nptr_17.d u<= 0x17
                                    cond:18_1 = nptr_17.d u< 0x17
                                    cond:19_1 = nptr_17.d u< 0x17
                                    cond:20_1 = nptr_17.d u< 0x17
                                label_104e22c:
                                    
                                    if (cond:9_1)
                                        goto label_104e288
                                    
                                    goto label_104e230
                                case 0x104e21c
                                    goto label_104e21c
                                case 0x104e220
                                    goto label_104e220
                                case 0x104e224
                                    goto label_104e224
                                case 0x104e228
                                    goto label_104e228
                                case 0x104e22c
                                    goto label_104e22c
                                case 0x104e230
                                    goto label_104e230
                                case 0x104e234
                                    goto label_104e234
                                case 0x104e238
                                    goto label_104e238
                                case 0x104e23c
                                    continue
                                case 0x104e240
                                    nptr_17 = nptr_15
                                label_104e244:
                                    nptr_17 += 1
                                    x11_4 = zx.q(*nptr_17)
                                label_104e248:
                                    x12_5 = zx.q(*(nptr_2 + 0x18))
                                label_104e24c:
                                    cond:10_1 = x11_4.d == 0xd
                                label_104e264:
                                    
                                    if (not(cond:10_1))
                                        goto label_104e268
                                    
                                    nptr_15 = nptr_17
                                label_104e268:
                                    x11_4 = zx.q(x12_5.d + 1)
                                label_104e26c:
                                    nptr_15 += 1
                                label_104e270:
                                    *(nptr_2 + 8) = nptr_15
                                    *(nptr_2 + 0x10) = nptr_15
                                label_104e274:
                                    *(nptr_2 + 0x18) = x11_4.d
                                label_104e278:
                                    nptr_17 = zx.q(*nptr_15)
                                label_104e27c:
                                    nptr_17 = zx.q(nptr_17.d - 9)
                                label_104e280:
                                    cond:9_1 = nptr_17.d u> 0x17
                                    cond:10_1 = nptr_17.d == 0x17
                                    cond:11_1 = nptr_17.d u<= 0x17
                                    cond:12_1 = nptr_17.d == 0x17
                                    cond:13_1 = nptr_17.d u>= 0x17
                                    cond:14_1 = nptr_17.d u<= 0x17
                                    cond:15_1 = nptr_17.d == 0x17
                                    cond:16_1 = nptr_17.d u> 0x17
                                    cond:17_1 = nptr_17.d u<= 0x17
                                    cond:18_1 = nptr_17.d u< 0x17
                                    cond:19_1 = nptr_17.d u< 0x17
                                    cond:20_1 = nptr_17.d u< 0x17
                                label_104e284:
                                    
                                    if (cond:11_1)
                                        goto label_104e230
                                    
                                    goto label_104e288
                                case 0x104e244
                                    goto label_104e244
                                case 0x104e248
                                    goto label_104e248
                                case 0x104e24c
                                    goto label_104e24c
                                case 0x104e250
                                    goto label_104e264
                                case 0x104e254
                                    nptr_17 = nptr_15
                                label_104e258:
                                    nptr_17 += 1
                                    x11_4 = zx.q(*nptr_17)
                                label_104e25c:
                                    x12_5 = zx.q(*(nptr_2 + 0x18))
                                label_104e260:
                                    cond:10_1 = x11_4.d == 0xa
                                    goto label_104e264
                                case 0x104e258
                                    goto label_104e258
                                case 0x104e25c
                                    goto label_104e25c
                                case 0x104e260
                                    goto label_104e260
                                case 0x104e268
                                    goto label_104e268
                                case 0x104e26c
                                    goto label_104e26c
                                case 0x104e270
                                    goto label_104e270
                                case 0x104e274
                                    goto label_104e274
                                case 0x104e278
                                    goto label_104e278
                                case 0x104e27c
                                    goto label_104e27c
                                case 0x104e280
                                    goto label_104e280
                                case 0x104e284
                                    goto label_104e284
                                case 0x104e288
                                    goto label_104e288
                                case 0x104e28c
                                    goto label_104e28c
                                case 0x104e290
                                    goto label_104e290
                                case 0x104e294
                                    goto label_104e298
                                case 0x104e29c
                                    break
                                case 0x104e2a4
                                    return nptr
                                case 0x104e2bc
                                    nptr_1 = nptr
                                label_104e2c4:
                                    XString::~XString()
                                label_104e2c8:
                                    sub_1101e04(nptr_1)
                                    noreturn
                                case 0x104e2c0
                                    goto label_104e2c4
                                case 0x104e2c8
                                    goto label_104e2c8
                                case 0x104e2cc
                                    sub_1101e04(nptr)
                                    noreturn
                                case parse_one_or_more_pred
                                    return parse_one_or_more_pred(nptr, nptr_13) __tailcall
                                case 0x104e2d4
                                    nptr_6 = nptr_29
                                label_104e2d8:
                                    nptr_8 = nptr_27
                                    nptr_9 = nptr_25
                                label_104e2dc:
                                    nptr_31 = nptr_24
                                    nptr_32 = &nptr_5
                                label_104e2e0:
                                    nptr_10 = nptr_2
                                    nptr_11 = nptr_1
                                label_104e2e4:
                                    x9_8 = *(nptr + 8)
                                label_104e2e8:
                                    nptr_1 = nptr_15
                                label_104e2ec:
                                    
                                    if (x9_8 == 0)
                                        goto label_104e39c
                                    
                                    goto label_104e2f0
                                case 0x104e2d8
                                    goto label_104e2d8
                                case 0x104e2dc
                                    goto label_104e2dc
                                case 0x104e2e0
                                    goto label_104e2e0
                                case 0x104e2e4
                                    goto label_104e2e4
                                case 0x104e2e8
                                    goto label_104e2e8
                                case 0x104e2ec
                                    goto label_104e2ec
                                case 0x104e2f0
                                label_104e2f0:
                                    nptr_15 = 0x100000000
                                label_104e2f4:
                                    nptr_3 = nptr_13
                                label_104e2f8:
                                    nptr_2 = nptr
                                label_104e2fc:
                                    nptr_24 = x9_8 - 1
                                label_104e300:
                                    nptr_25 = nptr_15 - (x9_8 << 0x20)
                                    nptr_27 = -0xffffffff00000000
                                    goto label_104e308
                                case 0x104e2f4
                                    goto label_104e2f4
                                case 0x104e2f8
                                    goto label_104e2f8
                                case 0x104e2fc
                                    goto label_104e2fc
                                case 0x104e300
                                    goto label_104e300
                                case 0x104e304
                                    nptr_27 = -0xffffffff00000000
                                    goto label_104e308
                                case 0x104e308
                                    goto label_104e308
                                case 0x104e30c
                                    goto label_104e30c
                                case 0x104e310
                                    goto label_104e310
                                case 0x104e314
                                    while ((nptr.d & 1) != 0)
                                    label_104e308:
                                        nptr_24 = &nptr_24[1]
                                        nptr = zx.q(*nptr_24)
                                    label_104e30c:
                                        nptr, v0_3 = nptr_3(nptr)
                                    label_104e310:
                                        nptr_25 += nptr_27
                                    
                                    goto label_104e318
                                case 0x104e318
                                label_104e318:
                                    nptr_13 = *(nptr_2 + 8)
                                label_104e31c:
                                    cond:12_1 = nptr_13 == nptr_24
                                label_104e320:
                                    
                                    if (cond:12_1)
                                        goto label_104e39c
                                    
                                    goto label_104e330
                                case 0x104e31c
                                    goto label_104e31c
                                case 0x104e320
                                    goto label_104e320
                                case 0x104e324
                                label_104e330:
                                    nptr = &nptr_7
                                label_104e334:
                                    XString::XString(nptr, nptr_13)
                                label_104e338:
                                    nptr_15 = &var_28
                                label_104e33c:
                                    nptr_3 = nptr_15 + 0x10
                                label_104e344:
                                    XString::XString()
                                label_104e348:
                                    nptr_15 = 4
                                label_104e34c:
                                    var_28.d = nptr_15.d
                                label_104e354:
                                    nptr = nptr_3
                                label_104e358:
                                    XString::operator=(nptr)
                                label_104e35c:
                                    *(nptr_2 + 8) = nptr_24
                                label_104e360:
                                    v0_3 = var_28.o
                                label_104e364:
                                    nptr = &nptr_1[1]
                                label_104e368:
                                    *nptr_1 = v0_3
                                label_104e370:
                                    XString::XString(nptr)
                                label_104e378:
                                    XString::~XString()
                                    return XString::~XString()
                                case 0x104e334
                                    goto label_104e334
                                case 0x104e338
                                    goto label_104e338
                                case 0x104e33c
                                    goto label_104e33c
                                case 0x104e340
                                    goto label_104e344
                                case 0x104e348
                                    goto label_104e348
                                case 0x104e34c
                                    goto label_104e34c
                                case 0x104e350
                                    goto label_104e354
                                case 0x104e358
                                    goto label_104e358
                                case 0x104e35c
                                    goto label_104e35c
                                case 0x104e360
                                    goto label_104e360
                                case 0x104e364
                                    goto label_104e364
                                case 0x104e368
                                    goto label_104e368
                                case 0x104e36c
                                    goto label_104e370
                                case 0x104e374
                                    goto label_104e378
                                case 0x104e37c
                                    return XString::~XString()
                                case 0x104e384
                                    return nptr
                                case 0x104e39c
                                label_104e39c:
                                    nptr_15 = &data_24b6000
                                label_104e3a0:
                                    nptr_15 += 0x268
                                label_104e3a4:
                                    v0_3 = *nptr_15
                                label_104e3a8:
                                    *nptr_1 = v0_3
                                    return XString::XString(&nptr_1[1]) __tailcall
                                case 0x104e3a0
                                    goto label_104e3a0
                                case 0x104e3a4
                                    goto label_104e3a4
                                case 0x104e3a8
                                    goto label_104e3a8
                                case 0x104e3ac
                                    *nptr_1 = v0_3
                                    return XString::XString(nptr) __tailcall
                                case 0x104e3b8
                                    return XString::XString(nptr) __tailcall
                                case 0x104e3cc
                                    nptr_1 = nptr
                                label_104e3d8:
                                    XString::~XString()
                                label_104e3e8:
                                    XString::~XString()
                                label_104e3ec:
                                    sub_1101e04(nptr_1)
                                    noreturn
                                case 0x104e3d4
                                    goto label_104e3d8
                                case 0x104e3dc
                                    goto label_104e3e8
                                case 0x104e3e0
                                    nptr_1 = nptr
                                    goto label_104e3e8
                                case 0x104e3ec
                                    goto label_104e3ec
                                case 0x104e3f0
                                    sub_1101e04(nptr)
                                    noreturn
                                case parse_hex_literal
                                    return parse_hex_literal(nptr) __tailcall
                                case 0x104e3f8
                                    nptr_6 = nptr_29
                                    nptr_7 = &nptr_5
                                label_104e3fc:
                                    nptr_8 = nptr_2
                                    nptr_9 = nptr_1
                                label_104e400:
                                    nptr_13 = &data_104e000
                                label_104e404:
                                    nptr_1 = nptr_15
                                label_104e408:
                                    nptr_13 += 0x550
                                label_104e410:
                                    nptr_2 = nptr
                                label_104e418:
                                    parse_one_or_more_pred(nptr, nptr_13)
                                label_104e41c:
                                    nptr_15 = zx.q(var_28.d)
                                label_104e420:
                                    nptr_15 = zx.q(nptr_15.d - 2)
                                label_104e424:
                                    cond:13_1 = nptr_15.d u>= 3
                                label_104e428:
                                    
                                    if (cond:13_1)
                                        goto label_104e508
                                    
                                    goto label_104e42c
                                case 0x104e3fc
                                    goto label_104e3fc
                                case 0x104e400
                                    goto label_104e400
                                case 0x104e404
                                    goto label_104e404
                                case 0x104e408
                                    goto label_104e408
                                case 0x104e40c
                                    goto label_104e410
                                case 0x104e414
                                    goto label_104e418
                                case 0x104e41c
                                    goto label_104e41c
                                case 0x104e420
                                    goto label_104e420
                                case 0x104e424
                                    goto label_104e424
                                case 0x104e428
                                    goto label_104e428
                                case 0x104e42c
                                label_104e42c:
                                    nptr_15 = *(nptr_2 + 8)
                                label_104e430:
                                    x9_8 = "HHHH0"
                                label_104e434:
                                    x9_8 = &x9_8[0x34c]
                                label_104e438:
                                    nptr_17 = zx.q(*nptr_15)
                                label_104e43c:
                                    nptr_17 = zx.q(nptr_17.d - 9)
                                label_104e440:
                                    cond:14_1 = nptr_17.d u<= 0x17
                                label_104e444:
                                    
                                    if (cond:14_1)
                                        goto label_104e4c8
                                    
                                    goto label_104e448
                                case 0x104e430
                                    goto label_104e430
                                case 0x104e434
                                    goto label_104e434
                                case 0x104e438
                                    goto label_104e438
                                case 0x104e43c
                                    goto label_104e43c
                                case 0x104e440
                                    goto label_104e440
                                case 0x104e444
                                    goto label_104e444
                                case 0x104e44c
                                    goto label_104e454
                                case 0x104e458
                                    goto label_104e458
                                case 0x104e45c
                                    goto label_104e45c
                                case 0x104e460
                                    goto label_104e460
                                case 0x104e464
                                    goto label_104e464
                                case 0x104e468
                                    goto label_104e468
                                case 0x104e46c
                                    goto label_104e46c
                                case 0x104e470
                                    goto label_104e470
                                case 0x104e474
                                    goto label_104e474
                                case 0x104e478
                                    goto label_104e478
                                case 0x104e47c
                                    goto label_104e480
                                case 0x104e484
                                    goto label_104e484
                                case 0x104e488
                                    goto label_104e488
                                case 0x104e48c
                                    goto label_104e48c
                                case 0x104e490
                                    return XString::~XString()
                                case 0x104e494
                                    nptr_17 = nptr_15
                                label_104e498:
                                    nptr_17 += 1
                                    x11_4 = zx.q(*nptr_17)
                                label_104e49c:
                                    x12_5 = zx.q(*(nptr_2 + 0x18))
                                label_104e4a0:
                                    cond:15_1 = x11_4.d == 0xa
                                label_104e4a4:
                                    
                                    if (not(cond:15_1))
                                        goto label_104e4a8
                                    
                                    nptr_15 = nptr_17
                                label_104e4a8:
                                    x11_4 = zx.q(x12_5.d + 1)
                                label_104e4ac:
                                    nptr_15 += 1
                                label_104e4b0:
                                    *(nptr_2 + 8) = nptr_15
                                    *(nptr_2 + 0x10) = nptr_15
                                label_104e4b4:
                                    *(nptr_2 + 0x18) = x11_4.d
                                label_104e4b8:
                                    nptr_17 = zx.q(*nptr_15)
                                label_104e4bc:
                                    nptr_17 = zx.q(nptr_17.d - 9)
                                label_104e4c0:
                                    cond:16_1 = nptr_17.d u> 0x17
                                label_104e4c4:
                                    
                                    if (cond:16_1)
                                        goto label_104e448
                                    
                                    goto label_104e4c8
                                case 0x104e498
                                    goto label_104e498
                                case 0x104e49c
                                    goto label_104e49c
                                case 0x104e4a0
                                    goto label_104e4a0
                                case 0x104e4a8
                                    goto label_104e4a8
                                case 0x104e4ac
                                    goto label_104e4ac
                                case 0x104e4b0
                                    goto label_104e4b0
                                case 0x104e4b4
                                    goto label_104e4b4
                                case 0x104e4b8
                                    goto label_104e4b8
                                case 0x104e4bc
                                    goto label_104e4bc
                                case 0x104e4c0
                                    goto label_104e4c0
                                case 0x104e4c4
                                    goto label_104e4c4
                                case 0x104e4c8
                                label_104e4c8:
                                    x11_4 = &data_104e448
                                label_104e4cc:
                                    jump(x11_4 + (zx.q(x9_8[nptr_17]) << 2))
                                case 0x104e4cc
                                    goto label_104e4cc
                                case 0x104e4d0
                                    jump(x11_4 + (x12_5 << 2))
                                case 0x104e4d4
                                    jump(x11_4)
                                case 0x104e4d8
                                    nptr_15 += 1
                                label_104e4dc:
                                    *(nptr_2 + 8) = nptr_15
                                label_104e4e0:
                                    nptr_17 = zx.q(*nptr_15)
                                label_104e4e4:
                                    nptr_17 = zx.q(nptr_17.d - 9)
                                label_104e4e8:
                                    cond:17_1 = nptr_17.d u<= 0x17
                                label_104e4ec:
                                    
                                    if (cond:17_1)
                                        goto label_104e4c8
                                    
                                    goto label_104e448
                                case 0x104e4dc
                                    goto label_104e4dc
                                case 0x104e4e0
                                    goto label_104e4e0
                                case 0x104e4e4
                                    goto label_104e4e4
                                case 0x104e4e8
                                    goto label_104e4e8
                                case 0x104e4ec
                                    goto label_104e4ec
                                case 0x104e4f0
                                label_104e448:
                                    nptr_2 = *nptr_2
                                label_104e454:
                                    nptr = XString::operator char const*()
                                label_104e458:
                                    nptr = atoi(nptr)
                                label_104e45c:
                                    nptr_15 = sx.q(*(nptr_2 + 0x428))
                                label_104e460:
                                    x9_8 = 0x38
                                label_104e464:
                                    nptr_17 = 2
                                label_104e468:
                                    x11_4 = zx.q(nptr_15.d + 1)
                                label_104e46c:
                                    nptr_3 = nptr_2 + nptr_15 * x9_8
                                label_104e470:
                                    *(nptr_2 + 0x428) = x11_4.d
                                label_104e474:
                                    nptr_3 = &nptr_3[0x15]
                                    *nptr_3 = nptr_17.d
                                label_104e478:
                                    nptr_3[1].d = nptr.d
                                label_104e480:
                                    XString::XString()
                                label_104e484:
                                    nptr_15 = 3
                                label_104e488:
                                    *nptr_1 = nptr_15.d
                                label_104e48c:
                                    *(nptr_1 + 8) = nptr_3
                                    return XString::~XString()
                                case 0x104e4f4
                                    nptr_17 = nptr_15
                                label_104e4f8:
                                    nptr_17 += 1
                                    x11_4 = zx.q(*nptr_17)
                                label_104e4fc:
                                    x12_5 = zx.q(*(nptr_2 + 0x18))
                                label_104e500:
                                    cond:15_1 = x11_4.d == 0xd
                                    goto label_104e4a4
                                case 0x104e4f8
                                    goto label_104e4f8
                                case 0x104e4fc
                                    goto label_104e4fc
                                case 0x104e500
                                    goto label_104e500
                                case 0x104e504
                                    goto label_104e4a4
                                case 0x104e508
                                label_104e508:
                                    v0_3 = var_28.o
                                label_104e50c:
                                    nptr = &nptr_1[1]
                                label_104e514:
                                    *nptr_1 = v0_3
                                label_104e518:
                                    XString::XString(nptr)
                                    return XString::~XString()
                                case 0x104e50c
                                    goto label_104e50c
                                case 0x104e510
                                    goto label_104e514
                                case 0x104e518
                                    goto label_104e518
                                case 0x104e528
                                    return nptr
                                case 0x104e538
                                    nptr_1 = nptr
                                label_104e544:
                                    XString::~XString()
                                label_104e548:
                                    sub_1101e04(nptr_1)
                                    noreturn
                                case 0x104e540
                                    goto label_104e544
                                case 0x104e548
                                    goto label_104e548
                                case 0x104e54c
                                    sub_1101e04(nptr)
                                    noreturn
                                case sub_104e550
                                    return sub_104e550(nptr.b) __tailcall
                                case 0x104e554
                                    nptr_15 = zx.q(nptr_15.d) & 0xff
                                label_104e558:
                                    cond:18_1 = nptr_15.d u< 6
                                label_104e55c:
                                    
                                    if (cond:18_1)
                                        return 1
                                    
                                    goto label_104e560
                                case 0x104e558
                                    goto label_104e558
                                case 0x104e55c
                                    goto label_104e55c
                                case 0x104e560
                                label_104e560:
                                    nptr_15 = zx.q(nptr.d) & 0xff
                                label_104e564:
                                    nptr_15 = zx.q(nptr_15.d - 0x30)
                                label_104e568:
                                    cond:19_1 = nptr_15.d u< 0xa
                                label_104e56c:
                                    
                                    if (cond:19_1)
                                        return 1
                                    
                                    goto label_104e570
                                case 0x104e564
                                    goto label_104e564
                                case 0x104e568
                                    goto label_104e568
                                case 0x104e56c
                                    goto label_104e56c
                                case 0x104e570
                                label_104e570:
                                    nptr_15 = zx.q(nptr.d - 0x41)
                                label_104e574:
                                    return zx.q((zx.q(nptr_15.d) & 0xff).d u< 6 ? 1 : 0)
                                case 0x104e574
                                    goto label_104e574
                                case 0x104e578
                                    return zx.q(nptr_15.d u< 6 ? 1 : 0)
                                case 0x104e57c
                                    return zx.q(cond:20_1 ? 1 : 0)
                                case 0x104e580
                                    return nptr
                                case 0x104e584
                                    return 1
                                case 0x104e588
                                    return nptr
                                case UI2ParseResultMakeInt
                                    return UI2ParseResultMakeInt(nptr, nptr_13) __tailcall
                                case 0x104e590
                                    nptr_4 = nptr_2
                                    nptr_5 = nptr_1
                                label_104e594:
                                    nptr_1 = nptr
                                label_104e59c:
                                    nptr_2 = nptr_15
                                label_104e5a0:
                                    nptr = XString::operator char const*()
                                label_104e5a4:
                                    nptr = atoi(nptr)
                                label_104e5a8:
                                    nptr_15 = sx.q(*(nptr_1 + 0x428))
                                label_104e5ac:
                                    x9_8 = 0x38
                                label_104e5b0:
                                    nptr_17 = 2
                                label_104e5b4:
                                    x11_4 = zx.q(nptr_15.d + 1)
                                label_104e5b8:
                                    nptr_3 = nptr_1 + nptr_15 * x9_8
                                label_104e5bc:
                                    *(nptr_1 + 0x428) = x11_4.d
                                label_104e5c0:
                                    nptr_3 = &nptr_3[0x15]
                                    *nptr_3 = nptr_17.d
                                label_104e5c4:
                                    nptr_3[1].d = nptr.d
                                label_104e5cc:
                                    nptr = XString::XString()
                                label_104e5d0:
                                    nptr_15 = 3
                                label_104e5d4:
                                    *nptr_2 = nptr_15.d
                                    *(nptr_2 + 8) = nptr_3
                                    return nptr
                                case 0x104e594
                                    goto label_104e594
                                case 0x104e598
                                    goto label_104e59c
                                case 0x104e5a0
                                    goto label_104e5a0
                                case 0x104e5a4
                                    goto label_104e5a4
                                case 0x104e5a8
                                    goto label_104e5a8
                                case 0x104e5ac
                                    goto label_104e5ac
                                case 0x104e5b0
                                    goto label_104e5b0
                                case 0x104e5b4
                                    goto label_104e5b4
                                case 0x104e5b8
                                    goto label_104e5b8
                                case 0x104e5bc
                                    goto label_104e5bc
                                case 0x104e5c0
                                    goto label_104e5c0
                                case 0x104e5c4
                                    goto label_104e5c4
                                case 0x104e5c8
                                    goto label_104e5cc
                                case 0x104e5d0
                                    goto label_104e5d0
                                case 0x104e5d4
                                    goto label_104e5d4
                                case 0x104e5d8
                                    *(nptr_2 + 8) = nptr_3
                                    return nptr
                                case 0x104e5dc
                                    return nptr
                                case UI2ParseResultMakeFloat
                                    return UI2ParseResultMakeFloat(nptr, nptr_13) __tailcall
                                case 0x104e5ec
                                    nptr_4 = nptr_24
                                    nptr_5 = &nptr_5
                                label_104e5f0:
                                    nptr_6 = nptr_2
                                    nptr_7 = nptr_1
                                label_104e5f4:
                                    nptr_1 = nptr
                                label_104e5fc:
                                    nptr_2 = nptr_15
                                label_104e600:
                                    nptr = XString::operator char const*()
                                label_104e604:
                                    v0_3 = atof(nptr)
                                label_104e608:
                                    nptr_15 = sx.q(*(nptr_1 + 0x428))
                                label_104e60c:
                                    x9_8 = 0x38
                                label_104e610:
                                    nptr_3 = 3
                                label_104e614:
                                    v0_3.d = fconvert.s(v0_3.q)
                                    *(nptr_1 + 0x428) = nptr_15.d + 1
                                    *(nptr_1 + nptr_15 * x9_8 + 0xa8) = nptr_3.d
                                    *(nptr_1 + nptr_15 * x9_8 + 0xb0) = v0_3.d
                                    int64_t x0_26 = XString::XString()
                                    *nptr_2 = nptr_3.d
                                    *(nptr_2 + 8) = nptr_1 + nptr_15 * x9_8 + 0xa8
                                    return x0_26
                                case 0x104e5f0
                                    goto label_104e5f0
                                case 0x104e5f4
                                    goto label_104e5f4
                                case 0x104e5f8
                                    goto label_104e5fc
                                case 0x104e600
                                    goto label_104e600
                                case 0x104e604
                                    goto label_104e604
                                case 0x104e608
                                    goto label_104e608
                                case 0x104e60c
                                    goto label_104e60c
                                case 0x104e610
                                    goto label_104e610
                                case 0x104e614
                                    goto label_104e614
                    else
                    label_104e288:
                        v0_3 = var_28.o
                    label_104e28c:
                        nptr = &nptr_1[1]
                    label_104e290:
                        *nptr_1 = v0_3
                    label_104e298:
                        XString::XString(nptr)
                    
                    nptr = XString::~XString()
                else
                    nptr = XString::XString()
                    *nptr_1 = 1
                
                return nptr
            case 0x104e138
                goto label_104e138
else
    nptr_14 = &data_24b6268
label_104ddb4:
    v0 = *nptr_14
label_104ddb8:
    nptr_12 = &nptr_19[1]
*nptr_19 = v0
label_104ddd0:
return XString::XString(nptr_12) __tailcall
