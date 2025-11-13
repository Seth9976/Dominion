// 函数: _Z13CardLookupAddPKc11DomCardEnumPK10DomCardDef
// 地址: 0x9e6c0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x0 = strlen(arg1)
int64_t x23 = sx.q(x0)
int32_t x0_2 = memcrc32(arg1, x23, 0)
uint64_t x25 = zx.q(*(gCardLookup + 8)) & zx.q(x0_2)
int64_t* x26 = *(*gCardLookup + (zx.q(x25.d) << 3))
char** result

if (x26 != 0)
    while (true)
        if (x26[1].d == x0)
            result = strncmp(arg1, *x26, x23)
            
            if (result.d == 0)
                break
        
        x26 = x26[3]
        
        if (x26 == 0)
            goto label_9e6c6c
    
    x26[2].d = x20
    
    if (arg3 != 0)
        goto label_9e6cd8
else
label_9e6c6c:
    result = XPooledMalloc(0x20)
    *result = arg1
    result[1].d = x0
    result[2].d = x20
    int64_t x8_1 = *gCardLookup
    uint64_t x9_1 = x25 << 3
    result[3] = *(x8_1 + x9_1)
    *(x8_1 + x9_1) = result
    *(gCardLookup + 0xc) += 1
    
    if (arg3 != 0)
    label_9e6cd8:
        SupportedTranslations* var_48
        result = LocalizationGetSupportedTranslations(&var_48)
        
        if (result.d s>= 1)
            int64_t x22_1 = 0
            uint64_t x23_1 = zx.q(result.d)
            
            do
                DomDefName(arg3, zx.q(*(var_48 + (x22_1 << 4))), nullptr, false)
                void var_58
                ToLower(&var_58)
                int32_t x0_9 = XHashKey(&var_58)
                void* x21_2 =
                    *(*(gCardLookup + 0x10) + ((zx.q(*(gCardLookup + 0x18)) & zx.q(x0_9)) << 3))
                
                if (x21_2 == 0)
                label_9e6da4:
                    int32_t x0_13 = XHashKey(&var_58)
                    uint64_t x25_1 = zx.q(*(gCardLookup + 0x18)) & zx.q(x0_13)
                    void* x21_3 = *(*(gCardLookup + 0x10) + (zx.q(x25_1.d) << 3))
                    
                    if (x21_3 == 0)
                    label_9e6cf4:
                        XString* x0_5 = XPooledMalloc(0x18)
                        XString::XString(x0_5)
                        *(x0_5 + 8) = x20
                        uint64_t x9_2 = x25_1 << 3
                        *(x0_5 + 0x10) = *(*(gCardLookup + 0x10) + x9_2)
                        *(*(gCardLookup + 0x10) + x9_2) = x0_5
                        *(gCardLookup + 0x1c) += 1
                    else
                        while (true)
                            if ((XString::operator==(&var_58) & 1) != 0)
                                *(x21_3 + 8) = x20
                                break
                            
                            x21_3 = *(x21_3 + 0x10)
                            
                            if (x21_3 == 0)
                                goto label_9e6cf4
                else
                    while ((XString::operator!=(&var_58) & 1) != 0)
                        x21_2 = *(x21_2 + 0x10)
                        
                        if (x21_2 == 0)
                            goto label_9e6da4
                
                result = XString::~XString()
                x22_1 += 1
            while (x22_1 != x23_1)

return result
