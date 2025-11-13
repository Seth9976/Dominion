// 函数: _Z22Parse_SimpleExpressionR14UI2ParserState
// 地址: 0x104facc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* lr
void* var_20 = lr
int32_t* entry_x21
int32_t* var_18 = entry_x21
char* x20
char const* const var_10 = x20
int32_t* x19
int32_t* var_8 = x19
int64_t entry_x8
int64_t x19_1 = entry_x8
char* x8 = *(arg1 + 8)
UI2ParserState& x20_1 = arg1
uint8_t* const x9 = &jump_table_869433
uint64_t x10_1 = zx.q(zx.d(*x8) - 9)
bool cond:0 = x10_1.d u> 0x17
bool cond:1 = x10_1.d == 0x17
bool cond:2 = x10_1.d u<= 0x17
bool cond:3 = x10_1.d u>= 0x17
bool cond:4 = x10_1.d u<= 0x17
bool cond:5 = x10_1.d u> 0x17
bool cond:6 = x10_1.d u< 0x17
bool cond:7 = x10_1.d u< 0x17
bool cond:8 = x10_1.d u>= 0x17
bool cond:9 = x10_1.d == 0x17
bool cond:10 = x10_1.d u> 0x17
bool cond:11 = x10_1.d u<= 0x17
bool cond:12 = x10_1.d s<= 0x17
bool cond:13 = x10_1.d u>= 0x17
bool cond:14 = x10_1.d u< 0x17
bool cond:15 = x10_1.d != 0x17
bool cond:16 = x10_1.d != 0x17
int32_t var_70
char* var_68
int32_t var_38
char* var_30
char const* const entry_x1
int32_t entry_x2
uint64_t x11_1
uint64_t x12_2
char const* const entry_x24
int128_t entry_v0

if (x10_1.d u<= 0x17)
label_104fb18:
    x11_1 = &data_104fb00
label_104fb1c:
    x12_2 = zx.q(jump_table_869433[x10_1])
