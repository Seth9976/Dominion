// 函数: _Z16Parse_OrOperatorR14UI2ParserState
// 地址: 0x104f9ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 8)
uint8_t* const x10 = &jump_table_86941b
uint64_t x11_1 = zx.q(zx.d(*x9) - 9)
bool cond:0 = x11_1.d u> 0x17
bool cond:1 = x11_1.d == 0x17
bool cond:2 = x11_1.d u<= 0x17
bool cond:3 = x11_1.d u< 0x17
bool cond:4 = x11_1.d u> 0x17
bool cond:5 = x11_1.d u<= 0x17
bool cond:6 = x11_1.d u> 0x17
bool cond:7 = x11_1.d == 0x17
bool cond:8 = x11_1.d u<= 0x17
bool cond:9 = x11_1.d u>= 0x17
bool cond:10 = x11_1.d u<= 0x17
bool cond:11 = x11_1.d u> 0x17
bool cond:12 = x11_1.d u< 0x17
bool cond:13 = x11_1.d u< 0x17
bool cond:14 = x11_1.d u>= 0x17
bool cond:15 = x11_1.d == 0x17
bool cond:16 = x11_1.d u> 0x17
bool cond:17 = x11_1.d u<= 0x17
char const* const entry_x1

if (x11_1.d u> 0x17)
label_104fa3c:
    entry_x1 = "in supported groups list"
label_104fa40:
    entry_x1 = &entry_x1[0xdb9]
label_104fa44:
    return UI2Parse_Exact(arg1, entry_x1) __tailcall

label_104f9e4:
void* const x12_1 = &data_104f9cc
label_104f9e8:
uint64_t x13_2 = zx.q(jump_table_86941b[x11_1])

