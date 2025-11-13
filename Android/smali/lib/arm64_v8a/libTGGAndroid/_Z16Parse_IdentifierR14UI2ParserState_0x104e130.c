// 函数: _Z16Parse_IdentifierR14UI2ParserState
// 地址: 0x104e130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2ParserState* nptr_23
UI2ParserState& nptr_6 = nptr_23
int32_t* nptr_21
int32_t* nptr_8 = nptr_21
int64_t nptr_19
int64_t nptr_9 = nptr_19
char* nptr_26
char* nptr_25 = nptr_26
int64_t** x21
int64_t** var_18 = x21
UI2ParserState* nptr_17
UI2ParserState& nptr_10 = nptr_17
int32_t* nptr_16
int32_t* nptr_11 = nptr_16
char* nptr_18 = *(arg1 + 8)
UI2ParserState& nptr_2 = arg1
int32_t* entry_nptr
int32_t* nptr_1 = entry_nptr
uint32_t x9 = zx.d(*nptr_18)
int32_t* nptr

if (x9 == 0x5f || (x9 & 0xffffffdf) - 0x41 u<= 0x19)
    int64_t nptr_20 = 0
    
    while (true)
        uint32_t x8_3 = zx.d(nptr_18[nptr_20 + 1])
        nptr_20 += 1
        
        if (x8_3 - 0x30 u>= 0xa && x8_3 != 0x5f)
            if ((x8_3 & 0xffffffdf) - 0x41 u>= 0x1a)
                break
    
    void* x8_5 = *nptr_2
    int64_t x9_3 = sx.q(*(x8_5 + 0x428))
    int64_t* nptr_5
    int32_t* nptr_3 = &nptr_5
    *(x8_5 + 0x428) = x9_3.d + 1
    int32_t* nptr_22 = x8_5 + x9_3 * 0x38 + 0xa8
    *nptr_22 = 0xa
    *(nptr_22 + 8) = nptr_18
    *(nptr_22 + 0x10) = nptr_20
    XString* nptr_12
    UI2ParserState* nptr_24
    int128_t v0_1
    nptr, nptr_12, nptr_24, v0_1 = XString::XString()
    int32_t nptr_14 = 3
    int64_t nptr_13 = &nptr_18[nptr_20]
    uint8_t* const x9_4 = &jump_table_869334
    char* nptr_4 = nptr_22
    *(nptr_2 + 8) = nptr_13
    char* nptr_15 = zx.q(zx.d(*nptr_13) - 9)
    bool cond:1_1 = nptr_15.d u> 0x17
    bool cond:2_1 = nptr_15.d == 0x17
    bool cond:3_1 = nptr_15.d u<= 0x17
    bool cond:4_1 = nptr_15.d == 0x17
    bool cond:5_1 = nptr_15.d u>= 0x17
    bool cond:6_1 = nptr_15.d u<= 0x17
    bool cond:7_1 = nptr_15.d == 0x17
    bool cond:8_1 = nptr_15.d u> 0x17
    bool cond:9_1 = nptr_15.d u<= 0x17
    bool cond:10_1 = nptr_15.d u< 0x17
    bool cond:11_1 = nptr_15.d u< 0x17
    bool cond:12_1 = nptr_15.d u< 0x17
    
    if (nptr_15.d u<= 0x17)
    label_104e230:
        uint64_t x11_1 = &data_104e218
    label_104e234:
        uint64_t x12_2 = zx.q(*(&jump_table_869334 + nptr_15))
    label_104e238:
        x11_1 += x12_2 << 2
        
        while (true)
            int32_t* nptr_7
            
            switch (x11_1)
                case &data_104e218
                    nptr_13 += 1
                label_104e21c:
                    *(nptr_2 + 8) = nptr_13
                label_104e220:
                    nptr_15 = zx.q(*nptr_13)
                label_104e224:
                    nptr_15 = zx.q(nptr_15.d - 9)
                label_104e228:
                    cond:1_1 = nptr_15.d u> 0x17
                    cond:2_1 = nptr_15.d == 0x17
                    cond:3_1 = nptr_15.d u<= 0x17
                    cond:4_1 = nptr_15.d == 0x17
                    cond:5_1 = nptr_15.d u>= 0x17
                    cond:6_1 = nptr_15.d u<= 0x17
                    cond:7_1 = nptr_15.d == 0x17
                    cond:8_1 = nptr_15.d u> 0x17
                    cond:9_1 = nptr_15.d u<= 0x17
                    cond:10_1 = nptr_15.d u< 0x17
                    cond:11_1 = nptr_15.d u< 0x17
                    cond:12_1 = nptr_15.d u< 0x17
                label_104e22c:
                    
                    if (cond:1_1)
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
                    nptr_15 = nptr_13
                label_104e244:
                    nptr_15 = &nptr_15[1]
                    x11_1 = zx.q(*nptr_15)
                label_104e248:
                    x12_2 = zx.q(*(nptr_2 + 0x18))
                label_104e24c:
                    cond:2_1 = x11_1.d == 0xd
                label_104e264:
                    
                    if (not(cond:2_1))
                        goto label_104e268
                    
                    nptr_13 = nptr_15
                label_104e268:
                    x11_1 = zx.q(x12_2.d + 1)
                label_104e26c:
                    nptr_13 += 1
                label_104e270:
                    *(nptr_2 + 8) = nptr_13
                    *(nptr_2 + 0x10) = nptr_13
                label_104e274:
                    *(nptr_2 + 0x18) = x11_1.d
                label_104e278:
                    nptr_15 = zx.q(*nptr_13)
                label_104e27c:
                    nptr_15 = zx.q(nptr_15.d - 9)
                label_104e280:
                    cond:1_1 = nptr_15.d u> 0x17
                    cond:2_1 = nptr_15.d == 0x17
                    cond:3_1 = nptr_15.d u<= 0x17
                    cond:4_1 = nptr_15.d == 0x17
                    cond:5_1 = nptr_15.d u>= 0x17
                    cond:6_1 = nptr_15.d u<= 0x17
                    cond:7_1 = nptr_15.d == 0x17
                    cond:8_1 = nptr_15.d u> 0x17
                    cond:9_1 = nptr_15.d u<= 0x17
                    cond:10_1 = nptr_15.d u< 0x17
                    cond:11_1 = nptr_15.d u< 0x17
                    cond:12_1 = nptr_15.d u< 0x17
                label_104e284:
                    
                    if (cond:3_1)
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
                    nptr_15 = nptr_13
                label_104e258:
                    nptr_15 = &nptr_15[1]
                    x11_1 = zx.q(*nptr_15)
                label_104e25c:
                    x12_2 = zx.q(*(nptr_2 + 0x18))
                label_104e260:
                    cond:2_1 = x11_1.d == 0xa
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
                    return parse_one_or_more_pred(nptr, nptr_12) __tailcall
                case 0x104e2d4
                    nptr_6 = nptr_24
                label_104e2d8:
                    nptr_8 = nptr_22
                    nptr_9 = nptr_20
                label_104e2dc:
                    nptr_25 = nptr_18
                    var_18 = &nptr_5
                label_104e2e0:
                    nptr_10 = nptr_2
                    nptr_11 = nptr_1
                label_104e2e4:
                    x9_4 = *(nptr + 8)
                label_104e2e8:
                    nptr_1 = nptr_13
                label_104e2ec:
                    
                    if (x9_4 == 0)
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
                    nptr_13 = 0x100000000
                label_104e2f4:
                    nptr_3 = nptr_12
                label_104e2f8:
                    nptr_2 = nptr
                label_104e2fc:
                    nptr_18 = x9_4 - 1
                label_104e300:
                    nptr_20 = nptr_13 - (x9_4 << 0x20)
                    nptr_22 = -0xffffffff00000000
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
                    nptr_22 = -0xffffffff00000000
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
                        nptr_18 = &nptr_18[1]
                        nptr = zx.q(*nptr_18)
                    label_104e30c:
                        nptr, v0_1 = nptr_3(nptr)
                    label_104e310:
                        nptr_20 += nptr_22
                    
                    goto label_104e318
                case 0x104e318
                label_104e318:
                    nptr_12 = *(nptr_2 + 8)
                label_104e31c:
                    cond:4_1 = nptr_12 == nptr_18
                label_104e320:
                    
                    if (cond:4_1)
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
                    XString::XString(nptr, nptr_12)
                label_104e338:
                    nptr_13 = &nptr_14
                label_104e33c:
                    nptr_3 = nptr_13 + 0x10
                label_104e344:
                    XString::XString()
                label_104e348:
                    nptr_13 = 4
                label_104e34c:
                    nptr_14 = nptr_13.d
                label_104e354:
                    nptr = nptr_3
                label_104e358:
                    XString::operator=(nptr)
                label_104e35c:
                    *(nptr_2 + 8) = nptr_18
                label_104e360:
                    v0_1 = nptr_14.o
                label_104e364:
                    nptr = &nptr_1[4]
                label_104e368:
                    *nptr_1 = v0_1
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
                    nptr_13 = &data_24b6000
                label_104e3a0:
                    nptr_13 += 0x268
                label_104e3a4:
                    v0_1 = *nptr_13
                label_104e3a8:
                    *nptr_1 = v0_1
                    return XString::XString(&nptr_1[4]) __tailcall
                case 0x104e3a0
                    goto label_104e3a0
                case 0x104e3a4
                    goto label_104e3a4
                case 0x104e3a8
                    goto label_104e3a8
                case 0x104e3ac
                    *nptr_1 = v0_1
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
                    nptr_7 = &nptr_5
                label_104e3fc:
                    nptr_8 = nptr_2
                    nptr_9 = nptr_1
                label_104e400:
                    nptr_12 = &data_104e000
                label_104e404:
                    nptr_1 = nptr_13
                label_104e408:
                    nptr_12 += 0x550
                label_104e410:
                    nptr_2 = nptr
                label_104e418:
                    parse_one_or_more_pred(nptr, nptr_12)
                label_104e41c:
                    nptr_13 = zx.q(nptr_14)
                label_104e420:
                    nptr_13 = zx.q(nptr_13.d - 2)
                label_104e424:
                    cond:5_1 = nptr_13.d u>= 3
                label_104e428:
                    
                    if (cond:5_1)
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
                    nptr_13 = *(nptr_2 + 8)
                label_104e430:
                    x9_4 = "HHHH0"
                label_104e434:
                    x9_4 = &x9_4[0x34c]
                label_104e438:
                    nptr_15 = zx.q(*nptr_13)
                label_104e43c:
                    nptr_15 = zx.q(nptr_15.d - 9)
                label_104e440:
                    cond:6_1 = nptr_15.d u<= 0x17
                label_104e444:
                    
                    if (cond:6_1)
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
                    nptr_15 = nptr_13
                label_104e498:
                    nptr_15 = &nptr_15[1]
                    x11_1 = zx.q(*nptr_15)
                label_104e49c:
                    x12_2 = zx.q(*(nptr_2 + 0x18))
                label_104e4a0:
                    cond:7_1 = x11_1.d == 0xa
                label_104e4a4:
                    
                    if (not(cond:7_1))
                        goto label_104e4a8
                    
                    nptr_13 = nptr_15
                label_104e4a8:
                    x11_1 = zx.q(x12_2.d + 1)
                label_104e4ac:
                    nptr_13 += 1
                label_104e4b0:
                    *(nptr_2 + 8) = nptr_13
                    *(nptr_2 + 0x10) = nptr_13
                label_104e4b4:
                    *(nptr_2 + 0x18) = x11_1.d
                label_104e4b8:
                    nptr_15 = zx.q(*nptr_13)
                label_104e4bc:
                    nptr_15 = zx.q(nptr_15.d - 9)
                label_104e4c0:
                    cond:8_1 = nptr_15.d u> 0x17
                label_104e4c4:
                    
                    if (cond:8_1)
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
                    x11_1 = &data_104e448
                label_104e4cc:
                    jump(x11_1 + (zx.q(*(x9_4 + nptr_15)) << 2))
                case 0x104e4cc
                    goto label_104e4cc
                case 0x104e4d0
                    jump(x11_1 + (x12_2 << 2))
                case 0x104e4d4
                    jump(x11_1)
                case 0x104e4d8
                    nptr_13 += 1
                label_104e4dc:
                    *(nptr_2 + 8) = nptr_13
                label_104e4e0:
                    nptr_15 = zx.q(*nptr_13)
                label_104e4e4:
                    nptr_15 = zx.q(nptr_15.d - 9)
                label_104e4e8:
                    cond:9_1 = nptr_15.d u<= 0x17
                label_104e4ec:
                    
                    if (cond:9_1)
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
                    nptr_13 = sx.q(*(nptr_2 + 0x428))
                label_104e460:
                    x9_4 = 0x38
                label_104e464:
                    nptr_15 = 2
                label_104e468:
                    x11_1 = zx.q(nptr_13.d + 1)
                label_104e46c:
                    nptr_3 = nptr_2 + nptr_13 * x9_4
                label_104e470:
                    *(nptr_2 + 0x428) = x11_1.d
                label_104e474:
                    nptr_3 = &nptr_3[0x2a]
                    *nptr_3 = nptr_15.d
                label_104e478:
                    nptr_3[2] = nptr.d
                label_104e480:
                    XString::XString()
                label_104e484:
                    nptr_13 = 3
                label_104e488:
                    *nptr_1 = nptr_13.d
                label_104e48c:
                    *(nptr_1 + 8) = nptr_3
                    return XString::~XString()
                case 0x104e4f4
                    nptr_15 = nptr_13
                label_104e4f8:
                    nptr_15 = &nptr_15[1]
                    x11_1 = zx.q(*nptr_15)
                label_104e4fc:
                    x12_2 = zx.q(*(nptr_2 + 0x18))
                label_104e500:
                    cond:7_1 = x11_1.d == 0xd
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
                    v0_1 = nptr_14.o
                label_104e50c:
                    nptr = &nptr_1[4]
                label_104e514:
                    *nptr_1 = v0_1
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
                    nptr_13 = zx.q(nptr_13.d) & 0xff
                label_104e558:
                    cond:10_1 = nptr_13.d u< 6
                label_104e55c:
                    
                    if (cond:10_1)
                        return 1
                    
                    goto label_104e560
                case 0x104e558
                    goto label_104e558
                case 0x104e55c
                    goto label_104e55c
                case 0x104e560
                label_104e560:
                    nptr_13 = zx.q(nptr.d) & 0xff
                label_104e564:
                    nptr_13 = zx.q(nptr_13.d - 0x30)
                label_104e568:
                    cond:11_1 = nptr_13.d u< 0xa
                label_104e56c:
                    
                    if (cond:11_1)
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
                    nptr_13 = zx.q(nptr.d - 0x41)
                label_104e574:
                    return zx.q((zx.q(nptr_13.d) & 0xff).d u< 6 ? 1 : 0)
                case 0x104e574
                    goto label_104e574
                case 0x104e578
                    return zx.q(nptr_13.d u< 6 ? 1 : 0)
                case 0x104e57c
                    return zx.q(cond:12_1 ? 1 : 0)
                case 0x104e580
                    return nptr
                case 0x104e584
                    return 1
                case 0x104e588
                    return nptr
                case UI2ParseResultMakeInt
                    return UI2ParseResultMakeInt(nptr, nptr_12) __tailcall
                case 0x104e590
                    nptr_4 = nptr_2
                    nptr_5 = nptr_1
                label_104e594:
                    nptr_1 = nptr
                label_104e59c:
                    nptr_2 = nptr_13
                label_104e5a0:
                    nptr = XString::operator char const*()
                label_104e5a4:
                    nptr = atoi(nptr)
                label_104e5a8:
                    nptr_13 = sx.q(nptr_1[0x10a])
                label_104e5ac:
                    x9_4 = 0x38
                label_104e5b0:
                    nptr_15 = 2
                label_104e5b4:
                    x11_1 = zx.q(nptr_13.d + 1)
                label_104e5b8:
                    nptr_3 = nptr_1 + nptr_13 * x9_4
                label_104e5bc:
                    nptr_1[0x10a] = x11_1.d
                label_104e5c0:
                    nptr_3 = &nptr_3[0x2a]
                    *nptr_3 = nptr_15.d
                label_104e5c4:
                    nptr_3[2] = nptr.d
                label_104e5cc:
                    nptr = XString::XString()
                label_104e5d0:
                    nptr_13 = 3
                label_104e5d4:
                    *nptr_2 = nptr_13.d
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
                    return UI2ParseResultMakeFloat(nptr, nptr_12) __tailcall
                case 0x104e5ec
                    nptr_4 = nptr_18
                    nptr_5 = &nptr_5
                label_104e5f0:
                    nptr_6 = nptr_2
                    nptr_7 = nptr_1
                label_104e5f4:
                    nptr_1 = nptr
                label_104e5fc:
                    nptr_2 = nptr_13
                label_104e600:
                    nptr = XString::operator char const*()
                label_104e604:
                    v0_1 = atof(nptr)
                label_104e608:
                    nptr_13 = sx.q(nptr_1[0x10a])
                label_104e60c:
                    x9_4 = 0x38
                label_104e610:
                    nptr_3 = 3
                label_104e614:
                    v0_1.d = fconvert.s(v0_1.q)
                    nptr_1[0x10a] = nptr_13.d + 1
                    *(nptr_1 + nptr_13 * x9_4 + 0xa8) = nptr_3.d
                    *(nptr_1 + nptr_13 * x9_4 + 0xb0) = v0_1.d
                    int64_t x0_13 = XString::XString()
                    *nptr_2 = nptr_3.d
                    *(nptr_2 + 8) = nptr_1 + nptr_13 * x9_4 + 0xa8
                    return x0_13
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
        v0_1 = nptr_14.o
    label_104e28c:
        nptr = &nptr_1[4]
    label_104e290:
        *nptr_1 = v0_1
    label_104e298:
        XString::XString(nptr)
    
    nptr = XString::~XString()
else
    nptr = XString::XString()
    *nptr_1 = 1

return nptr