label_104fb20:
    x11_1 += x12_2 << 2
    
    while (true)
        UI2ParserState* var_60
        int32_t* entry_x23
        uint64_t entry_x27
        int64_t entry_fp
        
        switch (x11_1)
            case &data_104fb00
                x8 = &x8[1]
            label_104fb04:
                *(x20_1 + 8) = x8
            label_104fb08:
                x10_1 = zx.q(*x8)
            label_104fb0c:
                x10_1 = zx.q(x10_1.d - 9)
            label_104fb10:
                cond:0 = x10_1.d u> 0x17
                cond:1 = x10_1.d == 0x17
                cond:2 = x10_1.d u<= 0x17
                cond:3 = x10_1.d u>= 0x17
                cond:4 = x10_1.d u<= 0x17
                cond:5 = x10_1.d u> 0x17
                cond:6 = x10_1.d u< 0x17
                cond:7 = x10_1.d u< 0x17
                cond:8 = x10_1.d u>= 0x17
                cond:9 = x10_1.d == 0x17
                cond:10 = x10_1.d u> 0x17
                cond:11 = x10_1.d u<= 0x17
                cond:12 = x10_1.d s<= 0x17
                cond:13 = x10_1.d u>= 0x17
                cond:14 = x10_1.d u< 0x17
                cond:15 = x10_1.d != 0x17
                cond:16 = x10_1.d != 0x17
            label_104fb14:
                
                if (cond:0)
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
                goto label_104fb18
            case 0x104fb1c
                goto label_104fb1c
            case 0x104fb20
                goto label_104fb20
            case 0x104fb24
                continue
            case 0x104fb28
                x10_1 = x8
            label_104fb2c:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104fb30:
                x12_2 = zx.q(*(x20_1 + 0x18))
            label_104fb34:
                cond:1 = x11_1.d == 0xd
            label_104fb4c:
                
                if (not(cond:1))
                    goto label_104fb50
                
                x8 = x10_1
            label_104fb50:
                x11_1 = zx.q(x12_2.d + 1)
            label_104fb54:
                x8 = &x8[1]
            label_104fb58:
                *(x20_1 + 8) = x8
                *(x20_1 + 0x10) = x8
            label_104fb5c:
                *(x20_1 + 0x18) = x11_1.d
            label_104fb60:
                x10_1 = zx.q(*x8)
            label_104fb64:
                x10_1 = zx.q(x10_1.d - 9)
            label_104fb68:
                cond:0 = x10_1.d u> 0x17
                cond:1 = x10_1.d == 0x17
                cond:2 = x10_1.d u<= 0x17
                cond:3 = x10_1.d u>= 0x17
                cond:4 = x10_1.d u<= 0x17
                cond:5 = x10_1.d u> 0x17
                cond:6 = x10_1.d u< 0x17
                cond:7 = x10_1.d u< 0x17
                cond:8 = x10_1.d u>= 0x17
                cond:9 = x10_1.d == 0x17
                cond:10 = x10_1.d u> 0x17
                cond:11 = x10_1.d u<= 0x17
                cond:12 = x10_1.d s<= 0x17
                cond:13 = x10_1.d u>= 0x17
                cond:14 = x10_1.d u< 0x17
                cond:15 = x10_1.d != 0x17
                cond:16 = x10_1.d != 0x17
            label_104fb6c:
                
                if (cond:2)
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
                x10_1 = x8
            label_104fb40:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104fb44:
                x12_2 = zx.q(*(x20_1 + 0x18))
            label_104fb48:
                cond:1 = x11_1.d == 0xa
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
            case 0x104fb70
                goto label_104fb74
            case 0x104fb78
                goto label_104fb78
            case 0x104fb7c
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
                goto label_104fb90
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
                goto label_104fbd0
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
                goto label_104fbf8
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
                goto label_104fc1c
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
                goto label_104fc4c
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
            label_104fc94:
                x10_1 = x8
            label_104fc98:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104fc9c:
                x12_2 = zx.q(*(x20_1 + 0x18))
            label_104fca0:
                cond:9 = x11_1.d == 0xa
            label_104fca4:
                
                if (cond:9)
                    x8 = x10_1
                
                goto label_104fca8
            case 0x104fc98
                goto label_104fc98
            case 0x104fc9c
                goto label_104fc9c
            case 0x104fca0
                goto label_104fca0
            case 0x104fca8
            label_104fca8:
                x11_1 = zx.q(x12_2.d + 1)
            label_104fcac:
                x8 = &x8[1]
            label_104fcb0:
                *(x20_1 + 8) = x8
                *(x20_1 + 0x10) = x8
            label_104fcb4:
                *(x20_1 + 0x18) = x11_1.d
            label_104fcb8:
                x10_1 = zx.q(*x8)
            label_104fcbc:
                x10_1 = zx.q(x10_1.d - 9)
            label_104fcc0:
                cond:5 = x10_1.d u> 0x17
                cond:6 = x10_1.d u< 0x17
                cond:7 = x10_1.d u< 0x17
                cond:8 = x10_1.d u>= 0x17
                cond:9 = x10_1.d == 0x17
                cond:10 = x10_1.d u> 0x17
                cond:11 = x10_1.d u<= 0x17
                cond:12 = x10_1.d s<= 0x17
                cond:13 = x10_1.d u>= 0x17
                cond:14 = x10_1.d u< 0x17
                cond:15 = x10_1.d != 0x17
                cond:16 = x10_1.d != 0x17
            label_104fcc4:
                
                if (cond:10)
                    goto label_104fbac
                
                goto label_104fcc8
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
                goto label_104fcc8
            case 0x104fccc
                goto label_104fccc
            case 0x104fcd0
                goto label_104fcd0
            case 0x104fcd4
                goto label_104fcd4
            case 0x104fcd8
            label_104fcd8:
                x8 = &x8[1]
            label_104fcdc:
                *(x20_1 + 8) = x8
            label_104fce0:
                x10_1 = zx.q(*x8)
            label_104fce4:
                x10_1 = zx.q(x10_1.d - 9)
            label_104fce8:
                cond:5 = x10_1.d u> 0x17
                cond:6 = x10_1.d u< 0x17
                cond:7 = x10_1.d u< 0x17
                cond:8 = x10_1.d u>= 0x17
                cond:9 = x10_1.d == 0x17
                cond:10 = x10_1.d u> 0x17
                cond:11 = x10_1.d u<= 0x17
                cond:12 = x10_1.d s<= 0x17
                cond:13 = x10_1.d u>= 0x17
                cond:14 = x10_1.d u< 0x17
                cond:15 = x10_1.d != 0x17
                cond:16 = x10_1.d != 0x17
            label_104fcec:
                
                if (cond:11)
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
                goto label_104fbac
            case 0x104fcf4
            label_104fcf4:
                x10_1 = x8
            label_104fcf8:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_104fcfc:
                x12_2 = zx.q(*(x20_1 + 0x18))
            label_104fd00:
                cond:9 = x11_1.d == 0xd
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
                goto label_104fd08
            case 0x104fd0c
                goto label_104fd0c
            case 0x104fd10
                goto label_104fd14
            case 0x104fd18
                goto label_104fd18
            case 0x104fd1c
                goto label_104fd6c
            case 0x104fd20
                goto label_104fd20
            case 0x104fd24
                goto label_104fd28
            case 0x104fd2c
                goto label_104fd30
            case 0x104fd34
                goto label_104fd34
            case 0x104fd38
                goto label_104fd60
            case 0x104fd3c
                goto label_104fd3c
            case 0x104fd40
                goto label_104fd40
            case 0x104fd44
                goto label_104fd44
            case 0x104fd48
                goto label_104fd4c
            case 0x104fd70
                return 
            case 0x104fd80
            label_104fd80:
                x19_1 = arg1
            label_104fd88:
                XString::~XString()
            label_104fda0:
                XString::~XString()
            label_104fdb8:
                XString::~XString()
            label_104fdbc:
                arg1 = x19_1
            label_104fdc0:
                sub_1101e04(arg1)
                noreturn
            case 0x104fd84
                goto label_104fd88
            case 0x104fd8c
                goto label_104fda0
            case 0x104fd90
            label_104fd94:
                x19_1 = arg1
                goto label_104fda0
            case 0x104fda4
                goto label_104fdb8
            case 0x104fda8
            label_104fdac:
                x19_1 = arg1
                goto label_104fdb8
            case 0x104fdbc
                goto label_104fdbc
            case 0x104fdc0
                goto label_104fdc0
            case Parse_LeftBracket
                return Parse_LeftBracket(arg1) __tailcall
            case 0x104fdc8
            label_104fdc8:
            label_104fdcc:
                return UI2Parse_Exact(arg1, &entry_x1[0x29]) __tailcall
            case 0x104fdcc
            label_104fdcc_1:
                return UI2Parse_Exact(arg1, entry_x1) __tailcall
            case Parse_RightBracket
                return Parse_RightBracket(arg1) __tailcall
            case 0x104fdd4
            label_104fdd4:
            label_104fba8:
                return UI2Parse_Exact(arg1, &entry_x1[0x566]) __tailcall
            case 0x104fdd8
            label_104fdd8:
                return UI2Parse_Exact(arg1, entry_x1) __tailcall
            case Parse_Sequence
                return Parse_Sequence(arg1, entry_x1, entry_x2) __tailcall
            case 0x104fde0
            label_104fde0:
                int64_t var_40 = entry_fp
                var_38.q = lr
            label_104fde4:
                char* x28
                var_30 = x28
                uint64_t var_28 = entry_x27
            label_104fde8:
                void* x26
                var_20 = x26
                int32_t* x25
                var_18 = x25
            label_104fdec:
                var_10 = entry_x24
                var_8 = entry_x23
            label_104fdf0:
                void* x22
                void* arg_0 = x22
                int32_t* arg_8 = entry_x21
            label_104fdf4:
                UI2ParserState& arg_10 = x20_1
                int64_t arg_18 = x19_1
            label_104fdfc:
                entry_v0.q = 0
                entry_v0:8.q = 0
            label_104fe00:
                x20_1 = x8
            label_104fe04:
                arg1 = &x8[0x18]
            label_104fe08:
                entry_x27 = zx.q(entry_x2)
            label_104fe0c:
                entry_x24 = entry_x1
            label_104fe10:
                entry_x23 = x8
            label_104fe14:
                *(x8 + 0x60) = entry_v0
                *(x8 + 0x70) = entry_v0
            label_104fe18:
                *(x8 + 0x40) = entry_v0
                *(x8 + 0x50) = entry_v0
            label_104fe1c:
                *(x8 + 0x10) = entry_v0
                *(x8 + 0x20) = entry_v0
            label_104fe20:
                *x8 = entry_v0
            label_104fe24:
                *(x20_1 + 0x30) = entry_v0
            label_104fe28:
                var_60 = arg1
            label_104fe2c:
                XString::XString()
            label_104fe34:
                XString::XString()
            label_104fe38:
                arg1 = &entry_x23[0x12]
            label_104fe40:
                var_68 = arg1
            label_104fe44:
                XString::XString()
            label_104fe54:
                XString::XString()
            label_104fe64:
                XString::XString()
            label_104fe68:
                cond:12 = entry_x27.d s<= 0
            label_104fe6c:
                
                if (cond:12)
                    return 
                
                goto label_104fe70
            case 0x104fde4
                goto label_104fde4
            case 0x104fde8
                goto label_104fde8
            case 0x104fdec
                goto label_104fdec
            case 0x104fdf0
                goto label_104fdf0
            case 0x104fdf4
                goto label_104fdf4
            case 0x104fdf8
                goto label_104fdfc
            case 0x104fe00
                goto label_104fe00
            case 0x104fe04
                goto label_104fe04
            case 0x104fe08
                goto label_104fe08
            case 0x104fe0c
                goto label_104fe0c
            case 0x104fe10
                goto label_104fe10
            case 0x104fe14
                goto label_104fe14
            case 0x104fe18
                goto label_104fe18
            case 0x104fe1c
                goto label_104fe1c
            case 0x104fe20
                goto label_104fe20
            case 0x104fe24
                goto label_104fe24
            case 0x104fe28
                goto label_104fe28
            case 0x104fe2c
                goto label_104fe2c
            case 0x104fe30
                goto label_104fe34
            case 0x104fe38
                goto label_104fe38
            case 0x104fe3c
                goto label_104fe40
            case 0x104fe44
                goto label_104fe44
            case 0x104fe48
                goto label_104fe54
            case 0x104fe58
                goto label_104fe64
            case 0x104fe68
                goto label_104fe68
            case 0x104fe6c
                goto label_104fe6c
            case 0x104fe70
            label_104fe70:
                x8 = &entry_x23[2]
            label_104fe74:
                var_70.q = x8
            label_104fe7c:
                entry_fp = 0
            label_104fe80:
                entry_x21 = zx.q(entry_x27.d)
            label_104fe84:
                entry_x27 = &entry_x23[0xc]
            label_104fe8c:
                x19_1 = 1
                goto label_104fe90
            case 0x104fe74
                goto label_104fe74
            case 0x104fe78
                goto label_104fe7c
            case 0x104fe80
                goto label_104fe80
            case 0x104fe84
                goto label_104fe84
            case 0x104fe88
                goto label_104fe8c
            case 0x104fe90
                goto label_104fe90
            case 0x104fe94
                goto label_104fe9c
            case 0x104fea0
                goto label_104fea0
            case 0x104fea4
                goto label_104fea4
            case 0x104fea8
                goto label_104fea8
            case 0x104feac
                goto label_104feb0
            case 0x104feb4
                goto label_104feb8
            case 0x104febc
                goto label_104febc
            case 0x104fec0
                goto label_104fec0
            case 0x104fec4
                goto label_104fec4
            case 0x104fec8
                goto label_104fec8
            case 0x104fecc
                goto label_104fecc
            case 0x104fed0
                goto label_104fed0
            case 0x104fed4
                goto label_104fed4
            case 0x104fed8
                goto label_104fed8
            case 0x104fedc
                goto label_104fedc
            case 0x104fee0
            label_104fee0:
                
                while (true)
                    if (not(cond:15))
                        return 
                    
                label_104fe90:
                    x9 = *(entry_x24 + (entry_fp << 3))
                label_104fe9c:
                    x9()
                label_104fea0:
                    int128_t var_58
                    entry_v0 = var_58
                label_104fea4:
                    *(entry_x27 - 0x10) = entry_v0
                label_104fea8:
                    arg1 = entry_x27
                label_104feb0:
                    XString::operator=(arg1)
                label_104feb8:
                    arg1, entry_v0 = XString::~XString()
                label_104febc:
                    x8 = zx.q(*(entry_x27 - 0x10))
                label_104fec0:
                    x8 = zx.q(x8.d - 2)
                label_104fec4:
                    cond:13 = x8.d u>= 3
                label_104fec8:
                    
                    if (cond:13)
                        break
                    
                label_104fecc:
                    entry_fp += 1
                label_104fed0:
                    cond:14 = entry_fp u< entry_x21
                label_104fed4:
                    x19_1 = zx.q(cond:14 ? 1 : 0)
                label_104fed8:
                    cond:15 = entry_x21 != entry_fp
                label_104fedc:
                    entry_x27 += 0x18
                
                goto label_104fee8
            case 0x104fee4
                return 
            case 0x104fee8
            label_104fee8:
                x8 = 1
            label_104feec:
                *entry_x23 = x8.d
            label_104fef0:
                entry_v0 = *(entry_x27 - 0x10)
            label_104fef4:
                x8 = var_70.q
            label_104fef8:
                *x8 = entry_v0
            label_104fefc:
                arg1 = var_60
            label_104ff04:
                XString::operator=(arg1)
                break
            case 0x104feec
                goto label_104feec
            case 0x104fef0
                goto label_104fef0
            case 0x104fef4
                goto label_104fef4
            case 0x104fef8
                goto label_104fef8
            case 0x104fefc
                goto label_104fefc
    
    goto label_104ff08

