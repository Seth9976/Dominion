// 函数: _Z24Parse_VariableExpressionR14UI2ParserState
// 地址: 0x104ffc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x20
int32_t* var_10 = entry_x20
int32_t* entry_x8
int32_t* x19 = entry_x8
char* x8 = *(arg1 + 8)
uint8_t* const x9 = &jump_table_869463
uint64_t x10_1 = zx.q(zx.d(*x8) - 9)
bool cond:0 = x10_1.d u> 0x17
bool cond:1 = x10_1.d == 0x17
bool cond:2 = x10_1.d u<= 0x17
bool cond:3 = x10_1.d != 0x17
bool cond:4 = x10_1.d u< 0x17
bool cond:5 = x10_1.d u<= 0x17
bool cond:6 = x10_1.d u< 0x17
bool cond:7 = x10_1.d u>= 0x17
bool cond:8 = x10_1.d u>= 0x17
bool cond:9 = x10_1.d == 0x17
int128_t var_98
int128_t var_68
int128_t entry_v0
char const (** const entry_s2)[0x8]
size_t entry_n

if (x10_1.d u<= 0x17)
label_1050010:
    void* const x11_1 = &data_104fff8
label_1050014:
    uint64_t x12_2 = zx.q(jump_table_869463[x10_1])
label_1050018:
    x11_1 += x12_2 << 2
    
    while (true)
        size_t entry_entry_n_1
        int32_t* var_80
        int32_t* var_78
        size_t entry_entry_n
        UI2ParserState* entry_x22
        int32_t* entry_x23
        
        switch (x11_1)
            case &data_104fff8
                x8 = &x8[1]
            label_104fffc:
                *(arg1 + 8) = x8
            label_1050000:
                x10_1 = zx.q(*x8)
            label_1050004:
                x10_1 = zx.q(x10_1.d - 9)
            label_1050008:
                cond:0 = x10_1.d u> 0x17
                cond:1 = x10_1.d == 0x17
                cond:2 = x10_1.d u<= 0x17
                cond:3 = x10_1.d != 0x17
                cond:4 = x10_1.d u< 0x17
                cond:5 = x10_1.d u<= 0x17
                cond:6 = x10_1.d u< 0x17
                cond:7 = x10_1.d u>= 0x17
                cond:8 = x10_1.d u>= 0x17
                cond:9 = x10_1.d == 0x17
            label_105000c:
                
                if (cond:0)
                    goto label_1050068
                
                goto label_1050010
            case 0x104fffc
                goto label_104fffc
            case 0x1050000
                goto label_1050000
            case 0x1050004
                goto label_1050004
            case 0x1050008
                goto label_1050008
            case 0x105000c
                goto label_105000c
            case 0x1050010
                goto label_1050010
            case 0x1050014
                goto label_1050014
            case 0x1050018
                goto label_1050018
            case 0x105001c
                continue
            case 0x1050020
                x10_1 = x8
            label_1050024:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_1050028:
                x12_2 = zx.q(*(arg1 + 0x18))
            label_105002c:
                cond:1 = x11_1.d == 0xd
            label_1050044:
                
                if (not(cond:1))
                    goto label_1050048
                
                x8 = x10_1
            label_1050048:
                x11_1 = zx.q(x12_2.d + 1)
            label_105004c:
                x8 = &x8[1]
            label_1050050:
                *(arg1 + 8) = x8
                *(arg1 + 0x10) = x8
            label_1050054:
                *(arg1 + 0x18) = x11_1.d
            label_1050058:
                x10_1 = zx.q(*x8)
            label_105005c:
                x10_1 = zx.q(x10_1.d - 9)
            label_1050060:
                cond:0 = x10_1.d u> 0x17
                cond:1 = x10_1.d == 0x17
                cond:2 = x10_1.d u<= 0x17
                cond:3 = x10_1.d != 0x17
                cond:4 = x10_1.d u< 0x17
                cond:5 = x10_1.d u<= 0x17
                cond:6 = x10_1.d u< 0x17
                cond:7 = x10_1.d u>= 0x17
                cond:8 = x10_1.d u>= 0x17
                cond:9 = x10_1.d == 0x17
            label_1050064:
                
                if (cond:2)
                    goto label_1050010
                
                goto label_1050068
            case 0x1050024
                goto label_1050024
            case 0x1050028
                goto label_1050028
            case 0x105002c
                goto label_105002c
            case 0x1050030
                goto label_1050044
            case 0x1050034
                x10_1 = x8
            label_1050038:
                x10_1 += 1
                x11_1 = zx.q(*x10_1)
            label_105003c:
                x12_2 = zx.q(*(arg1 + 0x18))
            label_1050040:
                cond:1 = x11_1.d == 0xa
                goto label_1050044
            case 0x1050038
                goto label_1050038
            case 0x105003c
                goto label_105003c
            case 0x1050040
                goto label_1050040
            case 0x1050048
                goto label_1050048
            case 0x105004c
                goto label_105004c
            case 0x1050050
                goto label_1050050
            case 0x1050054
                goto label_1050054
            case 0x1050058
                goto label_1050058
            case 0x105005c
                goto label_105005c
            case 0x1050060
                goto label_1050060
            case 0x1050064
                goto label_1050064
            case 0x1050068
                goto label_1050068
            case 0x105006c
                goto label_105006c
            case 0x1050070
                goto label_1050074
            case 0x1050078
                goto label_105007c
            case 0x1050080
                goto label_1050080
            case 0x1050084
                goto label_1050084
            case 0x1050088
                break
            case 0x105008c
                goto label_105008c
            case 0x1050090
                goto label_1050090
            case 0x1050094
                goto label_1050098
            case 0x105009c
                goto label_105009c
            case 0x10500a0
                goto label_10500c0
            case 0x10500a4
                goto label_10500a4
            case 0x10500a8
                goto label_10500a8
            case 0x10500ac
                goto label_10500b0
            case 0x10500b4
                goto label_10500b4
            case 0x10500c4
                goto label_10500c8
            case 0x10500cc
                goto label_10500d0
            case 0x10500d4
                goto label_10500d8
            case 0x10500dc
                goto label_10500e0
            case 0x10500e4
                return 
            case 0x10500f4
                x19 = arg1
            label_1050100:
                XString::~XString()
            label_1050108:
                XString::~XString()
            label_1050110:
                XString::~XString()
            label_1050118:
                XString::~XString()
            label_1050120:
                XString::~XString()
            label_1050124:
                sub_1101e04(x19)
                noreturn
            case 0x10500fc
                goto label_1050100
            case 0x1050104
                goto label_1050108
            case 0x105010c
                goto label_1050110
            case 0x1050114
                goto label_1050118
            case 0x105011c
                goto label_1050120
            case 0x1050124
                goto label_1050124
            case 0x1050128
                sub_1101e04(arg1)
                noreturn
            case Parse_StringExpression
                return Parse_StringExpression(arg1) __tailcall
            case 0x1050130
                var_98:8.q = entry_x22
                entry_entry_n_1 = entry_entry_n
            label_1050134:
                var_80 = entry_x20
                var_78 = x19
            label_1050138:
                entry_x20 = *(arg1 + 8)
            label_105013c:
                entry_entry_n = arg1
            label_1050140:
                entry_s2 = 0x5b
            label_1050144:
                x19 = x8
            label_1050148:
                arg1 = entry_x20
            label_105014c:
                arg1, entry_v0 = strchr(arg1, entry_s2)
            label_1050150:
                
                if (arg1 == 0)
                    goto label_10501a4
                
                goto label_1050154
            case 0x1050134
                goto label_1050134
            case 0x1050138
                goto label_1050138
            case 0x105013c
                goto label_105013c
            case 0x1050140
                goto label_1050140
            case 0x1050144
                goto label_1050144
            case 0x1050148
                goto label_1050148
            case 0x105014c
                goto label_105014c
            case 0x1050150
                goto label_1050150
            case 0x1050154
            label_1050154:
                entry_entry_n = *entry_entry_n
            label_1050158:
                arg1 = entry_x20
            label_105015c:
                arg1 = strlen(arg1)
            label_1050160:
                x8 = sx.q(*(entry_entry_n + 0x428))
            label_1050164:
                x9 = 0x38
            label_1050168:
                x10_1 = 6
            label_105016c:
                x11_1 = zx.q(x8.d + 1)
            label_1050170:
                entry_x22 = entry_entry_n + x8 * x9
            label_1050174:
                *(entry_entry_n + 0x428) = x11_1.d
            label_1050178:
                entry_x22 += 0xa8
                *entry_x22 = x10_1.d
            label_105017c:
                *(entry_x22 + 8) = entry_x20
                *(entry_x22 + 0x10) = arg1
            label_1050184:
                XString::XString()
            label_1050188:
                x8 = 3
            label_105018c:
                *x19 = x8.d
                *(x19 + 8) = entry_x22
                return 
            case 0x1050158
                goto label_1050158
            case 0x105015c
                goto label_105015c
            case 0x1050160
                goto label_1050160
            case 0x1050164
                goto label_1050164
            case 0x1050168
                goto label_1050168
            case 0x105016c
                goto label_105016c
            case 0x1050170
                goto label_1050170
            case 0x1050174
                goto label_1050174
            case 0x1050178
                goto label_1050178
            case 0x105017c
                goto label_105017c
            case 0x1050180
                goto label_1050184
            case 0x1050188
                goto label_1050188
            case 0x105018c
                goto label_105018c
            case 0x1050190
                *(x19 + 8) = entry_x22
                return 
            case 0x1050194
                return 
            case 0x10501a4
            label_10501a4:
                x8 = &data_24b6000
            label_10501a8:
                x8 = &x8[0x268]
            label_10501ac:
                entry_v0 = *x8
            label_10501b0:
                *x19 = entry_v0
                return XString::XString(&x19[4]) __tailcall
            case 0x10501a8
                goto label_10501a8
            case 0x10501ac
                goto label_10501ac
            case 0x10501b0
                goto label_10501b0
            case 0x10501b4
                *x19 = entry_v0
                return XString::XString(arg1) __tailcall
            case 0x10501c0
                return XString::XString(arg1) __tailcall
            case Parse_SingleExpression
                return Parse_SingleExpression(arg1) __tailcall
            case 0x10501d0
                var_98:8.q = entry_x22
                entry_entry_n_1 = entry_entry_n
            label_10501d4:
                var_80 = entry_x20
                var_78 = x19
            label_10501d8:
                entry_entry_n = arg1
            label_10501dc:
                x19 = x8
            label_10501e0:
                Parse_VariableExpression(arg1)
            label_10501e4:
                entry_x20 = x19
            label_10501e8:
                x8 = zx.q(*entry_x20)
                entry_x20 = &entry_x20[4]
            label_10501ec:
                x8 = zx.q(x8.d - 1)
            label_10501f0:
                cond:4 = x8.d u< 4
            label_10501f4:
                
                if (cond:4)
                    return 
                
                goto label_10501fc
            case 0x10501d4
                goto label_10501d4
            case 0x10501d8
                goto label_10501d8
            case 0x10501dc
                goto label_10501dc
            case 0x10501e0
                goto label_10501e0
            case 0x10501e4
                goto label_10501e4
            case 0x10501e8
                goto label_10501e8
            case 0x10501ec
                goto label_10501ec
            case 0x10501f0
                goto label_10501f0
            case 0x10501f4
                goto label_10501f4
            case 0x10501f8
            label_10501fc:
                XString::~XString()
            label_1050204:
                arg1 = entry_entry_n
            label_1050208:
                Parse_Tuple(arg1)
            label_105020c:
                x8 = zx.q(*x19)
            label_1050210:
                x8 = zx.q(x8.d - 1)
            label_1050214:
                cond:5 = x8.d u<= 3
            label_1050218:
                
                if (cond:5)
                    return 
                
                goto label_1050220
            case 0x1050200
                goto label_1050204
            case 0x1050208
                goto label_1050208
            case 0x105020c
                goto label_105020c
            case 0x1050210
                goto label_1050210
            case 0x1050214
                goto label_1050214
            case 0x1050218
                goto label_1050218
            case 0x105021c
            label_1050220:
                XString::~XString()
            label_1050224:
                entry_x22 = *(entry_entry_n + 8)
            label_1050228:
                entry_s2 = 0x5b
            label_105022c:
                arg1 = entry_x22
            label_1050230:
                arg1, entry_v0 = strchr(arg1, entry_s2)
            label_1050234:
                
                if (arg1 == 0)
                    goto label_105027c
                
                goto label_1050238
            case 0x1050224
                goto label_1050224
            case 0x1050228
                goto label_1050228
            case 0x105022c
                goto label_105022c
            case 0x1050230
                goto label_1050230
            case 0x1050234
                goto label_1050234
            case 0x1050238
            label_1050238:
                entry_entry_n = *entry_entry_n
            label_105023c:
                arg1 = entry_x22
            label_1050240:
                arg1 = strlen(arg1)
            label_1050244:
                x8 = sx.q(*(entry_entry_n + 0x428))
            label_1050248:
                x9 = 0x38
            label_105024c:
                x10_1 = 6
            label_1050250:
                x11_1 = zx.q(x8.d + 1)
            label_1050254:
                entry_x23 = entry_entry_n + x8 * x9
            label_1050258:
                *(entry_entry_n + 0x428) = x11_1.d
            label_105025c:
                entry_x23 = &entry_x23[0x2a]
                *entry_x23 = x10_1.d
            label_1050260:
                *(entry_x23 + 8) = entry_x22
                *(entry_x23 + 0x10) = arg1
            label_1050268:
                XString::XString()
            label_105026c:
                x8 = 3
            label_1050270:
                *x19 = x8.d
                *(x19 + 8) = entry_x23
                return 
            case 0x105023c
                goto label_105023c
            case 0x1050240
                goto label_1050240
            case 0x1050244
                goto label_1050244
            case 0x1050248
                goto label_1050248
            case 0x105024c
                goto label_105024c
            case 0x1050250
                goto label_1050250
            case 0x1050254
                goto label_1050254
            case 0x1050258
                goto label_1050258
            case 0x105025c
                goto label_105025c
            case 0x1050260
                goto label_1050260
            case 0x1050264
                goto label_1050268
            case 0x105026c
                goto label_105026c
            case 0x1050270
                goto label_1050270
            case 0x1050274
                *(x19 + 8) = entry_x23
                return 
            case 0x1050278
                return 
            case 0x105027c
            label_105027c:
                entry_x22 = &data_24b6000
            label_1050280:
                entry_x22 += 0x268
            label_1050284:
                entry_v0 = *entry_x22
            label_105028c:
                arg1 = entry_x20
            label_1050290:
                *x19 = entry_v0
            label_1050294:
                XString::XString(arg1)
            label_1050298:
                x8 = zx.q(*x19)
            label_105029c:
                x8 = zx.q(x8.d - 1)
            label_10502a0:
                cond:6 = x8.d u< 4
            label_10502a4:
                
                if (cond:6)
                    return 
                
                goto label_10502ac
            case 0x1050280
                goto label_1050280
            case 0x1050284
                goto label_1050284
            case 0x1050288
                goto label_105028c
            case 0x1050290
                goto label_1050290
            case 0x1050294
                goto label_1050294
            case 0x1050298
                goto label_1050298
            case 0x105029c
                goto label_105029c
            case 0x10502a0
                goto label_10502a0
            case 0x10502a4
                goto label_10502a4
            case 0x10502a8
            label_10502ac:
                XString::~XString()
            label_10502b4:
                arg1 = entry_entry_n
            label_10502b8:
                Parse_CompleteLiteral(arg1)
            label_10502bc:
                x8 = zx.q(*x19)
            label_10502c0:
                x8 = zx.q(x8.d - 1)
            label_10502c4:
                cond:7 = x8.d u>= 4
            label_10502c8:
                
                if (cond:7)
                    goto label_10502e0
                
                return 
            case 0x10502b0
                goto label_10502b4
            case 0x10502b8
                goto label_10502b8
            case 0x10502bc
                goto label_10502bc
            case 0x10502c0
                goto label_10502c0
            case 0x10502c4
                goto label_10502c4
            case 0x10502c8
                goto label_10502c8
            case 0x10502dc
            label_10502e0:
                XString::~XString()
            label_10502e4:
                entry_v0 = *entry_x22
            label_10502ec:
                *x19 = entry_v0
                return XString::XString(entry_x20) __tailcall
            case 0x10502e4
                goto label_10502e4
            case 0x10502e8
                goto label_10502ec
            case 0x10502f0
                *x19 = entry_v0
                return XString::XString(arg1) __tailcall
            case 0x10502f8
                return XString::XString(arg1) __tailcall
            case UI2Parse_StyleExpression
                return UI2Parse_StyleExpression(arg1) __tailcall
            case 0x1050308
                UI2ParserState* var_70 = entry_x22
                var_68.q = entry_entry_n
            label_1050310:
                var_68:8.q = entry_x20
                int32_t* var_58 = x19
            label_1050314:
                x19 = x8
            label_105031c:
                entry_x20 = arg1
            label_1050324:
                Parse_Identifier(arg1)
            label_1050328:
                x8 = zx.q(var_98.d)
            label_105032c:
                x8 = zx.q(x8.d - 2)
            label_1050330:
                cond:8 = x8.d u>= 3
            label_1050334:
                
                if (cond:8)
                    goto label_105037c
                
                goto label_1050338
            case 0x1050310
                goto label_1050310
            case 0x1050314
                goto label_1050314
            case 0x1050318
                goto label_105031c
            case 0x1050320
                goto label_1050324
            case 0x1050328
                goto label_1050328
            case 0x105032c
                goto label_105032c
            case 0x1050330
                goto label_1050330
            case 0x1050334
                goto label_1050334
            case 0x1050338
            label_1050338:
                x8 = var_98:8.q
            label_105033c:
                entry_s2 = " supports 8, 12 or 20 rounds"
            label_1050340:
                entry_s2 += 0xb76
            label_1050344:
                entry_x22 = *(x8 + 8)
                entry_entry_n = *(x8 + 0x10)
            label_1050348:
                arg1 = entry_x22
            label_105034c:
                entry_n = entry_entry_n
            label_1050350:
                arg1 = strncasecmp(arg1, entry_s2, entry_n)
            label_1050354:
                
                if (arg1.d == 0)
                    goto label_1050394
                
                goto label_1050358
            case 0x105033c
                goto label_105033c
            case 0x1050340
                goto label_1050340
            case 0x1050344
                goto label_1050344
            case 0x1050348
                goto label_1050348
            case 0x105034c
                goto label_105034c
            case 0x1050350
                goto label_1050350
            case 0x1050354
                goto label_1050354
            case 0x1050358
            label_1050358:
                entry_s2 = " supports 8, 12 or 20 rounds"
            label_105035c:
                entry_s2 += 0xb7d
            label_1050360:
                arg1 = entry_x22
            label_1050364:
                entry_n = entry_entry_n
            label_1050368:
                arg1 = strncasecmp(arg1, entry_s2, entry_n)
            label_105036c:
                cond:9 = arg1.d == 0
            label_1050370:
                x8 = 0x18
            label_1050374:
                
                if (cond:9)
                    x8 = zx.q(x8.d)
                    goto label_1050398
                
                x8 = 1
                goto label_1050398
            case 0x105035c
                goto label_105035c
            case 0x1050360
                goto label_1050360
            case 0x1050364
                goto label_1050364
            case 0x1050368
                goto label_1050368
            case 0x105036c
                goto label_105036c
            case 0x1050370
                goto label_1050370
            case 0x1050374
                goto label_1050374
            case 0x1050378
                goto label_1050398
            case 0x105037c
            label_105037c:
                entry_v0 = var_98
            label_1050380:
                arg1 = &x19[4]
            label_1050388:
                *x19 = entry_v0
            label_105038c:
                XString::XString(arg1)
                XString::~XString()
                return 
            case 0x1050380
                goto label_1050380
            case 0x1050384
                goto label_1050388
            case 0x105038c
                goto label_105038c
            case 0x1050390
                XString::~XString()
                return 
            case 0x1050394
            label_1050394:
                x8 = 1
            label_1050398:
                x9 = *entry_x20
            label_105039c:
                x11_1 = 0x38
            label_10503a0:
                x12_2 = 0xc
            label_10503a8:
                x10_1 = sx.q(*(x9 + 0x428))
            label_10503ac:
                int32_t entry_x13 = x10_1.d + 1
            label_10503b0:
                entry_x20 = x9 + x10_1 * x11_1
            label_10503b4:
                *(x9 + 0x428) = entry_x13
            label_10503b8:
                entry_x20 = &entry_x20[0x2a]
                *entry_x20 = x12_2.d
            label_10503bc:
                entry_x20[2] = x8.d
            label_10503c0:
                XString::XString()
            label_10503c4:
                x8 = 3
            label_10503c8:
                *x19 = x8.d
            label_10503cc:
                *(x19 + 8) = entry_x20
                XString::~XString()
                return 
            case 0x105039c
                goto label_105039c
            case 0x10503a0
                goto label_10503a0
            case 0x10503a4
                goto label_10503a8
            case 0x10503ac
                goto label_10503ac
            case 0x10503b0
                goto label_10503b0
            case 0x10503b4
                goto label_10503b4
            case 0x10503b8
                goto label_10503b8
            case 0x10503bc
                goto label_10503bc
            case 0x10503c0
                goto label_10503c0
            case 0x10503c4
                goto label_10503c4
            case 0x10503c8
                goto label_10503c8
            case 0x10503cc
                goto label_10503cc
            case 0x10503dc
                return 
            case 0x10503f0
                XString::~XString()
                sub_1101e04(arg1)
                noreturn
else
label_1050068:
    entry_s2 = &data_1180000
label_105006c:
    entry_s2 = &entry_s2[0x1d6]
label_1050074:
    entry_n = 3
label_105007c:
    Parse_Sequence(arg1, entry_s2, entry_n.d)
label_1050080:
    int32_t var_a0
    x8 = zx.q(var_a0)
label_1050084:
    cond:3 = x8.d != 1

if (cond:3)
label_10500a4:
    entry_v0 = var_68
label_10500a8:
    arg1 = &x19[4]
label_10500b0:
    *x19 = entry_v0
label_10500b4:
    XString::XString(arg1)
else
label_105008c:
    entry_v0 = var_98
label_1050090:
    arg1 = &x19[4]
label_1050098:
    *x19 = entry_v0
label_105009c:
    XString::XString(arg1)

label_10500c0:
XString::~XString()
label_10500c8:
XString::~XString()
label_10500d0:
XString::~XString()
label_10500d8:
XString::~XString()
label_10500e0:
XString::~XString()
