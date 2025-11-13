// 函数: _Z26UI2Parse_ConsumeWhitespaceR14UI2ParserState
// 地址: 0x104dc34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 8)
uint8_t* const x9 = &jump_table_869304
uint64_t x10_1 = zx.q(zx.d(*x8) - 9)
bool cond:0 = x10_1.d u> 0x17
bool cond:1 = x10_1.d == 0x17
bool cond:2 = x10_1.d u<= 0x17
bool cond:3 = x10_1.d u<= 0x17
bool cond:4 = x10_1.d u> 0x17
bool cond:5 = x10_1.d == 0x17
bool cond:6 = x10_1.d u<= 0x17
bool cond:9 = x10_1.d u>= 0x17
bool cond:10 = x10_1.d u>= 0x17

if (x10_1.d u> 0x17)
    return 

label_104dc6c:
void* const x11_1 = &data_104dc54
label_104dc70:
uint64_t x12_2 = zx.q(jump_table_869304[x10_1])

while (true)
    x11_1 += x12_2 << 2
    
    while (true)
        UI2ParserState* arg_10
        UI2ParserState* arg_18
        UI2ParserState* arg_20
        UI2ParseResult* entry_x1
        UI2ParseResult* entry_x2
        UI2ParseResult* entry_x3
        UI2ParseResult* entry_x4
        UI2ParserState* entry_x19
        UI2ParserState* entry_x20
        UI2ParserState* entry_x21
        UI2ParseResult* entry_x22
        int128_t entry_v0
        
        switch (x11_1)
            case &data_104dc54
                x8 = &x8[1]
            label_104dc58:
                *(arg1 + 8) = x8
            label_104dc5c:
                x10_1 = zx.q(*x8)
            label_104dc60:
                x10_1 = zx.q(x10_1.d - 9)
            label_104dc64:
                cond:0 = x10_1.d u> 0x17
                cond:1 = x10_1.d == 0x17
                cond:2 = x10_1.d u<= 0x17
                cond:3 = x10_1.d u<= 0x17
                cond:4 = x10_1.d u> 0x17
                cond:5 = x10_1.d == 0x17
                cond:6 = x10_1.d u<= 0x17
                cond:9 = x10_1.d u>= 0x17
                cond:10 = x10_1.d u>= 0x17
            label_104dc68:
                
                if (cond:0)
                    return 
                
                goto label_104dc6c
            case 0x104dc58
                goto label_104dc58
            case 0x104dc5c
                goto label_104dc5c
            case 0x104dc60
                goto label_104dc60
            case 0x104dc64
                goto label_104dc64
            case 0x104dc68
                goto label_104dc68
            case 0x104dc6c
                goto label_104dc6c
            case 0x104dc70
                goto label_104dc70
            case 0x104dc74
                break
            case 0x104dc78
                continue
            case 0x104dc7c
                x10_1 = x8
            label_104dc80:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104dc84:
                x12_2 = zx.q(*(arg1 + 0x18))
            label_104dc88:
                cond:1 = x11_1.d == 0xd
            label_104dca0:
                
                if (not(cond:1))
                    goto label_104dca4
                
                x8 = x10_1
            label_104dca4:
                x11_1 = zx.q(x12_2.d + 1)
            label_104dca8:
                x8 = &x8[1]
            label_104dcac:
                *(arg1 + 8) = x8
                *(arg1 + 0x10) = x8
            label_104dcb0:
                *(arg1 + 0x18) = x11_1.d
            label_104dcb4:
                x10_1 = zx.q(*x8)
            label_104dcb8:
                x10_1 = zx.q(x10_1.d - 9)
            label_104dcbc:
                cond:0 = x10_1.d u> 0x17
                cond:1 = x10_1.d == 0x17
                cond:2 = x10_1.d u<= 0x17
                cond:3 = x10_1.d u<= 0x17
                cond:4 = x10_1.d u> 0x17
                cond:5 = x10_1.d == 0x17
                cond:6 = x10_1.d u<= 0x17
                cond:9 = x10_1.d u>= 0x17
                cond:10 = x10_1.d u>= 0x17
            label_104dcc0:
                
                if (cond:2)
                    goto label_104dc6c
                
                return 
            case 0x104dc80
                goto label_104dc80
            case 0x104dc84
                goto label_104dc84
            case 0x104dc88
                goto label_104dc88
            case 0x104dc8c
                goto label_104dca0
            case 0x104dc90
                x10_1 = x8
            label_104dc94:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104dc98:
                x12_2 = zx.q(*(arg1 + 0x18))
            label_104dc9c:
                cond:1 = x11_1.d == 0xa
                goto label_104dca0
            case 0x104dc94
                goto label_104dc94
            case 0x104dc98
                goto label_104dc98
            case 0x104dc9c
                goto label_104dc9c
            case 0x104dca4
                goto label_104dca4
            case 0x104dca8
                goto label_104dca8
            case 0x104dcac
                goto label_104dcac
            case 0x104dcb0
                goto label_104dcb0
            case 0x104dcb4
                goto label_104dcb4
            case 0x104dcb8
                goto label_104dcb8
            case 0x104dcbc
                goto label_104dcbc
            case 0x104dcc0
                goto label_104dcc0
            case 0x104dcc4
                return 
            case UI2ParseResult::~UI2ParseResult
                return UI2ParseResult::~UI2ParseResult() __tailcall
            case 0x104dccc
                return XString::~XString() __tailcall
            case UI2Parse_Exact
                return UI2Parse_Exact(arg1, entry_x1) __tailcall
            case 0x104dcd4
                arg_10 = entry_x22
                arg_18 = entry_x21
            label_104dcd8:
                arg_20 = entry_x20
                UI2ParserState* arg_28 = entry_x19
            label_104dcdc:
                entry_x20 = arg1
            label_104dce0:
                arg1 = entry_x1
            label_104dce4:
                UI2ParseResult* entry_x23 = entry_x1
            label_104dce8:
                entry_x19 = x8
            label_104dcec:
                arg1 = strlen(arg1)
            label_104dcf0:
                entry_x21 = *(entry_x20 + 8)
            label_104dcf4:
                entry_x22 = arg1
            label_104dcf8:
                arg1 = entry_x23
            label_104dcfc:
                entry_x2 = entry_x22
            label_104dd00:
                entry_x1 = entry_x21
            label_104dd04:
                arg1, entry_v0 = strncmp(arg1, entry_x1, entry_x2)
            label_104dd08:
                
                if (arg1.d == 0)
                    goto label_104dd18
                
                goto label_104dd0c
            case 0x104dcd8
                goto label_104dcd8
            case 0x104dcdc
                goto label_104dcdc
            case 0x104dce0
                goto label_104dce0
            case 0x104dce4
                goto label_104dce4
            case 0x104dce8
                goto label_104dce8
            case 0x104dcec
                goto label_104dcec
            case 0x104dcf0
                goto label_104dcf0
            case 0x104dcf4
                goto label_104dcf4
            case 0x104dcf8
                goto label_104dcf8
            case 0x104dcfc
                goto label_104dcfc
            case 0x104dd00
                goto label_104dd00
            case 0x104dd04
                goto label_104dd04
            case 0x104dd08
                goto label_104dd08
            case 0x104dd0c
            label_104dd0c:
                x8 = &data_24b6000
            label_104dd10:
                x8 = &x8[0x268]
            label_104ddb4:
                entry_v0 = *x8
            label_104ddb8:
                *entry_x19 = entry_v0
                return XString::XString(entry_x19 + 0x10) __tailcall
            case 0x104dd10
                goto label_104dd10
            case 0x104dd14
                goto label_104ddb4
            case 0x104dd18
            label_104dd18:
                x9 = "HHHH0"
            label_104dd1c:
                x8 = entry_x21 + entry_x22
            label_104dd20:
                x9 = &x9[0x31c]
            label_104dd24:
                *(entry_x20 + 8) = x8
            label_104dd28:
                x10_1 = zx.q(*x8)
            label_104dd2c:
                x10_1 = zx.q(x10_1.d - 9)
            label_104dd30:
                cond:3 = x10_1.d u<= 0x17
            label_104dd34:
                
                if (cond:3)
                    goto label_104dd54
                
                goto label_104ddac
            case 0x104dd1c
                goto label_104dd1c
            case 0x104dd20
                goto label_104dd20
            case 0x104dd24
                goto label_104dd24
            case 0x104dd28
                goto label_104dd28
            case 0x104dd2c
                goto label_104dd2c
            case 0x104dd30
                goto label_104dd30
            case 0x104dd34
                goto label_104dd34
            case 0x104dd38
            label_104ddac:
                x8 = &data_24b6000
            label_104ddb0:
                x8 = &x8[0x250]
                goto label_104ddb4
            case &data_104dd3c
                x8 = &x8[1]
            label_104dd40:
                *(entry_x20 + 8) = x8
            label_104dd44:
                x10_1 = zx.q(*x8)
            label_104dd48:
                x10_1 = zx.q(x10_1.d - 9)
            label_104dd4c:
                cond:4 = x10_1.d u> 0x17
            label_104dd50:
                
                if (cond:4)
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
            label_104dd54:
                x11_1 = &data_104dd3c
            label_104dd58:
                jump(x11_1 + (zx.q(x9[x10_1]) << 2))
            case 0x104dd58
                goto label_104dd58
            case 0x104dd5c
                jump(x11_1 + (x12_2 << 2))
            case 0x104dd60
                jump(x11_1)
            case 0x104dd64
                x10_1 = x8
            label_104dd68:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104dd6c:
                x12_2 = zx.q(*(entry_x20 + 0x18))
            label_104dd70:
                cond:5 = x11_1.d == 0xd
            label_104dd88:
                
                if (not(cond:5))
                    goto label_104dd8c
                
                x8 = x10_1
            label_104dd8c:
                x11_1 = zx.q(x12_2.d + 1)
            label_104dd90:
                x8 = &x8[1]
            label_104dd94:
                *(entry_x20 + 8) = x8
                *(entry_x20 + 0x10) = x8
            label_104dd98:
                *(entry_x20 + 0x18) = x11_1.d
            label_104dd9c:
                x10_1 = zx.q(*x8)
            label_104dda0:
                x10_1 = zx.q(x10_1.d - 9)
            label_104dda4:
                cond:6 = x10_1.d u<= 0x17
            label_104dda8:
                
                if (cond:6)
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
                x10_1 = x8
            label_104dd7c:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104dd80:
                x12_2 = zx.q(*(entry_x20 + 0x18))
            label_104dd84:
                cond:5 = x11_1.d == 0xa
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
            case 0x104ddb0
                goto label_104ddb0
            case 0x104ddb8
                goto label_104ddb8
            case 0x104ddbc
                *entry_x19 = entry_v0
                return XString::XString(arg1) __tailcall
            case 0x104ddc8
                return XString::XString(arg1) __tailcall
            case UI2ParseResultMakeExpr
                return UI2ParseResultMakeExpr(arg1) __tailcall
            case 0x104ddd8
                arg_10 = entry_x20
                arg_18 = entry_x19
            label_104dddc:
                entry_x19 = arg1
            label_104dde4:
                entry_x20 = x8
            label_104dde8:
                XString::XString()
            label_104ddec:
                x8 = 3
            label_104ddf0:
                *entry_x20 = x8.d
                *(entry_x20 + 8) = entry_x19
                return 
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
                *(entry_x20 + 8) = entry_x19
                return 
            case 0x104ddf8
                return 
            case UI2ParseResultMakeString
                return UI2ParseResultMakeString(arg1) __tailcall
            case 0x104de08
                arg_10 = entry_x20
                arg_18 = entry_x19
            label_104de0c:
                entry_x19 = &x8[0x10]
            label_104de18:
                entry_x21 = x8
            label_104de1c:
                XString::XString()
            label_104de20:
                x8 = 4
            label_104de24:
                *entry_x21 = x8.d
            label_104de28:
                XString::operator=(entry_x19)
                return 
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
                XString::operator=(arg1)
                return 
            case 0x104de34
                return 
            case 0x104de40
                entry_x20 = arg1
            label_104de48:
                XString::~XString()
            label_104de4c:
                sub_1101e04(entry_x20)
                noreturn
            case 0x104de44
                goto label_104de48
            case 0x104de4c
                goto label_104de4c
            case 0x104de50
                sub_1101e04(arg1)
                noreturn
            case is_success
                return is_success(arg1) __tailcall
            case 0x104de58
                return 
            case is_error
                return is_error(arg1) __tailcall
            case 0x104de6c
                return 
            case UI2Parse_NullLiteral
                return UI2Parse_NullLiteral(arg1) __tailcall
            case 0x104de7c
                UI2ParserState* arg_48 = entry_x21
            label_104de80:
                UI2ParserState* arg_50 = entry_x20
                UI2ParserState* arg_58 = entry_x19
            label_104de84:
                entry_x1 = "blicKeyType is implemented"
            label_104de88:
                entry_x19 = x8
            label_104de8c:
                entry_x1 += 0x71d
            label_104de94:
                entry_x20 = arg1
            label_104de9c:
                UI2Parse_Exact(arg1, entry_x1)
            label_104dea0:
                x8 = zx.q(arg_20.d)
            label_104dea4:
                x8 = zx.q(x8.d - 2)
            label_104dea8:
                cond:9 = x8.d u>= 3
            label_104deac:
                
                if (cond:9)
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
                entry_x1 = " signature--"
            label_104deb4:
                entry_x1 += 0x62c
            label_104debc:
                arg1 = entry_x20
            label_104dec4:
                UI2Parse_Exact(arg1, entry_x1)
            label_104dec8:
                int64_t arg_8
                entry_v0 = arg_8.o
            label_104decc:
                x8 = &arg_20
            label_104ded0:
                entry_x20 = &x8[0x10]
            label_104ded8:
                arg_20.o = entry_v0
            label_104dedc:
                arg1 = entry_x20
            label_104dee4:
                XString::operator=(arg1)
            label_104deec:
                XString::~XString()
            label_104def0:
                x8 = zx.q(arg_20.d)
            label_104def4:
                x8 = zx.q(x8.d - 2)
            label_104def8:
                cond:10 = x8.d u>= 3
            label_104defc:
                
                if (cond:10)
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
                x9 = "HHHH0"
            label_104df0c:
                x8 = 3
            label_104df10:
                x9 = &x9[0x510]
            label_104df14:
                *entry_x19 = x8.d
            label_104df18:
                *(entry_x19 + 8) = x9
                XString::~XString()
                return 
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
                entry_v0 = arg_20.o
            label_104df24:
                arg1 = entry_x19 + 0x10
            label_104df2c:
                *entry_x19 = entry_v0
            label_104df30:
                XString::XString(arg1)
                XString::~XString()
                return 
            case 0x104df24
                goto label_104df24
            case 0x104df28
                goto label_104df2c
            case 0x104df30
                goto label_104df30
            case 0x104df34
                XString::~XString()
                return 
            case 0x104df38
            label_104df38:
                entry_v0 = arg_20.o
            label_104df3c:
                arg1 = entry_x19 + 0x10
            label_104df40:
                *entry_x19 = entry_v0
            label_104df48:
                XString::XString(arg1)
                XString::~XString()
                return 
            case 0x104df3c
                goto label_104df3c
            case 0x104df40
                goto label_104df40
            case 0x104df44
                goto label_104df48
            case 0x104df58
                return 
            case 0x104df68
                entry_x19 = arg1
            label_104df70:
                XString::~XString()
            label_104df88:
                XString::~XString()
            label_104df8c:
                sub_1101e04(entry_x19)
                noreturn
            case 0x104df6c
                goto label_104df70
            case 0x104df74
                goto label_104df88
            case 0x104df78
                entry_x19 = arg1
                goto label_104df88
            case 0x104df8c
                goto label_104df8c
            case 0x104df90
                sub_1101e04(arg1)
                noreturn
            case IsBinaryOp
                return IsBinaryOp(arg1) __tailcall
            case 0x104df98
                return 
            case UI2ExprMakeVar
                return UI2ExprMakeVar(arg1, entry_x1, entry_x2) __tailcall
            case 0x104dfa4
                x9 = 0x38
            label_104dfa8:
                x10_1 = 0xa
            label_104dfac:
                x11_1 = zx.q(x8.d + 1)
            label_104dfb0:
                x8 = arg1 + x8 * x9
            label_104dfb4:
                *(arg1 + 0x428) = x11_1.d
            label_104dfb8:
                x8 = &x8[0xa8]
                *x8 = x10_1.d
            label_104dfc0:
                *(x8 + 8) = entry_x1
                *(x8 + 0x10) = entry_x2
                return 
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
                goto label_104dfc0
            case 0x104dfc4
                return 
            case UI2ExprMakeTuple
                return UI2ExprMakeTuple(arg1, entry_x1, entry_x2) __tailcall
            case 0x104dfcc
                x9 = 0x38
            label_104dfd0:
                x10_1 = 7
            label_104dfd4:
                x11_1 = zx.q(x8.d + 1)
            label_104dfd8:
                x8 = arg1 + x8 * x9
            label_104dfdc:
                *(arg1 + 0x428) = x11_1.d
            label_104dfe0:
                x8 = &x8[0xa8]
                *x8 = x10_1.d
            label_104dfe4:
                x9 = *(entry_x1 + 8)
            label_104dfec:
                *(x8 + 0x18) = x9
            label_104dff0:
                *(x8 + 0x20) = *(entry_x2 + 8)
                return 
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
                goto label_104dfec
            case 0x104dff0
                goto label_104dff0
            case 0x104dff4
                *(x8 + 0x20) = x9
                return 
            case 0x104dff8
                return 
            case UI2ExprMakeTuple
                return UI2ExprMakeTuple(arg1, entry_x1, entry_x2, entry_x3) __tailcall
            case &data_104e000
                x8 = 0x38
            label_104e004:
                x8 = arg1 + &jump_table_869304 * x8
            label_104e008:
                x9 = &jump_table_869304[1]
            label_104e00c:
                *(arg1 + 0x428) = x9.d
            label_104e010:
                x9 = 8
            label_104e014:
                x8 = &x8[0xa8]
                *x8 = x9.d
            label_104e018:
                x9 = *(entry_x1 + 8)
            label_104e020:
                *(x8 + 0x18) = x9
            label_104e024:
                x9 = *(entry_x2 + 8)
            label_104e028:
                *(x8 + 0x20) = x9
            label_104e02c:
                *(x8 + 0x28) = *(entry_x3 + 8)
                return 
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
                goto label_104e020
            case 0x104e024
                goto label_104e024
            case 0x104e028
                goto label_104e028
            case 0x104e02c
                goto label_104e02c
            case 0x104e030
                *(x8 + 0x28) = x9
                return 
            case 0x104e034
                return 
            case UI2ExprMakeTuple
                return UI2ExprMakeTuple(arg1, entry_x1, entry_x2, entry_x3, entry_x4) __tailcall
            case 0x104e03c
                x8 = 0x38
            label_104e040:
                x8 = arg1 + &jump_table_869304 * x8
            label_104e044:
                x9 = &jump_table_869304[1]
            label_104e048:
                *(arg1 + 0x428) = x9.d
            label_104e04c:
                x9 = 9
            label_104e050:
                *(x8 + 0xa8) = x9.d
                *(x8 + 0xc0) = *(entry_x1 + 8)
                *(x8 + 0xc8) = *(entry_x2 + 8)
                *(x8 + 0xd0) = *(entry_x3 + 8)
                *(x8 + 0xd8) = *(entry_x4 + 8)
                return 
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