label_104fb74:
arg1 = x20_1
label_104fb78:
entry_x21 = &var_38
label_104fb7c:
arg1, entry_x1, entry_x2, lr, entry_v0 = Parse_Identifier(arg1)
label_104fb80:
x8 = zx.q(var_38)
label_104fb84:
x8 = zx.q(x8.d - 2)
label_104fb88:
cond:3 = x8.d u>= 3
label_104fb8c:

if (cond:3)
label_104fd08:
    entry_v0 = var_38.o
label_104fd0c:
    arg1 = x19_1 + 0x10
label_104fd14:
    *x19_1 = entry_v0
label_104fd18:
    XString::XString(arg1)
label_104fd6c:
    XString::~XString()
    return 

label_104fb90:
x8 = *(x20_1 + 8)
label_104fb94:
x9 = "HHHH0"
label_104fb98:
x9 = &x9[0x44b]
label_104fb9c:
x10_1 = zx.q(*x8)
label_104fba0:
x10_1 = zx.q(x10_1.d - 9)
label_104fba4:
cond:4 = x10_1.d u<= 0x17
cond:5 = x10_1.d u> 0x17
cond:6 = x10_1.d u< 0x17
cond:7 = x10_1.d u< 0x17
cond:8 = x10_1.d u>= 0x17
cond:9 = x10_1.d == 0x17
cond:10 = x10_1.d u> 0x17
cond:11 = x10_1.d u<= 0x17
cond:12 = x10_1.d s<= 0x17
cond:13 = x10_1.d u>= 0x17
cond:14 = x10_1.d u< 0x17
cond:15 = x10_1.d != 0x17
cond:16 = x10_1.d != 0x17
label_104fba8:

