// 函数: _Z13FromExtrasStrP20CampaignMissionExtraiP11DomCardEnumRK7XString
// 地址: 0x9e945c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
memset(arg1, 0, muls.dp.d(arg2, 0x14))
size_t result = XString::IsEmpty()

if ((result.d & 1) == 0)
    char* x0_2 = XString::operator char const*()
    result = strlen(x0_2)
    
    if (x0_2 != 0)
        int64_t x22_1 = sx.q(result.d)
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1 = STokenize::STokenizeIter::ParseStr(x0_2)
        int128_t var_90
        v1_1 = var_90
        int128_t var_80
        int128_t var_b0 = var_80
        int64_t x1_1 = v1_1:8.q
        size_t result_3 = var_b0.q
        int64_t x26_1 = var_b0:8.q
        result = v1_1.q
        int64_t x8_1
        
        x8_1 = result_3 == 0 ? x1_1 : x26_1
        
        size_t result_1
        
        result_1 = result_3 == 0 ? result : result_3
        
        char* x9_1 = result_1 + x8_1
        void* x8_2 = &x0_2[x22_1]
        int32_t x10_1 = x8_2.d - x9_1.d
        char* x21_2
        void* x24_1
        
        if (x10_1 s< 1)
        label_9e9540:
            x24_1 = nullptr
            x21_2 = nullptr
            int64_t var_a0_1 = 0
            int64_t var_98_1 = 0
            
            if (result != 0)
            label_9e9564:
                int32_t x22_2 = 0
                
                while (true)
                    result = LookupCampaignPiece(result, x1_1.d)
                    
                    if (result.d != 0)
                        void* x8_3 = arg1 + muls.dp.d(x22_2, 0x14)
                        *x8_3 = result.d
                        *(x8_3 + 4) = -0x100000000
                        
                        if (x26_1 != 0)
                            if (result.d == 0x17d8)
                                *x8_3 = 0x17d8
                                result = FromCardString(&var_b0, arg3, 0x6a, 1)
                            else if (result.d != 0x17e3)
                                size_t x26_2 = sx.q(x26_1.d)
                                void* x0_6
                                int32_t x2_3
                                x0_6, x2_3 = memchr(result_3, 0x2c, x26_2)
                                size_t x8_4 = x0_6 - result_3
                                size_t x9_2
                                
                                x9_2 = x0_6 == 0 ? x26_2 : x8_4
                                
                                char* var_d0
                                char* x12_5
                                
                                if (x0_6 == 0)
                                    x12_5 = var_d0
                                else
                                    x12_5 = x0_6 + 1
                                
                                int64_t x8_6
                                
                                if (x0_6 == 0)
                                    x8_6 = 0
                                else
                                    x8_6 = x26_2 + not.q(x8_4)
                                
                                int32_t x1_3
                                int64_t x26_3
                                
                                if (x9_2 == 0)
                                    x1_3 = 0
                                    var_d0 = x12_5
                                    
                                    if (x8_6 != 0)
                                    label_9e9658:
                                        
                                        if (zx.d(x12_5[x8_6 - 1]) == 0x29)
                                            x26_3 = x8_6 - 1
                                        else
                                            x26_3 = x8_6
                                    else
                                        x26_3 = 0
                                else
                                    if (zx.d(*(result_3 + x9_2 - 1)) == 0x29)
                                        x1_3 = (x9_2 - 1).d
                                    else
                                        x1_3 = x9_2.d
                                    
                                    var_d0 = x12_5
                                    
                                    if (x8_6 != 0)
                                        goto label_9e9658
                                    
                                    x26_3 = 0
                                
                                result = LookupCardByName(result_3, x1_3, x2_3, 3)
                                *(x8_3 + 4) = result.d
                                
                                if (x26_3 != 0)
                                    XString::XString(&var_90, var_d0)
                                    char* x0_9
                                    int32_t x2_5
                                    x0_9, x2_5 = XString::operator char const*()
                                    
                                    if (zx.d(*x0_9) - 0x30 u<= 9)
                                        *(x8_3 + 8) = atoi(XString::operator char const*())
                                    else
                                        *(arg1 + sx.q(x22_2) * 0x14 + 0x10) =
                                            LookupCardByName(var_d0, x26_3.d, x2_5, 3)
                                    
                                    result = XString::~XString()
                            else
                                *x8_3 = 0x17e3
                                result = FromCardString(&var_b0, arg3, 0x55, 0x14)
                        
                        x22_2 += 1
                    
                    if (x21_2 == 0)
                        break
                    
                    int128_t v0_2
                    int128_t v1_2
                    v0_2, v1_2 = STokenize::STokenizeIter::ParseStr(x21_2)
                    v1_2 = var_90
                    var_b0 = var_80
                    x1_1 = v1_2:8.q
                    result_3 = var_b0.q
                    x26_1 = var_b0:8.q
                    result = v1_2.q
                    int64_t x8_10
                    
                    x8_10 = result_3 == 0 ? x1_1 : x26_1
                    
                    size_t result_2
                    
                    result_2 = result_3 == 0 ? result : result_3
                    
                    char* x9_4 = result_2 + x8_10
                    int64_t x8_11 = x21_2 + x24_1
                    int32_t x10_6 = x8_11.d - x9_4.d
                    
                    if (x10_6 s< 1)
                    label_9e957c:
                        x24_1 = nullptr
                        x21_2 = nullptr
                        int64_t var_a0_3 = 0
                        int64_t var_98_3 = 0
                        
                        if (result == 0)
                            break
                    else
                        uint64_t x10_7 = zx.q(x10_6)
                        x21_2 = x9_4
                        
                        while (true)
                            uint64_t x11_2 = zx.q(*x9_4)
                            
                            if (x11_2 u> 0x3f)
                                break
                            
                            if ((1 << x11_2 & 0x400130100002601) == 0)
                                break
                            
                            x21_2 = &x21_2[1]
                            uint64_t temp1_1 = x10_7
                            x10_7 -= 1
                            x9_4 = &x9_4[1]
                            
                            if (temp1_1 == 1)
                                goto label_9e957c
                        
                        x24_1 = x8_11 - x21_2
                        char* var_a0_4 = x21_2
                        void* var_98_4 = x24_1
                        
                        if (result == 0)
                            break
        else
            uint64_t x10_2 = zx.q(x10_1)
            x21_2 = x9_1
            
            while (true)
                uint64_t x12_1 = zx.q(*x9_1)
                
                if (x12_1 u> 0x3f)
                    break
                
                if ((1 << x12_1 & 0x400130100002601) == 0)
                    break
                
                x21_2 = &x21_2[1]
                uint64_t temp0_1 = x10_2
                x10_2 -= 1
                x9_1 = &x9_1[1]
                
                if (temp0_1 == 1)
                    goto label_9e9540
            
            x24_1 = x8_2 - x21_2
            char* var_a0_2 = x21_2
            void* var_98_2 = x24_1
            
            if (result != 0)
                goto label_9e9564

return result