while (true)
    x12_1 += x13_2 << 2
    
    while (true)
        int64_t arg_0
        int32_t arg_38
        uint8_t* const entry_x8
        UI2ParserState* entry_x19
        UI2ParserState* entry_x20
        int64_t* entry_x21
        int128_t entry_v0
        
        switch (x12_1)
            case &data_104f9cc
                x9 = &x9[1]
            label_104f9d0:
                *(arg1 + 8) = x9
            label_104f9d4:
                x11_1 = zx.q(*x9)
            label_104f9d8:
                x11_1 = zx.q(x11_1.d - 9)
            label_104f9dc:
                cond:0 = x11_1.d u> 0x17
                cond:1 = x11_1.d == 0x17
                cond:2 = x11_1.d u<= 0x17
                cond:3 = x11_1.d u< 0x17
                cond:4 = x11_1.d u> 0x17
                cond:5 = x11_1.d u<= 0x17
                cond:6 = x11_1.d u> 0x17
                cond:7 = x11_1.d == 0x17
                cond:8 = x11_1.d u<= 0x17
                cond:9 = x11_1.d u>= 0x17
                cond:10 = x11_1.d u<= 0x17
                cond:11 = x11_1.d u> 0x17
                cond:12 = x11_1.d u< 0x17
                cond:13 = x11_1.d u< 0x17
                cond:14 = x11_1.d u>= 0x17
                cond:15 = x11_1.d == 0x17
                cond:16 = x11_1.d u> 0x17
                cond:17 = x11_1.d u<= 0x17
            label_104f9e0:
                
                if (cond:0)
                    goto label_104fa3c
                
                goto label_104f9e4
            case 0x104f9d0
                goto label_104f9d0
            case 0x104f9d4
                goto label_104f9d4
            case 0x104f9d8
                goto label_104f9d8
            case 0x104f9dc
                goto label_104f9dc
            case 0x104f9e0
                goto label_104f9e0
            case 0x104f9e4
                goto label_104f9e4
            case 0x104f9e8
                goto label_104f9e8
            case 0x104f9ec
                break
            case 0x104f9f0
                continue
            case 0x104f9f4
                x11_1 = x9
            label_104f9f8:
                x11_1 += 1
                x12_1 = zx.q(*x11_1)
            label_104f9fc:
                x13_2 = zx.q(*(arg1 + 0x18))
            label_104fa00:
                cond:1 = x12_1.d == 0xd
            label_104fa18:
                
                if (not(cond:1))
                    goto label_104fa1c
                
                x9 = x11_1
            label_104fa1c:
                x12_1 = zx.q(x13_2.d + 1)
            label_104fa20:
                x9 = &x9[1]
            label_104fa24:
                *(arg1 + 8) = x9
                *(arg1 + 0x10) = x9
            label_104fa28:
                *(arg1 + 0x18) = x12_1.d
            label_104fa2c:
                x11_1 = zx.q(*x9)
            label_104fa30:
                x11_1 = zx.q(x11_1.d - 9)
            label_104fa34:
                cond:0 = x11_1.d u> 0x17
                cond:1 = x11_1.d == 0x17
                cond:2 = x11_1.d u<= 0x17
                cond:3 = x11_1.d u< 0x17
                cond:4 = x11_1.d u> 0x17
                cond:5 = x11_1.d u<= 0x17
                cond:6 = x11_1.d u> 0x17
                cond:7 = x11_1.d == 0x17
                cond:8 = x11_1.d u<= 0x17
                cond:9 = x11_1.d u>= 0x17
                cond:10 = x11_1.d u<= 0x17
                cond:11 = x11_1.d u> 0x17
                cond:12 = x11_1.d u< 0x17
                cond:13 = x11_1.d u< 0x17
                cond:14 = x11_1.d u>= 0x17
                cond:15 = x11_1.d == 0x17
                cond:16 = x11_1.d u> 0x17
                cond:17 = x11_1.d u<= 0x17
            label_104fa38:
                
                if (cond:2)
                    goto label_104f9e4
                
                goto label_104fa3c
            case 0x104f9f8
                goto label_104f9f8
            case 0x104f9fc
                goto label_104f9fc
            case 0x104fa00
                goto label_104fa00
            case 0x104fa04
                goto label_104fa18
            case 0x104fa08
                x11_1 = x9
            label_104fa0c:
                x11_1 += 1
                x12_1 = zx.q(*x11_1)
            label_104fa10:
                x13_2 = zx.q(*(arg1 + 0x18))
            label_104fa14:
                cond:1 = x12_1.d == 0xa
                goto label_104fa18
            case 0x104fa0c
                goto label_104fa0c
            case 0x104fa10
                goto label_104fa10
            case 0x104fa14
                goto label_104fa14
            case 0x104fa1c
                goto label_104fa1c
            case 0x104fa20
                goto label_104fa20
            case 0x104fa24
                goto label_104fa24
            case 0x104fa28
                goto label_104fa28
            case 0x104fa2c
                goto label_104fa2c
            case 0x104fa30
                goto label_104fa30
            case 0x104fa34
                goto label_104fa34
            case 0x104fa38
                goto label_104fa38
            case 0x104fa3c
                goto label_104fa3c
            case 0x104fa40
                goto label_104fa40
            case 0x104fa44
                goto label_104fa44
            case Parse_LiteralOrTuple
                return Parse_LiteralOrTuple(arg1) __tailcall
            case 0x104fa4c
                UI2ParserState* arg_10 = entry_x20
                UI2ParserState* arg_18 = entry_x19
            label_104fa50:
                entry_x21 = arg1
            label_104fa54:
                entry_x19 = entry_x8
            label_104fa58:
                Parse_Tuple(arg1)
            label_104fa5c:
                entry_x20 = entry_x19
            label_104fa60:
                entry_x8 = zx.q(*entry_x20)
                entry_x20 += 0x10
            label_104fa64:
                entry_x8 = zx.q(entry_x8.d - 1)
            label_104fa68:
                cond:3 = entry_x8.d u< 4
            label_104fa6c:
                
                if (cond:3)
                    return 
                
                goto label_104fa74
            case 0x104fa50
                goto label_104fa50
            case 0x104fa54
                goto label_104fa54
            case 0x104fa58
                goto label_104fa58
            case 0x104fa5c
                goto label_104fa5c
            case 0x104fa60
                goto label_104fa60
            case 0x104fa64
                goto label_104fa64
            case 0x104fa68
                goto label_104fa68
            case 0x104fa6c
                goto label_104fa6c
            case 0x104fa70
            label_104fa74:
                XString::~XString()
            label_104fa7c:
                arg1 = entry_x21
            label_104fa80:
                Parse_Literal(arg1)
            label_104fa84:
                entry_x8 = zx.q(*entry_x19)
            label_104fa88:
                entry_x8 = zx.q(entry_x8.d - 1)
            label_104fa8c:
                cond:4 = entry_x8.d u> 3
            label_104fa90:
                
                if (cond:4)
                    goto label_104faa4
                
                return 
            case 0x104fa78
                goto label_104fa7c
            case 0x104fa80
                goto label_104fa80
            case 0x104fa84
                goto label_104fa84
            case 0x104fa88
                goto label_104fa88
            case 0x104fa8c
                goto label_104fa8c
            case 0x104fa90
                goto label_104fa90
            case 0x104fa94
                return 
            case 0x104faa0
            label_104faa4:
                XString::~XString()
            label_104faa8:
                entry_x8 = &data_24b6000
            label_104faac:
                entry_x8 = &entry_x8[0x268]
            label_104fab0:
                entry_v0 = *entry_x8
            label_104fab4:
                *entry_x19 = entry_v0
                return XString::XString(entry_x20) __tailcall
            case 0x104faa8
                goto label_104faa8
            case 0x104faac
                goto label_104faac
            case 0x104fab0
                goto label_104fab0
            case 0x104fab4
                goto label_104fab4
            case 0x104fab8
                *entry_x19 = entry_v0
                return XString::XString(arg1) __tailcall
            case 0x104fac0
                return XString::XString(arg1) __tailcall
            case Parse_SimpleExpression
                return Parse_SimpleExpression(arg1) __tailcall
            case 0x104fad0
                int64_t* arg_58 = entry_x21
            label_104fad4:
                UI2ParserState* arg_60 = entry_x20
                UI2ParserState* arg_68 = entry_x19
            label_104fad8:
                entry_x19 = entry_x8
            label_104fadc:
                entry_x8 = *(arg1 + 8)
            label_104fae0:
                x9 = "HHHH0"
            label_104fae4:
                entry_x20 = arg1
            label_104fae8:
                x9 = &x9[0x433]
            label_104faec:
                x10 = zx.q(*entry_x8)
            label_104faf0:
                x10 = zx.q(x10.d - 9)
            label_104faf4:
                cond:5 = x10.d u<= 0x17
            label_104faf8:
                
                if (cond:5)
                    goto label_104fb18
                
                goto label_104fb74
            case 0x104fad4
                goto label_104fad4
            case 0x104fad8
                goto label_104fad8
            case 0x104fadc
                goto label_104fadc
            case 0x104fae0
                goto label_104fae0
            case 0x104fae4
                goto label_104fae4
            case 0x104fae8
                goto label_104fae8
            case 0x104faec
                goto label_104faec
            case 0x104faf0
                goto label_104faf0
            case 0x104faf4
                goto label_104faf4
            case 0x104faf8
                goto label_104faf8
            case 0x104fafc
            label_104fb74:
                arg1 = entry_x20
            label_104fb7c:
                Parse_Identifier(arg1)
            label_104fb80:
                entry_x8 = zx.q(arg_38)
            label_104fb84:
                entry_x8 = zx.q(entry_x8.d - 2)
            label_104fb88:
                cond:9 = entry_x8.d u>= 3
            label_104fb8c:
                
                if (cond:9)
                    goto label_104fd08
                
                goto label_104fb90
            case &data_104fb00
                entry_x8 = &entry_x8[1]
            label_104fb04:
                *(entry_x20 + 8) = entry_x8
            label_104fb08:
                x10 = zx.q(*entry_x8)
            label_104fb0c:
                x10 = zx.q(x10.d - 9)
            label_104fb10:
                cond:6 = x10.d u> 0x17
            label_104fb14:
                
                if (cond:6)
                    goto label_104fb74
                
                goto label_104fb18
            case 0x104fb04
                goto label_104fb04
            case 0x104fb08
                goto label_104fb08
            case 0x104fb0c
                goto label_104fb0c
            case 0x104fb10
                goto label_104fb10
            case 0x104fb14
                goto label_104fb14
            case 0x104fb18
            label_104fb18:
                x11_1 = &data_104fb00
            label_104fb1c:
                jump(x11_1 + (zx.q(*(x9 + x10)) << 2))
            case 0x104fb1c
                goto label_104fb1c
            case 0x104fb20
                jump(x11_1 + (x12_1 << 2))
            case 0x104fb24
                jump(x11_1)
            case 0x104fb28
                x10 = entry_x8
            label_104fb2c:
                x10 = &x10[1]
                x11_1 = zx.q(*x10)
            label_104fb30:
                x12_1 = zx.q(*(entry_x20 + 0x18))
            label_104fb34:
                cond:7 = x11_1.d == 0xd
            label_104fb4c:
                
                if (not(cond:7))
                    goto label_104fb50
                
                entry_x8 = x10
            label_104fb50:
                x11_1 = zx.q(x12_1.d + 1)
            label_104fb54:
                entry_x8 = &entry_x8[1]
            label_104fb58:
                *(entry_x20 + 8) = entry_x8
                *(entry_x20 + 0x10) = entry_x8
            label_104fb5c:
                *(entry_x20 + 0x18) = x11_1.d
            label_104fb60:
                x10 = zx.q(*entry_x8)
            label_104fb64:
                x10 = zx.q(x10.d - 9)
            label_104fb68:
                cond:8 = x10.d u<= 0x17
            label_104fb6c:
                
                if (cond:8)
                    goto label_104fb18
                
                goto label_104fb74
            case 0x104fb2c
                goto label_104fb2c
            case 0x104fb30
                goto label_104fb30
            case 0x104fb34
                goto label_104fb34
            case 0x104fb38
                goto label_104fb4c
            case 0x104fb3c
                x10 = entry_x8
            label_104fb40:
                x10 = &x10[1]
                x11_1 = zx.q(*x10)
            label_104fb44:
                x12_1 = zx.q(*(entry_x20 + 0x18))
            label_104fb48:
                cond:7 = x11_1.d == 0xa
                goto label_104fb4c
            case 0x104fb40
                goto label_104fb40
            case 0x104fb44
                goto label_104fb44
            case 0x104fb48
                goto label_104fb48
            case 0x104fb50
                goto label_104fb50
            case 0x104fb54
                goto label_104fb54
            case 0x104fb58
                goto label_104fb58
            case 0x104fb5c
                goto label_104fb5c
            case 0x104fb60
                goto label_104fb60
            case 0x104fb64
                goto label_104fb64
            case 0x104fb68
                goto label_104fb68
            case 0x104fb6c
                goto label_104fb6c
            case 0x104fb78
                goto label_104fb7c
            case 0x104fb80
                goto label_104fb80
            case 0x104fb84
                goto label_104fb84
            case 0x104fb88
                goto label_104fb88
            case 0x104fb8c
                goto label_104fb8c
            case 0x104fb90
            label_104fb90:
                entry_x8 = *(entry_x20 + 8)
            label_104fb94:
                x9 = "HHHH0"
            label_104fb98:
                x9 = &x9[0x44b]
            label_104fb9c:
                x10 = zx.q(*entry_x8)
            label_104fba0:
                x10 = zx.q(x10.d - 9)
            label_104fba4:
                cond:10 = x10.d u<= 0x17
            label_104fba8:
                
                if (cond:10)
                    goto label_104fcc8
                
                goto label_104fbac
            case 0x104fb94
                goto label_104fb94
            case 0x104fb98
                goto label_104fb98
            case 0x104fb9c
                goto label_104fb9c
            case 0x104fba0
                goto label_104fba0
            case 0x104fba4
                goto label_104fba4
            case 0x104fba8
                goto label_104fba8
            case 0x104fbb0
                goto label_104fbb0
            case 0x104fbb4
                goto label_104fbb8
            case 0x104fbbc
                goto label_104fbbc
            case 0x104fbc0
                goto label_104fbc0
            case 0x104fbc4
                goto label_104fbc4
            case 0x104fbc8
                goto label_104fbc8
            case 0x104fbcc
                goto label_104fbcc
            case 0x104fbd0
            label_104fbd0:
                entry_x21 = &arg_0
            label_104fbd8:
                arg1 = entry_x20
            label_104fbdc:
                Parse_Tuple(arg1)
            label_104fbe0:
                entry_x8 = zx.q(arg_0.d)
            label_104fbe4:
                entry_x21 = &entry_x21[2]
            label_104fbe8:
                x9 = zx.q(entry_x8.d - 1)
            label_104fbec:
                cond:12 = x9.d u< 4
            label_104fbf0:
                
                if (cond:12)
                    goto label_104fc40
                
                goto label_104fbf8
            case 0x104fbd4
                goto label_104fbd8
            case 0x104fbdc
                goto label_104fbdc
            case 0x104fbe0
                goto label_104fbe0
            case 0x104fbe4
                goto label_104fbe4
            case 0x104fbe8
                goto label_104fbe8
            case 0x104fbec
                goto label_104fbec
            case 0x104fbf0
                goto label_104fbf0
            case 0x104fbf4
            label_104fbf8:
                XString::~XString()
            label_104fc00:
                arg1 = entry_x20
            label_104fc04:
                Parse_Literal(arg1)
            label_104fc08:
                entry_x8 = zx.q(arg_0.d)
            label_104fc0c:
                x9 = zx.q(entry_x8.d - 1)
            label_104fc10:
                cond:13 = x9.d u< 4
            label_104fc14:
                
                if (cond:13)
                    goto label_104fc40
                
                goto label_104fc1c
            case 0x104fbfc
                goto label_104fc00
            case 0x104fc04
                goto label_104fc04
            case 0x104fc08
                goto label_104fc08
            case 0x104fc0c
                goto label_104fc0c
            case 0x104fc10
                goto label_104fc10
            case 0x104fc14
                goto label_104fc14
            case 0x104fc18
            label_104fc1c:
                XString::~XString()
            label_104fc20:
                entry_x8 = &data_24b6000
            label_104fc24:
                entry_x8 = &entry_x8[0x268]
            label_104fc28:
                entry_v0 = *entry_x8
            label_104fc2c:
                arg_0.o = entry_v0
            label_104fc34:
                arg1 = entry_x21
            label_104fc38:
                XString::XString(arg1)
            label_104fc3c:
                entry_x8 = zx.q(arg_0.d)
            label_104fc40:
                entry_x8 = zx.q(entry_x8.d - 2)
            label_104fc44:
                cond:14 = entry_x8.d u>= 3
            label_104fc48:
                
                if (cond:14)
                    goto label_104fd3c
                
                goto label_104fc4c
            case 0x104fc20
                goto label_104fc20
            case 0x104fc24
                goto label_104fc24
            case 0x104fc28
                goto label_104fc28
            case 0x104fc2c
                goto label_104fc2c
            case 0x104fc30
                goto label_104fc34
            case 0x104fc38
                goto label_104fc38
            case 0x104fc3c
                goto label_104fc3c
            case 0x104fc40
                goto label_104fc40
            case 0x104fc44
                goto label_104fc44
            case 0x104fc48
                goto label_104fc48
            case 0x104fc4c
            label_104fc4c:
                entry_x8 = *entry_x20
            label_104fc50:
                x10 = 0x38
            label_104fc54:
                x11_1 = 0xb
            label_104fc5c:
                x9 = sx.q(*(entry_x8 + 0x428))
            label_104fc60:
                x12_1 = zx.q(x9.d + 1)
            label_104fc64:
                entry_x20 = entry_x8 + x9 * x10
            label_104fc68:
                *(entry_x8 + 0x428) = x12_1.d
            label_104fc6c:
                entry_x20 += 0xa8
                *entry_x20 = x11_1.d
            label_104fc70:
                uint8_t* arg_40
                entry_x8 = arg_40
            label_104fc74:
                *(entry_x20 + 0x18) = entry_x8
            label_104fc78:
                uint8_t* arg_8
                entry_x8 = arg_8
            label_104fc7c:
                *(entry_x20 + 0x20) = entry_x8
            label_104fc80:
                XString::XString()
            label_104fc84:
                entry_x8 = 3
            label_104fc88:
                *entry_x19 = entry_x8.d
            label_104fc8c:
                *(entry_x19 + 8) = entry_x20
            label_104fd54:
                XString::~XString()
                goto label_104fd60
            case 0x104fc50
                goto label_104fc50
            case 0x104fc54
                goto label_104fc54
            case 0x104fc58
                goto label_104fc5c
            case 0x104fc60
                goto label_104fc60
            case 0x104fc64
                goto label_104fc64
            case 0x104fc68
                goto label_104fc68
            case 0x104fc6c
                goto label_104fc6c
            case 0x104fc70
                goto label_104fc70
            case 0x104fc74
                goto label_104fc74
            case 0x104fc78
                goto label_104fc78
            case 0x104fc7c
                goto label_104fc7c
            case 0x104fc80
                goto label_104fc80
            case 0x104fc84
                goto label_104fc84
            case 0x104fc88
                goto label_104fc88
            case 0x104fc8c
                goto label_104fc8c
            case 0x104fc90
                goto label_104fd54
            case 0x104fc94
                x10 = entry_x8
            label_104fc98:
                x10 = &x10[1]
                x11_1 = zx.q(*x10)
            label_104fc9c:
                x12_1 = zx.q(*(entry_x20 + 0x18))
            label_104fca0:
                cond:15 = x11_1.d == 0xa
            label_104fca4:
                
                if (not(cond:15))
                    goto label_104fca8
                
                entry_x8 = x10
            label_104fca8:
                x11_1 = zx.q(x12_1.d + 1)
            label_104fcac:
                entry_x8 = &entry_x8[1]
            label_104fcb0:
                *(entry_x20 + 8) = entry_x8
                *(entry_x20 + 0x10) = entry_x8
            label_104fcb4:
                *(entry_x20 + 0x18) = x11_1.d
            label_104fcb8:
                x10 = zx.q(*entry_x8)
            label_104fcbc:
                x10 = zx.q(x10.d - 9)
            label_104fcc0:
                cond:16 = x10.d u> 0x17
            label_104fcc4:
                
                if (cond:16)
                    goto label_104fbac
                
                goto label_104fcc8
            case 0x104fc98
                goto label_104fc98
            case 0x104fc9c
                goto label_104fc9c
            case 0x104fca0
                goto label_104fca0
            case 0x104fca8
                goto label_104fca8
            case 0x104fcac
                goto label_104fcac
            case 0x104fcb0
                goto label_104fcb0
            case 0x104fcb4
                goto label_104fcb4
            case 0x104fcb8
                goto label_104fcb8
            case 0x104fcbc
                goto label_104fcbc
            case 0x104fcc0
                goto label_104fcc0
            case 0x104fcc4
                goto label_104fcc4
            case 0x104fcc8
            label_104fcc8:
                x11_1 = &data_104fbac
            label_104fccc:
                jump(x11_1 + (zx.q(*(x9 + x10)) << 2))
            case 0x104fccc
                goto label_104fccc
            case 0x104fcd0
                jump(x11_1 + (x12_1 << 2))
            case 0x104fcd4
                jump(x11_1)
            case 0x104fcd8
                entry_x8 = &entry_x8[1]
            label_104fcdc:
                *(entry_x20 + 8) = entry_x8
            label_104fce0:
                x10 = zx.q(*entry_x8)
            label_104fce4:
                x10 = zx.q(x10.d - 9)
            label_104fce8:
                cond:17 = x10.d u<= 0x17
            label_104fcec:
                
                if (cond:17)
                    goto label_104fcc8
                
                goto label_104fbac
            case 0x104fcdc
                goto label_104fcdc
            case 0x104fce0
                goto label_104fce0
            case 0x104fce4
                goto label_104fce4
            case 0x104fce8
                goto label_104fce8
            case 0x104fcec
                goto label_104fcec
            case 0x104fcf0
            label_104fbac:
                entry_x1 = "in supported groups list"
            label_104fbb0:
                entry_x1 = &entry_x1[0xdb9]
            label_104fbb8:
                arg1 = entry_x20
            label_104fbbc:
                UI2Parse_Exact(arg1, entry_x1)
            label_104fbc0:
                int32_t arg_20
                entry_x8 = zx.q(arg_20)
            label_104fbc4:
                entry_x8 = zx.q(entry_x8.d - 2)
            label_104fbc8:
                cond:11 = entry_x8.d u> 2
            label_104fbcc:
                
                if (cond:11)
                    goto label_104fd20
                
                goto label_104fbd0
            case 0x104fcf4
                x10 = entry_x8
            label_104fcf8:
                x10 = &x10[1]
                x11_1 = zx.q(*x10)
            label_104fcfc:
                x12_1 = zx.q(*(entry_x20 + 0x18))
            label_104fd00:
                cond:15 = x11_1.d == 0xd
                goto label_104fca4
            case 0x104fcf8
                goto label_104fcf8
            case 0x104fcfc
                goto label_104fcfc
            case 0x104fd00
                goto label_104fd00
            case 0x104fd04
                goto label_104fca4
            case 0x104fd08
            label_104fd08:
                entry_v0 = arg_38.o
            label_104fd0c:
                arg1 = entry_x19 + 0x10
            label_104fd14:
                *entry_x19 = entry_v0
            label_104fd18:
                XString::XString(arg1)
                XString::~XString()
                return 
            case 0x104fd0c
                goto label_104fd0c
            case 0x104fd10
                goto label_104fd14
            case 0x104fd18
                goto label_104fd18
            case 0x104fd1c
                XString::~XString()
                return 
            case 0x104fd20
            label_104fd20:
                entry_v0 = arg_38.o
            label_104fd28:
                arg1 = entry_x19 + 0x10
            label_104fd30:
                *entry_x19 = entry_v0
            label_104fd34:
                XString::XString(arg1)
            label_104fd60:
                XString::~XString()
                XString::~XString()
                return 
            case 0x104fd24
                goto label_104fd28
            case 0x104fd2c
                goto label_104fd30
            case 0x104fd34
                goto label_104fd34
            case 0x104fd38
                goto label_104fd60
            case 0x104fd3c
            label_104fd3c:
                entry_v0 = arg_0.o
            label_104fd40:
                arg1 = entry_x19 + 0x10
            label_104fd44:
                *entry_x19 = entry_v0
            label_104fd4c:
                XString::XString(arg1)
                goto label_104fd54
            case 0x104fd40
                goto label_104fd40
            case 0x104fd44
                goto label_104fd44
            case 0x104fd48
                goto label_104fd4c
            case 0x104fd70
                return 
            case 0x104fd80
                entry_x19 = arg1
            label_104fd88:
                XString::~XString()
            label_104fda0:
                XString::~XString()
            label_104fdb8:
                XString::~XString()
            label_104fdbc:
                sub_1101e04(entry_x19)
                noreturn
            case 0x104fd84
                goto label_104fd88
            case 0x104fd8c
                goto label_104fda0
            case 0x104fd90
                entry_x19 = arg1
                goto label_104fda0
            case 0x104fda4
                goto label_104fdb8
            case 0x104fda8
                entry_x19 = arg1
                goto label_104fdb8
            case 0x104fdbc
                goto label_104fdbc
            case 0x104fdc0
                sub_1101e04(arg1)
                noreturn
            case Parse_LeftBracket
                return Parse_LeftBracket(arg1) __tailcall
            case 0x104fdc8
                return UI2Parse_Exact(arg1, &entry_x1[0x29]) __tailcall