if (not(cond:4))
label_104fbac:
    entry_x1 = "in supported groups list"
label_104fbb0:
    entry_x1 = &entry_x1[0xdb9]
label_104fbb8:
    arg1 = x20_1
label_104fbbc:
    UI2Parse_Exact(arg1, entry_x1)
label_104fbc0:
    int32_t var_50
    x8 = zx.q(var_50)
label_104fbc4:
    x8 = zx.q(x8.d - 2)
label_104fbc8:
    cond:5 = x8.d u> 2
label_104fbcc:
    
    if (cond:5)
    label_104fd20:
        entry_v0 = var_38.o
    label_104fd28:
        arg1 = x19_1 + 0x10
    label_104fd30:
        *x19_1 = entry_v0
    label_104fd34:
        XString::XString(arg1)
    else
    label_104fbd0:
        entry_x21 = &var_70
    label_104fbd8:
        arg1 = x20_1
    label_104fbdc:
        Parse_Tuple(arg1)
    label_104fbe0:
        x8 = zx.q(var_70)
    label_104fbe4:
        entry_x21 = &entry_x21[4]
    label_104fbe8:
        x9 = zx.q(x8.d - 1)
    label_104fbec:
        cond:6 = x9.d u< 4
    label_104fbf0:
        
        if (not(cond:6))
        label_104fbf8:
            XString::~XString()
        label_104fc00:
            arg1 = x20_1
        label_104fc04:
            Parse_Literal(arg1)
        label_104fc08:
            x8 = zx.q(var_70)
        label_104fc0c:
            x9 = zx.q(x8.d - 1)
        label_104fc10:
            cond:7 = x9.d u< 4
        label_104fc14:
            
            if (not(cond:7))
            label_104fc1c:
                XString::~XString()
            label_104fc20:
                x8 = &data_24b6000
            label_104fc24:
                x8 = &x8[0x268]
            label_104fc28:
                entry_v0 = *x8
            label_104fc2c:
                var_70.o = entry_v0
            label_104fc34:
                arg1 = entry_x21
            label_104fc38:
                XString::XString(arg1)
            label_104fc3c:
                x8 = zx.q(var_70)
        
    label_104fc40:
        x8 = zx.q(x8.d - 2)
    label_104fc44:
        cond:8 = x8.d u>= 3
    label_104fc48:
        
        if (cond:8)
        label_104fd3c:
            entry_v0 = var_70.o
        label_104fd40:
            arg1 = x19_1 + 0x10
        label_104fd44:
            *x19_1 = entry_v0
        label_104fd4c:
            XString::XString(arg1)
        else
        label_104fc4c:
            x8 = *x20_1
        label_104fc50:
            x10_1 = 0x38
        label_104fc54:
            x11_1 = 0xb
        label_104fc5c:
            x9 = sx.q(*(x8 + 0x428))
        label_104fc60:
            x12_2 = zx.q(x9.d + 1)
        label_104fc64:
            x20_1 = x8 + x9 * x10_1
        label_104fc68:
            *(x8 + 0x428) = x12_2.d
        label_104fc6c:
            x20_1 += 0xa8
            *x20_1 = x11_1.d
        label_104fc70:
            x8 = var_30
        label_104fc74:
            *(x20_1 + 0x18) = x8
        label_104fc78:
            x8 = var_68
        label_104fc7c:
            *(x20_1 + 0x20) = x8
        label_104fc80:
            XString::XString()
        label_104fc84:
            x8 = 3
        label_104fc88:
            *x19_1 = x8.d
        label_104fc8c:
            *(x19_1 + 8) = x20_1
        
    label_104fd54:
        XString::~XString()
    
label_104fd60:
    XString::~XString()
    goto label_104fd6c

label_104fcc8:
x11_1 = &data_104fbac
label_104fccc:
x12_2 = zx.q(x9[x10_1])
label_104fcd0:
x11_1 += x12_2 << 2
label_104fcd4:

while (true)
    switch (x11_1)
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
            goto label_104fbd0
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
            goto label_104fbf8
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
            goto label_104fc1c
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
            goto label_104fc4c
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
            goto label_104fc94
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
            goto label_104fcc8
        case 0x104fccc
            goto label_104fccc
        case 0x104fcd0
            goto label_104fcd0
        case 0x104fcd4
            continue
        case 0x104fcd8
            goto label_104fcd8
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
            goto label_104fbac
        case 0x104fcf4
            goto label_104fcf4
        case 0x104fcf8
            goto label_104fcf8
        case 0x104fcfc
            goto label_104fcfc
        case 0x104fd00
            goto label_104fd00
        case 0x104fd04
            goto label_104fca4
        case 0x104fd08
            goto label_104fd08
        case 0x104fd0c
            goto label_104fd0c
        case 0x104fd10
            goto label_104fd14
        case 0x104fd18
            goto label_104fd18
        case 0x104fd1c
            goto label_104fd6c
        case 0x104fd20
            goto label_104fd20
        case 0x104fd24
            goto label_104fd28
        case 0x104fd2c
            goto label_104fd30
        case 0x104fd34
            goto label_104fd34
        case 0x104fd38
            goto label_104fd60
        case 0x104fd3c
            goto label_104fd3c
        case 0x104fd40
            goto label_104fd40
        case 0x104fd44
            goto label_104fd44
        case 0x104fd48
            goto label_104fd4c
        case 0x104fd70
            return 
        case 0x104fd80
            goto label_104fd80
        case 0x104fd84
            goto label_104fd88
        case 0x104fd8c
            goto label_104fda0
        case 0x104fd90
            goto label_104fd94
        case 0x104fda4
            goto label_104fdb8
        case 0x104fda8
            goto label_104fdac
        case 0x104fdbc
            goto label_104fdbc
        case 0x104fdc0
            goto label_104fdc0
        case Parse_LeftBracket
            return Parse_LeftBracket(arg1) __tailcall
        case 0x104fdc8
            goto label_104fdc8
        case 0x104fdcc
            goto label_104fdcc_1
        case Parse_RightBracket
            return Parse_RightBracket(arg1) __tailcall
        case 0x104fdd4
            goto label_104fdd4
        case 0x104fdd8
            goto label_104fdd8
        case Parse_Sequence
            return Parse_Sequence(arg1, entry_x1, entry_x2) __tailcall
        case 0x104fde0
            goto label_104fde0
        case 0x104fde4
            goto label_104fde4
        case 0x104fde8
            goto label_104fde8
        case 0x104fdec
            goto label_104fdec
        case 0x104fdf0
            goto label_104fdf0
        case 0x104fdf4
            goto label_104fdf4
        case 0x104fdf8
            goto label_104fdfc
        case 0x104fe00
            goto label_104fe00
        case 0x104fe04
            goto label_104fe04
        case 0x104fe08
            goto label_104fe08
        case 0x104fe0c
            goto label_104fe0c
        case 0x104fe10
            goto label_104fe10
        case 0x104fe14
            goto label_104fe14
        case 0x104fe18
            goto label_104fe18
        case 0x104fe1c
            goto label_104fe1c
        case 0x104fe20
            goto label_104fe20
        case 0x104fe24
            goto label_104fe24
        case 0x104fe28
            goto label_104fe28
        case 0x104fe2c
            goto label_104fe2c
        case 0x104fe30
            goto label_104fe34
        case 0x104fe38
            goto label_104fe38
        case 0x104fe3c
            goto label_104fe40
        case 0x104fe44
            goto label_104fe44
        case 0x104fe48
            goto label_104fe54
        case 0x104fe58
            goto label_104fe64
        case 0x104fe68
            goto label_104fe68
        case 0x104fe6c
            goto label_104fe6c
        case 0x104fe70
            goto label_104fe70
        case 0x104fe74
            goto label_104fe74
        case 0x104fe78
            goto label_104fe7c
        case 0x104fe80
            goto label_104fe80
        case 0x104fe84
            goto label_104fe84
        case 0x104fe88
            goto label_104fe8c
        case 0x104fe90
            goto label_104fe90
        case 0x104fe94
            goto label_104fe9c
        case 0x104fea0
            goto label_104fea0
        case 0x104fea4
            goto label_104fea4
        case 0x104fea8
            goto label_104fea8
        case 0x104feac
            goto label_104feb0
        case 0x104feb4
            goto label_104feb8
        case 0x104febc
            goto label_104febc
        case 0x104fec0
            goto label_104fec0
        case 0x104fec4
            goto label_104fec4
        case 0x104fec8
            goto label_104fec8
        case 0x104fecc
            goto label_104fecc
        case 0x104fed0
            goto label_104fed0
        case 0x104fed4
            goto label_104fed4
        case 0x104fed8
            goto label_104fed8
        case 0x104fedc
            goto label_104fedc
        case 0x104fee0
            goto label_104fee0
        case 0x104fee4
            return 
        case 0x104fee8
            goto label_104fee8
        case 0x104feec
            goto label_104feec
        case 0x104fef0
            goto label_104fef0
        case 0x104fef4
            goto label_104fef4
        case 0x104fef8
            goto label_104fef8
        case 0x104fefc
            goto label_104fefc
        case 0x104ff00
            goto label_104ff04
        case 0x104ff08
            break
        case 0x104ff0c
            goto label_104ff10
        case 0x104ff14
            goto label_104ff18
        case 0x104ff1c
            goto label_104ff20
        case 0x104ff24
            goto label_104ff28
        case 0x104ff2c
            goto label_104ff30
        case 0x104ff54
            entry_x24 = arg1
        label_104ff9c:
            XString::~XString()
        label_104ffa4:
            XString::~XString()
        label_104ffac:
            XString::~XString()
            XString::~XString()
            goto label_104ffbc
        case 0x104ff58
            entry_x24 = arg1
        label_104ffbc:
            XString::~XString()
            sub_1101e04(entry_x24)
            noreturn
        case 0x104ff60
            x8 = x19_1 * 3
        label_104ff64:
            entry_x24 = arg1
            x19_1 = x8 << 3
            goto label_104ff74
        case 0x104ff64
            goto label_104ff64
        case 0x104ff68
            x19_1 = x8 << 3
            goto label_104ff74
        case 0x104ff70
            goto label_104ff74
        case 0x104ff78
            goto label_104ff78
        case 0x104ff7c
            int64_t temp0_1
            
            for (; cond:16; cond:16 = temp0_1 != 0x18)
            label_104ff74:
                XString::~XString()
            label_104ff78:
                temp0_1 = x19_1
                x19_1 -= 0x18
            
            goto label_104ffbc
        case 0x104ff80
            goto label_104ffbc
        case 0x104ff88
            goto label_104ff9c
        case 0x104ff8c
            entry_x24 = arg1
        label_104ff94:
            XString::~XString()
            goto label_104ff9c
        case 0x104ff90
            goto label_104ff94
        case 0x104ffa0
            goto label_104ffa4
        case 0x104ffa8
            goto label_104ffac

label_104ff08:

if ((x19_1.d & 1) != 0)
    return 

label_104ff10:
XString::~XString()
label_104ff18:
XString::~XString()
label_104ff20:
XString::~XString()
label_104ff28:
XString::~XString()
label_104ff30:
XString::~XString()
